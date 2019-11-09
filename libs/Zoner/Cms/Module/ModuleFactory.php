<?php

namespace Zoner\Cms\Module;

use Zoner\Cms\Exception\ModuleException;

class ModuleFactory
{

    static public function factory($module, $useCorporateModules = false)
    {

        $moduleNs = $useCorporateModules ? 'Corporate' : 'Customer';

        $moduleRelativeClass = $moduleNs . '\\' . \ucfirst($module);
        $moduleAbsoluteClass = __NAMESPACE__ . '\\' . $moduleRelativeClass;

        $moduleFile = __DIR__ . '/' . \str_replace('\\', '/', $moduleRelativeClass) . '.php';


        if (!\file_exists($moduleFile)) {
            throw new ModuleException(sprintf('Module \\%s not found',  $moduleAbsoluteClass));
        }

        return new $moduleAbsoluteClass();
    }

}

?>