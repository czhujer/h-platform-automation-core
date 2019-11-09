<?php

namespace Zoner\Cms\Module\Customer;

use Zoner\Cms\Module\ModuleAbstract;

class Joker extends ModuleAbstract
{	
	protected $_methods = array(	
			'login'	     			=> array('code' => '9:0:0:1'),
			'domainCheck' 			=> array('code' => '14:0:1:1'),
			'domainWhois' 			=> array('code' => '14:0:1:2'),	
			'domainCreate' 			=> array('code' => '14:0:1:4'),	
			'domainRenew' 			=> array('code' => '14:0:1:5'),	
			'domainTransfer' 		=> array('code' => '14:0:1:15'),
			'domainUpdateByPassword' 	=> array('code' => '14:0:1:7'),	
			'domainLockByPassword' 		=> array('code' => '14:0:1:8'),	
			'domainUnlockByPassword' 	=> array('code' => '14:0:1:9'),
			'domainSendAuthIdByPassword' 	=> array('code' => '14:0:1:12'),					
			'contactWhois' 			=> array('code' => '14:0:0:1'),	
			'contactCreate' 		=> array('code' => '14:0:0:2'),
			'contactUpdateByPassword' 	=> array('code' => '14:0:0:4'),
			'contactSendPassword' 		=> array('code' => '14:0:0:5')		
		);

	public function getModuleName()
	{
		return 'joker';
	}	
}

?>
