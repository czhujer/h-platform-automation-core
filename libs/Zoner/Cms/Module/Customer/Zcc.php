<?php

namespace Zoner\Cms\Module\Customer;

use Zoner\Cms\Module\ModuleAbstract;

class Zcc extends ModuleAbstract {

    protected $_methods = array(
        'clientAuthenticate' => array('code' => '19:0:0:1'),
        'userAuthenticate' => array('code' => '19:0:0:2'),
        'getManagedDomains' => array('code' => '19:1:3:1'),
        'zcc_cmsm_create_database_simplified' => array('code' => '19:1:4:9'),
        'createOrder' => array('code' => '19:1:9:1'),
        'processOrderItem' => array('code' => '19:1:9:3'),
    );

    public function getModuleName() {
        return 'zcc';
    }

}

?>
