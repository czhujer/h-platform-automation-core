<?php
class Errors {

#copy $_errors to module file
 protected $_errors = array (
  '5:0:0:30001' => 
  array (
    'code' => '5:0:0:30001',
    'name' => 'db_error',
    'message' => 'Chyba při přístupu k databázi',
  ),
  '5:0:0:30002' => 
  array (
    'code' => '5:0:0:30002',
    'name' => 'perl_error',
    'message' => 'Chyba při volání embedded perlu',
  ),
  '5:0:0:30003' => 
  array (
    'code' => '5:0:0:30003',
    'name' => 'missing_site_name',
    'message' => 'Chybí jméno site',
  ),
  '5:0:0:30004' => 
  array (
    'code' => '5:0:0:30004',
    'name' => 'site_already_exists',
    'message' => 'Site již existuje',
  ),
  '5:0:0:30005' => 
  array (
    'code' => '5:0:0:30005',
    'name' => 'missing_clid',
    'message' => 'Chybí identifikátor klienta',
  ),
  '5:0:0:30006' => 
  array (
    'code' => '5:0:0:30006',
    'name' => 'invalid_clid',
    'message' => 'Neplatný identifikátor klienta',
  ),
  '5:0:0:30007' => 
  array (
    'code' => '5:0:0:30007',
    'name' => 'missing_mcid',
    'message' => 'Chybí identifikátor fyzického serveru',
  ),
  '5:0:0:30008' => 
  array (
    'code' => '5:0:0:30008',
    'name' => 'invalid_mcid',
    'message' => 'Neplatný identifikátor fyzického serveru',
  ),
  '5:0:0:30009' => 
  array (
    'code' => '5:0:0:30009',
    'name' => 'site_not_found',
    'message' => 'Site nenalezena',
  ),
  '5:0:0:30010' => 
  array (
    'code' => '5:0:0:30010',
    'name' => 'machine_not_found',
    'message' => 'Fyzický server neexistuje',
  ),
  '5:0:0:30011' => 
  array (
    'code' => '5:0:0:30011',
    'name' => 'invalid_quota_limit_order',
    'message' => 'Chybné pořadí velikosti limitů kvóty (soft limit nesmí být větší než hard limit',
  ),
  '5:0:0:30012' => 
  array (
    'code' => '5:0:0:30012',
    'name' => 'missing_has_quota',
    'message' => 'Chybí příznak zda má klient kvótu',
  ),
  '5:0:0:30013' => 
  array (
    'code' => '5:0:0:30013',
    'name' => 'invalid_has_quota',
    'message' => 'Neplatný příznak zda má klient kvótu',
  ),
  '5:0:0:30014' => 
  array (
    'code' => '5:0:0:30014',
    'name' => 'missing_hard_limit',
    'message' => 'Chybí hard limit kvóty',
  ),
  '5:0:0:30015' => 
  array (
    'code' => '5:0:0:30015',
    'name' => 'invalid_hard_limit',
    'message' => 'Neplatný hard limit kvóty',
  ),
  '5:0:0:30016' => 
  array (
    'code' => '5:0:0:30016',
    'name' => 'missing_soft_limit',
    'message' => 'Chybí soft limit kvóty',
  ),
  '5:0:0:30017' => 
  array (
    'code' => '5:0:0:30017',
    'name' => 'invalid_soft_limit',
    'message' => 'Neplatný soft limit kvóty',
  ),
  '5:0:0:30018' => 
  array (
    'code' => '5:0:0:30018',
    'name' => 'request_expired',
    'message' => 'Požadavek na server byl zrušen z důvodu vypršení timeoutu',
  ),
  '5:0:0:30019' => 
  array (
    'code' => '5:0:0:30019',
    'name' => 'request_failed',
    'message' => 'Požadavek na server skončil s chybou',
  ),
  '5:0:0:30020' => 
  array (
    'code' => '5:0:0:30020',
    'name' => 'request_failed_commit_stage',
    'message' => 'Požadavek na server skončil s chybou, commit fáze požadavku na serveru skončila s chybou',
  ),
  '5:0:0:30021' => 
  array (
    'code' => '5:0:0:30021',
    'name' => 'unsupported_request_action',
    'message' => 'Požadavek na server skončil s chybou, serveru nepodporuje danou akci',
  ),
  '5:0:0:30022' => 
  array (
    'code' => '5:0:0:30022',
    'name' => 'etc_passwd_not_found',
    'message' => 'Požadavek na server skončil s chybou, soubor s klientskými účty nenalezen',
  ),
  '5:0:0:30023' => 
  array (
    'code' => '5:0:0:30023',
    'name' => 'vhost_alias_exists_as_vhost',
    'message' => 'Daný alias již existuje jako samostatný vhost',
  ),
  '5:0:0:30024' => 
  array (
    'code' => '5:0:0:30024',
    'name' => 'vhost_alias_exists_as_alias',
    'message' => 'Daný alias již existuje jako alias k některému vhostu',
  ),
  '5:0:0:30025' => 
  array (
    'code' => '5:0:0:30025',
    'name' => 'vhost_alias_not_found',
    'message' => 'Alias nenalezen',
  ),
  '5:0:0:30026' => 
  array (
    'code' => '5:0:0:30026',
    'name' => 'missing_index_template',
    'message' => 'Schází parametr index_template',
  ),
  '5:0:0:30027' => 
  array (
    'code' => '5:0:0:30027',
    'name' => 'invalid_index_template',
    'message' => 'Chybná hodnota parametru index_template',
  ),
  '5:0:0:30028' => 
  array (
    'code' => '5:0:0:30028',
    'name' => 'missing_vsid',
    'message' => 'Schází identifikátor virtuálního serveru',
  ),
  '5:0:0:30029' => 
  array (
    'code' => '5:0:0:30029',
    'name' => 'invalid_vsid',
    'message' => 'Chybný identifikátor virtuálního serveru',
  ),
  '5:0:0:30030' => 
  array (
    'code' => '5:0:0:30030',
    'name' => 'missing_vhost_ip',
    'message' => 'Schází IP adresa vhostu',
  ),
  '5:0:0:30031' => 
  array (
    'code' => '5:0:0:30031',
    'name' => 'invalid_vhost_ip',
    'message' => 'Chybná IP adresa vhostu',
  ),
  '5:0:0:30032' => 
  array (
    'code' => '5:0:0:30032',
    'name' => 'reldir_empty',
    'message' => 'Parametr reldir je prázdný',
  ),
  '5:0:0:30033' => 
  array (
    'code' => '5:0:0:30033',
    'name' => 'reldir_is_absolute',
    'message' => 'Parametr reldir obsahuje absolutní cestu',
  ),
  '5:0:0:30034' => 
  array (
    'code' => '5:0:0:30034',
    'name' => 'missing_domain',
    'message' => 'Schází doména',
  ),
  '5:0:0:30035' => 
  array (
    'code' => '5:0:0:30035',
    'name' => 'invalid_domain',
    'message' => 'Chybný název domény',
  ),
  '5:0:0:30036' => 
  array (
    'code' => '5:0:0:30036',
    'name' => 'missing_reldir',
    'message' => 'Schází parametr reldir',
  ),
  '5:0:0:30037' => 
  array (
    'code' => '5:0:0:30037',
    'name' => 'virtual_server_ip_not_found',
    'message' => 'Nelze zjistit IP adresu virtuálního serveru',
  ),
  '5:0:0:30038' => 
  array (
    'code' => '5:0:0:30038',
    'name' => 'domain_exists_as_vhost',
    'message' => 'Doména již existuje jako samostatný vhost',
  ),
  '5:0:0:30039' => 
  array (
    'code' => '5:0:0:30039',
    'name' => 'domain_exists_as_alias',
    'message' => 'Doména již existuje jako alias k některému vhostu',
  ),
  '5:0:0:30040' => 
  array (
    'code' => '5:0:0:30040',
    'name' => 'vhost_not_found',
    'message' => 'Vhost nenalezen',
  ),
  '5:0:0:30041' => 
  array (
    'code' => '5:0:0:30041',
    'name' => 'missing_vhid',
    'message' => 'Schází identifikátor vhosta',
  ),
  '5:0:0:30042' => 
  array (
    'code' => '5:0:0:30042',
    'name' => 'invalid_vhid',
    'message' => 'Chybný formát identifikátoru vhosta',
  ),
  '5:0:0:30043' => 
  array (
    'code' => '5:0:0:30043',
    'name' => 'missing_alias',
    'message' => 'Schází alias',
  ),
  '5:0:0:30044' => 
  array (
    'code' => '5:0:0:30044',
    'name' => 'invalid_alias',
    'message' => 'Chybný alias',
  ),
  '5:0:0:30045' => 
  array (
    'code' => '5:0:0:30045',
    'name' => 'ftp_username_already_exists',
    'message' => 'FTP účet s tímto uživatelským jménem již existuje',
  ),
  '5:0:0:30046' => 
  array (
    'code' => '5:0:0:30046',
    'name' => 'missing_password',
    'message' => 'Schází heslo',
  ),
  '5:0:0:30047' => 
  array (
    'code' => '5:0:0:30047',
    'name' => 'invalid_password',
    'message' => 'Chybný formát hesla',
  ),
  '5:0:0:30048' => 
  array (
    'code' => '5:0:0:30048',
    'name' => 'missing_user_name',
    'message' => 'Schází uživatelské jméno',
  ),
  '5:0:0:30049' => 
  array (
    'code' => '5:0:0:30049',
    'name' => 'invalid_user_name',
    'message' => 'Chybný formát uživatelského jména',
  ),
  '5:0:0:30050' => 
  array (
    'code' => '5:0:0:30050',
    'name' => 'ftp_account_not_found',
    'message' => 'FTP účet nenalezen',
  ),
  '5:0:0:30051' => 
  array (
    'code' => '5:0:0:30051',
    'name' => 'ftp_account_instance_not_found',
    'message' => 'Instance FTP účtu nenalezena',
  ),
  '5:0:0:30052' => 
  array (
    'code' => '5:0:0:30052',
    'name' => 'missing_admin_email',
    'message' => 'Chybí parametr admin_email',
  ),
  '5:0:0:30053' => 
  array (
    'code' => '5:0:0:30053',
    'name' => 'invalid_admin_email',
    'message' => 'Chybný formát parametru admin_email',
  ),
  '5:0:0:30054' => 
  array (
    'code' => '5:0:0:30054',
    'name' => 'missing_upload_source',
    'message' => 'Chybí parametr upload_source',
  ),
  '5:0:0:30055' => 
  array (
    'code' => '5:0:0:30055',
    'name' => 'invalid_upload_source',
    'message' => 'Chybná hodnota parametru upload_source',
  ),
  '5:0:0:30056' => 
  array (
    'code' => '5:0:0:30056',
    'name' => 'missing_owr_system_dirs',
    'message' => 'Chybí parametr owr_system_dirs',
  ),
  '5:0:0:30057' => 
  array (
    'code' => '5:0:0:30057',
    'name' => 'invalid_owr_system_dirs',
    'message' => 'Chybná hodnota parametru owr_system_dirs',
  ),
  '5:0:0:30058' => 
  array (
    'code' => '5:0:0:30058',
    'name' => 'invalid_upload_source_format',
    'message' => 'Chybná specifikace zdroje přenosu dat',
  ),
  '5:0:0:30059' => 
  array (
    'code' => '5:0:0:30059',
    'name' => 'unsupported_upload_feature',
    'message' => 'Některá vlastnost přenosu dat není podporovaná',
  ),
  '5:0:0:30060' => 
  array (
    'code' => '5:0:0:30060',
    'name' => 'ftp_transfer_failed',
    'message' => 'Došlo k chybě při FTP přenosu',
  ),
  '5:0:0:30061' => 
  array (
    'code' => '5:0:0:30061',
    'name' => 'no_matching_ftp_account',
    'message' => 'Odpovídající FTP účet nenalezen',
  ),
  '5:0:0:30062' => 
  array (
    'code' => '5:0:0:30062',
    'name' => 'multiple_matching_ftp_accounts',
    'message' => 'Nalezen více než jeden odpovídající FTP účet',
  ),
  '5:0:0:30063' => 
  array (
    'code' => '5:0:0:30063',
    'name' => 'ftp_password_change_failed',
    'message' => 'Změna hesla FTP účtu selhala',
  ),
  '5:0:0:30064' => 
  array (
    'code' => '5:0:0:30064',
    'name' => 'htauth_haid_dir_not_found',
    'message' => 'Chráněný htauth adresář s danou hodnotou haid nenalezen',
  ),
  '5:0:0:30065' => 
  array (
    'code' => '5:0:0:30065',
    'name' => 'missing_haid',
    'message' => 'Schází parametr haid',
  ),
  '5:0:0:30066' => 
  array (
    'code' => '5:0:0:30066',
    'name' => 'invalid_haid',
    'message' => 'Chybná hodnota parametru haid',
  ),
  '5:0:0:30067' => 
  array (
    'code' => '5:0:0:30067',
    'name' => 'missing_update_pwd_file',
    'message' => 'Schází parametr update_pwd_file',
  ),
  '5:0:0:30068' => 
  array (
    'code' => '5:0:0:30068',
    'name' => 'invalid_update_pwd_file',
    'message' => 'Chybná hodnota parametru update_pwd_file',
  ),
  '5:0:0:30069' => 
  array (
    'code' => '5:0:0:30069',
    'name' => 'vhost_exists_as_vhost',
    'message' => 'Vhost s daným doménovým jménem již existuje',
  ),
  '5:0:0:30070' => 
  array (
    'code' => '5:0:0:30070',
    'name' => 'vhost_exists_as_alias',
    'message' => 'Dané doménové jméno již existuje jako alias k některému vhostu',
  ),
  '5:0:0:30071' => 
  array (
    'code' => '5:0:0:30071',
    'name' => 'site_name_not_found',
    'message' => 'Site s daným jménem nenalezena',
  ),
  '5:0:0:30072' => 
  array (
    'code' => '5:0:0:30072',
    'name' => 'vs_name_not_found',
    'message' => 'Virtuální server s daným jménem nenalezen',
  ),
  '5:0:0:30073' => 
  array (
    'code' => '5:0:0:30073',
    'name' => 'missing_vs_name',
    'message' => 'Schází parametr vs_name',
  ),
  '5:0:0:30074' => 
  array (
    'code' => '5:0:0:30074',
    'name' => 'invalid_vs_name',
    'message' => 'Chybá hodnota parametru vs_name',
  ),
  '5:0:0:30075' => 
  array (
    'code' => '5:0:0:30075',
    'name' => 'domain_not_found',
    'message' => 'Doménové jméno nenalezeno',
  ),
  '5:0:0:30076' => 
  array (
    'code' => '5:0:0:30076',
    'name' => 'invalid_reldir',
    'message' => 'Chybná hodnota parametru reldir',
  ),
  '5:0:0:30077' => 
  array (
    'code' => '5:0:0:30077',
    'name' => 'vhost_uses_htauth_stats_locking',
    'message' => 'Vhost používá zamykání statistik na bázi htauth',
  ),
  '5:0:0:30078' => 
  array (
    'code' => '5:0:0:30078',
    'name' => 'chdir_is_absolute',
    'message' => 'Parametr chdir obsahuje absolutní cestu',
  ),
  '5:0:0:30079' => 
  array (
    'code' => '5:0:0:30079',
    'name' => 'invalid_chdir',
    'message' => 'Chybná hodnota parametru chdir',
  ),
  '5:0:0:30080' => 
  array (
    'code' => '5:0:0:30080',
    'name' => 'missing_year',
    'message' => 'Chybí parametr year',
  ),
  '5:0:0:30081' => 
  array (
    'code' => '5:0:0:30081',
    'name' => 'invalid_year',
    'message' => 'Chybná hodnota parametru year',
  ),
  '5:0:0:30082' => 
  array (
    'code' => '5:0:0:30082',
    'name' => 'missing_month',
    'message' => 'Chybí parametr month',
  ),
  '5:0:0:30083' => 
  array (
    'code' => '5:0:0:30083',
    'name' => 'invalid_month',
    'message' => 'Chybná hodnota parametru month',
  ),
  '5:0:0:30084' => 
  array (
    'code' => '5:0:0:30084',
    'name' => 'missing_top_sites_count',
    'message' => 'Chybí parametr top_sites_count',
  ),
  '5:0:0:30085' => 
  array (
    'code' => '5:0:0:30085',
    'name' => 'invalid_top_sites_count',
    'message' => 'Chybná hodnota parametru top_sites_count',
  ),
  '5:0:0:30086' => 
  array (
    'code' => '5:0:0:30086',
    'name' => 'missing_emails',
    'message' => 'Chybí parametr emails',
  ),
  '5:0:0:30087' => 
  array (
    'code' => '5:0:0:30087',
    'name' => 'invalid_email_address',
    'message' => 'Chybný formát emailové adresy',
  ),
  '5:0:0:30088' => 
  array (
    'code' => '5:0:0:30088',
    'name' => 'no_email_addresses',
    'message' => 'Nebyla zadána žádná emailová adresa',
  ),
  '5:0:0:30089' => 
  array (
    'code' => '5:0:0:30089',
    'name' => 'invalid_min_mbytes',
    'message' => 'Chybná hodnota parametru min_bytes',
  ),
  '5:0:0:30090' => 
  array (
    'code' => '5:0:0:30090',
    'name' => 'send_email_failed',
    'message' => 'Došlo k chybě při odesílání emailu',
  ),
  '5:0:0:30091' => 
  array (
    'code' => '5:0:0:30091',
    'name' => 'primary_vhost_not_found',
    'message' => 'Primární vhost dané site nenalezen',
  ),
  '5:0:0:30092' => 
  array (
    'code' => '5:0:0:30092',
    'name' => 'missing_language',
    'message' => 'Chybí parametr language',
  ),
  '5:0:0:30093' => 
  array (
    'code' => '5:0:0:30093',
    'name' => 'empty_language',
    'message' => 'Parametr language je prázdný',
  ),
  '5:0:0:30094' => 
  array (
    'code' => '5:0:0:30094',
    'name' => 'invalid_language',
    'message' => 'Chybná hodnota parametru language',
  ),
  '5:0:0:30095' => 
  array (
    'code' => '5:0:0:30095',
    'name' => 'missing_error_code',
    'message' => 'Chybí parametr error_code',
  ),
  '5:0:0:30096' => 
  array (
    'code' => '5:0:0:30096',
    'name' => 'invalid_error_code',
    'message' => 'Chybná hodnota parametru error_code',
  ),
  '5:0:0:30097' => 
  array (
    'code' => '5:0:0:30097',
    'name' => 'missing_error_document',
    'message' => 'Chybí parametr error_document',
  ),
  '5:0:0:30098' => 
  array (
    'code' => '5:0:0:30098',
    'name' => 'empty_error_document',
    'message' => 'Parametr error_document je prázdný',
  ),
  '5:0:0:30099' => 
  array (
    'code' => '5:0:0:30099',
    'name' => 'missing_report_email',
    'message' => 'Chybí parametr report_email',
  ),
  '5:0:0:30100' => 
  array (
    'code' => '5:0:0:30100',
    'name' => 'invalid_report_email',
    'message' => 'Chybná hodnota parametru report_email',
  ),
  '5:0:0:30101' => 
  array (
    'code' => '5:0:0:30101',
    'name' => 'missing_verify_migration',
    'message' => 'Chybí parametr verify_migration',
  ),
  '5:0:0:30102' => 
  array (
    'code' => '5:0:0:30102',
    'name' => 'invalid_verify_migration',
    'message' => 'Chybná hodnota parametru verify_migration',
  ),
  '5:0:0:30103' => 
  array (
    'code' => '5:0:0:30103',
    'name' => 'missing_src_ip',
    'message' => 'Chybí parametr src_ip',
  ),
  '5:0:0:30104' => 
  array (
    'code' => '5:0:0:30104',
    'name' => 'invalid_src_ip',
    'message' => 'Chybná hodnota parametru src_ip',
  ),
  '5:0:0:30105' => 
  array (
    'code' => '5:0:0:30105',
    'name' => 'missing_dst_ip',
    'message' => 'Chybí parametr dst_ip',
  ),
  '5:0:0:30106' => 
  array (
    'code' => '5:0:0:30106',
    'name' => 'invalid_dst_ip',
    'message' => 'Chybná hodnota parametru dst_ip',
  ),
  '5:0:0:30107' => 
  array (
    'code' => '5:0:0:30107',
    'name' => 'unknown_src_ip_address',
    'message' => 'Neznámá zdrojová IP adresa',
  ),
  '5:0:0:30108' => 
  array (
    'code' => '5:0:0:30108',
    'name' => 'unknown_dst_ip_address',
    'message' => 'Neznámá cílová IP adresa',
  ),
  '5:0:0:30109' => 
  array (
    'code' => '5:0:0:30109',
    'name' => 'database_inconsistency',
    'message' => 'Nekonzistence v tabulkách databáze',
  ),
  '5:0:0:30110' => 
  array (
    'code' => '5:0:0:30110',
    'name' => 'vhost_with_own_ip_address_found',
    'message' => 'Mezi migrovanými vhosty je minimálně jeden vhost s vlastní IP adresou',
  ),
  '5:0:0:30111' => 
  array (
    'code' => '5:0:0:30111',
    'name' => 'no_vhosts_on_virtual_server',
    'message' => 'Na daném virtual_serveru neexistují žádné vhosty dané site',
  ),
  '5:0:0:30112' => 
  array (
    'code' => '5:0:0:30112',
    'name' => 'invalid_migration_flags',
    'message' => 'Chybná kombinace příznaků migrace',
  ),
  '5:0:0:30113' => 
  array (
    'code' => '5:0:0:30113',
    'name' => 'missing_f_copy_data',
    'message' => 'Chybí parametr f_copy_data',
  ),
  '5:0:0:30114' => 
  array (
    'code' => '5:0:0:30114',
    'name' => 'invalid_f_copy_data',
    'message' => 'Chybná hodnota parametru f_copy_data',
  ),
  '5:0:0:30115' => 
  array (
    'code' => '5:0:0:30115',
    'name' => 'missing_f_realize',
    'message' => 'Chybí parametr f_realize',
  ),
  '5:0:0:30116' => 
  array (
    'code' => '5:0:0:30116',
    'name' => 'invalid_f_realize',
    'message' => 'Chybná hodnota parametru f_realize',
  ),
  '5:0:0:30117' => 
  array (
    'code' => '5:0:0:30117',
    'name' => 'missing_f_unpack_data',
    'message' => 'Chybí parametr f_unpack_data',
  ),
  '5:0:0:30118' => 
  array (
    'code' => '5:0:0:30118',
    'name' => 'invalid_f_unpack_data',
    'message' => 'Chybná hodnota parametru f_unpack_data',
  ),
  '5:0:0:30119' => 
  array (
    'code' => '5:0:0:30119',
    'name' => 'site_not_being_migrated',
    'message' => 'Neprobíhá migrace dané site',
  ),
  '5:0:0:30120' => 
  array (
    'code' => '5:0:0:30120',
    'name' => 'migration_record_not_found',
    'message' => 'Nebyl nalezen záznam o probíhající migraci site',
  ),
  '5:0:0:30121' => 
  array (
    'code' => '5:0:0:30121',
    'name' => 'nonmatching_source_machines',
    'message' => 'Fyzický server (mcid) neodpovídá očekávanému serveru',
  ),
  '5:0:0:30122' => 
  array (
    'code' => '5:0:0:30122',
    'name' => 'nonmatching_source_vs',
    'message' => 'Zdrojový virtuální server neodpovídá očekávanému virtuálnímu serveru',
  ),
  '5:0:0:30123' => 
  array (
    'code' => '5:0:0:30123',
    'name' => 'nonmatching_dest_vs',
    'message' => 'Cílový virtuální server neodpovídá očekávanému virtuálnímu serveru',
  ),
  '5:0:0:30124' => 
  array (
    'code' => '5:0:0:30124',
    'name' => 'unexpected_migration_status',
    'message' => 'Neočekávaný/nepřípustný stav migrace',
  ),
  '5:0:0:30125' => 
  array (
    'code' => '5:0:0:30125',
    'name' => 'site_archive_not_found',
    'message' => 'Archív se zabalenými daty site nenalezen',
  ),
  '5:0:0:30126' => 
  array (
    'code' => '5:0:0:30126',
    'name' => 'sitehome_already_exists',
    'message' => 'Hlavní adresář site již existuje',
  ),
  '5:0:0:30127' => 
  array (
    'code' => '5:0:0:30127',
    'name' => 'missing_f_must_not_exist',
    'message' => 'Chybí parametr f_must_not_exist',
  ),
  '5:0:0:30128' => 
  array (
    'code' => '5:0:0:30128',
    'name' => 'invalid_f_must_not_exist',
    'message' => 'Chybná hodnota parametru f_must_not_exist',
  ),
  '5:0:0:30129' => 
  array (
    'code' => '5:0:0:30129',
    'name' => 'site_is_being_migrated',
    'message' => 'Probíhá migrace site',
  ),
  '5:0:0:30130' => 
  array (
    'code' => '5:0:0:30130',
    'name' => 'zombie_on_dest_machine',
    'message' => 'Na cílovém serveru jsou evidovány pozůstatky (zombie) téže site',
  ),
  '5:0:0:30131' => 
  array (
    'code' => '5:0:0:30131',
    'name' => 'site_has_references_to_machine',
    'message' => 'Na daný server existují aktivní odkazy (vhosty, FTP účty, ...) z dané site',
  ),
  '5:0:0:30132' => 
  array (
    'code' => '5:0:0:30132',
    'name' => 'no_zombie_migration_record',
    'message' => 'Neexistuje záznam o migraci, která by zanechala zombie na daném serveru',
  ),
  '5:0:0:30133' => 
  array (
    'code' => '5:0:0:30133',
    'name' => 'zombie_not_expired_yet',
    'message' => 'Zombie site je ještě příliš čerstvá',
  ),
  '5:0:0:30134' => 
  array (
    'code' => '5:0:0:30134',
    'name' => 'unsupported_migration',
    'message' => 'Nepodporovaný typ migrace',
  ),
  '5:0:0:30135' => 
  array (
    'code' => '5:0:0:30135',
    'name' => 'missing_spec_quota',
    'message' => 'Chybí parametr spec_quota',
  ),
  '5:0:0:30136' => 
  array (
    'code' => '5:0:0:30136',
    'name' => 'invalid_spec_quota',
    'message' => 'Chybná hodnota parametru spec_quota',
  ),
  '5:0:0:30137' => 
  array (
    'code' => '5:0:0:30137',
    'name' => 'missing_enable',
    'message' => 'Chybí parametr \'enable\'',
  ),
  '5:0:0:30138' => 
  array (
    'code' => '5:0:0:30138',
    'name' => 'invalid_enable',
    'message' => 'Chybná hodnota parametru \'enable\'',
  ),
  '5:0:0:30139' => 
  array (
    'code' => '5:0:0:30139',
    'name' => 'missing_test_only',
    'message' => 'Chybí parametr \'test_only\'',
  ),
  '5:0:0:30140' => 
  array (
    'code' => '5:0:0:30140',
    'name' => 'invalid_test_only',
    'message' => 'Chybná hodnota parametru \'test_only\'',
  ),
  '5:0:0:30141' => 
  array (
    'code' => '5:0:0:30141',
    'name' => 'google_sitemaps_not_enabled',
    'message' => 'Google sitemaps nejsou povoleny',
  ),
  '5:0:0:30142' => 
  array (
    'code' => '5:0:0:30142',
    'name' => 'missing_create_sample',
    'message' => 'Chybí parametr \'create_sample\'',
  ),
  '5:0:0:30143' => 
  array (
    'code' => '5:0:0:30143',
    'name' => 'invalid_create_sample',
    'message' => 'Chybná hodnota parametru \'create_sample\'',
  ),
  '5:0:0:30144' => 
  array (
    'code' => '5:0:0:30144',
    'name' => 'google_sitemap_config_not_found',
    'message' => 'Konfigurační soubor Google sitemaps nenalezen',
  ),
  '5:0:0:30145' => 
  array (
    'code' => '5:0:0:30145',
    'name' => 'google_sitemap_gen_failed',
    'message' => 'Generátor Google sitemapy skončil s chybou',
  ),
  '5:0:0:30146' => 
  array (
    'code' => '5:0:0:30146',
    'name' => 'missing_copy_rotation',
    'message' => 'Chybí parametr \'copy_rotation\'',
  ),
  '5:0:0:30147' => 
  array (
    'code' => '5:0:0:30147',
    'name' => 'invalid_copy_rotation',
    'message' => 'Chybná hodnota parametru \'copy_rotation\'',
  ),
  '5:0:0:30148' => 
  array (
    'code' => '5:0:0:30148',
    'name' => 'missing_ds_ip_must_match',
    'message' => 'Chybí parametr \'ds_ip_must_match\'',
  ),
  '5:0:0:30149' => 
  array (
    'code' => '5:0:0:30149',
    'name' => 'invalid_ds_ip_must_match',
    'message' => 'Chybná hodnota parametru \'ds_ip_must_match\'',
  ),
  '5:0:0:30150' => 
  array (
    'code' => '5:0:0:30150',
    'name' => 'missing_ds_ip',
    'message' => 'Chybí parametr \'ds_ip\'',
  ),
  '5:0:0:30151' => 
  array (
    'code' => '5:0:0:30151',
    'name' => 'invalid_ds_ip',
    'message' => 'Chybná hodnota parametru \'ds_ip\'',
  ),
  '5:0:0:30152' => 
  array (
    'code' => '5:0:0:30152',
    'name' => 'invalid_create_ftp_dir',
    'message' => 'Chybná hodnota parametru \'create_ftp_dir\'',
  ),
  '5:0:0:30153' => 
  array (
    'code' => '5:0:0:30153',
    'name' => 'cannot_create_ftp_dir_inside_system_dirs',
    'message' => 'Cílový adresář FTP účtu nelze vytvořit, protože ukazuje dovnitř systémových adresářů site',
  ),
  '5:0:0:30154' => 
  array (
    'code' => '5:0:0:30154',
    'name' => 'ftp_dir_already_exists_as_nondir',
    'message' => 'Cílový adresář FTP účtu nelze vytvořit, protože již existuje a přitom se nejedná o adresář',
  ),
  '5:0:0:30155' => 
  array (
    'code' => '5:0:0:30155',
    'name' => 'backend_ftp_download_file_connect_failed',
    'message' => 'Chyba při stahování vzdáleného souboru na webový server, nelze se připojit k FTP serveru',
  ),
  '5:0:0:30156' => 
  array (
    'code' => '5:0:0:30156',
    'name' => 'backend_ftp_download_file_transfer_failed',
    'message' => 'Chyba při stahování vzdáleného souboru na webový server, soubor neexistuje nebo došlo k chybě při přenosu',
  ),
  '5:0:0:30157' => 
  array (
    'code' => '5:0:0:30157',
    'name' => 'zombie_getifaddrs_error',
    'message' => 'Nelze odstranit zombie, chyba při zjišťování síťových rozhraní na serveru',
  ),
  '5:0:0:30158' => 
  array (
    'code' => '5:0:0:30158',
    'name' => 'zombie_dnsip_check_error',
    'message' => 'Nelze odstranit zombie, nepodařilo se jednoznačně prověřit že doména v DNS neodkazuje na data zombie',
  ),
  '5:0:0:30159' => 
  array (
    'code' => '5:0:0:30159',
    'name' => 'domain_dns_points_to_zombie',
    'message' => 'Nelze odstranit zombie, byla nalezena doména dané site která pravděpodobně odkazuje na data zombie',
  ),
  '5:0:0:30160' => 
  array (
    'code' => '5:0:0:30160',
    'name' => 'ftp_directory_path_too_long',
    'message' => 'Cílový adresář FTP účtu je příliš dlouhý',
  ),
  '5:0:0:30161' => 
  array (
    'code' => '5:0:0:30161',
    'name' => 'ftp_chdir_path_too_long',
    'message' => 'Chdir adresář FTP účtu je příliš dlouhý',
  ),
  '5:0:0:30162' => 
  array (
    'code' => '5:0:0:30162',
    'name' => 'missing_db_name',
    'message' => 'Chybí parametr \'db_name\'',
  ),
  '5:0:0:30163' => 
  array (
    'code' => '5:0:0:30163',
    'name' => 'invalid_db_name',
    'message' => 'Chybná hodnota parametru \'db_name\'',
  ),
  '5:0:0:30164' => 
  array (
    'code' => '5:0:0:30164',
    'name' => 'missing_minute_limit',
    'message' => 'Chybí parametr \'minute_limit\'',
  ),
  '5:0:0:30165' => 
  array (
    'code' => '5:0:0:30165',
    'name' => 'invalid_minute_limit',
    'message' => 'Chybná hodnota parametru \'minute_limit\'',
  ),
  '5:0:0:30166' => 
  array (
    'code' => '5:0:0:30166',
    'name' => 'missing_month_limit',
    'message' => 'Chybí parametr \'month_limit\'',
  ),
  '5:0:0:30167' => 
  array (
    'code' => '5:0:0:30167',
    'name' => 'invalid_month_limit',
    'message' => 'Chybná hodnota parametru \'month_limit\'',
  ),
  '5:0:0:30168' => 
  array (
    'code' => '5:0:0:30168',
    'name' => 'missing_recursive',
    'message' => 'Chybí parametr \'recursive\'',
  ),
  '5:0:0:30169' => 
  array (
    'code' => '5:0:0:30169',
    'name' => 'invalid_recursive',
    'message' => 'Chybná hodnota parametru \'recursive\'',
  ),
  '5:0:0:30170' => 
  array (
    'code' => '5:0:0:30170',
    'name' => 'missing_hour_count',
    'message' => 'Chybí parametr \'hour_count\'',
  ),
  '5:0:0:30171' => 
  array (
    'code' => '5:0:0:30171',
    'name' => 'invalid_hour_count',
    'message' => 'Chybná hodnota parametru \'hour_count\'',
  ),
  '5:0:0:30172' => 
  array (
    'code' => '5:0:0:30172',
    'name' => 'over_quota',
    'message' => 'Disková kvóta site je vyčerpána',
  ),
  '5:0:0:30173' => 
  array (
    'code' => '5:0:0:30173',
    'name' => 'ftp_account_does_not_belong_to_site',
    'message' => 'FTP účet nenáleží k dané site',
  ),
  '5:0:0:30174' => 
  array (
    'code' => '5:0:0:30174',
    'name' => 'ssh_account_not_found',
    'message' => 'SSH účet nenalezen',
  ),
  '5:0:0:30175' => 
  array (
    'code' => '5:0:0:30175',
    'name' => 'ssh_account_instance_not_found',
    'message' => 'Instance SSH účtu nenalezena',
  ),
  '5:0:0:30176' => 
  array (
    'code' => '5:0:0:30176',
    'name' => 'missing_from_zwm',
    'message' => 'Chybí parametr \'from_zwm\'',
  ),
  '5:0:0:30177' => 
  array (
    'code' => '5:0:0:30177',
    'name' => 'invalid_from_zwm',
    'message' => 'Chybná hodnota parametru \'from_zwm\'',
  ),
  '5:0:0:30178' => 
  array (
    'code' => '5:0:0:30178',
    'name' => 'missing_restart_action',
    'message' => 'Chybí parametr \'restart_action\'',
  ),
  '5:0:0:30179' => 
  array (
    'code' => '5:0:0:30179',
    'name' => 'invalid_restart_action',
    'message' => 'Chybná hodnota parametru \'restart_action\'',
  ),
  '5:0:0:30180' => 
  array (
    'code' => '5:0:0:30180',
    'name' => 'php_admin_value_not_found',
    'message' => 'PHP admin direktiva vhosta neexistuje',
  ),
  '5:0:0:30181' => 
  array (
    'code' => '5:0:0:30181',
    'name' => 'missing_php_directive',
    'message' => 'Chybí parametr \'php_directive\'',
  ),
  '5:0:0:30182' => 
  array (
    'code' => '5:0:0:30182',
    'name' => 'invalid_php_directive',
    'message' => 'Chybná hodnota parametru \'php_directive\'',
  ),
  '5:0:0:30183' => 
  array (
    'code' => '5:0:0:30183',
    'name' => 'missing_php_value',
    'message' => 'Chybí parametr \'php_value\'',
  ),
  '5:0:0:30184' => 
  array (
    'code' => '5:0:0:30184',
    'name' => 'invalid_php_value',
    'message' => 'Chybná hodnota parametru \'php_value\'',
  ),
  '5:0:0:30185' => 
  array (
    'code' => '5:0:0:30185',
    'name' => 'smb_account_not_found',
    'message' => 'SMB účet nenalezen',
  ),
  '5:0:0:30186' => 
  array (
    'code' => '5:0:0:30186',
    'name' => 'smb_account_instance_not_found',
    'message' => 'Instance SMB účtu nenalezena',
  ),
  '5:0:0:30187' => 
  array (
    'code' => '5:0:0:30187',
    'name' => 'missing_iapp_token',
    'message' => 'Chybí parametr \'iapp_token\'',
  ),
  '5:0:0:30188' => 
  array (
    'code' => '5:0:0:30188',
    'name' => 'cannot_generate_password',
    'message' => 'Nelze vygenerovat heslo',
  ),
  '5:0:0:30189' => 
  array (
    'code' => '5:0:0:30189',
    'name' => 'missing_key_data',
    'message' => 'Chybí parametr \'key_data\'',
  ),
  '5:0:0:30190' => 
  array (
    'code' => '5:0:0:30190',
    'name' => 'invalid_key_data',
    'message' => 'Chybná hodnota parametru \'key_data\'',
  ),
  '5:0:0:30191' => 
  array (
    'code' => '5:0:0:30191',
    'name' => 'missing_cert_data',
    'message' => 'Chybí parametr \'cert_data\'',
  ),
  '5:0:0:30192' => 
  array (
    'code' => '5:0:0:30192',
    'name' => 'invalid_cert_data',
    'message' => 'Chybná hodnota parametru \'cert_data\'',
  ),
  '5:0:0:30193' => 
  array (
    'code' => '5:0:0:30193',
    'name' => 'missing_ca_data',
    'message' => 'Chybí parametr \'ca_data\'',
  ),
  '5:0:0:30194' => 
  array (
    'code' => '5:0:0:30194',
    'name' => 'invalid_ca_data',
    'message' => 'Chybná hodnota parametru \'ca_data\'',
  ),
  '5:0:0:30195' => 
  array (
    'code' => '5:0:0:30195',
    'name' => 'ssl_slave_request_not_queued',
    'message' => 'SSL požadavek nebyl zařazen do fronty požadavků',
  ),
  '5:0:0:30196' => 
  array (
    'code' => '5:0:0:30196',
    'name' => 'ssl_slave_wait_for_response_failed',
    'message' => 'Čekání na odpověd na SSL požadavek selhalo',
  ),
  '5:0:0:30197' => 
  array (
    'code' => '5:0:0:30197',
    'name' => 'ssl_slave_request_failed',
    'message' => 'SSL požadavek selhal',
  ),
  '5:0:0:30198' => 
  array (
    'code' => '5:0:0:30198',
    'name' => 'ssl_slave_request_timeout',
    'message' => 'SSL požadavek vytimeoutoval',
  ),
  '5:0:0:30199' => 
  array (
    'code' => '5:0:0:30199',
    'name' => 'invalid_copy_from_domain',
    'message' => 'Chybná hodnota parametru \'copy_from_domain\'',
  ),
  '5:1:0:30001' => 
  array (
    'code' => '5:1:0:30001',
    'name' => 'ccc_ip_server_not_found',
    'message' => 'Virtuální server s danou IP adresou nenalezen',
  ),
  '5:1:0:30002' => 
  array (
    'code' => '5:1:0:30002',
    'name' => 'ccc_var_code_not_found',
    'message' => 'Varianta s daným číslem neexistuje',
  ),
  '5:1:0:30003' => 
  array (
    'code' => '5:1:0:30003',
    'name' => 'ccc_missing_id_service',
    'message' => 'Schází identifikátor servisu',
  ),
  '5:1:0:30004' => 
  array (
    'code' => '5:1:0:30004',
    'name' => 'ccc_invalid_id_service',
    'message' => 'Chybný formát identifikátoru servisu',
  ),
  '5:1:0:30005' => 
  array (
    'code' => '5:1:0:30005',
    'name' => 'ccc_missing_var_code',
    'message' => 'Schází kód varianty',
  ),
  '5:1:0:30006' => 
  array (
    'code' => '5:1:0:30006',
    'name' => 'ccc_invalid_var_code',
    'message' => 'Chybný formát kódu varianty',
  ),
  '5:1:0:30007' => 
  array (
    'code' => '5:1:0:30007',
    'name' => 'ccc_missing_ip_service',
    'message' => 'Schází IP adresa servisu',
  ),
  '5:1:0:30008' => 
  array (
    'code' => '5:1:0:30008',
    'name' => 'ccc_invalid_ip_service',
    'message' => 'Chybný formát IP adresy servisu',
  ),
  '5:1:0:30009' => 
  array (
    'code' => '5:1:0:30009',
    'name' => 'ccc_missing_ip_server',
    'message' => 'Schází IP adresa serveru',
  ),
  '5:1:0:30010' => 
  array (
    'code' => '5:1:0:30010',
    'name' => 'ccc_invalid_ip_server',
    'message' => 'Chybný formát IP adresy serveru',
  ),
  '5:1:0:30011' => 
  array (
    'code' => '5:1:0:30011',
    'name' => 'ccc_id_service_not_found',
    'message' => 'Servis s daným identifikátorem nenalezen',
  ),
  '5:1:0:30012' => 
  array (
    'code' => '5:1:0:30012',
    'name' => 'ccc_vhost_not_found',
    'message' => 'Vhost nenalezen',
  ),
  '5:1:0:30013' => 
  array (
    'code' => '5:1:0:30013',
    'name' => 'ccc_unmatched_id_service',
    'message' => 'Neodpovídající identifikátor servisu',
  ),
  '5:1:0:30014' => 
  array (
    'code' => '5:1:0:30014',
    'name' => 'ccc_cannot_remove_unused_site',
    'message' => 'Nelze odstranit prázdnou site',
  ),
  '5:1:0:30015' => 
  array (
    'code' => '5:1:0:30015',
    'name' => 'ccc_id_service_already_exists',
    'message' => 'Dané id servisu je již namapováno na existující site',
  ),
  '5:1:0:30016' => 
  array (
    'code' => '5:1:0:30016',
    'name' => 'ccc_invalid_site_relative_reldir',
    'message' => 'Chybná hodnota parametru site_relative_reldir',
  ),
  '5:1:0:30017' => 
  array (
    'code' => '5:1:0:30017',
    'name' => 'ccc_domain_is_primary_vhost',
    'message' => 'Doména je primárním vhostem celé site',
  ),
  '5:1:0:30018' => 
  array (
    'code' => '5:1:0:30018',
    'name' => 'ccc_service_name_does_not_match_id_service',
    'message' => 'Předložené jméno site neodpovídá jménu site zjištěnému podle id servisu',
  ),
  '5:1:0:30019' => 
  array (
    'code' => '5:1:0:30019',
    'name' => 'ccc_mig2n_archive_not_found',
    'message' => 'Archív se zabalenými daty site ze starého hostingu nenalezen',
  ),
  '5:1:0:30020' => 
  array (
    'code' => '5:1:0:30020',
    'name' => 'ccc_migration_between_in_situ_stages',
    'message' => 'Byla detekována neočekávaná migrace site spuštěná uprostřed dvou fází in-situ migrace',
  ),
  '5:1:0:30021' => 
  array (
    'code' => '5:1:0:30021',
    'name' => 'ccc_cannot_remember_stage1_done',
    'message' => 'Došlo k chybě při zaznamenávání úspěšného dokončení první fáze migrace site',
  ),
  '5:1:0:30022' => 
  array (
    'code' => '5:1:0:30022',
    'name' => 'ccc_site_on_multiple_machines',
    'message' => 'Doména má vhosty na několika fyzických serverech',
  ),
  '5:1:0:30023' => 
  array (
    'code' => '5:1:0:30023',
    'name' => 'ccc_migration_without_realization',
    'message' => 'Není dovoleno měnit variantu domény uprostřed migrace, která nebude provádět realizaci domény na cílovém serveru',
  ),
  '5:1:0:30024' => 
  array (
    'code' => '5:1:0:30024',
    'name' => 'ccc_site_mapping_not_found',
    'message' => 'Nenalezeno mapování site na identifikátor z Centra',
  ),
  '5:1:0:30025' => 
  array (
    'code' => '5:1:0:30025',
    'name' => 'ccc_dba_module_not_found',
    'message' => 'Databázový modul CMS nenalezen',
  ),
  '5:1:0:30026' => 
  array (
    'code' => '5:1:0:30026',
    'name' => 'ccc_dba_database_not_found',
    'message' => 'Požadovaná databáze nenalezena',
  ),
  '5:1:0:30027' => 
  array (
    'code' => '5:1:0:30027',
    'name' => 'ccc_dba_database_ip_does_not_match',
    'message' => 'IP adresa databázového serveru neodpovída IP adrese na které eviduje danou databazi modul Dba',
  ),
  '5:1:0:30028' => 
  array (
    'code' => '5:1:0:30028',
    'name' => 'ccc_create_ftp_account_rollback_failed',
    'message' => 'Zotavování z chyby při vytáření FTP účtu selhalo',
  ),
);
}
?>