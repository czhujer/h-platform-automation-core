<?php

namespace Zoner\Cms\Example;

use Zoner\Cms\Client as ZonerCmsClient;

require_once(__DIR__ . '/../autoload.php');


echo "<!DOCTYPE html><html><head><meta charset=\"utf-8\"></head><body><p>";

try {

    $serverParams = array(
        'host' => 'ssl://***SERVER_URL***',
        'port' => '***PORT***',
        'module' => 'cznic'
            //'strict_ssl' => true   // use only for debug - always use strict SSL check in production environment!
    );

    $loginParams = array(
        'id_user' => '***ID_USER***',
        'password' => '***PASSWORD***',
        'remote_addr' => $_SERVER['REMOTE_ADDR']
    );

    $client = new ZonerCmsClient($serverParams, 'UTF-8');

    $loginResponse = $client->login($loginParams);

    if (!$loginResponse->isSuccess()) {
        throw new \Exception('Auth to CZ-NIC module failed');
    }

    $params = array('domain_name' => 'zoner.cz');

    $whoisResponse = $client->domainWhois($params);

    if (!$whoisResponse->isSuccess()) {
        throw new \Exception('Domain whois failed');
    }


    echo 'Domain: ' . $whoisResponse->getParam('domain_name') . "<br/>";
    echo 'Expire: ' . $whoisResponse->getParam('ex_date') . "<br/>";
    echo 'Registrant: ' . $whoisResponse->getParam('registrant') . "<br/>";
    echo 'Nsset: ' . $whoisResponse->getParam('nsset') . "<br/>";
    echo 'Keyset: ' . $whoisResponse->getParam('keyset') . "<br/>";
    echo 'Admins:' . "\n";

    foreach ($whoisResponse->getTable('admin') as $admin) {
        echo $admin . "<br/>";
    }
} catch (\Exception $ex) {
    echo 'Error: ' . $ex->getMessage();
}

echo "</p></body></html>";

