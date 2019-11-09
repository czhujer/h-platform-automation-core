<?php

namespace Zoner\Cms\Client;

use Zoner\Cms\Exception\ResponseException;

class Response implements \Serializable
{

    protected $_response = null;
    protected $_applicationEncoding = null;
    protected $_cmsServerEncoding = null;

    public function __construct($data, $applicationEncoding, $cmsServerEncoding)
    {

        $this->_applicationEncoding = $applicationEncoding;
        $this->_cmsServerEncoding = $cmsServerEncoding;

        $xml = \preg_replace('/<cms-stream>/', '', $data, 1);


        if (!$this->_response = \simplexml_load_string($xml)) {
            throw new ResponseException('Error while parsing response');
        }
    }

    public function isSuccess()
    {
        $result = \explode(':', $this->getResult());

        if ($result[3] < 50000) {
            return false;
        }

        return true;
    }

    public function isError()
    {
        return $this->isSuccess() ? false : true;
    }

    public function getParam($node)
    {
        return $this->_find('//resp//param//' . $node, 'v');
    }

    public function getParams()
    {
        $output = array();

        $params = $this->_response->xpath('//resp//param');

        if (isset($params[0])) {
            foreach ($params[0] as $key => $value) {
                $output[$key] = $this->_decodeValue(current($value['v']));
            }
        }

        return $output;
    }

    public function getTable($table_name)
    {
        $output = array();

        if (!$table = $this->_response->xpath('//resp//table[@name="' . $table_name . '"]')) {
            return $output;
        }

        foreach ($table[0]->i as $row) {
            if ($table[0]['dim'] == 1) {
                $output[] = $this->_decodeValue(current($row['a']));
            } else {
                foreach (current($row) as $key => $value) {
                    $row_array[$key] = $this->_decodeValue($value);
                }

                $output[] = $row_array;
            }
        }

        return $output;
    }

    public function getBindata($param = null)
    {
        if ($param === null) {
            $bindataElement = $this->_response->xpath('//resp//bindata');
        } else {
            $bindataElement = $this->_find('//resp//bindata', $param);
        }

        if (!$bindataElement || !$bindataElement[0]) {
            return null;
        }
        
        $bindata = $bindataElement[0];
        
        if($bindata['fmt'] && (string) $bindata['fmt'] === 'base64'){
             return \base64_decode((string) $bindata);            
        }
     
        return \pack("H*", (string) $bindata);
    }

    public function getMsg()
    {
        return $this->_find('//resp', 'msg');
    }

    public function getMid()
    {
        return $this->_find('//resp', 'mid');
    }

    public function getResult()
    {
        return $this->_find('//resp//result', 'v');
    }

    /*
      public function __toString() {
      return $this->_response->asXml();
      }
     *  value decoding not implemented
     */

    private function _find($node, $attribute)
    {
        $result = $this->_response->xpath($node);

        if (empty($result)) {
            return false;
        }

        foreach ($result[0]->attributes() as $key => $value) {
            if ($key == $attribute) {
                return $this->_decodeValue(current($value));
            }
        }

        return false;
    }

    private function _decodeValue($value)
    {
        if ($this->_cmsServerEncoding === 'UTF-8') {

            if ($this->_applicationEncoding !== 'UTF-8') {
                $value = \mb_convert_encoding($value, $this->_applicationEncoding, 'UTF-8');
            }
            
            // decoded by parser!
            //return \htmlspecialchars_decode($value);
            return $value;
        }


        // based on old cms client
        // doc
        // http://nemesis/git-shared/cgi-bin/gitweb.cgi?p=svec/windows/cms/Zoner.CMS.Common.git;a=blob;f=CmspParamEncoder.cs;hb=HEAD

        if (!\is_string($value) || $value === '') {
            return $value;
        }

        if ($value[0] === '^') {

            $i = 1;
            $s = '';
            while ($i < \strlen($value)) {

                if ($value[$i] === "\\") {
                    switch ($value[$i + 1]) {
                        case 'q':
                            $s .= '"';
                            $i = $i + 2;
                            break;
                        case 'n':
                            $s .= "\n";
                            $i = $i + 2;
                            break;
                        default:
                            if (\ctype_xdigit($value[$i + 1] . $value[$i + 2])) {

                                $s .= \chr(\hexdec($value[$i + 1] . $value[$i + 2]));

                                $i = $i + 3;
                            } else {
                                $s .= "\\";
                                $i++;
                            }
                            break;
                    }
                } else {
                    $s .= $value[$i];
                    $i++;
                }
            }

            if ($this->_applicationEncoding !== $this->_cmsServerEncoding) {
                $s = \mb_convert_encoding($s, $this->_applicationEncoding, $this->_cmsServerEncoding);
            }
        } else {
            $s = $value;
        }

        // decoded by parser!
        // \htmlspecialchars_decode($s);
        return $s;
    }

    public function serialize()
    {
        if ($this->_response instanceof \SimpleXMLElement) {
            $this->_response = $this->_response->asXML();
        }

        $data = array(
            '_applicationEncoding' => $this->_applicationEncoding,
            '_cmsServerEncoding' => $this->_cmsServerEncoding,
            '_response' => $this->_response
        );

        return serialize($data);
    }

    public function unserialize($serialized)
    {
        $data = \unserialize($serialized);

        $this->_applicationEncoding = $data['_applicationEncoding'];
        $this->_cmsServerEncoding = $data['_cmsServerEncoding'];
        $this->_response = \simplexml_load_string($data['_response']) ? : null;

        return $this;
    }

}

?>
