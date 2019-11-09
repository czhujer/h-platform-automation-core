<?php

// based on PSR-4 example autoloader
spl_autoload_register(function ($class) {

    $prefix = 'Zoner\\Cms\\';
    $base_dir = __DIR__ . "/";

    // does the class use the namespace prefix?
    $len = strlen($prefix);
    if (strncmp($prefix, $class, $len) !== 0) {
        // no, move to the next registered autoloader
        return;
    }


    $relative_class = substr($class, $len);
    $file = $base_dir . str_replace('\\', '/', $relative_class) . '.php';

    if (file_exists($file)) {
        //require $file;
    }
    require $file;
});

