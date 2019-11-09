<?php

namespace Zoner\Cms;

use Zoner\Cms\Client\Request;
use Zoner\Cms\Client\Response;
use Zoner\Cms\Client\Socket;
use Zoner\Cms\Module\ModuleFactory;
use Zoner\Cms\Exception\ClientException;

// backwards compatibility
require_once(__DIR__ . '/autoload.php');

class Client
{

    protected $_socketClient = null;
    protected $_lastRequest = null;
    protected $_lastResponse = null;
    protected $_module = null;
    protected $_cmsServerEncoding = 'ISO-8859-2';
    protected $_applicationEncoding = null;

    public function __construct(array $config = array(), $applicationEncoding = 'ISO-8859-2')
    {
        if (!isset($config['host'])) {
            throw new ClientException('No host defined');
        }

        if (!isset($config['port'])) {
            throw new ClientException('No port defined');
        }

        if (!isset($config['module'])) {
            throw new ClientException('No module defined');
        }

        if (!isset($config['strict_ssl'])) {
            $config['strict_ssl'] = true;
        }

        if (!isset($config['timeout'])) {            
            $config['timeout'] = null; // use Socket object default
        }

        if ($config['port'] == 6535) {
            $this->_cmsServerEncoding = 'UTF-8';
        }

        $this->_applicationEncoding = $applicationEncoding;

        $this->_socketClient = new Socket($config['host'], $config['port'], (bool) $config['strict_ssl'], $config['timeout']);

        $this->_socketClient->connect();


        $useCorporateModules = isset($config['corporate_module']) && $config['corporate_module'] === true;

        $this->_module = ModuleFactory::factory($config['module'], $useCorporateModules);
    }

    public function getSocketClient()
    {
        return $this->_socketClient;
    }

    public function getLastRequest()
    {
        return $this->_lastRequest;
    }

    public function getLastResponse()
    {
        return $this->_lastResponse;
    }

    public function readNextResponse()
    {
        return $this->readResponse($this->getLastRequest());
    }
    
    public function readAnotherResponse()
    {
        return $this->readResponse();
    }

    public function getModule()
    {
        return $this->_module;
    }
    
    public function getErrorInfo($errorCode){
        return $this->_module->getErrorInfo($errorCode);
    }

    public function doRequest(Request $request)
    {
        $this->_lastRequest = $request;

        $this->_socketClient->write($request->doRequest());
        
        return $this->readResponse($request);
    }

    public function __call($method, $params = array())
    {
        $msg = $this->_module->getMethodCode($method);

        $request = new Request($msg, $this->_applicationEncoding, $this->_cmsServerEncoding);

        if (isset($params[0])) {
            $request->setParams($params[0]);
        }

        if (isset($params[1])) {
            $request->setBindata($params[1], $this->_module->getModuleName());
        }

        return $this->doRequest($request);
    }

    private function readResponse(Request $request = null)
    {
        $socketResponse = $this->_socketClient->read();

        $response = new Response($socketResponse, $this->_applicationEncoding, $this->_cmsServerEncoding);
        
        
        if($request){
            if ($request->getMid() != $response->getMid()) {
                throw new ClientException('MID mismatch');
            }
        }

        $this->_lastResponse = $response;

        return $response;
    }

}

?>
