<?php

namespace Zoner\Cms\Module\Customer;

use Zoner\Cms\Module\ModuleAbstract;

class Cznic extends ModuleAbstract
{	
	protected $_methods = array(	
			'login' 			=> array('code'	=> '9:0:0:1'),
			'contactCheck'			=> array('code'	=> '8:0:0:1'),
			'contactWhois'			=> array('code'	=> '8:0:0:2'),
			'contactCreate'			=> array('code'	=> '8:0:0:3'),
			'contactTransfer' 		=> array('code'	=> '8:0:0:4'),
			'contactUpdateByPassword' 	=> array('code'	=> '8:0:0:6'),
			'contactDeleteByPassword' 	=> array('code'	=> '8:0:0:8'),
			'contactSendAuthInfo' 		=> array('code'	=> '8:0:0:9'),
			'contactSendPassword' 		=> array('code' => '8:0:0:10'),
			'nssetCheck' 			=> array('code'	=> '8:0:1:1'),
			'nssetWhois'  			=> array('code'	=> '8:0:1:2'),
			'nssetCreate' 			=> array('code'	=> '8:0:1:3'),
			'nssetTransfer' 		=> array('code'	=> '8:0:1:4'),
			'nssetUpdateByPassword' 	=> array('code'	=> '8:0:1:6'),
			'nssetDeleteByPassword' 	=> array('code'	=> '8:0:1:8'),
			'nssetSendAuthInfo' 		=> array('code'	=> '8:0:1:9'),
			'nssetListDomains' 		=> array('code' => '8:0:1:10'),
			'domainCheck'		 	=> array('code'	=> '8:0:2:1'),
			'domainWhois'		 	=> array('code'	=> '8:0:2:2'),
			'domainUpdateByPassword'	=> array('code'	=> '8:0:2:8'),
			'domainSendAuthInfo' 		=> array('code'	=> '8:0:2:10'),
			'domainTransfer' 		=> array('code'	=> '8:0:2:11'),
			'domainCreate'			=> array('code' => '8:0:2:6'),
			'domainRenew'			=> array('code' => '8:0:2:13'),			
			'domainListInvoiced'		=> array('code' => '8:0:2:14'),
			'domainListToBeDeleted'		=> array('code' => '8:0:2:15'),
			'domainRegistrantChange'	=> array('code' => '8:0:2:16'),
			'keysetCheck'		 	=> array('code'	=> '8:0:3:1'),
			'keysetWhois'		 	=> array('code'	=> '8:0:3:2'),
			'keysetCreate'		 	=> array('code'	=> '8:0:3:3'),
			'keysetTransfer' 		=> array('code'	=> '8:0:3:4'),
			'keysetUpdateByPassword'	=> array('code'	=> '8:0:3:6'),
			'keysetDeleteByPassword' 	=> array('code'	=> '8:0:3:8'),
			'keysetSendAuthInfo' 		=> array('code'	=> '8:0:3:9'),
			'keysetListDomains' 		=> array('code' => '8:0:3:10')
		);

	public function getModuleName()
	{
		return 'cznic';
	}	
}

?>
