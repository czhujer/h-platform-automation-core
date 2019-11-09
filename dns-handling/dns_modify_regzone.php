<?php
/**
 * script for handling dns records in https://www.regzone.cz DNS API
 *
 * @author Patrik Majer
 *
 * docs
 * https://www.regzone.cz/domena/api-php-i-navod-na-pouziti
 * https://www.regzone.cz/domena/api-php-iii-metody-a-funkce/#domainList
*/

error_reporting(E_ALL ^ E_NOTICE);

//load variables
$shortopts = "";

$longopts  = array(
	"record-name:",
	"record-ip:",
	"action:",
	"domain-name:",
	"login-name:",
	"login-password:",
	"debug:",
);

//https://www.php.net/manual/en/function.getopt.php
$input_options = getopt($shortopts, $longopts);

$record_name = $input_options['record-name'];
if (empty($record_name)){
    print "Error: missing \"record_name\" parameter\n";
    exit(2);
}
else{
    $record_name = strtolower($record_name);
}

$record_ip = $input_options['record-ip'];
if (empty($record_ip)){
    $record_ip='10.10.10.10';
}

$action = $input_options['action'];
if (empty($action)){
    print "Error: missing \"action\" parameter\n";
    exit(2);
}

$domain_name = $input_options['domain-name'];
if (empty($domain_name)){
    $domain_name='hcloud.cz';
}

$debug = $input_options['debug'];

$login_user = $input_options['login-name'];
$login_password = $input_options['login-password'];

//check variables
$check_record_name_regexp = '/^[a-zA-Z0-9-_]+$/';
if(!preg_match($check_record_name_regexp, $record_name)){
	print 'Error: variable "record_name" has wrong format! (valid: ' . $check_record_name_regexp . ")\n";
    exit(3);
}

if (!filter_var($record_ip, FILTER_VALIDATE_IP, FILTER_FLAG_IPV4)) {
	print "Error: variable \"record_ip\" has wrong format! (valid: ipv4 address)\n";
    exit(3);
}

$check_domain_name_regexp = '/^[a-zA-Z0-9-_]+\.[a-z]{2,3}$/';
if(!preg_match($check_domain_name_regexp, $domain_name)){
	print 'Error: variable "domain_name" has wrong format! (valid: ' . $check_domain_name_regexp . ")\n";
    exit(3);
}

//require_once '../libs/Zoner/Cms/Client.php';
require_once '../libs/Zoner/Cms/Client.php';

use Zoner\Cms\Client as Zoner_Cms_Client;

$connect_params = array(
		'host' => 'ssl://zms-api.zoner.com',
		'port' => '6535',
		'module' => 'zoner',
);

echo "INFO: try connect to Zoner API...\n";
try {

	$client = new Zoner_Cms_Client($connect_params);

        $login_params = array(
	      'id_user' => $login_user,
          'password' => $login_password,
	      'remote_addr' => $_SERVER['REMOTE_ADDR'],
        );

	$response = $client->login($login_params);

	if ( ! $response->isSuccess() ) {
		echo "ERROR: login wasn't successful\n";
		if($debug) {
			print_r($response); 
			echo "\n";
		}
		throw new Exception("login wasn't successful\n");
	}

} catch (Zoner_Cms_Client_Exception $zcce) {
    echo "ERROR: generic error for create zoner client or login procedure\n";
	return;
} catch (Zoner_Cms_Client_Socket_Exception $zccse) {
    echo "ERROR: can't connect to Zoner API\n";
	return;
}

echo "INFO: listing DNS records for domain: " . $domain_name . "...\n";
try {

	$listing_params = array(
	      'domain_name' => $domain_name,
	);
		
	$response = $client->getDnsZone($listing_params);

	if (!$response->isSuccess()) {
		throw new Exception("Listing DNS records failed\n");
	}
	else{		
		$rs_dns_a_records = $response->getTable('dns_a_records');
		if($debug) {
			print_r($response);
			echo "\n";
		}
	}

} catch (Zoner_Cms_Client_Exception $zcce) {
	echo "ERROR: generic error for listing records\n";
	return;
} catch (Zoner_Cms_Client_Socket_Exception $zccse) {
	echo "ERROR: can't comunicate with API\n";
	return;
} catch (Exception $e) {
	echo $e->getMessage();
	return;
}

$check_count=0;
$dns_a_record_found=0;
for ($i = 1; $i <= count($rs_dns_a_records); $i++) {
	$check_count++;
	print "    NAME: ".$rs_dns_a_records[$i]['a'].", VALUE: ".$rs_dns_a_records[$i]['b']."\n";
	if($rs_dns_a_records[$i]['a'] == "$record_name"){
			$dns_a_record_found=1;
	}
}

if($check_count == 0){
	echo "ERROR: table dns_a_records is empty!\n Exiting..\n";
	exit(23);
}

echo "INFO: check for existing record(s)...\n";

if(($dns_a_record_found == 0 and $action == 'delete')){
	echo "ERROR: dns record (" . $record_name . ") was not found!\n Exiting..\n";
	exit(22);
}

if(($dns_a_record_found == 1 and $action == 'insert')){
	echo "ERROR: dns record (" . $record_name . ") was found!\nExiting..\n";
	exit(21);
}

// main action
if($action == 'insert'){
	echo "INFO: insert new record record(s)...\n";

	try {

		$insert_params = array(
			'domain_name' => $domain_name,
			'generate' => true,
			'dns_a_records_add' => array(array(
				'a' => $record_name, //name - name of A record
				'b' => $record_ip, // ip_address - IP address
				'c' => '0', // ttl - TTL in seconds (0=3600 default)
			),
			),
		);
			
		$response = $client->setDnsZone($insert_params);

		if (!$response->isSuccess()) {
			throw new Exception("insert DNS record failed\n");
		}
		else{		
			if($debug) {
				print_r($response);
				echo "\n";
			}
			echo "INFO: insert record was successful\n";
		}

	} catch (Zoner_Cms_Client_Exception $zcce) {
		echo "ERROR: generic error for insert record\n";
		return;
	} catch (Zoner_Cms_Client_Socket_Exception $zccse) {
		echo "ERROR: can't comunicate with API\n";
		return;
	} catch (Exception $e) {
		echo $e->getMessage();
		return;
	}	

}
elseif($action == 'delete'){
	echo "INFO: delete record record(s)...\n";

		try {

		$delete_params = array(
			'domain_name' => $domain_name,
			'generate' => true,
			'dns_a_records_rem' => array(array(
				'a' => $record_name, //name - name of A record
				'b' => $record_ip, // ip_address - IP address
				'c' => '0', // ttl - empty parameter, should be set to "0"
			),
			),
		);

		$response = $client->setDnsZone($delete_params);

		if (!$response->isSuccess()) {
			throw new Exception("delete DNS record failed\n");
		}
		else{		
			if($debug) {
				print_r($response);
				echo "\n";
			}
			echo "INFO: delete record was successful\n";
		}

	} catch (Zoner_Cms_Client_Exception $zcce) {
		echo "ERROR: generic error for delete record\n";
		return;
	} catch (Zoner_Cms_Client_Socket_Exception $zccse) {
		echo "ERROR: can't comunicate with API\n";
		return;
	} catch (Exception $e) {
		echo $e->getMessage();
		return;
	}

}
else{
	echo "ERROR: unknown action!\nExiting..\n";
	exit(30);
}
