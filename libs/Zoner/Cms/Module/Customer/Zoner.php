<?php

namespace Zoner\Cms\Module\Customer;

use Zoner\Cms\Module\ModuleAbstract;

class Zoner extends ModuleAbstract
{	
	protected $_methods = array(	
			'login'	         => array('code' => '9:0:0:1'),
			'domainInfo'     => array('code' => '9:1:6:1'),
			'domainList'     => array('code' => '9:1:6:2'),
			'domainRegister' => array('code' => '9:1:1:5'),
			'getDnsZone'     => array('code' => '9:1:7:1'),
			'setDnsZone'     => array('code' => '9:1:7:2')
		);

	public function getModuleName()
	{
		return 'zoner';
	}	
}

?>
