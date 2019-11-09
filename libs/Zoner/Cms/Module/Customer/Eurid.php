<?php

namespace Zoner\Cms\Module\Customer;

use Zoner\Cms\Module\ModuleAbstract;

class Eurid extends ModuleAbstract
{	
	protected $_methods = array(	
			'login'	     			=> array('code' => '9:0:0:1'),
			'domainCheck' 			=> array('code' => '17:0:1:1'),
			'domainWhois' 			=> array('code' => '17:0:1:2'),	
			'domainCreate' 			=> array('code' => '17:0:1:3'),	
			'domainCreateZonerNs'		=> array('code' => '17:0:1:4'),	
			'domainUpdateByPassword' 	=> array('code' => '17:0:1:6'),	
			'domainTradeTransfer' 		=> array('code' => '17:0:1:7'),
			'domainTradeTransferZonerNs'	=> array('code' => '17:0:1:8'),
			'domainCheckState'		=> array('code' => '17:0:1:9'),
			'domainRenew' 			=> array('code' => '17:0:1:10'),	
			'contactCheck' 			=> array('code' => '17:0:0:1'),	
			'contactWhois' 			=> array('code' => '17:0:0:2'),	
			'contactCreate' 		=> array('code' => '17:0:0:3'),
			'contactUpdateByPassword' 	=> array('code' => '17:0:0:5'),
			'contactDeleteByPassword' 	=> array('code' => '17:0:0:7'),
			'contactSendPassword' 		=> array('code' => '17:0:0:8'),
			'contactListDomains' 		=> array('code' => '17:0:0:9'),
			'contactListByEmail' 		=> array('code' => '17:0:0:10')		
		);

	public function getModuleName()
	{
		return 'eurid';
	}	
}

?>
