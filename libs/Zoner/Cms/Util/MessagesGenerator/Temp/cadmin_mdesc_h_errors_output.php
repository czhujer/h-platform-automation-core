<?php
class Errors {

#copy $_errors to module file
 protected $_errors = array (
  '9:0:0:30001' => 
  array (
    'code' => '9:0:0:30001',
    'name' => 'unknown_error',
    'message' => 'Nastala neznámá chyba',
  ),
  '9:0:0:30002' => 
  array (
    'code' => '9:0:0:30002',
    'name' => 'unknown_message',
    'message' => 'Byla zaslána neznámá zpráva',
  ),
  '9:0:0:30003' => 
  array (
    'code' => '9:0:0:30003',
    'name' => 'bad_credentials',
    'message' => 'Špatné přihlašovací údaje',
  ),
  '9:0:0:30004' => 
  array (
    'code' => '9:0:0:30004',
    'name' => 'access_denied',
    'message' => 'Nemáte dostatečná oprávnění',
  ),
  '9:0:0:30005' => 
  array (
    'code' => '9:0:0:30005',
    'name' => 'adding_ccc_actions_failed',
    'message' => 'Nepodařilo se vložit akce CCC',
  ),
  '9:0:0:30006' => 
  array (
    'code' => '9:0:0:30006',
    'name' => 'stopping_service_failed',
    'message' => 'Zastavení služby se nezdařilo',
  ),
  '9:0:0:30007' => 
  array (
    'code' => '9:0:0:30007',
    'name' => 'service_not_found',
    'message' => 'Služba nenalezena',
  ),
  '9:0:0:30008' => 
  array (
    'code' => '9:0:0:30008',
    'name' => 'service_starting_stopping_not_supported',
    'message' => 'Spouštění a zastavování služby není podporováno',
  ),
  '9:0:0:30009' => 
  array (
    'code' => '9:0:0:30009',
    'name' => 'service_starting_not_supported',
    'message' => 'Spouštění služby není podporováno',
  ),
  '9:0:0:30010' => 
  array (
    'code' => '9:0:0:30010',
    'name' => 'starting_service_failed',
    'message' => 'Spuštění služby se nezdařilo',
  ),
  '9:0:0:30011' => 
  array (
    'code' => '9:0:0:30011',
    'name' => 'service_already_deleted',
    'message' => 'Služba je smazaná',
  ),
  '9:0:0:30012' => 
  array (
    'code' => '9:0:0:30012',
    'name' => 'deleting_service_failed',
    'message' => 'Smazání služby se nezdařilo',
  ),
  '9:0:0:30013' => 
  array (
    'code' => '9:0:0:30013',
    'name' => 'sql_error',
    'message' => 'Nastala SQL chyba',
  ),
  '9:0:0:30014' => 
  array (
    'code' => '9:0:0:30014',
    'name' => 'remote_addr_forbidden',
    'message' => 'Přístup ze zakázané adresy',
  ),
  '9:0:0:30015' => 
  array (
    'code' => '9:0:0:30015',
    'name' => 'exception_occured',
    'message' => 'Nastala vyjímka',
  ),
  '9:0:0:30016' => 
  array (
    'code' => '9:0:0:30016',
    'name' => 'service_has_not_any_dns_records',
    'message' => 'Služba nemá žádné dns záznamy',
  ),
  '9:0:0:30017' => 
  array (
    'code' => '9:0:0:30017',
    'name' => 'insert_dns_a_records_failed',
    'message' => 'Nepodařilo se přidat dns A záznamy',
  ),
  '9:0:0:30018' => 
  array (
    'code' => '9:0:0:30018',
    'name' => 'delete_dns_a_records_failed',
    'message' => 'Nepodařilo se smazat dns A záznamy',
  ),
  '9:0:0:30019' => 
  array (
    'code' => '9:0:0:30019',
    'name' => 'dns_a_records_not_defined',
    'message' => 'Dns A záznamy nejsou definovány',
  ),
  '9:0:0:30020' => 
  array (
    'code' => '9:0:0:30020',
    'name' => 'dns_a_records_not_valid',
    'message' => 'Dns A záznamy nejsou platné',
  ),
  '9:0:0:30021' => 
  array (
    'code' => '9:0:0:30021',
    'name' => 'dns_a_records_not_available',
    'message' => 'Dns A záznamy nejsou volné',
  ),
  '9:0:0:30022' => 
  array (
    'code' => '9:0:0:30022',
    'name' => 'dns_a_records_already_exist',
    'message' => 'Dns A záznamy již existují',
  ),
  '9:0:0:30023' => 
  array (
    'code' => '9:0:0:30023',
    'name' => 'insert_dns_cname_records_failed',
    'message' => 'Nepodařilo se přidat dns CNAME záznamy',
  ),
  '9:0:0:30024' => 
  array (
    'code' => '9:0:0:30024',
    'name' => 'delete_dns_cname_records_failed',
    'message' => 'Nepodařilo se smazat dns CNAME záznamy',
  ),
  '9:0:0:30025' => 
  array (
    'code' => '9:0:0:30025',
    'name' => 'dns_cname_records_not_defined',
    'message' => 'Dns CNAME záznamy nejsou definovány',
  ),
  '9:0:0:30026' => 
  array (
    'code' => '9:0:0:30026',
    'name' => 'dns_cname_records_not_valid',
    'message' => 'Dns CNAME záznamy nejsou platné',
  ),
  '9:0:0:30027' => 
  array (
    'code' => '9:0:0:30027',
    'name' => 'dns_cname_records_not_available',
    'message' => 'Dns CNAME záznamy nejsou volné',
  ),
  '9:0:0:30028' => 
  array (
    'code' => '9:0:0:30028',
    'name' => 'dns_cname_records_already_exist',
    'message' => 'Dns CNAME záznamy již existují',
  ),
  '9:0:0:30029' => 
  array (
    'code' => '9:0:0:30029',
    'name' => 'dns_duplicite_records_found',
    'message' => 'Byly nalezeny duplicitní záznamy v dns',
  ),
  '9:0:0:30030' => 
  array (
    'code' => '9:0:0:30030',
    'name' => 'insert_dns_mx_records_failed',
    'message' => 'Nepodařilo se přidat dns MX záznamy',
  ),
  '9:0:0:30031' => 
  array (
    'code' => '9:0:0:30031',
    'name' => 'delete_dns_mx_records_failed',
    'message' => 'Nepodařilo se smazat dns MX záznamy',
  ),
  '9:0:0:30032' => 
  array (
    'code' => '9:0:0:30032',
    'name' => 'dns_mx_records_not_defined',
    'message' => 'Dns MX záznamy nejsou definovány',
  ),
  '9:0:0:30033' => 
  array (
    'code' => '9:0:0:30033',
    'name' => 'dns_mx_records_not_valid',
    'message' => 'Dns MX záznamy nejsou platné',
  ),
  '9:0:0:30034' => 
  array (
    'code' => '9:0:0:30034',
    'name' => 'dns_mx_records_not_available',
    'message' => 'Dns MX záznamy nejsou volné',
  ),
  '9:0:0:30035' => 
  array (
    'code' => '9:0:0:30035',
    'name' => 'dns_mx_records_already_exist',
    'message' => 'Dns MX záznamy již existují',
  ),
  '9:0:0:30036' => 
  array (
    'code' => '9:0:0:30036',
    'name' => 'insert_dns_txt_records_failed',
    'message' => 'Nepodařilo se přidat dns TXT záznamy',
  ),
  '9:0:0:30037' => 
  array (
    'code' => '9:0:0:30037',
    'name' => 'delete_dns_txt_records_failed',
    'message' => 'Nepodařilo se smazat dns TXT záznamy',
  ),
  '9:0:0:30038' => 
  array (
    'code' => '9:0:0:30038',
    'name' => 'dns_txt_records_not_defined',
    'message' => 'Dns TXT záznamy nejsou definovány',
  ),
  '9:0:0:30039' => 
  array (
    'code' => '9:0:0:30039',
    'name' => 'dns_txt_records_not_valid',
    'message' => 'Dns TXT záznamy nejsou platné',
  ),
  '9:0:0:30040' => 
  array (
    'code' => '9:0:0:30040',
    'name' => 'dns_txt_records_not_available',
    'message' => 'Dns TXT záznamy nejsou volné',
  ),
  '9:0:0:30041' => 
  array (
    'code' => '9:0:0:30041',
    'name' => 'dns_txt_records_already_exist',
    'message' => 'Dns TXT záznamy již existují',
  ),
  '9:0:0:30042' => 
  array (
    'code' => '9:0:0:30042',
    'name' => 'insert_dns_srv_records_failed',
    'message' => 'Nepodařilo se přidat dns SRV záznamy',
  ),
  '9:0:0:30043' => 
  array (
    'code' => '9:0:0:30043',
    'name' => 'delete_dns_srv_records_failed',
    'message' => 'Nepodařilo se smazat dns SRV záznamy',
  ),
  '9:0:0:30044' => 
  array (
    'code' => '9:0:0:30044',
    'name' => 'dns_srv_records_not_defined',
    'message' => 'Dns SRV záznamy nejsou definovány',
  ),
  '9:0:0:30045' => 
  array (
    'code' => '9:0:0:30045',
    'name' => 'dns_srv_records_not_valid',
    'message' => 'Dns SRV záznamy nejsou platné',
  ),
  '9:0:0:30046' => 
  array (
    'code' => '9:0:0:30046',
    'name' => 'dns_srv_records_not_available',
    'message' => 'Dns SRV záznamy nejsou volné',
  ),
  '9:0:0:30047' => 
  array (
    'code' => '9:0:0:30047',
    'name' => 'dns_srv_records_already_exist',
    'message' => 'Dns SRV záznamy již existují',
  ),
  '9:0:0:30048' => 
  array (
    'code' => '9:0:0:30048',
    'name' => 'service_no_mailserver_found',
    'message' => 'Služba má nemá náš mailserver',
  ),
  '9:0:0:30049' => 
  array (
    'code' => '9:0:0:30049',
    'name' => 'server_not_imap_server',
    'message' => 'Server není IMAP server',
  ),
  '9:0:0:30050' => 
  array (
    'code' => '9:0:0:30050',
    'name' => 'service_mailserver_already_exist',
    'message' => 'Služba má již mailserver nastaven',
  ),
  '9:0:0:30051' => 
  array (
    'code' => '9:0:0:30051',
    'name' => 'service_mailserver_not_available',
    'message' => 'Služba v dané variantě nemůže mít náš mailserver',
  ),
  '9:0:0:30052' => 
  array (
    'code' => '9:0:0:30052',
    'name' => 'mail_quota_not_defined',
    'message' => 'Daná varianta nemá nastavenou poštovní kvótu',
  ),
  '9:0:0:30053' => 
  array (
    'code' => '9:0:0:30053',
    'name' => 'no_bonus_found',
    'message' => 'Daný bonus nebyl nalezen',
  ),
  '9:0:0:30054' => 
  array (
    'code' => '9:0:0:30054',
    'name' => 'variant_not_valid',
    'message' => 'Kód varianty není platný',
  ),
  '9:0:0:30055' => 
  array (
    'code' => '9:0:0:30055',
    'name' => 'service_name_not_valid',
    'message' => 'Název služby není platný',
  ),
  '9:0:0:30056' => 
  array (
    'code' => '9:0:0:30056',
    'name' => 'invoicing_not_valid',
    'message' => 'Fakturační termíny nejsou platné',
  ),
  '9:0:0:30057' => 
  array (
    'code' => '9:0:0:30057',
    'name' => 'payment_period_not_defined',
    'message' => 'Fakturační období není definováno',
  ),
  '9:0:0:30058' => 
  array (
    'code' => '9:0:0:30058',
    'name' => 'payment_period_not_valid',
    'message' => 'Fakturační období není platné',
  ),
  '9:0:0:30059' => 
  array (
    'code' => '9:0:0:30059',
    'name' => 'due_from_not_defined',
    'message' => 'Datum zahájení fakturace není definováno',
  ),
  '9:0:0:30060' => 
  array (
    'code' => '9:0:0:30060',
    'name' => 'service_ftp_locking_not_supported',
    'message' => 'Zamykání FTP není podporováno',
  ),
  '9:0:0:30061' => 
  array (
    'code' => '9:0:0:30061',
    'name' => 'cannot_perform',
    'message' => 'Nelze provést',
  ),
  '9:0:0:30062' => 
  array (
    'code' => '9:0:0:30062',
    'name' => 'mailbox_user_not_defined',
    'message' => 'Název poštovní schránky není definován',
  ),
  '9:0:0:30063' => 
  array (
    'code' => '9:0:0:30063',
    'name' => 'mailbox_password_not_defined',
    'message' => 'Heslo poštovní schránky není definováno',
  ),
  '9:0:0:30064' => 
  array (
    'code' => '9:0:0:30064',
    'name' => 'hash_not_valid',
    'message' => 'Hash není platný',
  ),
  '9:0:0:30065' => 
  array (
    'code' => '9:0:0:30065',
    'name' => 'dns_cms_error',
    'message' => 'Nastala chyba při volání CMS pro DNS',
  ),
  '9:0:0:30066' => 
  array (
    'code' => '9:0:0:30066',
    'name' => 'insert_dns_aaaa_records_failed',
    'message' => 'Nepodařilo se přidat dns AAAA záznamy',
  ),
  '9:0:0:30067' => 
  array (
    'code' => '9:0:0:30067',
    'name' => 'delete_dns_aaaa_records_failed',
    'message' => 'Nepodařilo se smazat dns AAAA záznamy',
  ),
  '9:0:0:30068' => 
  array (
    'code' => '9:0:0:30068',
    'name' => 'dns_aaaa_records_not_defined',
    'message' => 'Dns AAAA záznamy nejsou definovány',
  ),
  '9:0:0:30069' => 
  array (
    'code' => '9:0:0:30069',
    'name' => 'dns_aaaa_records_not_valid',
    'message' => 'Dns AAAA záznamy nejsou platné',
  ),
  '9:0:0:30070' => 
  array (
    'code' => '9:0:0:30070',
    'name' => 'dns_aaaa_records_not_available',
    'message' => 'Dns AAAA záznamy nejsou volné',
  ),
  '9:0:0:30071' => 
  array (
    'code' => '9:0:0:30071',
    'name' => 'dns_aaaa_records_already_exist',
    'message' => 'Dns AAAA záznamy již existují',
  ),
  '9:1:0:30002' => 
  array (
    'code' => '9:1:0:30002',
    'name' => 'customer_data_company_name_not_defined',
    'message' => 'Údaj pro název společnosti zákazníka není definován',
  ),
  '9:1:0:30003' => 
  array (
    'code' => '9:1:0:30003',
    'name' => 'customer_data_company_name_too_long',
    'message' => 'Údaj pro název společnosti zákazníka překročil povolenou délku',
  ),
  '9:1:0:30004' => 
  array (
    'code' => '9:1:0:30004',
    'name' => 'customer_data_company_name_not_token',
    'message' => 'Údaj pro název společnosti zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30005' => 
  array (
    'code' => '9:1:0:30005',
    'name' => 'customer_data_street_not_defined',
    'message' => 'Údaj pro ulici zákazníka není definován',
  ),
  '9:1:0:30006' => 
  array (
    'code' => '9:1:0:30006',
    'name' => 'customer_data_street_too_long',
    'message' => 'Údaj pro ulici zákazníka překročil povolenou délku',
  ),
  '9:1:0:30007' => 
  array (
    'code' => '9:1:0:30007',
    'name' => 'customer_data_street_not_token',
    'message' => 'Údaj pro ulici zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30008' => 
  array (
    'code' => '9:1:0:30008',
    'name' => 'customer_data_city_not_defined',
    'message' => 'Údaj pro město zákazníka není definován',
  ),
  '9:1:0:30009' => 
  array (
    'code' => '9:1:0:30009',
    'name' => 'customer_data_city_too_long',
    'message' => 'Údaj pro město zákazníka překročil povolenou délku',
  ),
  '9:1:0:30010' => 
  array (
    'code' => '9:1:0:30010',
    'name' => 'customer_data_city_not_token',
    'message' => 'Údaj pro město zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30011' => 
  array (
    'code' => '9:1:0:30011',
    'name' => 'customer_data_zip_not_defined',
    'message' => 'Údaj pro PSČ zákazníka není definován',
  ),
  '9:1:0:30012' => 
  array (
    'code' => '9:1:0:30012',
    'name' => 'customer_data_zip_too_long',
    'message' => 'Údaj pro PSČ zákazníka překročil povolenou délku',
  ),
  '9:1:0:30013' => 
  array (
    'code' => '9:1:0:30013',
    'name' => 'customer_data_zip_not_token',
    'message' => 'Údaj pro PSČ zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30014' => 
  array (
    'code' => '9:1:0:30014',
    'name' => 'customer_data_country_not_defined',
    'message' => 'Údaj pro stát zákazníka není definován',
  ),
  '9:1:0:30015' => 
  array (
    'code' => '9:1:0:30015',
    'name' => 'customer_data_country_not_valid',
    'message' => 'Údaj pro stát zákazníka není platný',
  ),
  '9:1:0:30016' => 
  array (
    'code' => '9:1:0:30016',
    'name' => 'customer_data_ico_too_long',
    'message' => 'Údaj pro IČ zákazníka překročil povolenou délku',
  ),
  '9:1:0:30017' => 
  array (
    'code' => '9:1:0:30017',
    'name' => 'customer_data_ico_not_valid',
    'message' => 'Údaj pro IČ zákazníka není platný',
  ),
  '9:1:0:30018' => 
  array (
    'code' => '9:1:0:30018',
    'name' => 'customer_data_dic_too_long',
    'message' => 'Údaj pro DIČ zákazníka překročil povolenou délku',
  ),
  '9:1:0:30019' => 
  array (
    'code' => '9:1:0:30019',
    'name' => 'customer_data_dic_not_valid',
    'message' => 'Údaj pro DIČ zákazníka není platný',
  ),
  '9:1:0:30020' => 
  array (
    'code' => '9:1:0:30020',
    'name' => 'customer_data_bank_too_long',
    'message' => 'Údaj pro banku zákazníka překročil povolenou délku',
  ),
  '9:1:0:30021' => 
  array (
    'code' => '9:1:0:30021',
    'name' => 'customer_data_tel_not_defined',
    'message' => 'Údaj pro telefon zákazníka není definován',
  ),
  '9:1:0:30022' => 
  array (
    'code' => '9:1:0:30022',
    'name' => 'customer_data_tel_too_long',
    'message' => 'Údaj pro telefon zákazníka překročil povolenou délku',
  ),
  '9:1:0:30023' => 
  array (
    'code' => '9:1:0:30023',
    'name' => 'customer_data_tel_not_valid',
    'message' => 'Údaj pro telefon zákazníka není platný',
  ),
  '9:1:0:30024' => 
  array (
    'code' => '9:1:0:30024',
    'name' => 'customer_data_fax_too_long',
    'message' => 'Údaj pro fax zákazníka překročil povolenou délku',
  ),
  '9:1:0:30025' => 
  array (
    'code' => '9:1:0:30025',
    'name' => 'customer_data_fax_not_valid',
    'message' => 'Údaj pro fax zákazníka není platný',
  ),
  '9:1:0:30026' => 
  array (
    'code' => '9:1:0:30026',
    'name' => 'customer_data_email_not_defined',
    'message' => 'Údaj pro email zákazníka není definován',
  ),
  '9:1:0:30027' => 
  array (
    'code' => '9:1:0:30027',
    'name' => 'customer_data_email_too_long',
    'message' => 'Údaj pro email zákazníka překročil povolenou délku',
  ),
  '9:1:0:30028' => 
  array (
    'code' => '9:1:0:30028',
    'name' => 'customer_data_email_not_valid',
    'message' => 'Údaj pro email zákazníka není platný',
  ),
  '9:1:0:30029' => 
  array (
    'code' => '9:1:0:30029',
    'name' => 'customer_data_email2_too_long',
    'message' => 'Údaj pro email2 zákazníka překročil povolenou délku',
  ),
  '9:1:0:30030' => 
  array (
    'code' => '9:1:0:30030',
    'name' => 'customer_data_email2_not_valid',
    'message' => 'Údaj pro email2 zákazníka není platný',
  ),
  '9:1:0:30031' => 
  array (
    'code' => '9:1:0:30031',
    'name' => 'customer_data_email_einvoice_too_long',
    'message' => 'Údaj pro email el. faktury zákazníka překročil povolenou délku',
  ),
  '9:1:0:30032' => 
  array (
    'code' => '9:1:0:30032',
    'name' => 'customer_data_email_einvoice_not_valid',
    'message' => 'Údaj pro email el. faktury zákazníka není platný',
  ),
  '9:1:0:30033' => 
  array (
    'code' => '9:1:0:30033',
    'name' => 'customer_data_chief_title_too_long',
    'message' => 'Údaj pro titul osoby jednatele zákazníka překročil povolenou délku',
  ),
  '9:1:0:30034' => 
  array (
    'code' => '9:1:0:30034',
    'name' => 'customer_data_chief_title_not_token',
    'message' => 'Údaj pro titul osoby jednatele zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30035' => 
  array (
    'code' => '9:1:0:30035',
    'name' => 'customer_data_chief_first_name_not_defined',
    'message' => 'Údaj pro jméno osoby jednatele zákazníka není definován',
  ),
  '9:1:0:30036' => 
  array (
    'code' => '9:1:0:30036',
    'name' => 'customer_data_chief_first_name_too_long',
    'message' => 'Údaj pro jméno osoby jednatele zákazníka překročil povolenou délku',
  ),
  '9:1:0:30037' => 
  array (
    'code' => '9:1:0:30037',
    'name' => 'customer_data_chief_first_name_not_token',
    'message' => 'Údaj pro jméno osoby jednatele zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30038' => 
  array (
    'code' => '9:1:0:30038',
    'name' => 'customer_data_chief_last_name_not_defined',
    'message' => 'Údaj pro příjmení osoby jednatele zákazníka není definován',
  ),
  '9:1:0:30039' => 
  array (
    'code' => '9:1:0:30039',
    'name' => 'customer_data_chief_last_name_too_long',
    'message' => 'Údaj pro příjmení osoby jednatele zákazníka překročil povolenou délku',
  ),
  '9:1:0:30040' => 
  array (
    'code' => '9:1:0:30040',
    'name' => 'customer_data_chief_last_name_not_token',
    'message' => 'Údaj pro příjmení osoby jednatele zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30041' => 
  array (
    'code' => '9:1:0:30041',
    'name' => 'customer_data_technician_title_too_long',
    'message' => 'Údaj pro titul osoby technika zákazníka překročil povolenou délku',
  ),
  '9:1:0:30042' => 
  array (
    'code' => '9:1:0:30042',
    'name' => 'customer_data_technician_title_not_token',
    'message' => 'Údaj pro titul osoby technika zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30043' => 
  array (
    'code' => '9:1:0:30043',
    'name' => 'customer_data_technician_first_name_too_long',
    'message' => 'Údaj pro jméno osoby technika zákazníka překročil povolenou délku',
  ),
  '9:1:0:30044' => 
  array (
    'code' => '9:1:0:30044',
    'name' => 'customer_data_technician_first_name_not_token',
    'message' => 'Údaj pro jméno osoby technika zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30045' => 
  array (
    'code' => '9:1:0:30045',
    'name' => 'customer_data_technician_last_name_too_long',
    'message' => 'Údaj pro příjmení osoby technika zákazníka překročil povolenou délku',
  ),
  '9:1:0:30046' => 
  array (
    'code' => '9:1:0:30046',
    'name' => 'customer_data_technician_last_name_not_token',
    'message' => 'Údaj pro příjmení osoby technika zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30047' => 
  array (
    'code' => '9:1:0:30047',
    'name' => 'customer_data_post_chief_name_too_long',
    'message' => 'Údaj pro celé jméno osoby poštovního kontaktu zákazníka překročil povolenou délku',
  ),
  '9:1:0:30048' => 
  array (
    'code' => '9:1:0:30048',
    'name' => 'customer_data_post_chief_name_not_token',
    'message' => 'Údaj pro celé jméno osoby poštovního kontaktu zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30049' => 
  array (
    'code' => '9:1:0:30049',
    'name' => 'customer_data_post_company_name_too_long',
    'message' => 'Údaj pro název společnosti poštovního kontaktu zákazníka překročil povolenou délku',
  ),
  '9:1:0:30050' => 
  array (
    'code' => '9:1:0:30050',
    'name' => 'customer_data_post_company_name_not_token',
    'message' => 'Údaj pro název společnosti poštovního kontaktu zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30051' => 
  array (
    'code' => '9:1:0:30051',
    'name' => 'customer_data_post_street_too_long',
    'message' => 'Údaj pro ulici poštovního kontaktu zákazníka překročil povolenou délku',
  ),
  '9:1:0:30052' => 
  array (
    'code' => '9:1:0:30052',
    'name' => 'customer_data_post_street_not_token',
    'message' => 'Údaj pro ulici poštovního kontaktu zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30053' => 
  array (
    'code' => '9:1:0:30053',
    'name' => 'customer_data_post_city_too_long',
    'message' => 'Údaj pro město poštovního kontaktu zákazníka překročil povolenou délku',
  ),
  '9:1:0:30054' => 
  array (
    'code' => '9:1:0:30054',
    'name' => 'customer_data_post_city_not_token',
    'message' => 'Údaj pro město poštovního kontaktu zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30055' => 
  array (
    'code' => '9:1:0:30055',
    'name' => 'customer_data_post_zip_too_long',
    'message' => 'Údaj pro PSČ poštovního kontaktu zákazníka překročil povolenou délku',
  ),
  '9:1:0:30056' => 
  array (
    'code' => '9:1:0:30056',
    'name' => 'customer_data_post_zip_not_token',
    'message' => 'Údaj pro PSČ poštovního kontaktu zákazníka musí odpovídat požadavkům pro token',
  ),
  '9:1:0:30057' => 
  array (
    'code' => '9:1:0:30057',
    'name' => 'customer_data_post_country_not_valid',
    'message' => 'Údaj pro stát poštovního kontaktu zákazníka není platný',
  ),
  '9:1:0:30058' => 
  array (
    'code' => '9:1:0:30058',
    'name' => 'customer_data_lang_not_valid',
    'message' => 'Údaj pro komunikační jazyk zákazníka není platný',
  ),
  '9:1:0:30059' => 
  array (
    'code' => '9:1:0:30059',
    'name' => 'customer_login_user_name_not_valid',
    'message' => 'Údaj pro přihlašovací jméno zákazníka není platný',
  ),
  '9:1:0:30060' => 
  array (
    'code' => '9:1:0:30060',
    'name' => 'customer_login_user_password_not_valid',
    'message' => 'Údaj pro přihlašovací heslo zákazníka není platný',
  ),
  '9:1:0:30061' => 
  array (
    'code' => '9:1:0:30061',
    'name' => 'customer_login_user_password_not_defined',
    'message' => 'Údaj pro přihlašovací heslo zákazníka není definován',
  ),
  '9:1:0:30062' => 
  array (
    'code' => '9:1:0:30062',
    'name' => 'customer_login_user_password_too_short',
    'message' => 'Údaj pro přihlašovací heslo zákazníka nedosahuje minimální délku',
  ),
  '9:1:0:30063' => 
  array (
    'code' => '9:1:0:30063',
    'name' => 'customer_login_user_password_too_long',
    'message' => 'Údaj pro přihlašovací heslo zákazníka překročil povolenou délku',
  ),
  '9:1:0:30064' => 
  array (
    'code' => '9:1:0:30064',
    'name' => 'customer_with_credit_class_not_allowed',
    'message' => 'Není dovoleno pro zákazníky se zpětným vyúčtováním',
  ),
  '9:1:1:30001' => 
  array (
    'code' => '9:1:1:30001',
    'name' => 'service_data_service_name_not_defined',
    'message' => 'Údaj pro název služby není definován',
  ),
  '9:1:1:30002' => 
  array (
    'code' => '9:1:1:30002',
    'name' => 'service_data_var_code_not_valid',
    'message' => 'Údaj pro kód varianty není platný',
  ),
  '9:1:1:30003' => 
  array (
    'code' => '9:1:1:30003',
    'name' => 'service_data_invoice_till_defined',
    'message' => 'Údaj pro vyfakturováno do je již definován',
  ),
  '9:1:1:30004' => 
  array (
    'code' => '9:1:1:30004',
    'name' => 'service_no_service_found',
    'message' => 'Služba nebyla nalezena',
  ),
  '9:1:1:30005' => 
  array (
    'code' => '9:1:1:30005',
    'name' => 'service_multiple_services_found',
    'message' => 'Bylo nalezeno více než jedna služba',
  ),
  '9:1:1:30006' => 
  array (
    'code' => '9:1:1:30006',
    'name' => 'service_account_data_password_not_defined',
    'message' => 'Údaj pro heslo FTP účtu dané služby není definován',
  ),
  '9:1:1:30007' => 
  array (
    'code' => '9:1:1:30007',
    'name' => 'service_account_data_password_too_short',
    'message' => 'Údaj pro heslo FTP účtu dané služby nedosahuje minimální délku',
  ),
  '9:1:1:30008' => 
  array (
    'code' => '9:1:1:30008',
    'name' => 'service_account_data_password_too_long',
    'message' => 'Údaj pro heslo FTP účtu dané služby překročil povolenou délku',
  ),
  '9:1:1:30009' => 
  array (
    'code' => '9:1:1:30009',
    'name' => 'service_account_data_password_not_valid',
    'message' => 'Údaj pro heslo FTP dané služby účtu není platný',
  ),
  '9:1:1:30010' => 
  array (
    'code' => '9:1:1:30010',
    'name' => 'service_account_change_password_pending',
    'message' => 'Právě probíhá změna hesla FTP účtu dané služby',
  ),
  '9:1:2:30001' => 
  array (
    'code' => '9:1:2:30001',
    'name' => 'action_set_finished_ok_failed',
    'message' => 'Nepodařilo se ukončit akci do stavu OK',
  ),
  '9:1:2:30002' => 
  array (
    'code' => '9:1:2:30002',
    'name' => 'action_set_finished_failed',
    'message' => 'Nepodařilo se ukončit akci',
  ),
  '9:1:2:30003' => 
  array (
    'code' => '9:1:2:30003',
    'name' => 'coupon_code_not_valid',
    'message' => 'Kupón není platný',
  ),
  '9:1:2:30004' => 
  array (
    'code' => '9:1:2:30004',
    'name' => 'coupon_campaign_unknown',
    'message' => 'Neznámá kampaň pro kupón',
  ),
  '9:1:2:30005' => 
  array (
    'code' => '9:1:2:30005',
    'name' => 'domain_tld_not_supported',
    'message' => 'TLD není podporováno',
  ),
  '9:1:2:30006' => 
  array (
    'code' => '9:1:2:30006',
    'name' => 'domain_name_not_valid',
    'message' => 'Doménové jméno není platné',
  ),
  '9:1:2:30007' => 
  array (
    'code' => '9:1:2:30007',
    'name' => 'domain_unknown_registrar',
    'message' => 'Neznámý registrátor pro dané TLD',
  ),
  '9:1:2:30008' => 
  array (
    'code' => '9:1:2:30008',
    'name' => 'cannot_register_domain_owner',
    'message' => 'Nelze zaregistrovat držitele domény',
  ),
  '9:1:2:30009' => 
  array (
    'code' => '9:1:2:30009',
    'name' => 'cannot_register_domain',
    'message' => 'Nelze zaregistrovat doménu',
  ),
  '9:1:2:30010' => 
  array (
    'code' => '9:1:2:30010',
    'name' => 'domain_name_not_defined',
    'message' => 'Doménové jméno není definováno',
  ),
  '9:1:2:30011' => 
  array (
    'code' => '9:1:2:30011',
    'name' => 'name_server_not_defined',
    'message' => 'Nameserver není definován',
  ),
  '9:1:2:30012' => 
  array (
    'code' => '9:1:2:30012',
    'name' => 'action_adding_failed',
    'message' => 'Nepodařilo se vložit akci',
  ),
  '9:1:2:30013' => 
  array (
    'code' => '9:1:2:30013',
    'name' => 'coupon_campaign_not_running',
    'message' => 'Kampaň pro kupón není spuštěna',
  ),
  '9:1:2:30014' => 
  array (
    'code' => '9:1:2:30014',
    'name' => 'coupon_campaign_max_count_reached',
    'message' => 'Dosažen maximální počet kupónů pro kampaň',
  ),
  '9:1:2:30015' => 
  array (
    'code' => '9:1:2:30015',
    'name' => 'action_set_restarted_failed',
    'message' => 'Nepodařilo se znovu spustit akci',
  ),
  '9:1:2:30016' => 
  array (
    'code' => '9:1:2:30016',
    'name' => 'name_server_not_valid',
    'message' => 'Nameserver není validni',
  ),
  '9:1:3:30001' => 
  array (
    'code' => '9:1:3:30001',
    'name' => 'extraneous_domain_data_new_exp_date_not_defined',
    'message' => 'Údaj pro datum nové expirace cizorodé domény není definován',
  ),
  '9:1:3:30002' => 
  array (
    'code' => '9:1:3:30002',
    'name' => 'extraneous_domain_data_done_defined',
    'message' => 'Údaj pro datum vyřízení cizorodé domény je již definován',
  ),
  '9:1:3:30003' => 
  array (
    'code' => '9:1:3:30003',
    'name' => 'extraneous_domain_data_new_exp_date_not_valid',
    'message' => 'Údaj pro datum nové expirace cizorodé domény není platný',
  ),
  '9:1:3:30004' => 
  array (
    'code' => '9:1:3:30004',
    'name' => 'extraneous_domain_data_realized_by_not_defined',
    'message' => 'Údaj pro osobu vyřizující cizorodou doménu není definován',
  ),
  '9:1:3:30005' => 
  array (
    'code' => '9:1:3:30005',
    'name' => 'extraneous_domain_data_state_out_of_bounds',
    'message' => 'Údaj pro stav zpracování cizorodé domény není v povolených mezích (1-99',
  ),
  '9:1:3:30006' => 
  array (
    'code' => '9:1:3:30006',
    'name' => 'extraneous_domain_data_state_not_valid',
    'message' => 'Údaj pro zpracování stav cizorodé domény není platný',
  ),
  '9:1:3:30007' => 
  array (
    'code' => '9:1:3:30007',
    'name' => 'extraneous_domain_data_note_not_defined',
    'message' => 'Údaj pro poznámku cizorodé domény není definován',
  ),
  '9:1:3:30008' => 
  array (
    'code' => '9:1:3:30008',
    'name' => 'extraneous_domain_data_note_too_long',
    'message' => 'Údaj pro poznámku cizorodé domény překročil povolenou délku',
  ),
  '9:1:3:30009' => 
  array (
    'code' => '9:1:3:30009',
    'name' => 'extraneous_domain_data_registrarid_not_defined',
    'message' => 'Registrátor cizorodé domény není definován',
  ),
  '9:1:4:30001' => 
  array (
    'code' => '9:1:4:30001',
    'name' => 'server_is_not_empty',
    'message' => 'Na serveru jsou nezrušené služby',
  ),
  '9:1:4:30002' => 
  array (
    'code' => '9:1:4:30002',
    'name' => 'server_cannot_be_deleted',
    'message' => 'Server nelze odstranit',
  ),
  '9:1:4:30003' => 
  array (
    'code' => '9:1:4:30003',
    'name' => 'server_name_not_defined',
    'message' => 'Není definován název serveru',
  ),
  '9:1:4:30004' => 
  array (
    'code' => '9:1:4:30004',
    'name' => 'ip_address_not_defined',
    'message' => 'Není definována IP adresa',
  ),
  '9:1:4:30005' => 
  array (
    'code' => '9:1:4:30005',
    'name' => 'email_not_defined',
    'message' => 'Není definována emailová adresa',
  ),
  '9:1:4:30006' => 
  array (
    'code' => '9:1:4:30006',
    'name' => 'email_not_valid',
    'message' => 'Emailová adresa není platná',
  ),
  '9:1:4:30007' => 
  array (
    'code' => '9:1:4:30007',
    'name' => 'user_id_not_defined',
    'message' => 'Není definováno číslo účtu uživatele',
  ),
  '9:1:4:30008' => 
  array (
    'code' => '9:1:4:30008',
    'name' => 'server_name_too_short',
    'message' => 'Název serveru musí být delší',
  ),
  '9:1:4:30009' => 
  array (
    'code' => '9:1:4:30009',
    'name' => 'admin_name_not_defined',
    'message' => 'Není definováno přihlašovací jméno pro administraci serveru',
  ),
  '9:1:4:30010' => 
  array (
    'code' => '9:1:4:30010',
    'name' => 'admin_password_not_defined',
    'message' => 'Není definováno přihlašovací heslo pro administraci serveru',
  ),
  '9:1:4:30011' => 
  array (
    'code' => '9:1:4:30011',
    'name' => 'sql_type_not_valid',
    'message' => 'Typ SQL databáze není platný',
  ),
  '9:1:4:30012' => 
  array (
    'code' => '9:1:4:30012',
    'name' => 'server_name_not_valid',
    'message' => 'Název serveru není platný',
  ),
  '9:1:4:30013' => 
  array (
    'code' => '9:1:4:30013',
    'name' => 'operator_name_not_defined',
    'message' => 'Není definováno jméno administrátora',
  ),
  '9:1:4:30014' => 
  array (
    'code' => '9:1:4:30014',
    'name' => 'invoice_not_found',
    'message' => 'Výzva k úhradě nebyla nalezena',
  ),
  '9:1:4:30015' => 
  array (
    'code' => '9:1:4:30015',
    'name' => 'invoice_already_paid',
    'message' => 'Výzva k úhradě byla již zaplacena',
  ),
  '9:1:4:30016' => 
  array (
    'code' => '9:1:4:30016',
    'name' => 'server_has_package',
    'message' => 'Danému serveru je přiřazen balíček',
  ),
  '9:1:5:30001' => 
  array (
    'code' => '9:1:5:30001',
    'name' => 'dns_operation_failed',
    'message' => 'Operace na dns se nezdařila',
  ),
  '9:1:7:30001' => 
  array (
    'code' => '9:1:7:30001',
    'name' => 'dig_no_ns_records',
    'message' => 'NS zaznamy nenalezeny',
  ),
  '9:1:7:30002' => 
  array (
    'code' => '9:1:7:30002',
    'name' => 'dig_operation_failed',
    'message' => 'Operace na dns se nezdařila',
  ),
  '9:1:9:30001' => 
  array (
    'code' => '9:1:9:30001',
    'name' => 'param_title_not_defined',
    'message' => 'Parametr title není definován',
  ),
  '9:1:9:30002' => 
  array (
    'code' => '9:1:9:30002',
    'name' => 'param_comment_not_defined',
    'message' => 'Parametr comment není definován',
  ),
  '9:1:9:30003' => 
  array (
    'code' => '9:1:9:30003',
    'name' => 'param_pbu_not_valid',
    'message' => 'Parametr pbu není platný',
  ),
  '9:1:9:30004' => 
  array (
    'code' => '9:1:9:30004',
    'name' => 'param_currency_code_not_defined',
    'message' => 'Parametr currency_code není definován',
  ),
  '9:1:9:30005' => 
  array (
    'code' => '9:1:9:30005',
    'name' => 'param_currency_code_not_valid',
    'message' => 'Parametr currency_code není platný',
  ),
  '9:1:9:30006' => 
  array (
    'code' => '9:1:9:30006',
    'name' => 'param_var_code_not_valid',
    'message' => 'Parametr var_code není platný',
  ),
  '9:1:9:30007' => 
  array (
    'code' => '9:1:9:30007',
    'name' => 'param_tld_not_defined',
    'message' => 'Parametr tld není definován',
  ),
  '9:1:9:30008' => 
  array (
    'code' => '9:1:9:30008',
    'name' => 'param_tld_not_valid',
    'message' => 'Parametr tld není platný',
  ),
  '9:1:9:30009' => 
  array (
    'code' => '9:1:9:30009',
    'name' => 'param_valid_until_not_valid',
    'message' => 'Parametr valid_until není platný',
  ),
  '9:1:9:30010' => 
  array (
    'code' => '9:1:9:30010',
    'name' => 'coupon_campaign_not_found',
    'message' => 'Kupónová kampaň nebyla nalezena',
  ),
  '9:1:9:30011' => 
  array (
    'code' => '9:1:9:30011',
    'name' => 'param_code_not_defined',
    'message' => 'Parametr code není definován',
  ),
  '9:2:1:30001' => 
  array (
    'code' => '9:2:1:30001',
    'name' => 'transaction_error',
    'message' => 'Nastala chyba v transakci',
  ),
  '9:2:1:30002' => 
  array (
    'code' => '9:2:1:30002',
    'name' => 'missing_param_id_user',
    'message' => 'Není definován parametr id_user',
  ),
  '9:2:1:30003' => 
  array (
    'code' => '9:2:1:30003',
    'name' => 'invalid_param_id_user',
    'message' => 'Neplatný parametr id_user',
  ),
  '9:2:1:30004' => 
  array (
    'code' => '9:2:1:30004',
    'name' => 'iduser_not_found',
    'message' => 'Nebyl nalezen iduser',
  ),
  '9:2:1:30005' => 
  array (
    'code' => '9:2:1:30005',
    'name' => 'empty_email',
    'message' => 'Prázdný email',
  ),
  '9:2:1:30006' => 
  array (
    'code' => '9:2:1:30006',
    'name' => 'unknown_lang',
    'message' => 'Neznámý lang',
  ),
  '9:2:1:30007' => 
  array (
    'code' => '9:2:1:30007',
    'name' => 'unknown_pbu',
    'message' => 'Neznámé pbu',
  ),
  '9:2:1:30008' => 
  array (
    'code' => '9:2:1:30008',
    'name' => 'missing_param_report_if_empty',
    'message' => 'Není definován parametr report_if_empty',
  ),
  '9:2:1:30009' => 
  array (
    'code' => '9:2:1:30009',
    'name' => 'invalid_param_report_if_empty',
    'message' => 'Neplatný parametr report_if_empty',
  ),
  '9:2:1:30010' => 
  array (
    'code' => '9:2:1:30010',
    'name' => 'missing_param_update_sent_date',
    'message' => 'Není definován parametr update_sent_date',
  ),
  '9:2:1:30011' => 
  array (
    'code' => '9:2:1:30011',
    'name' => 'invalid_param_update_sent_date',
    'message' => 'Neplatný parametr update_sent_date',
  ),
  '9:2:1:30012' => 
  array (
    'code' => '9:2:1:30012',
    'name' => 'expdom_report_nothing_to_send',
    'message' => 'Přehled o expirujících doménách neobsahuje žádné domény',
  ),
  '9:2:1:30013' => 
  array (
    'code' => '9:2:1:30013',
    'name' => 'expdom_report_not_all_sent',
    'message' => 'Přehled o expirujících doménách nebyl zaslán všem zamýšleným zákazníkům',
  ),
);
}
?>