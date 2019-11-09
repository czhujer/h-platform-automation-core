<?php
class Errors {

#copy $_errors to module file
 protected $_errors = array (
  '19:0:0:30001' => 
  array (
    'code' => '19:0:0:30001',
    'name' => 'unknown_message',
    'message' => 'Byla zaslána neznámá zpráva',
  ),
  '19:0:0:30002' => 
  array (
    'code' => '19:0:0:30002',
    'name' => 'access_denied',
    'message' => 'Nemáte oprávnění přístupu k dané zprávě',
  ),
  '19:0:0:30003' => 
  array (
    'code' => '19:0:0:30003',
    'name' => 'client_authentication_failed',
    'message' => 'Přihlášení cms klienta nebylo úspěšné',
  ),
  '19:0:0:30004' => 
  array (
    'code' => '19:0:0:30004',
    'name' => 'user_authentication_failed',
    'message' => 'Přihlášení uživatele nebylo úspěšné',
  ),
  '19:0:0:30005' => 
  array (
    'code' => '19:0:0:30005',
    'name' => 'uknown_error_occurred',
    'message' => 'Nastala neznámá chyba',
  ),
  '19:0:0:30006' => 
  array (
    'code' => '19:0:0:30006',
    'name' => 'remote_call_failed',
    'message' => 'Selhalo vzdálené volání',
  ),
  '19:0:0:30007' => 
  array (
    'code' => '19:0:0:30007',
    'name' => 'operations_insert_failed',
    'message' => 'Selhalo vložení akcí',
  ),
  '19:0:0:30008' => 
  array (
    'code' => '19:0:0:30008',
    'name' => 'sql_exception',
    'message' => 'Nastala sql vyjímka',
  ),
  '19:0:0:30009' => 
  array (
    'code' => '19:0:0:30009',
    'name' => 'unxpected_exception',
    'message' => 'Nastala neočekávaní vyjímka',
  ),
  '19:0:0:30010' => 
  array (
    'code' => '19:0:0:30010',
    'name' => 'user_id_not_valid',
    'message' => 'Neplatný identifikátor uživatele',
  ),
  '19:0:1:30001' => 
  array (
    'code' => '19:0:1:30001',
    'name' => 'search_criterion_missing',
    'message' => 'Chybí kritérium hledání',
  ),
  '19:1:0:30001' => 
  array (
    'code' => '19:1:0:30001',
    'name' => 'dns_snapshot_not_made',
    'message' => 'Vytvoření snapshotu dns nebylo provedeno',
  ),
  '19:1:0:30002' => 
  array (
    'code' => '19:1:0:30002',
    'name' => 'dns_snapshot_get_failed',
    'message' => 'Získání snapshotu dns se nezdařilo',
  ),
  '19:1:1:30001' => 
  array (
    'code' => '19:1:1:30001',
    'name' => 'hotline_request_body_missing',
    'message' => 'Chybí tělo požadavku na hotline',
  ),
  '19:1:1:30002' => 
  array (
    'code' => '19:1:1:30002',
    'name' => 'hotline_request_inform_by_missing',
    'message' => 'Chybí způsob zpětného informování u požadavku na hotline',
  ),
  '19:1:1:30003' => 
  array (
    'code' => '19:1:1:30003',
    'name' => 'hotline_request_phone_missing',
    'message' => 'Chybí telefon u požadavku na hotline',
  ),
  '19:1:1:30004' => 
  array (
    'code' => '19:1:1:30004',
    'name' => 'hotline_request_phone_invalid',
    'message' => 'Neplatný telefon u požadavku na hotline',
  ),
  '19:1:1:30005' => 
  array (
    'code' => '19:1:1:30005',
    'name' => 'hotline_request_email_missing',
    'message' => 'Chybí email u požadavku na hotline',
  ),
  '19:1:1:30006' => 
  array (
    'code' => '19:1:1:30006',
    'name' => 'hotline_request_email_invalid',
    'message' => 'Neplatný email u požadavku na hotline',
  ),
  '19:1:1:30007' => 
  array (
    'code' => '19:1:1:30007',
    'name' => 'hotline_request_sending_failed',
    'message' => 'Nepodařilo se odeslat požadavek na hotline',
  ),
  '19:1:1:30008' => 
  array (
    'code' => '19:1:1:30008',
    'name' => 'user_profile_updating_failed',
    'message' => 'Nepodařilo se provést úpravu kontaktních údajů uživatele',
  ),
  '19:1:1:30009' => 
  array (
    'code' => '19:1:1:30009',
    'name' => 'user_billing_address_name_missing',
    'message' => 'Chybí název společnosti u fakturační adresy',
  ),
  '19:1:1:30010' => 
  array (
    'code' => '19:1:1:30010',
    'name' => 'user_billing_address_name_max_length_exceeded',
    'message' => 'Název společnosti u fakturační adresy překračuje povolenou délku',
  ),
  '19:1:1:30011' => 
  array (
    'code' => '19:1:1:30011',
    'name' => 'user_billing_address_street_missing',
    'message' => 'Chybí ulice u fakturační adresy',
  ),
  '19:1:1:30012' => 
  array (
    'code' => '19:1:1:30012',
    'name' => 'user_billing_address_street_max_length_exceeded',
    'message' => 'Ulice u fakturační adresy překračuje povolenou délku',
  ),
  '19:1:1:30013' => 
  array (
    'code' => '19:1:1:30013',
    'name' => 'user_billing_address_city_missing',
    'message' => 'Chybí město u fakturační adresy',
  ),
  '19:1:1:30014' => 
  array (
    'code' => '19:1:1:30014',
    'name' => 'user_billing_address_city_max_length_exceeded',
    'message' => 'Město u fakturační adresy překračuje povolenou délku',
  ),
  '19:1:1:30015' => 
  array (
    'code' => '19:1:1:30015',
    'name' => 'user_billing_address_zip_missing',
    'message' => 'Chybí psč u fakturační adresy',
  ),
  '19:1:1:30016' => 
  array (
    'code' => '19:1:1:30016',
    'name' => 'user_billing_address_zip_max_length_exceeded',
    'message' => 'Psč u fakturační adresy překračuje povolenou délku',
  ),
  '19:1:1:30017' => 
  array (
    'code' => '19:1:1:30017',
    'name' => 'user_delivery_address_name_missing',
    'message' => 'Chybí název společnosti u korespondenční adresy',
  ),
  '19:1:1:30018' => 
  array (
    'code' => '19:1:1:30018',
    'name' => 'user_delivery_address_name_max_length_exceeded',
    'message' => 'Název společnosti u korespondenční adresy překračuje povolenou délku',
  ),
  '19:1:1:30019' => 
  array (
    'code' => '19:1:1:30019',
    'name' => 'user_delivery_address_street_missing',
    'message' => 'Chybí ulice u korespondenční adresy',
  ),
  '19:1:1:30020' => 
  array (
    'code' => '19:1:1:30020',
    'name' => 'user_delivery_address_street_max_length_exceeded',
    'message' => 'Ulice u korespondenční adresy překračuje povolenou délku',
  ),
  '19:1:1:30021' => 
  array (
    'code' => '19:1:1:30021',
    'name' => 'user_delivery_address_city_missing',
    'message' => 'Chybí město u korespondenční adresy',
  ),
  '19:1:1:30022' => 
  array (
    'code' => '19:1:1:30022',
    'name' => 'user_delivery_address_city_max_length_exceeded',
    'message' => 'Město u korespondenční adresy překračuje povolenou délku',
  ),
  '19:1:1:30023' => 
  array (
    'code' => '19:1:1:30023',
    'name' => 'user_delivery_address_zip_missing',
    'message' => 'Chybí psč u korespondenční adresy',
  ),
  '19:1:1:30024' => 
  array (
    'code' => '19:1:1:30024',
    'name' => 'user_delivery_address_zip_max_length_exceeded',
    'message' => 'Psč u korespondenční adresy překračuje povolenou délku',
  ),
  '19:1:1:30025' => 
  array (
    'code' => '19:1:1:30025',
    'name' => 'user_identification_max_length_exceeded',
    'message' => 'IČ překračuje povolenou délku',
  ),
  '19:1:1:30026' => 
  array (
    'code' => '19:1:1:30026',
    'name' => 'user_vat_identification_max_length_exceeded',
    'message' => 'DIČ překračuje povolenou délku',
  ),
  '19:1:1:30027' => 
  array (
    'code' => '19:1:1:30027',
    'name' => 'user_bank_max_length_exceeded',
    'message' => 'Bankovní spojení překračuje povolenou délku',
  ),
  '19:1:1:30028' => 
  array (
    'code' => '19:1:1:30028',
    'name' => 'user_fax_max_length_exceeded',
    'message' => 'Fax překračuje povolenou délku',
  ),
  '19:1:1:30029' => 
  array (
    'code' => '19:1:1:30029',
    'name' => 'user_fax_invalid',
    'message' => 'Neplatný fax',
  ),
  '19:1:1:30030' => 
  array (
    'code' => '19:1:1:30030',
    'name' => 'user_authorized_person_before_name_titles_max_length_exceeded',
    'message' => 'Tituly před jménem oprávněné osoby překračují povolenou délku',
  ),
  '19:1:1:30031' => 
  array (
    'code' => '19:1:1:30031',
    'name' => 'user_authorized_person_first_name_missing',
    'message' => 'Chybí jméno oprávněné osoby',
  ),
  '19:1:1:30032' => 
  array (
    'code' => '19:1:1:30032',
    'name' => 'user_authorized_person_first_name_max_length_exceeded',
    'message' => 'Jméno oprávněné osoby překračuje povolenou délku',
  ),
  '19:1:1:30033' => 
  array (
    'code' => '19:1:1:30033',
    'name' => 'user_authorized_person_last_name_missing',
    'message' => 'Chybí příjmení oprávněné osoby',
  ),
  '19:1:1:30034' => 
  array (
    'code' => '19:1:1:30034',
    'name' => 'user_authorized_person_last_name_max_length_exceeded',
    'message' => 'Příjmení oprávněné osoby překračuje povolenou délku',
  ),
  '19:1:1:30035' => 
  array (
    'code' => '19:1:1:30035',
    'name' => 'user_authorized_person_after_name_titles_max_length_exceeded',
    'message' => 'Tituly za jménem oprávněné osoby překračují povolenou délku',
  ),
  '19:1:1:30036' => 
  array (
    'code' => '19:1:1:30036',
    'name' => 'user_authorized_person_phone_missing',
    'message' => 'Chybí telefon oprávněné osoby',
  ),
  '19:1:1:30037' => 
  array (
    'code' => '19:1:1:30037',
    'name' => 'user_authorized_person_phone_max_length_exceeded',
    'message' => 'Telefon oprávněné osoby překračuje povolenou délku',
  ),
  '19:1:1:30038' => 
  array (
    'code' => '19:1:1:30038',
    'name' => 'user_authorized_person_phone_invalid',
    'message' => 'Neplatný telefon oprávněné osoby',
  ),
  '19:1:1:30039' => 
  array (
    'code' => '19:1:1:30039',
    'name' => 'user_authorized_person_email_missing',
    'message' => 'Chybí e-mail oprávněné osoby',
  ),
  '19:1:1:30040' => 
  array (
    'code' => '19:1:1:30040',
    'name' => 'user_authorized_person_email_max_length_exceeded',
    'message' => 'E-mail oprávněné osoby překračuje povolenou délku',
  ),
  '19:1:1:30041' => 
  array (
    'code' => '19:1:1:30041',
    'name' => 'user_authorized_person_email_invalid',
    'message' => 'Neplatný e-mail oprávněné osoby',
  ),
  '19:1:1:30042' => 
  array (
    'code' => '19:1:1:30042',
    'name' => 'user_authorized_person_duplicate',
    'message' => 'Stejná oprávněná osoba',
  ),
  '19:1:1:30043' => 
  array (
    'code' => '19:1:1:30043',
    'name' => 'user_authorized_person_at_least_one_must_be_defined',
    'message' => 'Musí být ustanovena alespoň jedna oprávněná osoba',
  ),
  '19:1:1:30044' => 
  array (
    'code' => '19:1:1:30044',
    'name' => 'hotline_request_subject_missing',
    'message' => 'Chybí předmět požadavku na hotline',
  ),
  '19:1:1:30045' => 
  array (
    'code' => '19:1:1:30045',
    'name' => 'sms_area_code_missing',
    'message' => 'Chybí číslo předvolby',
  ),
  '19:1:1:30046' => 
  array (
    'code' => '19:1:1:30046',
    'name' => 'sms_area_code_invalid',
    'message' => 'Číslo předvolby není platné',
  ),
  '19:1:1:30047' => 
  array (
    'code' => '19:1:1:30047',
    'name' => 'sms_phone_invalid',
    'message' => 'Telefonní číslo není platné',
  ),
  '19:1:1:30048' => 
  array (
    'code' => '19:1:1:30048',
    'name' => 'sms_phone_same',
    'message' => 'Telefonní číslo je nezměněné',
  ),
  '19:1:1:30049' => 
  array (
    'code' => '19:1:1:30049',
    'name' => 'tld_price_missing',
    'message' => 'Cena pro dané TLD chybí',
  ),
  '19:1:1:30050' => 
  array (
    'code' => '19:1:1:30050',
    'name' => 'user_some_services_exist',
    'message' => 'Na účtu uživatele existují nějaké služby',
  ),
  '19:1:1:30051' => 
  array (
    'code' => '19:1:1:30051',
    'name' => 'user_has_system_role',
    'message' => 'Uživatel má admin práva',
  ),
  '19:1:1:30052' => 
  array (
    'code' => '19:1:1:30052',
    'name' => 'user_delegated_services_exist',
    'message' => 'Na účtu uživatele existují delegované služby',
  ),
  '19:1:1:30053' => 
  array (
    'code' => '19:1:1:30053',
    'name' => 'user_undeletable',
    'message' => 'Účet uživatele je nesmazatelný',
  ),
  '19:1:1:30054' => 
  array (
    'code' => '19:1:1:30054',
    'name' => 'user_creation_failed',
    'message' => 'Vytvoření uživatele selhalo',
  ),
  '19:1:1:30055' => 
  array (
    'code' => '19:1:1:30055',
    'name' => 'user_note_type_not_valid',
    'message' => 'Neplatný typ poznámky u uživatele',
  ),
  '19:1:1:30056' => 
  array (
    'code' => '19:1:1:30056',
    'name' => 'user_not_found',
    'message' => 'Uživatel nebyl nalezen',
  ),
  '19:1:1:30057' => 
  array (
    'code' => '19:1:1:30057',
    'name' => 'note_of_same_type_already_exists',
    'message' => 'Poznámka stejného typu již existuje',
  ),
  '19:1:1:30058' => 
  array (
    'code' => '19:1:1:30058',
    'name' => 'user_note_not_found',
    'message' => 'Poznámka u uživatele nebyla nalezena',
  ),
  '19:1:1:30059' => 
  array (
    'code' => '19:1:1:30059',
    'name' => 'user_already_exists',
    'message' => 'Účet již existuje',
  ),
  '19:1:1:30060' => 
  array (
    'code' => '19:1:1:30060',
    'name' => 'user_email_einvoice_missing',
    'message' => 'Chybí fakturační e-mail',
  ),
  '19:1:1:30061' => 
  array (
    'code' => '19:1:1:30061',
    'name' => 'user_email_einvoice_max_length_exceeded',
    'message' => 'Fakturační e-mail překračuje povolenou délku',
  ),
  '19:1:1:30062' => 
  array (
    'code' => '19:1:1:30062',
    'name' => 'user_email_einvoice_invalid',
    'message' => 'Neplatný fakturační e-mail',
  ),
  '19:1:1:30063' => 
  array (
    'code' => '19:1:1:30063',
    'name' => 'user_some_servers_exist',
    'message' => 'Na účtu uživatele existují nějaké servery',
  ),
  '19:1:1:30064' => 
  array (
    'code' => '19:1:1:30064',
    'name' => 'event_type_invalid',
    'message' => 'Typ události není platný',
  ),
  '19:1:1:30065' => 
  array (
    'code' => '19:1:1:30065',
    'name' => 'message_template_not_found',
    'message' => 'Šablona zprávy nebyla nalezena',
  ),
  '19:1:1:30066' => 
  array (
    'code' => '19:1:1:30066',
    'name' => 'message_template_not_implemented',
    'message' => 'Šablonu zprávy zatím nelze použít',
  ),
  '19:1:1:30067' => 
  array (
    'code' => '19:1:1:30067',
    'name' => 'message_empty',
    'message' => 'Zpráva je prázdná',
  ),
  '19:1:1:30068' => 
  array (
    'code' => '19:1:1:30068',
    'name' => 'admin_name_missing',
    'message' => 'Chybí jméno administrátora',
  ),
  '19:1:2:30001' => 
  array (
    'code' => '19:1:2:30001',
    'name' => 'debt_not_found',
    'message' => 'Pohledávka nebyla nalezena',
  ),
  '19:1:2:30002' => 
  array (
    'code' => '19:1:2:30002',
    'name' => 'debt_already_paid',
    'message' => 'Pohledávka byla již uhrazena',
  ),
  '19:1:2:30003' => 
  array (
    'code' => '19:1:2:30003',
    'name' => 'more_debts_exist',
    'message' => 'Existuje více pohledávek',
  ),
  '19:1:2:30004' => 
  array (
    'code' => '19:1:2:30004',
    'name' => 'credit_system_not_available',
    'message' => 'Kreditní účet není aktivován',
  ),
  '19:1:2:30005' => 
  array (
    'code' => '19:1:2:30005',
    'name' => 'low_credit',
    'message' => 'Nedostatečný kredit na kreditním účtu',
  ),
  '19:1:2:30006' => 
  array (
    'code' => '19:1:2:30006',
    'name' => 'credit_pay_unspecified_error',
    'message' => 'Platba se nezdařila z jiných příčin',
  ),
  '19:1:3:30001' => 
  array (
    'code' => '19:1:3:30001',
    'name' => 'expires_within_days_out_of_range',
    'message' => 'Hodnota položky expires_within_days je mimo povolený rozsah -720 až 720',
  ),
  '19:1:3:30002' => 
  array (
    'code' => '19:1:3:30002',
    'name' => 'domain_name_check_failed',
    'message' => 'Zjištění dostupnosti domény selhalo',
  ),
  '19:1:3:30003' => 
  array (
    'code' => '19:1:3:30003',
    'name' => 'tld_years_out_of_bounds',
    'message' => 'Hodnota roků pro dané tld je mimo povolené meze',
  ),
  '19:1:3:30004' => 
  array (
    'code' => '19:1:3:30004',
    'name' => 'tld_min_years_greater_than_max_years',
    'message' => 'Hodnota min. roků pro dané tld je větší než hodnota max. roků',
  ),
  '19:1:3:30005' => 
  array (
    'code' => '19:1:3:30005',
    'name' => 'tld_domain_length_out_of_bounds',
    'message' => 'Délka domény pro dané tld je mimo povolené meze',
  ),
  '19:1:3:30006' => 
  array (
    'code' => '19:1:3:30006',
    'name' => 'tld_min_domain_length_greater_than_max_domain_length',
    'message' => 'Hodnota min. délky domény pro dané tld je větší než hodnota max. délky domény',
  ),
  '19:1:3:30007' => 
  array (
    'code' => '19:1:3:30007',
    'name' => 'tld_time_window_out_of_bounds',
    'message' => 'Časové okno pro dané tld je mimo povolené meze',
  ),
  '19:1:3:30008' => 
  array (
    'code' => '19:1:3:30008',
    'name' => 'tld_invalid',
    'message' => 'Neplatné tld',
  ),
  '19:1:3:30009' => 
  array (
    'code' => '19:1:3:30009',
    'name' => 'domain_name_owner_not_found',
    'message' => 'Vlastník domény nebyl nalezen',
  ),
  '19:1:3:30010' => 
  array (
    'code' => '19:1:3:30010',
    'name' => 'contact_handle_not_found',
    'message' => 'Handle kontaktu nebyl nalezen',
  ),
  '19:1:3:30011' => 
  array (
    'code' => '19:1:3:30011',
    'name' => 'contact_role_not_valid',
    'message' => 'Role kontaktu není validní',
  ),
  '19:1:3:30012' => 
  array (
    'code' => '19:1:3:30012',
    'name' => 'tld_not_found',
    'message' => 'Tld nebylo nalezeno',
  ),
  '19:1:3:30013' => 
  array (
    'code' => '19:1:3:30013',
    'name' => 'registrar_already_defined',
    'message' => 'Registrátor je již definován',
  ),
  '19:1:3:30014' => 
  array (
    'code' => '19:1:3:30014',
    'name' => 'registrar_id_unknown',
    'message' => 'Id registrátora je neznámé',
  ),
  '19:1:3:30015' => 
  array (
    'code' => '19:1:3:30015',
    'name' => 'registrar_id_cannot_be_used',
    'message' => 'Id registrátora nelze použít',
  ),
  '19:1:3:30016' => 
  array (
    'code' => '19:1:3:30016',
    'name' => 'auth_info_sending_failed',
    'message' => 'Poslání autorizačního kódu pro převod domény selhalo',
  ),
  '19:1:3:30017' => 
  array (
    'code' => '19:1:3:30017',
    'name' => 'renew_in_progress',
    'message' => 'Právě probíha proces obnovy domény',
  ),
  '19:1:4:30001' => 
  array (
    'code' => '19:1:4:30001',
    'name' => 'database_type_not_defined',
    'message' => 'Neznámý typ databáze',
  ),
  '19:1:4:30002' => 
  array (
    'code' => '19:1:4:30002',
    'name' => 'database_type_not_available',
    'message' => 'Typ databáze nelze v daném případě použít',
  ),
  '19:1:4:30003' => 
  array (
    'code' => '19:1:4:30003',
    'name' => 'database_data_file_not_available',
    'message' => 'Datový soubor nelze u této databáze použít',
  ),
  '19:1:4:30004' => 
  array (
    'code' => '19:1:4:30004',
    'name' => 'database_server_not_available',
    'message' => 'Pro daný typ databáze není přiřazen server',
  ),
  '19:1:4:30005' => 
  array (
    'code' => '19:1:4:30005',
    'name' => 'database_name_not_available',
    'message' => 'Název databáze nelze použít',
  ),
  '19:1:4:30006' => 
  array (
    'code' => '19:1:4:30006',
    'name' => 'database_name_not_valid',
    'message' => 'Název databáze není validní',
  ),
  '19:1:4:30007' => 
  array (
    'code' => '19:1:4:30007',
    'name' => 'database_creation_failed',
    'message' => 'Vytvoření databáze selhalo',
  ),
  '19:1:4:30008' => 
  array (
    'code' => '19:1:4:30008',
    'name' => 'database_user_creation_failed',
    'message' => 'Vytvoření uživatele databáze selhalo',
  ),
  '19:1:4:30009' => 
  array (
    'code' => '19:1:4:30009',
    'name' => 'database_operations_failed',
    'message' => 'Vytvoření operací pro vytvoření databáze selhalo',
  ),
  '19:1:4:30010' => 
  array (
    'code' => '19:1:4:30010',
    'name' => 'database_name_max_length_exceeded',
    'message' => 'Název databáze překračuje povolenou délku',
  ),
  '19:1:4:30011' => 
  array (
    'code' => '19:1:4:30011',
    'name' => 'database_user_password_length_out_of_bounds',
    'message' => 'Délka hesla uživatele databáze mimo stanovený limit',
  ),
  '19:1:4:30012' => 
  array (
    'code' => '19:1:4:30012',
    'name' => 'target_server_not_valid',
    'message' => 'Cílový server nelze použít',
  ),
  '19:1:4:30013' => 
  array (
    'code' => '19:1:4:30013',
    'name' => 'database_state_not_ok',
    'message' => 'Databáze se nenachází ve stavu OK',
  ),
  '19:1:4:30014' => 
  array (
    'code' => '19:1:4:30014',
    'name' => 'operation_on_dba_server_failed',
    'message' => 'Operace na databázovém serveru selhala',
  ),
  '19:1:4:30015' => 
  array (
    'code' => '19:1:4:30015',
    'name' => 'sql_transact_failed',
    'message' => 'Sql transakce selhala',
  ),
  '19:1:4:30016' => 
  array (
    'code' => '19:1:4:30016',
    'name' => 'dns_update_impossible',
    'message' => 'Úprava dns není možná',
  ),
  '19:1:4:30017' => 
  array (
    'code' => '19:1:4:30017',
    'name' => 'dns_operation_failed',
    'message' => 'Operace na dns serveru selhala',
  ),
  '19:1:4:30018' => 
  array (
    'code' => '19:1:4:30018',
    'name' => 'target_and_source_servers_identical',
    'message' => 'Cílový server je stejný jako zdrojový',
  ),
  '19:1:4:30019' => 
  array (
    'code' => '19:1:4:30019',
    'name' => 'database_not_found',
    'message' => 'Databáze nebyla nalezena',
  ),
  '19:1:4:30020' => 
  array (
    'code' => '19:1:4:30020',
    'name' => 'database_count_exceeded',
    'message' => 'Počet předplacených databází vyčerpán',
  ),
  '19:1:4:30021' => 
  array (
    'code' => '19:1:4:30021',
    'name' => 'database_space_exceeded',
    'message' => 'Předplacený diskový prostor pro databáze vyčerpán',
  ),
  '19:1:4:30022' => 
  array (
    'code' => '19:1:4:30022',
    'name' => 'database_size_too_small',
    'message' => 'Velikost databáze je příliš malá',
  ),
  '19:1:4:30023' => 
  array (
    'code' => '19:1:4:30023',
    'name' => 'database_size_too_big',
    'message' => 'Velikost databáze je příliš velká',
  ),
  '19:1:5:30001' => 
  array (
    'code' => '19:1:5:30001',
    'name' => 'service_not_found',
    'message' => 'Služba nebyla nalezena',
  ),
  '19:1:5:30002' => 
  array (
    'code' => '19:1:5:30002',
    'name' => 'service_account_not_found',
    'message' => 'Účet služby nebyl nalezen',
  ),
  '19:1:5:30003' => 
  array (
    'code' => '19:1:5:30003',
    'name' => 'email_not_authorized_for_service',
    'message' => 'Email není pro danou službu autorizovaný',
  ),
  '19:1:5:30004' => 
  array (
    'code' => '19:1:5:30004',
    'name' => 'service_state_not_acceptable',
    'message' => 'Služba není v přijatelném stavu',
  ),
  '19:1:5:30005' => 
  array (
    'code' => '19:1:5:30005',
    'name' => 'service_has_no_mail',
    'message' => 'Služba neprovozuje poštu',
  ),
  '19:1:5:30006' => 
  array (
    'code' => '19:1:5:30006',
    'name' => 'service_has_no_web',
    'message' => 'Služba neprovozuje web',
  ),
  '19:1:5:30007' => 
  array (
    'code' => '19:1:5:30007',
    'name' => 'url_not_valid',
    'message' => 'Url není validní',
  ),
  '19:1:5:30008' => 
  array (
    'code' => '19:1:5:30008',
    'name' => 'service_must_be_parked',
    'message' => 'Služba musí být zaparkována',
  ),
  '19:1:5:30009' => 
  array (
    'code' => '19:1:5:30009',
    'name' => 'variant_not_defined',
    'message' => 'Varianta není definována',
  ),
  '19:1:5:30010' => 
  array (
    'code' => '19:1:5:30010',
    'name' => 'service_payer_someone_else',
    'message' => 'Nesprávný plátce za službu',
  ),
  '19:1:5:30011' => 
  array (
    'code' => '19:1:5:30011',
    'name' => 'service_state_not_ok',
    'message' => 'Služba není ve stavu OK',
  ),
  '19:1:5:30012' => 
  array (
    'code' => '19:1:5:30012',
    'name' => 'upgrade_not_available',
    'message' => 'Změna varianty není možná',
  ),
  '19:1:5:30013' => 
  array (
    'code' => '19:1:5:30013',
    'name' => 'varcode_identical',
    'message' => 'Nová varianta je stejná jako původní',
  ),
  '19:1:5:30014' => 
  array (
    'code' => '19:1:5:30014',
    'name' => 'service_paying_already',
    'message' => 'Služba již běží v placeném režimu',
  ),
  '19:1:5:30015' => 
  array (
    'code' => '19:1:5:30015',
    'name' => 'payment_period_invalid',
    'message' => 'Platební období není platné',
  ),
  '19:1:5:30016' => 
  array (
    'code' => '19:1:5:30016',
    'name' => 'bad_varcode',
    'message' => 'Variantu nelze použít',
  ),
  '19:1:5:30017' => 
  array (
    'code' => '19:1:5:30017',
    'name' => 'bad_domain_name',
    'message' => 'Doménové jméno nelze použít',
  ),
  '19:1:5:30018' => 
  array (
    'code' => '19:1:5:30018',
    'name' => 'bad_user',
    'message' => 'Nesprávný uživatel',
  ),
  '19:1:5:30019' => 
  array (
    'code' => '19:1:5:30019',
    'name' => 'hosting_server_identical',
    'message' => 'Daný server pro hosting je shodný s aktuálním',
  ),
  '19:1:5:30020' => 
  array (
    'code' => '19:1:5:30020',
    'name' => 'bad_server',
    'message' => 'Daný server nelze použít',
  ),
  '19:1:5:30021' => 
  array (
    'code' => '19:1:5:30021',
    'name' => 'service_has_already_mail',
    'message' => 'Služba má již poštu vytvořenu',
  ),
  '19:1:5:30022' => 
  array (
    'code' => '19:1:5:30022',
    'name' => 'variant_has_no_mail',
    'message' => 'Varianta neobsahuje poštu',
  ),
  '19:1:5:30023' => 
  array (
    'code' => '19:1:5:30023',
    'name' => 'shared_ip_varcode_not_available',
    'message' => 'Varianta bez vlastní IP adresy není k dispozici',
  ),
  '19:1:5:30024' => 
  array (
    'code' => '19:1:5:30024',
    'name' => 'server_shared_ip_missing',
    'message' => 'Server nemá nastavenu sdílenou IP adresu',
  ),
  '19:1:5:30025' => 
  array (
    'code' => '19:1:5:30025',
    'name' => 'own_ip_varcode_not_available',
    'message' => 'Varianta s vlastní IP adresou není k dispozici',
  ),
  '19:1:5:30026' => 
  array (
    'code' => '19:1:5:30026',
    'name' => 'permission_not_valid',
    'message' => 'Neplatné oprávnění',
  ),
  '19:1:5:30027' => 
  array (
    'code' => '19:1:5:30027',
    'name' => 'permission_already_delegated',
    'message' => 'Oprávnění již existuje',
  ),
  '19:1:5:30028' => 
  array (
    'code' => '19:1:5:30028',
    'name' => 'permission_not_found',
    'message' => 'Oprávnění nebylo nalezeno',
  ),
  '19:1:5:30029' => 
  array (
    'code' => '19:1:5:30029',
    'name' => 'already_operating_free',
    'message' => 'Služba již běží zdarma',
  ),
  '19:1:5:30030' => 
  array (
    'code' => '19:1:5:30030',
    'name' => 'service_note_type_not_valid',
    'message' => 'Neplatný typ poznámky u služby',
  ),
  '19:1:5:30031' => 
  array (
    'code' => '19:1:5:30031',
    'name' => 'note_not_defined',
    'message' => 'Poznámka není definována',
  ),
  '19:1:5:30032' => 
  array (
    'code' => '19:1:5:30032',
    'name' => 'service_note_not_found',
    'message' => 'Poznámka u služby nebyla nalezena',
  ),
  '19:1:5:30033' => 
  array (
    'code' => '19:1:5:30033',
    'name' => 'service_app_pool_task_not_valid',
    'message' => 'Úloha pro aplikační pool služby není platná',
  ),
  '19:1:5:30034' => 
  array (
    'code' => '19:1:5:30034',
    'name' => 'server_not_found',
    'message' => 'Server nebyl nalezen',
  ),
  '19:1:5:30035' => 
  array (
    'code' => '19:1:5:30035',
    'name' => 'operation_on_server_failed',
    'message' => 'Operace na serveru selhala',
  ),
  '19:1:5:30036' => 
  array (
    'code' => '19:1:5:30036',
    'name' => 'service_app_pool_not_found',
    'message' => 'Aplikační pool služby nebyl nalezen',
  ),
  '19:1:5:30037' => 
  array (
    'code' => '19:1:5:30037',
    'name' => 'installatron_not_available',
    'message' => 'Installatron není pro službu dostupný',
  ),
  '19:1:5:30038' => 
  array (
    'code' => '19:1:5:30038',
    'name' => 'variant_not_valid',
    'message' => 'Varianta není platná',
  ),
  '19:1:5:30040' => 
  array (
    'code' => '19:1:5:30040',
    'name' => 'parking_not_possible',
    'message' => 'Službu nelze zaparkovat',
  ),
  '19:1:5:30041' => 
  array (
    'code' => '19:1:5:30041',
    'name' => 'deletion_not_possible',
    'message' => 'Službu nelze smazat',
  ),
  '19:1:5:30042' => 
  array (
    'code' => '19:1:5:30042',
    'name' => 'reg_already_paid_but_not_registred',
    'message' => 'Registrace domény již uhrazena, ale registrace neprovedena',
  ),
  '19:1:5:30043' => 
  array (
    'code' => '19:1:5:30043',
    'name' => 'aliases_max_count_exceeded',
    'message' => 'Počet aliasů dosáhl povoleného počtu',
  ),
  '19:1:5:30044' => 
  array (
    'code' => '19:1:5:30044',
    'name' => 'bad_lock_state',
    'message' => 'Stav zámku není správný',
  ),
  '19:1:5:30045' => 
  array (
    'code' => '19:1:5:30045',
    'name' => 'not_ftp_account',
    'message' => 'Účet není ftp',
  ),
  '19:1:5:30046' => 
  array (
    'code' => '19:1:5:30046',
    'name' => 'service_permission_not_granted',
    'message' => 'Práva ke službě nebyla udělena',
  ),
  '19:1:5:30047' => 
  array (
    'code' => '19:1:5:30047',
    'name' => 'dns_not_ready',
    'message' => 'Dns není připravena',
  ),
  '19:1:5:30048' => 
  array (
    'code' => '19:1:5:30048',
    'name' => 'service_not_usable',
    'message' => 'Službu nelze použít',
  ),
  '19:1:5:30049' => 
  array (
    'code' => '19:1:5:30049',
    'name' => 'domain_name_not_managed',
    'message' => 'Doména není Zonerem spravována. Nejsme registrátorem',
  ),
  '19:1:5:30050' => 
  array (
    'code' => '19:1:5:30050',
    'name' => 'domain_not_exists',
    'message' => 'Doména v centru neexistuje',
  ),
  '19:1:5:30051' => 
  array (
    'code' => '19:1:5:30051',
    'name' => 'domain_name_managed',
    'message' => 'Doména Zonerem spravována. Jsme registrátorem',
  ),
  '19:1:5:30052' => 
  array (
    'code' => '19:1:5:30052',
    'name' => 'transfer_pending',
    'message' => 'Transfer zahájen',
  ),
  '19:1:5:30053' => 
  array (
    'code' => '19:1:5:30053',
    'name' => 'service_db_quotas_no_change_required',
    'message' => 'Změna kvót není požadována',
  ),
  '19:1:5:30054' => 
  array (
    'code' => '19:1:5:30054',
    'name' => 'db_count_quota_cannot_be_lower_than_created_db_count',
    'message' => 'Limit počtu databází nemůže být menší než počet existujících databází',
  ),
  '19:1:5:30055' => 
  array (
    'code' => '19:1:5:30055',
    'name' => 'db_count_quota_cannot_be_lower_than_min_db_count',
    'message' => 'Limit počtu databází nemůže být menší než počet databází, které má varianta k dispozici',
  ),
  '19:1:5:30056' => 
  array (
    'code' => '19:1:5:30056',
    'name' => 'db_space_quota_cannot_be_lower_than_allocated_db_space',
    'message' => 'Limit celkové velikosti databází nemůže být menší než součet aktuální velikosti existujících databází',
  ),
  '19:1:5:30057' => 
  array (
    'code' => '19:1:5:30057',
    'name' => 'db_space_quota_cannot_be_lower_than_min_db_space',
    'message' => 'Limit celkové velikosti databází nemůže být menší než limit, který má varianta k dispozici',
  ),
  '19:1:6:30001' => 
  array (
    'code' => '19:1:6:30001',
    'name' => 'service_task_type_unknown',
    'message' => 'Neznámý typ úlohy',
  ),
  '19:1:6:30002' => 
  array (
    'code' => '19:1:6:30002',
    'name' => 'service_task_params_invalid',
    'message' => 'Neplatné parametry úlohy',
  ),
  '19:1:6:30003' => 
  array (
    'code' => '19:1:6:30003',
    'name' => 'service_task_permissions_denied',
    'message' => 'Nemáte oprávnění k vykonání dané úlohy',
  ),
  '19:1:6:30004' => 
  array (
    'code' => '19:1:6:30004',
    'name' => 'service_task_unexpected_exception',
    'message' => 'Nastala neočekávaná vyjímka',
  ),
  '19:1:6:30005' => 
  array (
    'code' => '19:1:6:30005',
    'name' => 'service_task_parsing_error_failed',
    'message' => 'Parsování chyby selhalo',
  ),
  '19:1:6:30006' => 
  array (
    'code' => '19:1:6:30006',
    'name' => 'service_task_database_not_found',
    'message' => 'Databáze nebyla nalezena',
  ),
  '19:1:7:30001' => 
  array (
    'code' => '19:1:7:30001',
    'name' => 'dnssec_not_available',
    'message' => 'Pro dané doménové jméno není DNSSEC k dispozici',
  ),
  '19:1:7:30002' => 
  array (
    'code' => '19:1:7:30002',
    'name' => 'dns_not_managed_dnssec_forbidden',
    'message' => 'Doménové jméno nemá DNS spravováno. DNSSEC nelze použít',
  ),
  '19:1:7:30003' => 
  array (
    'code' => '19:1:7:30003',
    'name' => 'dnssec_state_not_valid',
    'message' => 'U daného doménového jména právě probíhá změna stavu DNSSEC',
  ),
  '19:1:7:30004' => 
  array (
    'code' => '19:1:7:30004',
    'name' => 'dnssec_operations_failed',
    'message' => 'Vložení operací pro DNSSEC selhalo',
  ),
  '19:1:7:30005' => 
  array (
    'code' => '19:1:7:30005',
    'name' => 'domain_expired',
    'message' => 'Doména expirovala',
  ),
  '19:1:8:30001' => 
  array (
    'code' => '19:1:8:30001',
    'name' => 'user_domain_list_name_missing',
    'message' => 'Chybí název uživatelského seznamu domén',
  ),
  '19:1:8:30002' => 
  array (
    'code' => '19:1:8:30002',
    'name' => 'user_domain_list_name_max_length_exceeded',
    'message' => 'Název uživatelského seznamu domén překračuje povolenou délku',
  ),
  '19:1:8:30003' => 
  array (
    'code' => '19:1:8:30003',
    'name' => 'user_domain_list_description_max_length_exceeded',
    'message' => 'Popis uživatelského seznamu domén překračuje povolenou délku',
  ),
  '19:1:8:30004' => 
  array (
    'code' => '19:1:8:30004',
    'name' => 'user_domain_list_creation_failed',
    'message' => 'Vytvoření uživatelského seznamu domén selhalo',
  ),
  '19:1:9:30001' => 
  array (
    'code' => '19:1:9:30001',
    'name' => 'order_item_not_knowing_how_to_process',
    'message' => 'Nelze určit jak položku v objednávce zpracovat',
  ),
  '19:1:9:30002' => 
  array (
    'code' => '19:1:9:30002',
    'name' => 'order_item_unable_to_parse_params',
    'message' => 'Nelze parsovat parametry položky v objednávce',
  ),
  '19:1:9:30003' => 
  array (
    'code' => '19:1:9:30003',
    'name' => 'order_item_domain_payer_someone_else',
    'message' => 'Plátcem za doménu je jiný účet než je uvedeno v objednávce',
  ),
  '19:1:9:30004' => 
  array (
    'code' => '19:1:9:30004',
    'name' => 'order_item_not_zoner_registrar',
    'message' => 'Registrátorem domény není Zoner',
  ),
  '19:1:9:30005' => 
  array (
    'code' => '19:1:9:30005',
    'name' => 'order_item_renew_in_progress',
    'message' => 'Prodloužení platnosti domény již bylo zahájeno',
  ),
  '19:1:9:30006' => 
  array (
    'code' => '19:1:9:30006',
    'name' => 'order_item_years_to_renew_out_of_range',
    'message' => 'Nelze prodloužit platnost domény o zvolený počet let',
  ),
  '19:1:9:30007' => 
  array (
    'code' => '19:1:9:30007',
    'name' => 'order_item_low_credit',
    'message' => 'Na kreditním účtu není dostatek kreditů',
  ),
  '19:1:9:30008' => 
  array (
    'code' => '19:1:9:30008',
    'name' => 'order_item_exception_occurred',
    'message' => 'Vyskytly se potíže při práci s databází nebo kreditním systémem',
  ),
  '19:1:9:30009' => 
  array (
    'code' => '19:1:9:30009',
    'name' => 'order_item_tld_not_supported',
    'message' => 'TLD není podporováno',
  ),
  '19:1:9:30010' => 
  array (
    'code' => '19:1:9:30010',
    'name' => 'order_item_owner_does_not_exist',
    'message' => 'Kontakt uvedený jako vlastník neexistuje',
  ),
  '19:1:9:30011' => 
  array (
    'code' => '19:1:9:30011',
    'name' => 'order_item_owner_missing_data',
    'message' => 'U vlastníka nejsou uvedeny všechny potřebné údaje',
  ),
  '19:1:9:30012' => 
  array (
    'code' => '19:1:9:30012',
    'name' => 'order_item_admin_does_not_exist',
    'message' => 'Kontakt uvedený jako admin neexistuje',
  ),
  '19:1:9:30013' => 
  array (
    'code' => '19:1:9:30013',
    'name' => 'order_item_admin_missing_data',
    'message' => 'U admina nejsou uvedeny všechny potřebné údaje',
  ),
  '19:1:9:30014' => 
  array (
    'code' => '19:1:9:30014',
    'name' => 'order_item_tech_does_not_exist',
    'message' => 'Kontakt uvedený jako tech neexistuje',
  ),
  '19:1:9:30015' => 
  array (
    'code' => '19:1:9:30015',
    'name' => 'order_item_tech_missing_data',
    'message' => 'U techa nejsou uvedeny všechny potřebné údaje',
  ),
  '19:1:9:30016' => 
  array (
    'code' => '19:1:9:30016',
    'name' => 'order_item_domain_name_not_available',
    'message' => 'Doménové jméno nelze použít',
  ),
  '19:1:9:30017' => 
  array (
    'code' => '19:1:9:30017',
    'name' => 'order_item_service_state_not_ok',
    'message' => 'Služba musí být ve stavu OK',
  ),
  '19:1:9:30018' => 
  array (
    'code' => '19:1:9:30018',
    'name' => 'order_item_varcode_identical',
    'message' => 'Cílová varianta je stejná jako aktuální',
  ),
  '19:1:9:30019' => 
  array (
    'code' => '19:1:9:30019',
    'name' => 'order_item_upgrade_not_available',
    'message' => 'Upgrade nelze provést',
  ),
  '19:1:9:30020' => 
  array (
    'code' => '19:1:9:30020',
    'name' => 'order_item_payment_period_invalid',
    'message' => 'Platební období je neplatné',
  ),
  '19:1:9:30021' => 
  array (
    'code' => '19:1:9:30021',
    'name' => 'order_item_bad_user',
    'message' => 'Neexistující uživatel',
  ),
  '19:1:9:30022' => 
  array (
    'code' => '19:1:9:30022',
    'name' => 'order_item_bad_varcode',
    'message' => 'Daný kód varianty nelze použít',
  ),
  '19:1:9:30023' => 
  array (
    'code' => '19:1:9:30023',
    'name' => 'order_item_bad_domain_name',
    'message' => 'Doménové jméno nelze použít',
  ),
  '19:1:9:30024' => 
  array (
    'code' => '19:1:9:30024',
    'name' => 'order_item_bad_registration_data',
    'message' => 'Údaje pro registraci doménového jména nelze použít',
  ),
  '19:1:9:30025' => 
  array (
    'code' => '19:1:9:30025',
    'name' => 'order_item_registering_contact_failed',
    'message' => 'Registrace kontaktu selhala',
  ),
  '19:1:9:30026' => 
  array (
    'code' => '19:1:9:30026',
    'name' => 'order_item_dns_conflict',
    'message' => 'V dns již jméno existuje',
  ),
  '19:1:9:30027' => 
  array (
    'code' => '19:1:9:30027',
    'name' => 'order_item_hosting_server_identical',
    'message' => 'Daný server pro hosting je shodný s aktuálním',
  ),
  '19:1:9:30028' => 
  array (
    'code' => '19:1:9:30028',
    'name' => 'order_item_bad_server',
    'message' => 'Daný server nelze použít',
  ),
  '19:1:9:30029' => 
  array (
    'code' => '19:1:9:30029',
    'name' => 'order_item_inpage_package_not_available',
    'message' => 'Daný inapge balíček nelze použít',
  ),
  '19:1:9:30030' => 
  array (
    'code' => '19:1:9:30030',
    'name' => 'cloud_server_program_not_valid',
    'message' => 'Program cloud serveru je neplatný',
  ),
  '19:1:9:30031' => 
  array (
    'code' => '19:1:9:30031',
    'name' => 'cloud_server_opsys_not_valid',
    'message' => 'Operační systém cloud serveru je neplatný',
  ),
  '19:1:9:30032' => 
  array (
    'code' => '19:1:9:30032',
    'name' => 'order_item_bad_voucher_code',
    'message' => 'Slevový kupón nelze použít',
  ),
  '19:1:9:30033' => 
  array (
    'code' => '19:1:9:30033',
    'name' => 'order_item_transfer_failed',
    'message' => 'Transfer se nepodařilo provést',
  ),
  '19:1:9:30034' => 
  array (
    'code' => '19:1:9:30034',
    'name' => 'anonymous_order_assigning_impossible',
    'message' => 'Přiřazení anonymní objednávky není možné',
  ),
  '19:1:9:30035' => 
  array (
    'code' => '19:1:9:30035',
    'name' => 'transfer_failed',
    'message' => 'Převod některé domény selhal',
  ),
  '19:1:9:30036' => 
  array (
    'code' => '19:1:9:30036',
    'name' => 'create_group_payment_failed',
    'message' => 'Vytvoření hromadné platby se nezdařilo',
  ),
  '19:1:10:30001' => 
  array (
    'code' => '19:1:10:30001',
    'name' => 'mailbox_count_below_default',
    'message' => 'Počet poštovních schránek je nižší než určuje varianta',
  ),
  '19:1:10:30002' => 
  array (
    'code' => '19:1:10:30002',
    'name' => 'operation_on_mailserver_failed',
    'message' => 'Vykonání operace na poštovním serveru selhalo',
  ),
  '19:1:10:30003' => 
  array (
    'code' => '19:1:10:30003',
    'name' => 'mail_quota_below_default',
    'message' => 'Celková poštovní kvóta je nižší než určuje varianta',
  ),
  '19:1:11:30001' => 
  array (
    'code' => '19:1:11:30001',
    'name' => 'web_quota_below_default',
    'message' => 'Webová kvóta je nižší než určuje varianta',
  ),
  '19:1:11:30002' => 
  array (
    'code' => '19:1:11:30002',
    'name' => 'operation_on_webserver_failed',
    'message' => 'Vykonání operace na webovém serveru selhalo',
  ),
  '19:1:11:30003' => 
  array (
    'code' => '19:1:11:30003',
    'name' => 'web_quota_below_min',
    'message' => 'Webová kvóta je nižší než určuje minimum u varianty',
  ),
  '19:1:12:30001' => 
  array (
    'code' => '19:1:12:30001',
    'name' => 'mojeid_handle_check_failed',
    'message' => 'Kontrola dostupnosti uživatelského jména mojeID identity selhala',
  ),
  '19:1:12:30002' => 
  array (
    'code' => '19:1:12:30002',
    'name' => 'mojeid_username_missing',
    'message' => 'Chybí uživatelské jméno mojeID identity',
  ),
  '19:1:12:30003' => 
  array (
    'code' => '19:1:12:30003',
    'name' => 'mojeid_username_max_length_exceeded',
    'message' => 'Uživatelské jméno mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30004' => 
  array (
    'code' => '19:1:12:30004',
    'name' => 'mojeid_first_name_missing',
    'message' => 'Chybí jméno mojeID identity',
  ),
  '19:1:12:30005' => 
  array (
    'code' => '19:1:12:30005',
    'name' => 'mojeid_first_name_max_length_exceeded',
    'message' => 'Jméno mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30006' => 
  array (
    'code' => '19:1:12:30006',
    'name' => 'mojeid_last_name_missing',
    'message' => 'Chybí příjmení mojeID identity',
  ),
  '19:1:12:30007' => 
  array (
    'code' => '19:1:12:30007',
    'name' => 'mojeid_last_name_max_length_exceeded',
    'message' => 'Příjmení mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30008' => 
  array (
    'code' => '19:1:12:30008',
    'name' => 'mojeid_address_street_missing',
    'message' => 'Chybí ulice mojeID identity',
  ),
  '19:1:12:30009' => 
  array (
    'code' => '19:1:12:30009',
    'name' => 'mojeid_address_street_max_length_exceeded',
    'message' => 'Ulice mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30010' => 
  array (
    'code' => '19:1:12:30010',
    'name' => 'mojeid_address_city_missing',
    'message' => 'Chybí město mojeID identity',
  ),
  '19:1:12:30011' => 
  array (
    'code' => '19:1:12:30011',
    'name' => 'mojeid_address_city_max_length_exceeded',
    'message' => 'Město mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30012' => 
  array (
    'code' => '19:1:12:30012',
    'name' => 'mojeid_address_postal_code_missing',
    'message' => 'Chybí PSČ mojeID identity',
  ),
  '19:1:12:30013' => 
  array (
    'code' => '19:1:12:30013',
    'name' => 'mojeid_address_postal_code_max_length_exceeded',
    'message' => 'PSČ mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30014' => 
  array (
    'code' => '19:1:12:30014',
    'name' => 'mojeid_address_country_missing',
    'message' => 'Chybí země mojeID identity',
  ),
  '19:1:12:30015' => 
  array (
    'code' => '19:1:12:30015',
    'name' => 'mojeid_address_country_max_length_exceeded',
    'message' => 'Země mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30016' => 
  array (
    'code' => '19:1:12:30016',
    'name' => 'mojeid_address_country_invalid',
    'message' => 'Neplatná země mojeID identity',
  ),
  '19:1:12:30017' => 
  array (
    'code' => '19:1:12:30017',
    'name' => 'mojeid_email_missing',
    'message' => 'Chybí e-mail mojeID identity',
  ),
  '19:1:12:30018' => 
  array (
    'code' => '19:1:12:30018',
    'name' => 'mojeid_email_max_length_exceeded',
    'message' => 'E-mail mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30019' => 
  array (
    'code' => '19:1:12:30019',
    'name' => 'mojeid_email_invalid',
    'message' => 'Neplatný e-mail mojeID identity',
  ),
  '19:1:12:30020' => 
  array (
    'code' => '19:1:12:30020',
    'name' => 'mojeid_phone_number_missing',
    'message' => 'Chybí telefon mojeID identity',
  ),
  '19:1:12:30021' => 
  array (
    'code' => '19:1:12:30021',
    'name' => 'mojeid_phone_number_max_length_exceeded',
    'message' => 'Telefon mojeID identity překračuje povolenou délku',
  ),
  '19:1:12:30022' => 
  array (
    'code' => '19:1:12:30022',
    'name' => 'mojeid_phone_number_invalid',
    'message' => 'Neplatný telefon mojeID identity',
  ),
  '19:1:12:30023' => 
  array (
    'code' => '19:1:12:30023',
    'name' => 'mojeid_register_error',
    'message' => 'Došlo k protokolární chybě',
  ),
  '19:1:12:30024' => 
  array (
    'code' => '19:1:12:30024',
    'name' => 'mojeid_register_exception',
    'message' => 'Došlo k vyjímce',
  ),
  '19:1:12:30025' => 
  array (
    'code' => '19:1:12:30025',
    'name' => 'mojeid_register_failure',
    'message' => 'Došlo k regstrační chybě',
  ),
  '19:1:13:30001' => 
  array (
    'code' => '19:1:13:30001',
    'name' => 'ipv4_not_found',
    'message' => 'IPv4 nebyla nalezena',
  ),
  '19:1:13:30002' => 
  array (
    'code' => '19:1:13:30002',
    'name' => 'dns_domain_name_invalid',
    'message' => 'Doménové jméno není platné',
  ),
  '19:1:13:30003' => 
  array (
    'code' => '19:1:13:30003',
    'name' => 'dns_ptr_record_not_found',
    'message' => 'PTR záznam nebyl nalezen',
  ),
  '19:1:13:30004' => 
  array (
    'code' => '19:1:13:30004',
    'name' => 'dns_host_name_invalid',
    'message' => 'Název hosta není platný',
  ),
  '19:1:13:30005' => 
  array (
    'code' => '19:1:13:30005',
    'name' => 'ipv4_invalid',
    'message' => 'IPv4 není platná',
  ),
  '19:1:13:30006' => 
  array (
    'code' => '19:1:13:30006',
    'name' => 'dns_alias_name_invalid',
    'message' => 'Název aliasu není platný',
  ),
  '19:1:13:30007' => 
  array (
    'code' => '19:1:13:30007',
    'name' => 'ipv6_invalid',
    'message' => 'IPv6 není platná',
  ),
  '19:1:13:30008' => 
  array (
    'code' => '19:1:13:30008',
    'name' => 'dns_mail_server_name_invalid',
    'message' => 'Název poštovního serveru není platný',
  ),
  '19:1:13:30009' => 
  array (
    'code' => '19:1:13:30009',
    'name' => 'dns_name_invalid',
    'message' => 'Název služby, protokolu a případně celé domény není platný',
  ),
  '19:1:13:30010' => 
  array (
    'code' => '19:1:13:30010',
    'name' => 'dns_target_invalid',
    'message' => 'Název cílové domény není platný',
  ),
  '19:1:13:30011' => 
  array (
    'code' => '19:1:13:30011',
    'name' => 'dns_zone_not_managed',
    'message' => 'Zóna není spravována na serverech Zoneru',
  ),
  '19:1:13:30012' => 
  array (
    'code' => '19:1:13:30012',
    'name' => 'dns_ttl_invalid',
    'message' => 'TTL není platné',
  ),
  '19:1:13:30013' => 
  array (
    'code' => '19:1:13:30013',
    'name' => 'dns_record_already_exists',
    'message' => 'Dns záznam již existuje',
  ),
  '19:1:13:30014' => 
  array (
    'code' => '19:1:13:30014',
    'name' => 'is_dns_zone_managed_failed',
    'message' => 'Ověření, že dns zóna je spravována Zonerem selhalo',
  ),
  '19:1:14:30001' => 
  array (
    'code' => '19:1:14:30001',
    'name' => 'package_class_invalid',
    'message' => 'Neplatná třída balíčku',
  ),
  '19:1:14:30002' => 
  array (
    'code' => '19:1:14:30002',
    'name' => 'package_payment_period_invalid',
    'message' => 'Neplatné platební období balíčku',
  ),
  '19:1:14:30003' => 
  array (
    'code' => '19:1:14:30003',
    'name' => 'package_not_found',
    'message' => 'Balíček nenalezen',
  ),
  '19:1:14:30004' => 
  array (
    'code' => '19:1:14:30004',
    'name' => 'package_already_initialized',
    'message' => 'Balíček již zahájen',
  ),
  '19:1:14:30005' => 
  array (
    'code' => '19:1:14:30005',
    'name' => 'package_not_initialized',
    'message' => 'Balíček nebyl dosud zahájen',
  ),
  '19:1:14:30006' => 
  array (
    'code' => '19:1:14:30006',
    'name' => 'package_invoice_request_not_found',
    'message' => 'Žádost k fakturaci balíčku nenalezena',
  ),
  '19:1:14:30007' => 
  array (
    'code' => '19:1:14:30007',
    'name' => 'invoice_request_id_mismatch',
    'message' => 'Identifikátor žádosti k fakturaci balíčku nesouhlasí',
  ),
  '19:1:14:30008' => 
  array (
    'code' => '19:1:14:30008',
    'name' => 'payment_already_notified',
    'message' => 'Oznámení o platbě bylo již zaznamenáno',
  ),
  '19:1:14:30009' => 
  array (
    'code' => '19:1:14:30009',
    'name' => 'package_subclass_invalid',
    'message' => 'Neplatná podtřída balíčku',
  ),
  '19:1:14:30010' => 
  array (
    'code' => '19:1:14:30010',
    'name' => 'package_bound_servers_found',
    'message' => 'Nalezeny servery svázané s balíčkem',
  ),
  '19:1:16:30001' => 
  array (
    'code' => '19:1:16:30001',
    'name' => 'credentials_password_too_short',
    'message' => 'Heslo je příliš krátké. Minimum je 6 znaků',
  ),
  '19:1:16:30002' => 
  array (
    'code' => '19:1:16:30002',
    'name' => 'credentials_password_too_long',
    'message' => 'Heslo je příliš dlouhé. Maximum je 50 znaků',
  ),
  '19:1:16:30003' => 
  array (
    'code' => '19:1:16:30003',
    'name' => 'credentials_password_invalid_chars',
    'message' => 'Heslo obsahuje nepovolené znaky',
  ),
  '19:1:16:30004' => 
  array (
    'code' => '19:1:16:30004',
    'name' => 'credentials_username_too_short',
    'message' => 'Jméno je příliš krátké. Minimum jsou 4 znaky',
  ),
  '19:1:16:30005' => 
  array (
    'code' => '19:1:16:30005',
    'name' => 'credentials_username_too_long',
    'message' => 'Jméno je příliš dlouhé. Maximum je 50 znaků',
  ),
  '19:1:16:30006' => 
  array (
    'code' => '19:1:16:30006',
    'name' => 'credentials_username_invalid_chars',
    'message' => 'Jméno obsahuje nepovolené znaky',
  ),
  '19:1:16:30007' => 
  array (
    'code' => '19:1:16:30007',
    'name' => 'alt_credentials_do_not_exist',
    'message' => 'Tento účet nemá nastaveny alternativní přihlašovací údaje',
  ),
  '19:1:16:30008' => 
  array (
    'code' => '19:1:16:30008',
    'name' => 'credentials_username_already_exists',
    'message' => 'Jméno nelze použít, je již obsazené',
  ),
  '19:1:16:30009' => 
  array (
    'code' => '19:1:16:30009',
    'name' => 'alt_credentials_already_exist',
    'message' => 'Tento účet má již nastaveny alternativní přihlašovací údaje',
  ),
  '19:1:16:30010' => 
  array (
    'code' => '19:1:16:30010',
    'name' => 'credentials_username_empty',
    'message' => 'Jméno není vyplněno',
  ),
  '19:1:16:30011' => 
  array (
    'code' => '19:1:16:30011',
    'name' => 'credentials_password_empty',
    'message' => 'Heslo není vyplněno',
  ),
  '19:1:16:30012' => 
  array (
    'code' => '19:1:16:30012',
    'name' => 'alt_credentials_invalid',
    'message' => 'Jméno nebo heslo nesouhlasí',
  ),
  '19:1:16:30013' => 
  array (
    'code' => '19:1:16:30013',
    'name' => 'credentials_current_password_incorrect',
    'message' => 'Nynější heslo je nesprávné',
  ),
  '19:1:16:30014' => 
  array (
    'code' => '19:1:16:30014',
    'name' => 'credentials_master_password_incorrect',
    'message' => 'Hlavní heslo je nesprávné',
  ),
  '19:1:17:30001' => 
  array (
    'code' => '19:1:17:30001',
    'name' => 'tld_fee_userid_invalid',
    'message' => 'Neplatné userId',
  ),
  '19:1:17:30002' => 
  array (
    'code' => '19:1:17:30002',
    'name' => 'tld_fee_category_invalid',
    'message' => 'Neplatná kategorie',
  ),
  '19:1:17:30003' => 
  array (
    'code' => '19:1:17:30003',
    'name' => 'tld_fee_tld_missing',
    'message' => 'Tld není zadáno',
  ),
  '19:1:17:30004' => 
  array (
    'code' => '19:1:17:30004',
    'name' => 'tld_fee_period_out_of_bounds',
    'message' => 'Hodnota period není v povolených mezích',
  ),
  '19:1:17:30005' => 
  array (
    'code' => '19:1:17:30005',
    'name' => 'tld_fee_pbu_invalid',
    'message' => 'Neplatné pbu',
  ),
  '19:1:17:30006' => 
  array (
    'code' => '19:1:17:30006',
    'name' => 'tld_fee_amount_empty',
    'message' => 'Částka není zadána',
  ),
  '19:1:17:30007' => 
  array (
    'code' => '19:1:17:30007',
    'name' => 'tld_fee_amount_currency_invalid',
    'message' => 'Neplatná měna',
  ),
  '19:1:17:30008' => 
  array (
    'code' => '19:1:17:30008',
    'name' => 'tld_fee_amount_limit_count_invalid',
    'message' => 'Neplatná hodnota limitCount',
  ),
  '19:1:17:30009' => 
  array (
    'code' => '19:1:17:30009',
    'name' => 'tld_fee_tld_invalid',
    'message' => 'Neplatné tld',
  ),
  '19:1:17:30010' => 
  array (
    'code' => '19:1:17:30010',
    'name' => 'tld_fee_create_failed',
    'message' => 'Vytvoření nové položky v ceníku domén selhalo, stejná položka již nejspíš existuje',
  ),
  '19:1:17:30011' => 
  array (
    'code' => '19:1:17:30011',
    'name' => 'tld_fee_delete_failed',
    'message' => 'Zrušení položky v ceníku domén selhalo',
  ),
  '19:1:17:30012' => 
  array (
    'code' => '19:1:17:30012',
    'name' => 'tld_fee_not_found',
    'message' => 'Položka v ceníku domén nenalezena',
  ),
  '19:1:17:30013' => 
  array (
    'code' => '19:1:17:30013',
    'name' => 'tld_fee_delete_not_possible',
    'message' => 'Zrušit položku v ceníku domén nelze',
  ),
  '19:1:17:30014' => 
  array (
    'code' => '19:1:17:30014',
    'name' => 'tld_fee_update_failed',
    'message' => 'Úprava částy u položky v ceníku domén selhala',
  ),
  '19:1:17:30015' => 
  array (
    'code' => '19:1:17:30015',
    'name' => 'pricelist_tld_create_failed',
    'message' => 'Přidání nové TLD do ceníku domén selhalo',
  ),
  '19:1:17:30016' => 
  array (
    'code' => '19:1:17:30016',
    'name' => 'tld_fee_amount_under_purchase',
    'message' => 'Částka musí být vyšší než nákupní cena',
  ),
  '19:1:21:30001' => 
  array (
    'code' => '19:1:21:30001',
    'name' => 'payment_notified_before',
    'message' => 'Oznámení o platbě bylo již učiněno dříve',
  ),
  '19:1:22:30001' => 
  array (
    'code' => '19:1:22:30001',
    'name' => 'domain_name_already_used',
    'message' => 'Doménové jméno se již používá',
  ),
  '19:1:22:30002' => 
  array (
    'code' => '19:1:22:30002',
    'name' => 'domain_name_invalid',
    'message' => 'Doménové jméno není platné',
  ),
  '19:1:22:30003' => 
  array (
    'code' => '19:1:22:30003',
    'name' => 'phone_invalid',
    'message' => 'Telefonní číslo není platné',
  ),
  '19:1:22:30004' => 
  array (
    'code' => '19:1:22:30004',
    'name' => 'email_invalid',
    'message' => 'E-mail adresa není platná',
  ),
  '19:1:22:30005' => 
  array (
    'code' => '19:1:22:30005',
    'name' => 'country_code_invalid',
    'message' => 'Kód země není platný',
  ),
  '19:1:22:30006' => 
  array (
    'code' => '19:1:22:30006',
    'name' => 'first_name_invalid',
    'message' => 'Jméno není platné',
  ),
  '19:1:22:30007' => 
  array (
    'code' => '19:1:22:30007',
    'name' => 'last_name_invalid',
    'message' => 'Příjmení není platné',
  ),
  '19:1:22:30008' => 
  array (
    'code' => '19:1:22:30008',
    'name' => 'new_password_invalid',
    'message' => 'Heslo pro privátní klíč nelze použít',
  ),
  '19:1:22:30009' => 
  array (
    'code' => '19:1:22:30009',
    'name' => 'org_unit_invalid',
    'message' => 'Organizační jednotka není platná',
  ),
  '19:1:22:30010' => 
  array (
    'code' => '19:1:22:30010',
    'name' => 'org_invalid',
    'message' => 'Organizace není platná',
  ),
  '19:1:22:30011' => 
  array (
    'code' => '19:1:22:30011',
    'name' => 'state_invalid',
    'message' => 'Stát není platný',
  ),
  '19:1:22:30012' => 
  array (
    'code' => '19:1:22:30012',
    'name' => 'locality_invalid',
    'message' => 'Lokalita není platná',
  ),
  '19:1:22:30013' => 
  array (
    'code' => '19:1:22:30013',
    'name' => 'certificate_data_not_found',
    'message' => 'Nejprve vložte data certifikátu',
  ),
  '19:1:22:30014' => 
  array (
    'code' => '19:1:22:30014',
    'name' => 'certificate_expired',
    'message' => 'Platnost certifikátu již vypršela',
  ),
  '19:1:22:30015' => 
  array (
    'code' => '19:1:22:30015',
    'name' => 'certificate_not_usable',
    'message' => 'Data certifikátu nelze použít',
  ),
  '19:1:22:30016' => 
  array (
    'code' => '19:1:22:30016',
    'name' => 'exp_date_out_of_range',
    'message' => 'Datum expirace je mimo povolený rozsah',
  ),
);
}
?>