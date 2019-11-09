<?php

namespace Zoner\Cms\Client;

use Zoner\Cms\Exception\SocketException;

class Socket
{

    protected $_socket = null;
    protected $_server = null;
    protected $_port = null;
    protected $_strict_ssl = true;
    protected $_timeout = 30;

    public function __construct($server, $port, $strict_ssl = true, $timeout = null)
    {
        $this->_server = $server;
        $this->_port = $port;
        $this->_strict_ssl = $strict_ssl;

        if ($timeout) {
            $this->_timeout = $timeout;
        }
    }

    public function connect($timeout = null)
    {
        if ($timeout) {
            $this->_timeout = (int) $timeout;
        }

        if (!\is_resource($this->_socket)) {

            if ($this->_strict_ssl !== true) {
                $options = array(
                    'ssl' => array(
                        'verify_peer' => false,
                        'verify_peer_name' => false,
                        'allow_self_signed' => true
                    )
                );
            } else {
                $options = array(
                    'ssl' => array(
                        'verify_peer' => true,
                        'verify_peer_name' => true,
                        'allow_self_signed' => false
                    )
                );
            }

            $context = \stream_context_create($options);

            // set error handler to throw SocketException on stream_socket_client warnings
            \set_error_handler(array($this, 'throwSocketException'), E_ALL & ~E_NOTICE & ~E_STRICT & ~E_DEPRECATED);

            $this->_socket = \stream_socket_client($this->_server . ":" . $this->_port, $errno, $errstr, $this->_timeout, \STREAM_CLIENT_CONNECT, $context);
            
            \stream_set_read_buffer($this->_socket, 0);

            \restore_error_handler();

            if (!$this->_socket) {

                $socketException = $this->createSocketException($errno, $errstr);

                $this->close();

                throw $socketException;
            }

            if (!\stream_set_timeout($this->_socket, $this->_timeout)) {
                throw new SocketException('Unable to set the connection timeout');
            }

            if ($this->_port == 6535) {
                $request = '<?xml version="1.0" encoding="utf-8"?>' . "\n" . '<cms-stream>' . "\n";

                if (!$tmp = \fwrite($this->_socket, $request)) {
                    throw new SocketException('Error writing starting tags');
                }
            }                      
        }
    }

    public function write($body = '')
    {
        if (!$this->_socket) {
            throw new SocketException('Trying to write but we are not connected');
        }

        if (empty($body)) {
            throw new SocketException('Blank request body!');
        }

        if (!$tmp = \fwrite($this->_socket, $body)) {
            throw new SocketException('Error writing request to server');
        }

        return true;
    }

    public function read()
    {
        if (!$this->_socket) {
            throw new SocketException('Trying to read but we are not connected');
        }

        $response = '';
        $info = \stream_get_meta_data($this->_socket);

        while (!$info['eof'] && \strpos($response, '</resp>') === false) {  
            
            if($info['timed_out']){
                throw new SocketException(sprintf('Socket client timed out while reading response! Timeout value was %s seconds' ,  $this->_timeout));
            }

            $tmp = \fread($this->_socket, 8192);

            if ($tmp === false) {
                throw new SocketException('Error reading from socket!');
            }

            $response .= $tmp;

            $info = \stream_get_meta_data($this->_socket);
        }

        return $response;
    }

    public function close()
    {


        if (\is_resource($this->_socket)) {
            \fclose($this->_socket);
            //\stream_socket_shutdown($this->_socket, \STREAM_SHUT_RDWR);
        }

        $this->_socket = null;
        $this->_server = null;
        $this->_port = null;
    }

    public function __destruct()
    {
        if ($this->_socket) {
            if ($this->_port == 6535) {
                $request = '</cms-stream>' . "\n";
                $tmp = \fwrite($this->_socket, $request);
            }
            $this->close();
        }
    }

    private function createSocketException($errno, $errstr)
    {
        $errorMessage = sprintf('Unable to Connect to %s:%s', $this->_server, $this->_port);

        if ($errno || $errstr) {
            $errorMessage .= sprintf('. Error #%s: %s', $errno, $errstr);
        }

        return new SocketException($errorMessage, $errno);
    }

    private function throwSocketException($errno, $errstr)
    {
        throw $this->createSocketException($errno, $errstr);
    }

}

?>
