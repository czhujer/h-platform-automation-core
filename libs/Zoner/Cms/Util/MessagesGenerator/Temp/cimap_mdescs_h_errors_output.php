<?php
class Errors {

#copy $_errors to module file
 protected $_errors = array (
  '2:0:0:30001' => 
  array (
    'code' => '2:0:0:30001',
    'name' => 'invalid_domain_name',
    'message' => 'Chybný formát jména domény',
  ),
  '2:0:0:30002' => 
  array (
    'code' => '2:0:0:30002',
    'name' => 'missing_domain_name',
    'message' => 'Chybí jméno domény',
  ),
  '2:0:0:30003' => 
  array (
    'code' => '2:0:0:30003',
    'name' => 'domain_not_found',
    'message' => 'Doména neexistuje',
  ),
  '2:0:0:30004' => 
  array (
    'code' => '2:0:0:30004',
    'name' => 'db_error',
    'message' => 'Chyba při přístupu k databázi',
  ),
  '2:0:0:30005' => 
  array (
    'code' => '2:0:0:30005',
    'name' => 'invalid_user_name',
    'message' => 'Chybný formát uživatelského jména (názvu mailboxu',
  ),
  '2:0:0:30006' => 
  array (
    'code' => '2:0:0:30006',
    'name' => 'missing_user_name',
    'message' => 'Chybí uživatelské jméno (název mailboxu',
  ),
  '2:0:0:30007' => 
  array (
    'code' => '2:0:0:30007',
    'name' => 'max_mailbox_count_not_found',
    'message' => 'Maximální počet mailboxů domény nenalezen',
  ),
  '2:0:0:30008' => 
  array (
    'code' => '2:0:0:30008',
    'name' => 'missing_max_mailbox_count',
    'message' => 'Chybí maximální počet mailboxů domény',
  ),
  '2:0:0:30009' => 
  array (
    'code' => '2:0:0:30009',
    'name' => 'invalid_max_mailbox_count',
    'message' => 'Chybný formát hodnoty maximálního počtu mailboxů domény',
  ),
  '2:0:0:30010' => 
  array (
    'code' => '2:0:0:30010',
    'name' => 'username_not_found',
    'message' => 'Uživatelské jméno (název mailboxu) nenalezeno',
  ),
  '2:0:0:30011' => 
  array (
    'code' => '2:0:0:30011',
    'name' => 'password_not_found',
    'message' => 'Heslo nenalezeno',
  ),
  '2:0:0:30012' => 
  array (
    'code' => '2:0:0:30012',
    'name' => 'password_not_set',
    'message' => 'Heslo není nastaveno',
  ),
  '2:0:0:30013' => 
  array (
    'code' => '2:0:0:30013',
    'name' => 'missing_password',
    'message' => 'Chybí heslo',
  ),
  '2:0:0:30014' => 
  array (
    'code' => '2:0:0:30014',
    'name' => 'invalid_password',
    'message' => 'Chybný formát hesla',
  ),
  '2:0:0:30015' => 
  array (
    'code' => '2:0:0:30015',
    'name' => 'mailbox_count_not_found',
    'message' => 'Počet mailboxů neznámý',
  ),
  '2:0:0:30016' => 
  array (
    'code' => '2:0:0:30016',
    'name' => 'missing_alias',
    'message' => 'Chybí alias',
  ),
  '2:0:0:30017' => 
  array (
    'code' => '2:0:0:30017',
    'name' => 'invalid_alias',
    'message' => 'Chybný formát aliasu',
  ),
  '2:0:0:30018' => 
  array (
    'code' => '2:0:0:30018',
    'name' => 'alias_exists_as_mailbox',
    'message' => 'Daný alias už existuje jako mailbox',
  ),
  '2:0:0:30019' => 
  array (
    'code' => '2:0:0:30019',
    'name' => 'alias_not_found',
    'message' => 'Alias nenalezen',
  ),
  '2:0:0:30020' => 
  array (
    'code' => '2:0:0:30020',
    'name' => 'missing_forward',
    'message' => 'Chybí přesměrování',
  ),
  '2:0:0:30021' => 
  array (
    'code' => '2:0:0:30021',
    'name' => 'invalid_forward',
    'message' => 'Chybný formát přesměrování',
  ),
  '2:0:0:30022' => 
  array (
    'code' => '2:0:0:30022',
    'name' => 'forward_not_found',
    'message' => 'Přesměrování nenalezeno',
  ),
  '2:0:0:30023' => 
  array (
    'code' => '2:0:0:30023',
    'name' => 'unable_to_set_forward_local_copy',
    'message' => 'Nastavení příznaku lokální kopie při přesměrování z mailboxu selhalo',
  ),
  '2:0:0:30024' => 
  array (
    'code' => '2:0:0:30024',
    'name' => 'invalid_fwd_local_copy',
    'message' => 'Chybný formát příznaku lokální kopie při přesměrování',
  ),
  '2:0:0:30025' => 
  array (
    'code' => '2:0:0:30025',
    'name' => 'missing_fwd_local_copy',
    'message' => 'Chybí příznak lokální kopie při přesměrování',
  ),
  '2:0:0:30026' => 
  array (
    'code' => '2:0:0:30026',
    'name' => 'perl_error',
    'message' => 'Chyba při volání embedded perlu',
  ),
  '2:0:0:30027' => 
  array (
    'code' => '2:0:0:30027',
    'name' => 'cannot_delete_postmaster_mailbox',
    'message' => 'Odstranění mailboxu \'postmaster\' není dovoleno',
  ),
  '2:0:0:30028' => 
  array (
    'code' => '2:0:0:30028',
    'name' => 'username_already_exists',
    'message' => 'Dané uživatelské jméno (název mailboxu) již existuje',
  ),
  '2:0:0:30029' => 
  array (
    'code' => '2:0:0:30029',
    'name' => 'too_many_mailboxes',
    'message' => 'Příliš mnoho mailboxů, byl dosažen maximální počet mailboxů pro danou doménu',
  ),
  '2:0:0:30030' => 
  array (
    'code' => '2:0:0:30030',
    'name' => 'domain_already_exists',
    'message' => 'Daná doména již existuje',
  ),
  '2:0:0:30031' => 
  array (
    'code' => '2:0:0:30031',
    'name' => 'cannot_create_postmaster_mailbox',
    'message' => 'Chyba při vytváření mailboxu \'postmaster\'',
  ),
  '2:0:0:30032' => 
  array (
    'code' => '2:0:0:30032',
    'name' => 'cannot_delete_user_mailboxes',
    'message' => 'Nelze odstranit jeden či více mailboxů',
  ),
  '2:0:0:30033' => 
  array (
    'code' => '2:0:0:30033',
    'name' => 'domain_alias_already_exists_as_domain',
    'message' => 'Doména stejného jména jako doménový alias již existuje',
  ),
  '2:0:0:30034' => 
  array (
    'code' => '2:0:0:30034',
    'name' => 'invalid_domain_alias_name',
    'message' => 'Chybný formát jména doménového aliasu',
  ),
  '2:0:0:30035' => 
  array (
    'code' => '2:0:0:30035',
    'name' => 'missing_domain_alias_name',
    'message' => 'Chybí jméno doménového aliasu',
  ),
  '2:0:0:30036' => 
  array (
    'code' => '2:0:0:30036',
    'name' => 'invalid_auto_password_value',
    'message' => 'Chybná hodnota parametru auto_password',
  ),
  '2:0:0:30037' => 
  array (
    'code' => '2:0:0:30037',
    'name' => 'domain_alias_exists_as_domain',
    'message' => 'Doména tohoto jména není doménový alias',
  ),
  '2:0:0:30038' => 
  array (
    'code' => '2:0:0:30038',
    'name' => 'ns_dns_query_failed',
    'message' => 'Došlo k chybě při dotazu na NS záznamy domény v DNS',
  ),
  '2:0:0:30039' => 
  array (
    'code' => '2:0:0:30039',
    'name' => 'mx_dns_query_failed',
    'message' => 'Došlo k chybě při dotazu na MX záznamy domény v DNS',
  ),
  '2:0:0:30040' => 
  array (
    'code' => '2:0:0:30040',
    'name' => 'cyrus_imap_admin_new_failed',
    'message' => 'Chyba při vytváření spojení s IMAP serverem (nelze vytvořit objekt spojení',
  ),
  '2:0:0:30041' => 
  array (
    'code' => '2:0:0:30041',
    'name' => 'cyrus_imap_admin_connect_failed',
    'message' => 'Chyba při vytváření spojení s IMAP serverem (nelze otevřít spojení se serverem',
  ),
  '2:0:0:30042' => 
  array (
    'code' => '2:0:0:30042',
    'name' => 'cyrus_imap_admin_auth_failed',
    'message' => 'Chyba při vytváření spojení s IMAP serverem (autentizace selhala',
  ),
  '2:0:0:30043' => 
  array (
    'code' => '2:0:0:30043',
    'name' => 'cyrus_imap_admin_not_connected',
    'message' => 'Spojení s IMAP serverem nebylo navázáno nebo bylo následně přerušeno',
  ),
  '2:0:0:30044' => 
  array (
    'code' => '2:0:0:30044',
    'name' => 'perl_internal_error_rcnt1',
    'message' => 'Vnitřní chyba v CMS serveru (CImap perl, vnitřní identifikace chyby: \'rcnt1\'',
  ),
  '2:0:0:30045' => 
  array (
    'code' => '2:0:0:30045',
    'name' => 'perl_create_mailbox_failed',
    'message' => 'Chyba při vytváření fyzického mailboxu na IMAP serveru',
  ),
  '2:0:0:30046' => 
  array (
    'code' => '2:0:0:30046',
    'name' => 'perl_internal_error_rcnt2',
    'message' => 'Vnitřní chyba v CMS serveru (CImap perl, vnitřní identifikace chyby: \'rcnt2\'',
  ),
  '2:0:0:30047' => 
  array (
    'code' => '2:0:0:30047',
    'name' => 'perl_internal_error_mimpu',
    'message' => 'Vnitřní chyba v CMS serveru (CImap perl, vnitřní identifikace chyby: \'mimpu\'',
  ),
  '2:0:0:30048' => 
  array (
    'code' => '2:0:0:30048',
    'name' => 'perl_delete_mailbox_setacl_failed',
    'message' => 'Nelze změnit přístupová práva (ACL) k fyzickému mailboxu před jeho odstraněním',
  ),
  '2:0:0:30049' => 
  array (
    'code' => '2:0:0:30049',
    'name' => 'perl_delete_mailbox_failed',
    'message' => 'Chyba při odstraňování fyzického mailboxu na IMAP serveru',
  ),
  '2:0:0:30050' => 
  array (
    'code' => '2:0:0:30050',
    'name' => 'perl_apg_failed',
    'message' => 'Generátor náhodných hesel selhal',
  ),
  '2:0:0:30051' => 
  array (
    'code' => '2:0:0:30051',
    'name' => 'perl_apg_returned_empty_pwd',
    'message' => 'Generátor náhodných hesel vrátil prázdné heslo',
  ),
  '2:0:0:30052' => 
  array (
    'code' => '2:0:0:30052',
    'name' => 'alias_domain_mismatch',
    'message' => 'Doména aliasu neodpovídá doméně cílového mailboxu',
  ),
  '2:0:0:30053' => 
  array (
    'code' => '2:0:0:30053',
    'name' => 'missing_quota_type',
    'message' => 'Schází typ kvóty',
  ),
  '2:0:0:30054' => 
  array (
    'code' => '2:0:0:30054',
    'name' => 'invalid_quota_type',
    'message' => 'Chybný formát typu kvóty',
  ),
  '2:0:0:30055' => 
  array (
    'code' => '2:0:0:30055',
    'name' => 'missing_quota',
    'message' => 'Schází kvóta',
  ),
  '2:0:0:30056' => 
  array (
    'code' => '2:0:0:30056',
    'name' => 'invalid_quota',
    'message' => 'Chybný formát kvóty',
  ),
  '2:0:0:30057' => 
  array (
    'code' => '2:0:0:30057',
    'name' => 'quota_not_found',
    'message' => 'Kvóta nenalezena',
  ),
  '2:0:0:30058' => 
  array (
    'code' => '2:0:0:30058',
    'name' => 'perl_quota_command_failed',
    'message' => 'Chyba při zjišťování stavu kvóty na IMAP serveru',
  ),
  '2:0:0:30059' => 
  array (
    'code' => '2:0:0:30059',
    'name' => 'perl_quotaroot_not_found',
    'message' => 'Kořen kvóty na IMAP serveru nenalezen',
  ),
  '2:0:0:30060' => 
  array (
    'code' => '2:0:0:30060',
    'name' => 'perl_setquota_command_failed',
    'message' => 'Chyba při nastavování kvóty na IMAP serveru',
  ),
  '2:0:0:30061' => 
  array (
    'code' => '2:0:0:30061',
    'name' => 'account_not_found',
    'message' => 'Účet nenalezen',
  ),
  '2:0:0:30062' => 
  array (
    'code' => '2:0:0:30062',
    'name' => 'missing_uid',
    'message' => 'Chybí číslo uživatelského účtu',
  ),
  '2:0:0:30063' => 
  array (
    'code' => '2:0:0:30063',
    'name' => 'invalid_uid',
    'message' => 'Chybný formát čísla uživatelského účtu',
  ),
  '2:0:0:30064' => 
  array (
    'code' => '2:0:0:30064',
    'name' => 'postmaster_account_not_found',
    'message' => 'Přihlašovací účet postmastera domény nenalezen',
  ),
  '2:0:0:30065' => 
  array (
    'code' => '2:0:0:30065',
    'name' => 'quota_type_change_unsupported',
    'message' => 'Nepodporovaný typ změny kvóty',
  ),
  '2:0:0:30066' => 
  array (
    'code' => '2:0:0:30066',
    'name' => 'cannot_delete_special_alias',
    'message' => 'Speciální aliasy (root, abuse) nelze odstranit',
  ),
  '2:0:0:30067' => 
  array (
    'code' => '2:0:0:30067',
    'name' => 'cannot_change_special_alias',
    'message' => 'Speciální aliasy (root, abuse) nelze změnit',
  ),
  '2:0:0:30068' => 
  array (
    'code' => '2:0:0:30068',
    'name' => 'alias_already_exists',
    'message' => 'Alias již existuje a odkazuje na jiný mailbox',
  ),
  '2:0:0:30069' => 
  array (
    'code' => '2:0:0:30069',
    'name' => 'plain_pwd_not_available',
    'message' => 'Heslo v nešifrovaném tvaru není k dispozici',
  ),
  '2:0:0:30070' => 
  array (
    'code' => '2:0:0:30070',
    'name' => 'domain_note_not_found',
    'message' => 'Poznámka k doméně nenalezena',
  ),
  '2:0:0:30071' => 
  array (
    'code' => '2:0:0:30071',
    'name' => 'missing_note_type',
    'message' => 'Schází typ poznámky',
  ),
  '2:0:0:30072' => 
  array (
    'code' => '2:0:0:30072',
    'name' => 'invalid_note_type',
    'message' => 'Chybný formát typu poznámky',
  ),
  '2:0:0:30073' => 
  array (
    'code' => '2:0:0:30073',
    'name' => 'missing_note',
    'message' => 'Schází poznámka',
  ),
  '2:0:0:30074' => 
  array (
    'code' => '2:0:0:30074',
    'name' => 'missing_ntid',
    'message' => 'Schází identifikátor poznámky',
  ),
  '2:0:0:30075' => 
  array (
    'code' => '2:0:0:30075',
    'name' => 'invalid_ntid',
    'message' => 'Chybný formát identifikátoru poznámky',
  ),
  '2:0:0:30076' => 
  array (
    'code' => '2:0:0:30076',
    'name' => 'missing_search_param',
    'message' => 'Schází parametr vyhledávání',
  ),
  '2:0:0:30077' => 
  array (
    'code' => '2:0:0:30077',
    'name' => 'sm_delete_mailbox_incomplete',
    'message' => 'Odstranění mailboxu nebylo zcela dokončeno, mailbox není v konzistentním stavu',
  ),
  '2:0:0:30078' => 
  array (
    'code' => '2:0:0:30078',
    'name' => 'sm_delete_domain_incomplete',
    'message' => 'Odstranění domény nebylo zcela dokončeno, doména není v konzistentním stavu',
  ),
  '2:0:0:30079' => 
  array (
    'code' => '2:0:0:30079',
    'name' => 'sm_create_mailbox_incomplete',
    'message' => 'Vytvoření mailboxu nebylo zcela dokončeno, mailbox není v konzistentním stavu',
  ),
  '2:0:0:30080' => 
  array (
    'code' => '2:0:0:30080',
    'name' => 'sm_create_mailbox_rollbacked',
    'message' => 'Vytvoření mailboxu opakovaně selhalo',
  ),
  '2:0:0:30081' => 
  array (
    'code' => '2:0:0:30081',
    'name' => 'sm_create_domain_incomplete',
    'message' => 'Vytvoření domény nebylo zcela dokončeno, doména není v konzistentním stavu',
  ),
  '2:0:0:30082' => 
  array (
    'code' => '2:0:0:30082',
    'name' => 'sm_create_domain_rollbacked',
    'message' => 'Vytvoření domény opakovaně selhalo',
  ),
  '2:0:0:30083' => 
  array (
    'code' => '2:0:0:30083',
    'name' => 'randpass_failed',
    'message' => 'Generátor náhodných hesel selhal',
  ),
  '2:0:0:30084' => 
  array (
    'code' => '2:0:0:30084',
    'name' => 'migr_cannot_connect_to_src_imap',
    'message' => 'Nelze se přihlásit k výchozímu IMAP serveru',
  ),
  '2:0:0:30085' => 
  array (
    'code' => '2:0:0:30085',
    'name' => 'migr_cannot_connect_to_dst_imap',
    'message' => 'Nelze se přihlásit k cílovému IMAP serveru',
  ),
  '2:0:0:30086' => 
  array (
    'code' => '2:0:0:30086',
    'name' => 'migr_general_error',
    'message' => 'Nespecifikovaná chyba při migraci mailboxu',
  ),
  '2:0:0:30087' => 
  array (
    'code' => '2:0:0:30087',
    'name' => 'migr_cannot_fetch_folders',
    'message' => 'Nelze zjistit seznam složek mailboxu z IMAP serveru',
  ),
  '2:0:0:30088' => 
  array (
    'code' => '2:0:0:30088',
    'name' => 'migr_cannot_select_folder',
    'message' => 'Nelze vybrat složku mailboxu na IMAP serveru',
  ),
  '2:0:0:30089' => 
  array (
    'code' => '2:0:0:30089',
    'name' => 'migr_folder_migration_failed',
    'message' => 'Došlo k chybě při kopírování dat na cílový IMAP server',
  ),
  '2:0:0:30090' => 
  array (
    'code' => '2:0:0:30090',
    'name' => 'migr_incomplete_mailboxe',
    'message' => 'Došlo k chybě při kopírování dat na cílový IMAP server, část dat mailboxu však již byla přesunuta a jejich odstranění selhalo',
  ),
  '2:0:0:30091' => 
  array (
    'code' => '2:0:0:30091',
    'name' => 'migr_incompatible_imap_seps',
    'message' => 'Konvence názvů složek na IMAP serverech nejsou kompatibilní',
  ),
  '2:0:0:30092' => 
  array (
    'code' => '2:0:0:30092',
    'name' => 'missing_mail_server',
    'message' => 'Chybí cílový mailserver',
  ),
  '2:0:0:30093' => 
  array (
    'code' => '2:0:0:30093',
    'name' => 'mail_server_not_found',
    'message' => 'Cílový mailserver nebyl nalezen',
  ),
  '2:0:0:30094' => 
  array (
    'code' => '2:0:0:30094',
    'name' => 'invalid_mail_server',
    'message' => 'Chybný formát cílového mailserveru',
  ),
  '2:0:0:30095' => 
  array (
    'code' => '2:0:0:30095',
    'name' => 'missing_src_imap',
    'message' => 'Chybí výchozí IMAP server',
  ),
  '2:0:0:30096' => 
  array (
    'code' => '2:0:0:30096',
    'name' => 'invalid_src_imap',
    'message' => 'Chybný formát výchozího IMAP serveru',
  ),
  '2:0:0:30097' => 
  array (
    'code' => '2:0:0:30097',
    'name' => 'invalid_dst_imap',
    'message' => 'Chybný formát cílového IMAP serveru',
  ),
  '2:0:0:30098' => 
  array (
    'code' => '2:0:0:30098',
    'name' => 'cannot_exec_migr_process',
    'message' => 'Neze spustit proces migrace mailboxů',
  ),
  '2:0:0:30099' => 
  array (
    'code' => '2:0:0:30099',
    'name' => 'migr_process_error',
    'message' => 'Chyba procesu migrace mailboxů',
  ),
  '2:0:0:30100' => 
  array (
    'code' => '2:0:0:30100',
    'name' => 'migr_process_output_error',
    'message' => 'Chyba ve výstupu procesu migrace mailboxů',
  ),
  '2:0:0:30101' => 
  array (
    'code' => '2:0:0:30101',
    'name' => 'migr_process_finished_with_errors',
    'message' => 'Proces migrace mailboxů skončil s chybami',
  ),
  '2:0:0:30102' => 
  array (
    'code' => '2:0:0:30102',
    'name' => 'migr_mailbox_error',
    'message' => 'Migrace mailboxu selhala',
  ),
  '2:0:0:30103' => 
  array (
    'code' => '2:0:0:30103',
    'name' => 'invalid_override_param',
    'message' => 'Chybná hodnota parametru override',
  ),
  '2:0:0:30104' => 
  array (
    'code' => '2:0:0:30104',
    'name' => 'transport_not_found',
    'message' => 'Transport pošty pro danou doménu nenalezen',
  ),
  '2:0:0:30105' => 
  array (
    'code' => '2:0:0:30105',
    'name' => 'forward_alias_loop',
    'message' => 'Přesměrování ukazuje na alias k výchozímu mailboxu',
  ),
  '2:0:0:30106' => 
  array (
    'code' => '2:0:0:30106',
    'name' => 'relay_user_not_found',
    'message' => 'Uživatel relaye nenalezen',
  ),
  '2:0:0:30107' => 
  array (
    'code' => '2:0:0:30107',
    'name' => 'missing_relay_user',
    'message' => 'Schází parametr uživatele relaye',
  ),
  '2:0:0:30108' => 
  array (
    'code' => '2:0:0:30108',
    'name' => 'invalid_relay_user',
    'message' => 'Chybný formát uživatele relaye',
  ),
  '2:0:0:30109' => 
  array (
    'code' => '2:0:0:30109',
    'name' => 'invalid_relay_all',
    'message' => 'Chybný formát parametru relay_all',
  ),
  '2:0:0:30110' => 
  array (
    'code' => '2:0:0:30110',
    'name' => 'imap_client_connect_failed',
    'message' => 'Nelze se přihlásit k IMAP serveru',
  ),
  '2:0:0:30111' => 
  array (
    'code' => '2:0:0:30111',
    'name' => 'imap_client_cannot_create_folder',
    'message' => 'Nelze vytvořit požadovanou složku v mailboxu',
  ),
  '2:0:0:30112' => 
  array (
    'code' => '2:0:0:30112',
    'name' => 'imap_client_cannot_logout',
    'message' => 'Nelze se odhlásit od IMAP serveru',
  ),
  '2:0:0:30113' => 
  array (
    'code' => '2:0:0:30113',
    'name' => 'missing_dst_imap',
    'message' => 'Chybí parametr cílového IMAP serveru',
  ),
  '2:0:0:30114' => 
  array (
    'code' => '2:0:0:30114',
    'name' => 'domain_mail_server_not_found',
    'message' => 'Nenalezen mailserver na kterém leží daná doména',
  ),
  '2:0:0:30115' => 
  array (
    'code' => '2:0:0:30115',
    'name' => 'invalid_mail_server_ip_route',
    'message' => 'Chybné nastavení server_map.server_route pro daný mailserver',
  ),
  '2:0:0:30116' => 
  array (
    'code' => '2:0:0:30116',
    'name' => 'invalid_mail_server_ip_address',
    'message' => 'Chybná IP adresa v server_map.server_route pro daný mailserver',
  ),
  '2:0:0:30117' => 
  array (
    'code' => '2:0:0:30117',
    'name' => 'missing_mail_server_name',
    'message' => 'Chybí jméno poštovního serveru',
  ),
  '2:0:0:30118' => 
  array (
    'code' => '2:0:0:30118',
    'name' => 'invalid_mail_server_name',
    'message' => 'Chybný formát jména poštovního serveru',
  ),
  '2:0:0:30119' => 
  array (
    'code' => '2:0:0:30119',
    'name' => 'missing_local_mail_servers',
    'message' => 'Chybí parametr local_mail_servers',
  ),
  '2:0:0:30120' => 
  array (
    'code' => '2:0:0:30120',
    'name' => 'invalid_local_mail_servers',
    'message' => 'Chybná hodnota parametru local_mail_servers',
  ),
  '2:0:0:30121' => 
  array (
    'code' => '2:0:0:30121',
    'name' => 'missing_folder_param',
    'message' => 'Chybí parametr folder',
  ),
  '2:0:0:30122' => 
  array (
    'code' => '2:0:0:30122',
    'name' => 'empty_folder_param',
    'message' => 'Parametr folder je prázdný',
  ),
  '2:0:0:30123' => 
  array (
    'code' => '2:0:0:30123',
    'name' => 'migr_cannot_create_dst_folder',
    'message' => 'Nelze vytvořit složku mailboxu na cílovém IMAP serveru',
  ),
  '2:0:0:30124' => 
  array (
    'code' => '2:0:0:30124',
    'name' => 'migr_cannot_subscribe_folder',
    'message' => 'Nelze se přihlásit k složce mailboxu na cílovém IMAP serveru',
  ),
  '2:0:0:30125' => 
  array (
    'code' => '2:0:0:30125',
    'name' => 'migr_cannot_select_dst_folder',
    'message' => 'Nelze vybrat složku mailboxu na cílovém IMAP serveru',
  ),
  '2:0:0:30126' => 
  array (
    'code' => '2:0:0:30126',
    'name' => 'alias_too_long',
    'message' => 'Alias je příliš dlouhý',
  ),
  '2:0:0:30127' => 
  array (
    'code' => '2:0:0:30127',
    'name' => 'invalid_src_user_name',
    'message' => 'Chybný formát zdrojového uživatelského jména (názvu mailboxu',
  ),
  '2:0:0:30128' => 
  array (
    'code' => '2:0:0:30128',
    'name' => 'missing_src_user_name',
    'message' => 'Chybí zdrojové uživatelské jméno (název mailboxu',
  ),
  '2:0:0:30129' => 
  array (
    'code' => '2:0:0:30129',
    'name' => 'src_username_not_found',
    'message' => 'Zdrojové uživatelské jméno (název mailboxu) nenalezeno',
  ),
  '2:0:0:30130' => 
  array (
    'code' => '2:0:0:30130',
    'name' => 'src_imap_does_not_match',
    'message' => 'Zdrojový IMAP server neodpovídá serveru ze kterého probíhá migrace',
  ),
  '2:0:0:30131' => 
  array (
    'code' => '2:0:0:30131',
    'name' => 'dst_imap_does_not_match',
    'message' => 'Cílový IMAP server neodpovídá serveru na který probíhá migrace',
  ),
  '2:0:0:30132' => 
  array (
    'code' => '2:0:0:30132',
    'name' => 'invalid_migration_status',
    'message' => 'Nepřípustný stav migrace',
  ),
  '2:0:0:30133' => 
  array (
    'code' => '2:0:0:30133',
    'name' => 'data_migration_not_possible',
    'message' => 'Migrace dat není možná',
  ),
  '2:0:0:30134' => 
  array (
    'code' => '2:0:0:30134',
    'name' => 'domain_migration_info_not_found',
    'message' => 'Informace o stavu migrace nenalezeny',
  ),
  '2:0:0:30135' => 
  array (
    'code' => '2:0:0:30135',
    'name' => 'source_and_dest_mail_servers_are_the_same',
    'message' => 'Cílový mailserver je totožný se zdrojovým mailserverem',
  ),
  '2:0:0:30136' => 
  array (
    'code' => '2:0:0:30136',
    'name' => 'domain_is_being_migrated',
    'message' => 'Doména je právě migrována',
  ),
  '2:0:0:30137' => 
  array (
    'code' => '2:0:0:30137',
    'name' => 'dest_mail_server_contains_zombie_mailboxes',
    'message' => 'Cílový mailserver obsahuje zombie mailboxů téže domény z dřívějších migrací',
  ),
  '2:0:0:30138' => 
  array (
    'code' => '2:0:0:30138',
    'name' => 'cannot_inject_email',
    'message' => 'Nepodařilo se vložit email do cílového mailboxu',
  ),
  '2:0:0:30139' => 
  array (
    'code' => '2:0:0:30139',
    'name' => 'invalid_email_data',
    'message' => 'Chybná data emailu',
  ),
  '2:0:0:30140' => 
  array (
    'code' => '2:0:0:30140',
    'name' => 'missing_email_data',
    'message' => 'Chybí data emailu',
  ),
  '2:0:0:30141' => 
  array (
    'code' => '2:0:0:30141',
    'name' => 'missing_email_body_bindata',
    'message' => 'Chybí binární data s tělem emailu',
  ),
  '2:0:0:30142' => 
  array (
    'code' => '2:0:0:30142',
    'name' => 'invalid_email_body_bindata',
    'message' => 'Chybná binární data s tělem emailu',
  ),
  '2:0:0:30143' => 
  array (
    'code' => '2:0:0:30143',
    'name' => 'missing_raw_email_param',
    'message' => 'Schází parametr raw_email',
  ),
  '2:0:0:30144' => 
  array (
    'code' => '2:0:0:30144',
    'name' => 'invalid_raw_email_param',
    'message' => 'Chybná hodnota parametru raw_email',
  ),
  '2:0:0:30145' => 
  array (
    'code' => '2:0:0:30145',
    'name' => 'missing_from',
    'message' => 'Schází parametr from',
  ),
  '2:0:0:30146' => 
  array (
    'code' => '2:0:0:30146',
    'name' => 'invalid_from',
    'message' => 'Chybná hodnota parametru from',
  ),
  '2:0:0:30147' => 
  array (
    'code' => '2:0:0:30147',
    'name' => 'missing_subject',
    'message' => 'Schází parametr subject',
  ),
  '2:0:0:30148' => 
  array (
    'code' => '2:0:0:30148',
    'name' => 'invalid_subject',
    'message' => 'Chybná hodnota parametru subject',
  ),
  '2:0:0:30149' => 
  array (
    'code' => '2:0:0:30149',
    'name' => 'domain_is_not_being_migrated',
    'message' => 'Podle záznamů v databazi neprobíhá migrace této domény',
  ),
  '2:0:0:30150' => 
  array (
    'code' => '2:0:0:30150',
    'name' => 'remove_migrated_zombies_already_running',
    'message' => 'Odstraňování zombies odmigrovaných mailboxů právě probíhá a není možné jej spustit dvakrát',
  ),
  '2:0:0:30151' => 
  array (
    'code' => '2:0:0:30151',
    'name' => 'perl_delete_mailbox_not_found',
    'message' => 'Chyba při odstraňování fyzického mailboxu na IMAP serveru - mailbox nenalezen',
  ),
  '2:0:0:30152' => 
  array (
    'code' => '2:0:0:30152',
    'name' => 'domain_has_zombies_on_mail_server',
    'message' => 'Doména má zombie mailboxy na cílovém mailserveru',
  ),
  '2:0:0:30153' => 
  array (
    'code' => '2:0:0:30153',
    'name' => 'invalid_expect_overquota',
    'message' => 'Chybná hodnota parametru expect_overquota',
  ),
  '2:0:0:30154' => 
  array (
    'code' => '2:0:0:30154',
    'name' => 'missing_expect_overquota',
    'message' => 'Chybí parametr expect_overquota',
  ),
  '2:0:0:30155' => 
  array (
    'code' => '2:0:0:30155',
    'name' => 'perl_rmquota_command_failed',
    'message' => 'Chyba při rušení kvóty na IMAP serveru',
  ),
  '2:0:0:30156' => 
  array (
    'code' => '2:0:0:30156',
    'name' => 'missing_msid',
    'message' => 'Schází parametr msid',
  ),
  '2:0:0:30157' => 
  array (
    'code' => '2:0:0:30157',
    'name' => 'invalid_msid',
    'message' => 'Chybná hodnota parametru msid',
  ),
  '2:0:0:30158' => 
  array (
    'code' => '2:0:0:30158',
    'name' => 'missing_bulk_size',
    'message' => 'Schází parametr bulk_size',
  ),
  '2:0:0:30159' => 
  array (
    'code' => '2:0:0:30159',
    'name' => 'invalid_bulk_size',
    'message' => 'Chybná hodnota parametru bulk_size',
  ),
  '2:0:0:30160' => 
  array (
    'code' => '2:0:0:30160',
    'name' => 'missing_last_domain',
    'message' => 'Schází parametr last_domain',
  ),
  '2:0:0:30161' => 
  array (
    'code' => '2:0:0:30161',
    'name' => 'invalid_last_domain',
    'message' => 'Chybná hodnota parametru last_domain',
  ),
  '2:0:0:30162' => 
  array (
    'code' => '2:0:0:30162',
    'name' => 'msid_not_found',
    'message' => 'Mail server s daným identifikátorem msid nenalezen',
  ),
  '2:0:0:30163' => 
  array (
    'code' => '2:0:0:30163',
    'name' => 'mailbox_record_not_found',
    'message' => 'Nenalezen příslušný záznam v tabulce mailboxes',
  ),
  '2:0:0:30164' => 
  array (
    'code' => '2:0:0:30164',
    'name' => 'missing_block',
    'message' => 'Chybí parametr \'block\'',
  ),
  '2:0:0:30165' => 
  array (
    'code' => '2:0:0:30165',
    'name' => 'invalid_block',
    'message' => 'Chybná hodnota parametru \'block\'',
  ),
  '2:0:0:30166' => 
  array (
    'code' => '2:0:0:30166',
    'name' => 'missing_enable_rbl',
    'message' => 'Chybí parametr \'enable_rbl\'',
  ),
  '2:0:0:30167' => 
  array (
    'code' => '2:0:0:30167',
    'name' => 'invalid_enable_rbl',
    'message' => 'Chybná hodnota parametru \'enable_rbl\'',
  ),
  '2:0:0:30168' => 
  array (
    'code' => '2:0:0:30168',
    'name' => 'missing_disable_blocking',
    'message' => 'Chybí parametr \'disable_blocking\'',
  ),
  '2:0:0:30169' => 
  array (
    'code' => '2:0:0:30169',
    'name' => 'invalid_disable_blocking',
    'message' => 'Chybná hodnota parametru \'disable_blocking\'',
  ),
  '2:0:0:30170' => 
  array (
    'code' => '2:0:0:30170',
    'name' => 'invalid_domain_alias_virtual_map_entry',
    'message' => 'Chybný záznam doménového aliasu ve virtuálních mapách',
  ),
  '2:0:0:30171' => 
  array (
    'code' => '2:0:0:30171',
    'name' => 'invalid_alias_virtual_map_entry',
    'message' => 'Chybný záznam aliasu ve virtuálních mapách',
  ),
  '2:0:0:30172' => 
  array (
    'code' => '2:0:0:30172',
    'name' => 'unsupported_quota_type',
    'message' => 'Nepodporovaný typ kvóty',
  ),
  '2:0:0:30173' => 
  array (
    'code' => '2:0:0:30173',
    'name' => 'mailbox_quota_limit_not_found',
    'message' => 'Individuální kvóta mailboxu nenalezena',
  ),
  '2:0:0:30174' => 
  array (
    'code' => '2:0:0:30174',
    'name' => 'invalid_quota_mb_min_max_limits',
    'message' => 'Neplatné limity minimální a maximální velikosti kvóty mailboxu',
  ),
  '2:0:0:30175' => 
  array (
    'code' => '2:0:0:30175',
    'name' => 'invalid_quota_mb_def_limit',
    'message' => 'Neplatný limit defaultní kvóty mailboxu',
  ),
  '2:0:0:30176' => 
  array (
    'code' => '2:0:0:30176',
    'name' => 'missing_quota_mb_min',
    'message' => 'Chybí parametr \'quota_mb_min\'',
  ),
  '2:0:0:30177' => 
  array (
    'code' => '2:0:0:30177',
    'name' => 'invalid_quota_mb_min',
    'message' => 'Chybná hodnota parametru \'quota_mb_min\'',
  ),
  '2:0:0:30178' => 
  array (
    'code' => '2:0:0:30178',
    'name' => 'missing_quota_mb_max',
    'message' => 'Chybí parametr \'quota_mb_max\'',
  ),
  '2:0:0:30179' => 
  array (
    'code' => '2:0:0:30179',
    'name' => 'invalid_quota_mb_max',
    'message' => 'Chybná hodnota parametru \'quota_mb_max\'',
  ),
  '2:0:0:30180' => 
  array (
    'code' => '2:0:0:30180',
    'name' => 'missing_quota_mb_def',
    'message' => 'Chybí parametr \'quota_mb_def\'',
  ),
  '2:0:0:30181' => 
  array (
    'code' => '2:0:0:30181',
    'name' => 'invalid_quota_mb_def',
    'message' => 'Chybná hodnota parametru \'quota_mb_def\'',
  ),
  '2:0:0:30182' => 
  array (
    'code' => '2:0:0:30182',
    'name' => 'mailbox_quota_limit_over_mb_max',
    'message' => 'Kvóta daného mailboxu je vyšší než maximální limit pro danou doménu',
  ),
  '2:0:0:30183' => 
  array (
    'code' => '2:0:0:30183',
    'name' => 'mailbox_quota_limit_under_mb_min',
    'message' => 'Kvóta daného mailboxu je nižší než minimální limit pro danou doménu',
  ),
  '2:0:0:30184' => 
  array (
    'code' => '2:0:0:30184',
    'name' => 'mailboxes_violate_domain_quota_restrictions',
    'message' => 'Jeden nebo více mailboxů porušuje limity omezení kvót pro danou doménu',
  ),
  '2:0:0:30185' => 
  array (
    'code' => '2:0:0:30185',
    'name' => 'mailboxes_over_quota_total',
    'message' => 'Součet kvót mailboxů překračuje celkovou kvótu domény',
  ),
  '2:0:0:30186' => 
  array (
    'code' => '2:0:0:30186',
    'name' => 'missing_quota_total',
    'message' => 'Chybí parametr \'quota_total\'',
  ),
  '2:0:0:30187' => 
  array (
    'code' => '2:0:0:30187',
    'name' => 'invalid_quota_total',
    'message' => 'Chybná hodnota parametru \'quota_total\'',
  ),
  '2:0:0:30188' => 
  array (
    'code' => '2:0:0:30188',
    'name' => 'missing_quota_limit',
    'message' => 'Chybí parametr \'quota_limit\'',
  ),
  '2:0:0:30189' => 
  array (
    'code' => '2:0:0:30189',
    'name' => 'invalid_quota_limit',
    'message' => 'Chybná hodnota parametru \'quota_limit\'',
  ),
  '2:0:0:30190' => 
  array (
    'code' => '2:0:0:30190',
    'name' => 'mailbox_quota_ex_not_found',
    'message' => 'Nenalezeny informace o nastavení kvóty daného mailboxu',
  ),
  '2:0:0:30191' => 
  array (
    'code' => '2:0:0:30191',
    'name' => 'missing_qw_check',
    'message' => 'Chybí parametr \'qw_check\'',
  ),
  '2:0:0:30192' => 
  array (
    'code' => '2:0:0:30192',
    'name' => 'invalid_qw_check',
    'message' => 'Chybná hodnota parametru \'qw_check\'',
  ),
  '2:0:0:30193' => 
  array (
    'code' => '2:0:0:30193',
    'name' => 'missing_relay_all',
    'message' => 'Chybí parametr \'relay_all\'',
  ),
  '2:0:0:30194' => 
  array (
    'code' => '2:0:0:30194',
    'name' => 'missing_qw_udelay',
    'message' => 'Chybí parametr \'qw_udelay\'',
  ),
  '2:0:0:30195' => 
  array (
    'code' => '2:0:0:30195',
    'name' => 'invalid_qw_udelay',
    'message' => 'Chybná hodnota parametru \'qw_udelay\'',
  ),
  '2:0:0:30196' => 
  array (
    'code' => '2:0:0:30196',
    'name' => 'missing_qw_adelay',
    'message' => 'Chybí parametr \'qw_adelay\'',
  ),
  '2:0:0:30197' => 
  array (
    'code' => '2:0:0:30197',
    'name' => 'invalid_qw_adelay',
    'message' => 'Chybná hodnota parametru \'qw_adelay\'',
  ),
  '2:0:0:30198' => 
  array (
    'code' => '2:0:0:30198',
    'name' => 'missing_qw_llim',
    'message' => 'Chybí parametr \'qw_llim\'',
  ),
  '2:0:0:30199' => 
  array (
    'code' => '2:0:0:30199',
    'name' => 'invalid_qw_llim',
    'message' => 'Chybná hodnota parametru \'qw_llim\'',
  ),
  '2:0:0:30200' => 
  array (
    'code' => '2:0:0:30200',
    'name' => 'missing_qw_hlim',
    'message' => 'Chybí parametr \'qw_hlim\'',
  ),
  '2:0:0:30201' => 
  array (
    'code' => '2:0:0:30201',
    'name' => 'invalid_qw_hlim',
    'message' => 'Chybná hodnota parametru \'qw_hlim\'',
  ),
  '2:0:0:30202' => 
  array (
    'code' => '2:0:0:30202',
    'name' => 'missing_qw_xlim',
    'message' => 'Chybí parametr \'qw_xlim\'',
  ),
  '2:0:0:30203' => 
  array (
    'code' => '2:0:0:30203',
    'name' => 'invalid_qw_xlim',
    'message' => 'Chybná hodnota parametru \'qw_xlim\'',
  ),
  '2:0:0:30204' => 
  array (
    'code' => '2:0:0:30204',
    'name' => 'missing_admin_email',
    'message' => 'Chybí parametr \'admin_email\'',
  ),
  '2:0:0:30205' => 
  array (
    'code' => '2:0:0:30205',
    'name' => 'invalid_admin_email',
    'message' => 'Chybná hodnota parametru \'admin_email\'',
  ),
  '2:0:0:30206' => 
  array (
    'code' => '2:0:0:30206',
    'name' => 'invalid_mailbox_quotawarn_limits',
    'message' => 'Chybné limity hlídaní obsazeného prostoru mailboxu',
  ),
  '2:0:0:30207' => 
  array (
    'code' => '2:0:0:30207',
    'name' => 'invalid_domain_quotawarn_limits',
    'message' => 'Chybné limity hlídaní obsazeného prostoru domény',
  ),
  '2:0:0:30208' => 
  array (
    'code' => '2:0:0:30208',
    'name' => 'mailboxes_violate_quotawarn_restrictions',
    'message' => 'Jeden nebo více mailboxů porušuje pravidla limitů hlídaní obsazeného prostoru pro danou doménu',
  ),
  '2:0:0:30209' => 
  array (
    'code' => '2:0:0:30209',
    'name' => 'missing_qw_email',
    'message' => 'Chybí parametr \'qw_email\'',
  ),
  '2:0:0:30210' => 
  array (
    'code' => '2:0:0:30210',
    'name' => 'invalid_qw_email',
    'message' => 'Chybná hodnota parametru \'qw_email\'',
  ),
  '2:0:0:30211' => 
  array (
    'code' => '2:0:0:30211',
    'name' => 'missing_language',
    'message' => 'Chybí parametr \'language\'',
  ),
  '2:0:0:30212' => 
  array (
    'code' => '2:0:0:30212',
    'name' => 'invalid_language',
    'message' => 'Chybná hodnota parametru \'language\'',
  ),
  '2:0:0:30213' => 
  array (
    'code' => '2:0:0:30213',
    'name' => 'missing_effective',
    'message' => 'Chybí parametr \'effective\'',
  ),
  '2:0:0:30214' => 
  array (
    'code' => '2:0:0:30214',
    'name' => 'invalid_effective',
    'message' => 'Chybná hodnota parametru \'effective\'',
  ),
  '2:0:0:30215' => 
  array (
    'code' => '2:0:0:30215',
    'name' => 'domain_is_stopped',
    'message' => 'Doména má zastavené poštovní služby',
  ),
  '2:0:0:30216' => 
  array (
    'code' => '2:0:0:30216',
    'name' => 'missing_can_edit',
    'message' => 'Schází parametr \'can_edit\'',
  ),
  '2:0:0:30217' => 
  array (
    'code' => '2:0:0:30217',
    'name' => 'invalid_can_edit',
    'message' => 'Chybná hodnota parametru \'can_edit\'',
  ),
  '2:0:0:30218' => 
  array (
    'code' => '2:0:0:30218',
    'name' => 'mailbox_quota_limit_below_usage',
    'message' => 'Disková kvóta mailboxu je nižší než jeho aktuální obsazený prostor',
  ),
  '2:0:0:30219' => 
  array (
    'code' => '2:0:0:30219',
    'name' => 'domains_must_differ',
    'message' => 'Domény musí být různé',
  ),
  '2:0:0:30220' => 
  array (
    'code' => '2:0:0:30220',
    'name' => 'src_domain_not_found',
    'message' => 'Zdrojová doména neexistuje',
  ),
  '2:0:0:30221' => 
  array (
    'code' => '2:0:0:30221',
    'name' => 'dst_domain_not_found',
    'message' => 'Cílová doména neexistuje',
  ),
  '2:0:0:30222' => 
  array (
    'code' => '2:0:0:30222',
    'name' => 'missing_src_domain',
    'message' => 'Schází parametr \'src_domain\'',
  ),
  '2:0:0:30223' => 
  array (
    'code' => '2:0:0:30223',
    'name' => 'invalid_src_domain',
    'message' => 'Chybná hodnota parametru \'src_domain\'',
  ),
  '2:0:0:30224' => 
  array (
    'code' => '2:0:0:30224',
    'name' => 'missing_dst_domain',
    'message' => 'Schází parametr \'dst_domain\'',
  ),
  '2:0:0:30225' => 
  array (
    'code' => '2:0:0:30225',
    'name' => 'invalid_dst_domain',
    'message' => 'Chybná hodnota parametru \'dst_domain\'',
  ),
  '2:0:0:30226' => 
  array (
    'code' => '2:0:0:30226',
    'name' => 'missing_merge',
    'message' => 'Schází parametr \'merge\'',
  ),
  '2:0:0:30227' => 
  array (
    'code' => '2:0:0:30227',
    'name' => 'invalid_merge',
    'message' => 'Chybná hodnota parametru \'merge\'',
  ),
  '2:0:0:30228' => 
  array (
    'code' => '2:0:0:30228',
    'name' => 'log_server_mcid_not_found',
    'message' => 'Nenalezeno mcid serveru s logy (chybný nebo neexistující název serveru s logy?',
  ),
  '2:0:0:30229' => 
  array (
    'code' => '2:0:0:30229',
    'name' => 'missing_log_filter',
    'message' => 'Schází parametr \'log_filter\'',
  ),
  '2:0:0:30230' => 
  array (
    'code' => '2:0:0:30230',
    'name' => 'invalid_log_filter',
    'message' => 'Chybná hodnota parametru \'log_filter\'',
  ),
  '2:0:0:30231' => 
  array (
    'code' => '2:0:0:30231',
    'name' => 'missing_report_email',
    'message' => 'Schází parametr \'report_email\'',
  ),
  '2:0:0:30232' => 
  array (
    'code' => '2:0:0:30232',
    'name' => 'invalid_report_email',
    'message' => 'Chybná hodnota parametru \'report_email\'',
  ),
  '2:0:0:30233' => 
  array (
    'code' => '2:0:0:30233',
    'name' => 'missing_find_email',
    'message' => 'Schází parametr \'find_email\'',
  ),
  '2:0:0:30234' => 
  array (
    'code' => '2:0:0:30234',
    'name' => 'invalid_find_email',
    'message' => 'Chybná hodnota parametru \'find_email\'',
  ),
  '2:0:0:30235' => 
  array (
    'code' => '2:0:0:30235',
    'name' => 'missing_start_date',
    'message' => 'Schází parametr \'start_date\'',
  ),
  '2:0:0:30236' => 
  array (
    'code' => '2:0:0:30236',
    'name' => 'invalid_start_date',
    'message' => 'Chybná hodnota parametru \'start_date\'',
  ),
  '2:0:0:30237' => 
  array (
    'code' => '2:0:0:30237',
    'name' => 'missing_end_date',
    'message' => 'Schází parametr \'end_date\'',
  ),
  '2:0:0:30238' => 
  array (
    'code' => '2:0:0:30238',
    'name' => 'invalid_end_date',
    'message' => 'Chybná hodnota parametru \'end_date\'',
  ),
  '2:0:0:30239' => 
  array (
    'code' => '2:0:0:30239',
    'name' => 'invalid_domain_list',
    'message' => 'Neplatný seznam domén',
  ),
  '2:0:0:30240' => 
  array (
    'code' => '2:0:0:30240',
    'name' => 'missing_dlid',
    'message' => 'Chybí parametr \'dlid\'',
  ),
  '2:0:0:30241' => 
  array (
    'code' => '2:0:0:30241',
    'name' => 'invalid_dlid',
    'message' => 'Chybná hodnota parametru \'dlid\'',
  ),
  '2:0:0:30242' => 
  array (
    'code' => '2:0:0:30242',
    'name' => 'domain_alias_already_exists_as_domain_alias',
    'message' => 'Doménový alias stejného jména již existuje',
  ),
  '2:0:0:30243' => 
  array (
    'code' => '2:0:0:30243',
    'name' => 'domain_already_exists_as_domain_alias',
    'message' => 'Doména stejného jména již existuje jako doménový alias',
  ),
  '2:0:0:30244' => 
  array (
    'code' => '2:0:0:30244',
    'name' => 'domain_alias_is_equal_to_domain',
    'message' => 'Doménový alias je totožný s doménovým jménem',
  ),
  '2:0:0:30245' => 
  array (
    'code' => '2:0:0:30245',
    'name' => 'slave_imap_command_not_found',
    'message' => 'Požadovaný slave imap příkaz nenalezen',
  ),
  '2:0:0:30246' => 
  array (
    'code' => '2:0:0:30246',
    'name' => 'slave_imap_command_exception',
    'message' => 'Požadovaný slave imap příkaz skončil výjimkou',
  ),
  '2:0:0:30247' => 
  array (
    'code' => '2:0:0:30247',
    'name' => 'slave_request_not_queued',
    'message' => 'Zařazení slave požadavku do fronty bylo odmítnuto',
  ),
  '2:0:0:30248' => 
  array (
    'code' => '2:0:0:30248',
    'name' => 'slave_wait_for_response_failed',
    'message' => 'Čekání na vyřízení slave požadavku selhalo',
  ),
  '2:0:0:30249' => 
  array (
    'code' => '2:0:0:30249',
    'name' => 'slave_request_failed',
    'message' => 'Slave požadavek selhal',
  ),
  '2:0:0:30250' => 
  array (
    'code' => '2:0:0:30250',
    'name' => 'slave_imap_connect_failed',
    'message' => 'Slave požadavek selhal při připojování k IMAP serveru',
  ),
  '2:0:0:30251' => 
  array (
    'code' => '2:0:0:30251',
    'name' => 'slave_no_command_result',
    'message' => 'Slave požadavek nevrátil žádný výsledek slave příkazu',
  ),
  '2:0:0:30252' => 
  array (
    'code' => '2:0:0:30252',
    'name' => 'slave_nonnumeric_command_result',
    'message' => 'Výsledek slave příkazu nelze převést na numerickou hodnotu',
  ),
  '2:0:0:30253' => 
  array (
    'code' => '2:0:0:30253',
    'name' => 'missing_qw_lflags',
    'message' => 'Chybí parametr \'qw_lflags\'',
  ),
  '2:0:0:30254' => 
  array (
    'code' => '2:0:0:30254',
    'name' => 'invalid_qw_lflags',
    'message' => 'Chybná hodnota parametru \'qw_lflags\'',
  ),
  '2:0:0:30255' => 
  array (
    'code' => '2:0:0:30255',
    'name' => 'missing_qw_hflags',
    'message' => 'Chybí parametr \'qw_hflags\'',
  ),
  '2:0:0:30256' => 
  array (
    'code' => '2:0:0:30256',
    'name' => 'invalid_qw_hflags',
    'message' => 'Chybná hodnota parametru \'qw_hflags\'',
  ),
  '2:0:0:30257' => 
  array (
    'code' => '2:0:0:30257',
    'name' => 'missing_qw_xflags',
    'message' => 'Chybí parametr \'qw_xflags\'',
  ),
  '2:0:0:30258' => 
  array (
    'code' => '2:0:0:30258',
    'name' => 'invalid_qw_xflags',
    'message' => 'Chybná hodnota parametru \'qw_xflags\'',
  ),
  '2:0:0:30259' => 
  array (
    'code' => '2:0:0:30259',
    'name' => 'missing_qw_dflags',
    'message' => 'Chybí parametr \'qw_dflags\'',
  ),
  '2:0:0:30260' => 
  array (
    'code' => '2:0:0:30260',
    'name' => 'invalid_qw_dflags',
    'message' => 'Chybná hodnota parametru \'qw_dflags\'',
  ),
  '2:0:0:30261' => 
  array (
    'code' => '2:0:0:30261',
    'name' => 'missing_qw_specified',
    'message' => 'Chybí parametr \'qw_specified\'',
  ),
  '2:0:0:30262' => 
  array (
    'code' => '2:0:0:30262',
    'name' => 'invalid_qw_specified',
    'message' => 'Chybná hodnota parametru \'qw_specified\'',
  ),
  '2:0:0:30263' => 
  array (
    'code' => '2:0:0:30263',
    'name' => 'imap_client_cannot_list_folders',
    'message' => 'Nelze vylistovat složky příslušné schránky na IMAP serveru',
  ),
  '2:0:0:30264' => 
  array (
    'code' => '2:0:0:30264',
    'name' => 'imap_client_cannot_stat_folder',
    'message' => 'Nelze zjistit stav některé složky příslušné schránky na IMAP serveru',
  ),
  '2:0:0:30265' => 
  array (
    'code' => '2:0:0:30265',
    'name' => 'imap_client_invalid_folder_status',
    'message' => 'Chybný stav některé složky příslušné schránky na IMAP serveru',
  ),
  '2:0:0:30266' => 
  array (
    'code' => '2:0:0:30266',
    'name' => 'folder_info_format_error',
    'message' => 'Chybný formát informací o složce mailboxu vrácený z backendu',
  ),
  '2:0:0:30267' => 
  array (
    'code' => '2:0:0:30267',
    'name' => 'username_already_exists_as_alias',
    'message' => 'Dané uživatelské jméno (název mailboxu) již existuje jako alias',
  ),
  '2:0:0:30268' => 
  array (
    'code' => '2:0:0:30268',
    'name' => 'cannot_subscribe_folder',
    'message' => 'Nelze se přihlásit ke složce mailboxu',
  ),
  '2:0:0:30269' => 
  array (
    'code' => '2:0:0:30269',
    'name' => 'cannot_unsubscribe_folder',
    'message' => 'Nelze zrušit odběr složky mailboxu',
  ),
  '2:0:0:30270' => 
  array (
    'code' => '2:0:0:30270',
    'name' => 'missing_fix_forwards',
    'message' => 'Chybí parametr \'fix_forwards\'',
  ),
  '2:0:0:30271' => 
  array (
    'code' => '2:0:0:30271',
    'name' => 'invalid_fix_forwards',
    'message' => 'Chybná hodnota parametru \'fix_forwards\'',
  ),
  '2:0:0:30272' => 
  array (
    'code' => '2:0:0:30272',
    'name' => 'domain_dlid_mismatch',
    'message' => 'Nesouhlasí očekávaný a skutečný seznam domén',
  ),
  '2:0:0:30273' => 
  array (
    'code' => '2:0:0:30273',
    'name' => 'illegal_username',
    'message' => 'Nedovolené uživatelské jméno',
  ),
  '2:0:0:30274' => 
  array (
    'code' => '2:0:0:30274',
    'name' => 'missing_smtp_block_reason',
    'message' => 'Chybí parametr \'smtp_block_reason\'',
  ),
  '2:0:0:30275' => 
  array (
    'code' => '2:0:0:30275',
    'name' => 'invalid_smtp_block_reason',
    'message' => 'Chybný parametr \'smtp_block_reason\'',
  ),
  '2:0:0:30276' => 
  array (
    'code' => '2:0:0:30276',
    'name' => 'missing_sender_forgery_forbidden',
    'message' => 'Chybí parametr \'sender_forgery_forbidden\'',
  ),
  '2:0:0:30277' => 
  array (
    'code' => '2:0:0:30277',
    'name' => 'invalid_sender_forgery_forbidden',
    'message' => 'Chybný parametr \'sender_forgery_forbidden\'',
  ),
  '2:0:0:30278' => 
  array (
    'code' => '2:0:0:30278',
    'name' => 'password_is_broken',
    'message' => 'Dané heslo bylo v minulosti zneužité',
  ),
  '2:1:0:30001' => 
  array (
    'code' => '2:1:0:30001',
    'name' => 'folder_autoclear_rule_not_found',
    'message' => 'Pravidlo automatického mazaní pro danou složku neexistuje',
  ),
  '2:1:0:30002' => 
  array (
    'code' => '2:1:0:30002',
    'name' => 'zero_check_interval',
    'message' => 'Interval kontroly nesmí být nulový',
  ),
  '2:1:0:30003' => 
  array (
    'code' => '2:1:0:30003',
    'name' => 'quota_percents_invalid',
    'message' => 'Chybné hodnoty horního a dolního limitu procet kvóty',
  ),
  '2:1:0:30004' => 
  array (
    'code' => '2:1:0:30004',
    'name' => 'quota_percents_order',
    'message' => 'Chybné pořadí horního a dolního limitu procet kvóty',
  ),
  '2:1:0:30005' => 
  array (
    'code' => '2:1:0:30005',
    'name' => 'zero_mail_age',
    'message' => 'Stáří mazaných mailů musí být minimálně jeden den',
  ),
  '2:1:0:30006' => 
  array (
    'code' => '2:1:0:30006',
    'name' => 'missing_active_param',
    'message' => 'Chybí parametr \'active\'',
  ),
  '2:1:0:30007' => 
  array (
    'code' => '2:1:0:30007',
    'name' => 'invalid_active_param',
    'message' => 'Chybná hodnota parametru \'active\'',
  ),
  '2:1:0:30008' => 
  array (
    'code' => '2:1:0:30008',
    'name' => 'missing_recursive_param',
    'message' => 'Chybí parametr \'recursive\'',
  ),
  '2:1:0:30009' => 
  array (
    'code' => '2:1:0:30009',
    'name' => 'invalid_recursive_param',
    'message' => 'Chybná hodnota parametru \'recursive\'',
  ),
  '2:1:0:30010' => 
  array (
    'code' => '2:1:0:30010',
    'name' => 'missing_mail_age_used_param',
    'message' => 'Chybí parametr \'mail_age_used\'',
  ),
  '2:1:0:30011' => 
  array (
    'code' => '2:1:0:30011',
    'name' => 'invalid_mail_age_used_param',
    'message' => 'Chybná hodnota parametru \'mail_age_used\'',
  ),
  '2:1:0:30012' => 
  array (
    'code' => '2:1:0:30012',
    'name' => 'missing_quota_percent_used_param',
    'message' => 'Chybí parametr \'quota_percent_used\'',
  ),
  '2:1:0:30013' => 
  array (
    'code' => '2:1:0:30013',
    'name' => 'invalid_quota_percent_used_param',
    'message' => 'Chybná hodnota parametru \'quota_percent_used\'',
  ),
  '2:1:0:30014' => 
  array (
    'code' => '2:1:0:30014',
    'name' => 'missing_check_interval_param',
    'message' => 'Chybí parametr \'check_interval\'',
  ),
  '2:1:0:30015' => 
  array (
    'code' => '2:1:0:30015',
    'name' => 'invalid_check_interval_param',
    'message' => 'Chybná hodnota parametru \'check_interval\'',
  ),
  '2:1:0:30016' => 
  array (
    'code' => '2:1:0:30016',
    'name' => 'missing_mail_age_param',
    'message' => 'Chybí parametr \'mail_age\'',
  ),
  '2:1:0:30017' => 
  array (
    'code' => '2:1:0:30017',
    'name' => 'invalid_mail_age_param',
    'message' => 'Chybná hodnota parametru \'mail_age\'',
  ),
  '2:1:0:30018' => 
  array (
    'code' => '2:1:0:30018',
    'name' => 'missing_quota_percent_hi_param',
    'message' => 'Chybí parametr \'quota_percent_hi\'',
  ),
  '2:1:0:30019' => 
  array (
    'code' => '2:1:0:30019',
    'name' => 'invalid_quota_percent_hi_param',
    'message' => 'Chybná hodnota parametru \'quota_percent_hi\'',
  ),
  '2:1:0:30020' => 
  array (
    'code' => '2:1:0:30020',
    'name' => 'missing_quota_percent_lo_param',
    'message' => 'Chybí parametr \'quota_percent_lo\'',
  ),
  '2:1:0:30021' => 
  array (
    'code' => '2:1:0:30021',
    'name' => 'invalid_quota_percent_lo_param',
    'message' => 'Chybná hodnota parametru \'quota_percent_lo\'',
  ),
  '2:1:0:30022' => 
  array (
    'code' => '2:1:0:30022',
    'name' => 'avels_script_gen_parse_error',
    'message' => 'Chyba při rozboru popisu stávajících filtrovacích pravidel',
  ),
  '2:1:0:30023' => 
  array (
    'code' => '2:1:0:30023',
    'name' => 'avels_script_version_not_found',
    'message' => 'Chyba při rozboru popisu stávajících filtrovacích pravidel, nenalezena verze avelsieve',
  ),
  '2:1:0:30024' => 
  array (
    'code' => '2:1:0:30024',
    'name' => 'avels_script_created_not_found',
    'message' => 'Chyba při rozboru popisu stávajících filtrovacích pravidel, nenalezeno datum a čas vytvoření',
  ),
  '2:1:0:30025' => 
  array (
    'code' => '2:1:0:30025',
    'name' => 'avels_script_modified_not_found',
    'message' => 'Chyba při rozboru popisu stávajících filtrovacích pravidel, nenalezeno datum a čas poslední modifikace',
  ),
  '2:1:0:30026' => 
  array (
    'code' => '2:1:0:30026',
    'name' => 'avels_script_missing_if_before_rule',
    'message' => 'Chyba při rozboru popisu stávajících filtrovacích pravidel, chybí \'if\' před pravidlem',
  ),
  '2:1:0:30027' => 
  array (
    'code' => '2:1:0:30027',
    'name' => 'avels_script_wr_missing_version',
    'message' => 'Chyba při zápisu filtrovacích pravidel, chybí verze avelsieve',
  ),
  '2:1:0:30028' => 
  array (
    'code' => '2:1:0:30028',
    'name' => 'avels_script_wr_missing_require',
    'message' => 'Chyba při zápisu filtrovacích pravidel, chybí řádek \'require\'',
  ),
  '2:1:0:30029' => 
  array (
    'code' => '2:1:0:30029',
    'name' => 'missing_antispam_level_param',
    'message' => 'Chybí parametr \'antispam_level\'',
  ),
  '2:1:0:30030' => 
  array (
    'code' => '2:1:0:30030',
    'name' => 'invalid_antispam_level_param',
    'message' => 'Chybná hodnota parametru \'antispam_level\'',
  ),
  '2:1:0:30031' => 
  array (
    'code' => '2:1:0:30031',
    'name' => 'missing_antispam_action_param',
    'message' => 'Chybí parametr \'antispam_action\'',
  ),
  '2:1:0:30032' => 
  array (
    'code' => '2:1:0:30032',
    'name' => 'invalid_antispam_action_param',
    'message' => 'Chybná hodnota parametru \'antispam_action\'',
  ),
  '2:1:0:30033' => 
  array (
    'code' => '2:1:0:30033',
    'name' => 'amavis_policy_name_not_found',
    'message' => 'Pravidlo politiky amavisu s požadovaným názvem nenalezeno',
  ),
  '2:1:0:30034' => 
  array (
    'code' => '2:1:0:30034',
    'name' => 'cannot_connect_to_timsieved',
    'message' => 'Není možné se připojit na vzdáleného sieve démona \'timsieved\'',
  ),
  '2:1:0:30035' => 
  array (
    'code' => '2:1:0:30035',
    'name' => 'cannot_list_sieve_scripts',
    'message' => 'Chyba při zjišťování seznamu sieve skriptů',
  ),
  '2:1:0:30036' => 
  array (
    'code' => '2:1:0:30036',
    'name' => 'cannot_download_sieve_script',
    'message' => 'Chyba při stahování sieve skriptu z IMAP serveru',
  ),
  '2:1:0:30037' => 
  array (
    'code' => '2:1:0:30037',
    'name' => 'cannot_upload_sieve_script',
    'message' => 'Chyba při přenášení sieve skriptu na IMAP server',
  ),
  '2:1:0:30038' => 
  array (
    'code' => '2:1:0:30038',
    'name' => 'cimap_client_perl_internal_error',
    'message' => 'Vnitřní chyba v perlovém skriptu CImapClient.pm',
  ),
  '2:1:0:30039' => 
  array (
    'code' => '2:1:0:30039',
    'name' => 'cimap_php_unserialize_parse_error',
    'message' => 'Chyba při parsingu avelsieve filtru (php_unserialize',
  ),
  '2:1:0:30040' => 
  array (
    'code' => '2:1:0:30040',
    'name' => 'cannot_activate_sieve_script',
    'message' => 'Chyba při aktivaci sieve skriptu na IMAP serveru',
  ),
  '2:1:0:30041' => 
  array (
    'code' => '2:1:0:30041',
    'name' => 'missing_last_rule_id',
    'message' => 'Chybí parametr \'last_rule_id\'',
  ),
  '2:1:0:30042' => 
  array (
    'code' => '2:1:0:30042',
    'name' => 'invalid_last_rule_id',
    'message' => 'Chybná hodnota parametru \'last_rule_id\'',
  ),
  '2:2:0:30001' => 
  array (
    'code' => '2:2:0:30001',
    'name' => 'batch_domain_backup_dir_is_not_dir',
    'message' => 'Adresář záloh struktury domény není adresářem',
  ),
  '2:2:0:30002' => 
  array (
    'code' => '2:2:0:30002',
    'name' => 'batch_cannot_create_domain_backup_dir',
    'message' => 'Nelze vytvořit adresář záloh struktury domény',
  ),
  '2:2:0:30003' => 
  array (
    'code' => '2:2:0:30003',
    'name' => 'batch_cannot_create_domain_backup_file',
    'message' => 'Nelze vytvořit soubor pro zálohu struktury domény',
  ),
  '2:2:0:30004' => 
  array (
    'code' => '2:2:0:30004',
    'name' => 'batch_cannot_write_domain_backup_file',
    'message' => 'Chyba při zápisu souboru zálohy struktury domény',
  ),
  '2:3:0:30001' => 
  array (
    'code' => '2:3:0:30001',
    'name' => 'brq_unknown_action',
    'message' => 'Neznámá akce (brq',
  ),
  '2:3:0:30003' => 
  array (
    'code' => '2:3:0:30003',
    'name' => 'brq_backend_error',
    'message' => 'Chyba při provádění vzdálené akce na serveru (brq',
  ),
  '2:3:0:30004' => 
  array (
    'code' => '2:3:0:30004',
    'name' => 'brq_no_relay_log_files_match',
    'message' => 'Nejsou k dispozici žádné log soubory relayů, které by odpovídaly zadaným kritériím (brq',
  ),
  '2:3:0:30005' => 
  array (
    'code' => '2:3:0:30005',
    'name' => 'brq_no_imap_log_files_match',
    'message' => 'Nejsou k dispozici žádné log soubory imap serverů, které by odpovídaly zadaným kritériím (brq',
  ),
  '2:3:0:30006' => 
  array (
    'code' => '2:3:0:30006',
    'name' => 'brq_no_smtp_log_files_match',
    'message' => 'Nejsou k dispozici žádné log soubory smtp serverů, které by odpovídaly zadaným kritériím (brq',
  ),
  '2:4:0:30001' => 
  array (
    'code' => '2:4:0:30001',
    'name' => 'cannot_parse_imap_folders_acls',
    'message' => 'Chyba při parsingu IMAP ACL záznamů',
  ),
  '2:4:0:30002' => 
  array (
    'code' => '2:4:0:30002',
    'name' => 'grant_username_not_found',
    'message' => 'Mailbox kterému mají být poskytnuta práva neexistuje',
  ),
  '2:4:0:30003' => 
  array (
    'code' => '2:4:0:30003',
    'name' => 'missing_acl_rights',
    'message' => 'Chybí parametr \'acl_rights\'',
  ),
  '2:4:0:30004' => 
  array (
    'code' => '2:4:0:30004',
    'name' => 'invalid_acl_rights',
    'message' => 'Chybná hodnota parametru \'acl_rights\'',
  ),
  '2:4:0:30005' => 
  array (
    'code' => '2:4:0:30005',
    'name' => 'missing_grant_username',
    'message' => 'Chybí parametr \'grant_user\'',
  ),
  '2:4:0:30006' => 
  array (
    'code' => '2:4:0:30006',
    'name' => 'invalid_grant_username',
    'message' => 'Chybná hodnota parametru \'grant_user\'',
  ),
  '2:5:0:30001' => 
  array (
    'code' => '2:5:0:30001',
    'name' => 'cdkim_module_not_found',
    'message' => 'CDKIM modul není k dispozici',
  ),
  '2:5:0:30002' => 
  array (
    'code' => '2:5:0:30002',
    'name' => 'missing_dkim_enable',
    'message' => 'Chybí parametr \'dkim_enable\'',
  ),
  '2:5:0:30003' => 
  array (
    'code' => '2:5:0:30003',
    'name' => 'invalid_dkim_enable',
    'message' => 'Chybná hodnota parametru \'dkim_enable\'',
  ),
  '2:5:0:30004' => 
  array (
    'code' => '2:5:0:30004',
    'name' => 'missing_dkim_subsign',
    'message' => 'Chybí parametr \'dkim_subsign\'',
  ),
  '2:5:0:30005' => 
  array (
    'code' => '2:5:0:30005',
    'name' => 'invalid_dkim_subsign',
    'message' => 'Chybná hodnota parametru \'dkim_subsign\'',
  ),
);
}
?>