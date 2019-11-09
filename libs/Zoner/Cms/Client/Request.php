<?php

namespace Zoner\Cms\Client;

use Zoner\Cms\Exception\RequestException;

class Request
{

    protected $_msg = null;
    protected $_params = array();
    protected $_mid = null;
    protected $_applicationEncoding = null;
    protected $_cmsServerEncoding = null;
    protected $_bindata = null;
    protected $_bindata_source_size = 0;
    protected $_bindata_format = null;

    public function __construct($msg, $applicationEncoding, $cmsServerEncoding)
    {
        $this->_msg = $msg;
        $this->_applicationEncoding = $applicationEncoding;
        $this->_cmsServerEncoding = $cmsServerEncoding;

        $this->_mid = \rand(1000, 9999);
    }

    public function getEncoding()
    {
        //return $this->_encoding;
        return $this->_applicationEncoding;
    }

    public function getMsg()
    {
        return $this->_msg;
    }

    public function getParams()
    {
        return $this->_params;
    }

    public function setParams($params = array())
    {
        foreach ($params as $key => $value) {
            if (\is_array($value)) {

                $new_row = array();

                foreach ($value as $table_row) {
                    if (\is_array($table_row)) {

                        foreach ($table_row as $letter => $row) {
                            $table_row[$letter] = $this->_encodeValue($row);
                        }

                        $new_row[] = $table_row;
                    } else {
                        $new_row[] = $this->_encodeValue($table_row);
                    }
                }

                $this->_params[$key] = $new_row;
            } else {
                $this->_params[$key] = $this->_encodeValue($value);
            }
        }
    }

    public function getMid()
    {
        return $this->_mid;
    }

    public function doRequest()
    {
        $dom = new \DOMDocument('1.0', $this->_cmsServerEncoding);

        $cmsm_node = $dom->createElement('cmsm');
        $cmsm_node->setAttribute('msg', $this->_msg);
        $cmsm_node->setAttribute('mid', $this->_mid);

        $mCmsm = $dom->appendChild($cmsm_node);

        if ($this->_params) {

            $mParam = $mCmsm->appendChild($dom->createElement('param'));

            foreach ($this->_params as $key => $value) {
                if (is_array($value)) {
                    $mTable = $dom->createElement('table');
                    $mTable->setAttribute('name', $key);
                    $mTable->setAttribute('dim', count(current($value)));
                    $mTable->setAttribute('count', count($value));

                    $mTableRow = $mCmsm->appendChild($mTable);

                    foreach ($value as $table_row) {
                        $i = $dom->createElement('i');
                        if (is_array($table_row)) {
                            foreach ($table_row as $letter => $row) {
                                $i->setAttribute($letter, $row);
                            }
                        } else {
                            $i->setAttribute('a', $table_row);
                        }
                        $mTableRow->appendChild($i);
                    }
                } else {
                    $node = $dom->createElement($key);
                    $node->setAttribute('v', $value);
                    $mParam->appendChild($node);
                }
            }
        }

        if ($this->_bindata && $this->_bindata_source_size) {
            $binElement = $dom->createElement('bindata');
            $binElement->setAttribute('fmt', $this->_bindata_format);
            $binElement->setAttribute('size', $this->_bindata_source_size);
            $binElement->appendChild($dom->createTextNode($this->_bindata));

            $cmsm_node->appendChild($binElement);
        }
        
        return $dom->saveXML($cmsm_node);
    }

    private function _encodeValue($rawValue)
    {
        if ($this->_cmsServerEncoding === 'UTF-8') {

            if ($this->_applicationEncoding !== 'UTF-8') {
                $rawValue = \mb_convert_encoding($rawValue, 'UTF-8', $this->_applicationEncoding);
            }
            
            // special chars are encoded by DOMdocument!
            // return \htmlspecialchars($rawValue, ENT_COMPAT, $this->_cmsServerEncoding);
            return $rawValue;
        }

        // based on old cms client
        // doc
        // http://nemesis/git-shared/cgi-bin/gitweb.cgi?p=svec/windows/cms/Zoner.CMS.Common.git;a=blob;f=CmspParamEncoder.cs;hb=HEAD
        // $value = trim($value);

        if (!\is_string($rawValue)) {
            return $rawValue;
        }

        $i = 0;
        $escapedValue = '';

        // encode string to ISO-8859-2 for corect ord() results
        if ($this->_applicationEncoding !== 'ISO-8859-2') {
            $rawValue = \mb_convert_encoding($rawValue, 'ISO-8859-2', $this->_applicationEncoding);
        }
        
        // normalize newlines - old CMS accept only \n
        $rawValue = \preg_replace('/\r\n|\r/m', "\n", $rawValue);

        $lenght = \strlen($rawValue);

        while ($i < $lenght) {

            $character = $rawValue[$i];

            switch ($character) {
                case "\n":
                    $escapedValue .= '\\n';
                    break;
                case '"':
                    $escapedValue .= "\\q";
                    break;
                default:
                    $asciiDec = \ord($character);

                    if ($asciiDec > 127 || $asciiDec < 20) {
                        // maybe & should be escaped according to previous version
                        // but CMS does not - see GIT ... $character === '&'
                        $escapedValue .= '\\' . \dechex($asciiDec);
                    } else {
                        $escapedValue .= $character;
                    }

                    break;
            }
            $i++;
        }

        if ($rawValue !== $escapedValue) {
            $escapedValue = '^' . $escapedValue;
        }
        // special chars are encoded by DOMdocument
        return $escapedValue;
    }

    public function setBindata($data, $module_name)
    {
        switch ($module_name) {
            case 'cimap':
                $this->_bindata_format = 'hex';
                $this->_bindata = \bin2hex($data);
                break;
            default:
                throw new RequestException(sprintf('Binary data parameter for module %s is not implemented', $module_name));
        }

        if (\is_string($data)) {
            $this->_bindata_source_size = \strlen($data);
        } else {
            // TODO: implement other needed data types
            throw new RequestException('setBindata not implemented for used data type');
        }
    }

}

?>