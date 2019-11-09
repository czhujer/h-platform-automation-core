<?php

namespace Zoner\Cms\Exception;

class ClientException extends \Exception
{

    public function __construct($message, $code = null, $previous = null)
    {

        // solves print problems on servers with locale using international characters in exception strings
        $message = filter_var($message, FILTER_SANITIZE_STRING, FILTER_FLAG_STRIP_HIGH);
        
        parent::__construct($message, $code, $previous);
    }

}
