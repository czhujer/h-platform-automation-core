<?php
class Errors {

#copy $_errors to module file
 protected $_errors = array (
  '17:0:0:30001' => 
  array (
    'code' => '17:0:0:30001',
    'name' => 'unknown_message',
    'message' => 'Byla zaslána neznámá zpráva',
  ),
  '17:0:0:30002' => 
  array (
    'code' => '17:0:0:30002',
    'name' => 'access_denied',
    'message' => 'Nemáte dostatečná oprávnění',
  ),
  '17:0:0:30003' => 
  array (
    'code' => '17:0:0:30003',
    'name' => 'exception_occured',
    'message' => 'Nastala vyjímka',
  ),
  '17:0:0:30004' => 
  array (
    'code' => '17:0:0:30004',
    'name' => 'unknown_error',
    'message' => 'Nastala neznámá chyba',
  ),
  '17:0:0:30005' => 
  array (
    'code' => '17:0:0:30005',
    'name' => 'syntax_error',
    'message' => 'Nastala syntaktická chyba, podrobnosti naleznete ve výstupních parametrech',
  ),
  '17:0:0:30006' => 
  array (
    'code' => '17:0:0:30006',
    'name' => 'runtime_error',
    'message' => 'Nastala runtime chyba, podrobnosti naleznete ve výstupních parametrech',
  ),
  '17:0:0:30007' => 
  array (
    'code' => '17:0:0:30007',
    'name' => 'sql_error',
    'message' => 'Nastala chyba databáze, podrobnosti naleznete ve výstupních parametrech',
  ),
  '17:0:0:30008' => 
  array (
    'code' => '17:0:0:30008',
    'name' => 'eurid_error',
    'message' => 'Nastala chyba EURidu, podrobnosti naleznete ve výstupních parametrech',
  ),
  '17:0:0:30009' => 
  array (
    'code' => '17:0:0:30009',
    'name' => 'eurid_exception_error',
    'message' => 'Nastala vyjímka na EURidu, podrobnosti naleznete ve výstupních parametrech',
  ),
);
}
?>