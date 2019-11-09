<?php

namespace Zoner\Cms\Util;

use Zoner\Cms\Util\MessagesGenerator\ErrorMessagesGenerator;

require_once(__DIR__ . '/../autoload.php');

function generateErrorMessages($consoleArgs) {
    if (!isset($consoleArgs[2])) {
        echo 'Mdesc file name must be present as first argument';
        die;
    }

    if (!isset($consoleArgs[3])) {
        echo 'Mdesc file encoding name must be present as second argument';
        die;
    }


    $generator = new ErrorMessagesGenerator($consoleArgs[2], $consoleArgs[3]);
    return true;
}

/// main 

if (empty($argv[1])) {
    echo "No console action specified";
    die;
}

switch ($argv[1]) {
    case 'generateErrorMessages':
        return generateErrorMessages($argv);
    default:
        echo 'Unknown console action';
        die;
        break;
}


