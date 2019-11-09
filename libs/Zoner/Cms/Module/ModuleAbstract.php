<?php

namespace Zoner\Cms\Module;

use Zoner\Cms\Exception\ModuleException;

abstract class ModuleAbstract implements ModuleInterface {

    public function getMethodCode($method) {
        if (!isset($this->_methods[$method]['code'])) {
            throw new ModuleException(sprintf('Method %s not found in module %s', $method, \get_class($this)));
        }

        return $this->_methods[$method]['code'];
    }

    public function methodExists($method) {
        return isset($this->_methods[$method]);
    }

    public function getErrorInfo($errorCode) {
        if (isset($this->_errors[$errorCode])) {
            return $this->_errors[$errorCode];
        } else {
            return array(
                'code' => $errorCode,
                'name' => 'cms_client_unknown_error',
                'message' => 'Popis chyby nenalezen'
            );
        }
    }

}

?>