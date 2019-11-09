#ifndef MOD_CADMIN_MDESCS
#define MOD_CADMIN_MDESCS

#include "mdescs.h"

// cadmin messages
#define CADMIN_CMSM(c) \
	MDESC2(c, cadmin_cmsm, user_authenticate,											9,0,0,1, "Autentizace uživatele.", "Autentizace uživatele se nezdaøila.") \
\
	MDESC2(c, cadmin_cmsm, service_stop,												9,0,1,1, "Zastavení služby.", "Zastavení služby se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_start,												9,0,1,2, "Spuštìní služby.", "Spuštìní služby se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_delete,												9,0,1,3, "Smazání služby.", "Smazání služby se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_mailserver_create_ccc,								9,0,1,4, "Vytvoøení poštovního serveru pro danou službu.", "Vytvoøení poštovního serveru pro danou službu se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_mailserver_delete_ccc,								9,0,1,5, "Zrušení poštovního serveru pro danou službu.", "Zrušení poštovního serveru pro danou službu se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_bonus_create_ccc,									9,0,1,6, "Vytvoøení bonusu pro novou službu.", "Vytvoøení bonusu pro novou službu se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_advertcamp_change_ccc,								9,0,1,7, "Zmìna advertcamp pro danou službu.", "Zmìna advertcamp pro danou službu se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, service_bonus_transfer_ccc,									9,0,1,8, "Pøevedení bonusu pro novou službu.", "Pøevedení bonusu pro novou službu se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_name_duplicity_check_ccc,							9,0,1,9, "Kontrola duplicity doménového jména pro službu.", "Kontrola dostupnosti doménového jména pro službu se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, service_cert_add_ccc,										9,0,1,10, "Vložení žádosti o certifikát k doménovému jménu.", "Vložení žádosti o certifikát k doménovému jménu se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_idcamp_change_ccc,									9,0,1,11, "Zmìna IDCamp pro danou službu.", "Zmìna IDCamp pro danou službu se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, service_miniweb_mailserver_create_ccc,						9,0,1,12, "Vytvoøení pošty pro miniweb pro danou službu.", "Vytvoøení pošty pro miniweb pro danou službu se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, customer_create,												9,1,0,1, "Vytvoøení nového zákazníka.", "Vytvoøení nového zákazníka se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, customer_change_password,									9,1,0,2, "Zmìna pøihlašovací hesla zákazníka.", "Zmìna pøihlašovací hesla zákazníka se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, customer_get_data,											9,1,0,3, "Naètení údajù zákazníka.", "Naètení údajù zákazníka se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, customer_get_used_servers,									9,1,0,4, "Získá seznam serverù používaných daným zákazníkem.", "Získání seznamu serverù používaných daným zákazníkem se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, customer_get_other_customer_data,							9,1,0,5, "Naètení údajù urèitého zákazníka.", "Naètení údajù urèitého zákazníka se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, customer_send_unsubscribe_mail_ccc,							9,1,0,6, "Rozešle emaily pro odhlášení zákazníka z odbìru novinek.", "Rozeslání emailù pro odhlášení zákazníka z odbìru novinek se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, customer_unsubscribe_ccc,									9,1,0,7, "Odhlášení zákazníka z odbìru novinek.", "Odhlášení zákazníka z odbìru novinek se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, customer_activate_credit_system,								9,1,0,8, "Pøepnutí zákazníka na kreditní systém.", "Pøepnutí zákazníka na kreditní systém se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, customer_get_gogo_servers,									9,1,0,9, "Získá seznam serverù GOGO používaných daným zákazníkem.", "Získání seznamu serverù GOGO používaných daným zákazníkem se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, service_foto24_upgrade,										9,1,1,1, "Pøevod služby na variantu Foto24 XXL a prodloužení bezplatného provozu.", "Pøevod služby na variantu Foto24 XXL a prodloužení bezplatného provozu se nezdaøil.") \
	MDESC2(c, cadmin_cmsm, service_main_account_change_password,						9,1,1,2, "Zmìna hesla hlavního FTP úètu služby.", "Zmìna hesla hlavního FTP úètu služby se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, service_hosting_able_check,									9,1,1,3, "Ovìøí zda lze službu zprovoznit.", "Ovìøení zda lze službu zprovoznit se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, service_order_on_parent_domain,								9,1,1,4, "Vloží objednávku služby na pronajmuté doménì.", "Vložení objednávky služby na pronajmuté doménì se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_order_new_domain,									9,1,1,5, "Vloží objednávku služby na nové doménì.", "Vložení objednávky služby na nové doménì se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_inshop4_demo_upgrade,								9,1,1,6, "Pøevod služby na variantu inShop4 Profi T.", "Pøevod služby na variantu inShop4 Profi T se nezdaøil.") \
	MDESC2(c, cadmin_cmsm, service_safeguard,											9,1,1,7, "Zabezpeèí službu zamknutím a zmìnou ftp hesla.", "Zabezpeèení služby zamknutím a zmìnou ftp hesla se nezdaøil.") \
	MDESC2(c, cadmin_cmsm, service_access,												9,1,1,8, "Zjistí zda se služba nachází na daném úètu.", "Zjištìní zda se služba nachází na daném úètu se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, service_inpage_mini_upgrade,									9,1,1,9, "Povýšení služby ve variantì inPage Mini.", "Povýšení služby ve variantì inPage Mini se nezdaøil.") \
	MDESC2(c, cadmin_cmsm, service_db_change_limits,									9,1,1,10, "Zmìna limitù sql databáze.", "Zmìna limitù sql databáze se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, service_inpage_upgrade,										9,1,1,11, "Povýšení placené služby inPage.", "Povýšení placené služby inPage se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, coupon_code_check,											9,1,2,1, "Ovìøí platnost kupónu.", "Ovìøení platnosti kupónu se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, coupon_order,												9,1,2,2, "Vložení kupónové objednávky.", "Vložení kupónové objednávky se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_domains_not_done,						9,1,3,1, "Získá seznam dosud nevyøízených cizorodých domén.", "Získání seznamu dosud nevyøízených cizorodých domén se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_new_exp_date,							9,1,3,2, "Nastavení nového datumu expirace cizorodé domény.", "Nastavení nového datumu expirace cizorodé domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_data,									9,1,3,3, "Naètení údajù o cizorodé doménì.", "Naètení údajù o cizorodé doménì se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_registration_data,						9,1,3,4, "Naètení údajù pro registraci cizorodé domény.", "Naètení údajù pro registraci cizorodé domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_state,									9,1,3,5, "Nastavení stavu zpracování cizorodé domény.", "Nastavení stavu zpracování cizorodé domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_remove,									9,1,3,6, "Zrušení cizorodé domény.", "Zrušení cizorodé domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_msg_text,								9,1,3,7, "Naètení zprávy s pokyny pro registraci cizorodé domény.", "Naètení zprávy s pokyny pro registraci cizorodé domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_note,									9,1,3,8, "Nastavení poznámky cizorodé domény.", "Nastavení poznámky cizorodé domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_change_registrar_notice,					9,1,3,9, "Oznámení o zmìnì registrátora.", "Oznámení o zmìnì registrátora se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_restart_transfer,							9,1,3,10, "Znovuspuštìní transferu domény.", "Znovuspuštìní transferu domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_update_dns,								9,1,3,11, "Zmeni DNS domény v DB.", "Zmena DNS domeny se nezdarila.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_msg_text,								9,1,3,12, "Update zprávy s pokyny pro registraci cizorodé domény.", "Update zprávy s pokyny pro registraci cizorodé domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_msg_texts,								9,1,3,13, "Naètení všech zpráv s pokyny pro registraci cizorodé domény.", "Naètení zpráv s pokyny pro registraci cizorodé domény se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_order_id,								9,1,3,14, "Nastavení orderID cizorodé domény.", "Nastavení orderID cizorodé domény se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, server_delete,												9,1,4,1, "Smazání serveru.", "Smazání serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_housing_create,										9,1,4,2, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_hosting_linux_create,									9,1,4,3, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_hosting_win_create,									9,1,4,4, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_hosting_win2008_create,								9,1,4,5, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_linux_create,								9,1,4,6, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_win_create,								9,1,4,7, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_win2008_create,							9,1,4,8, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_inshop3_create,							9,1,4,9, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_inshop4_create,							9,1,4,10, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, server_hosting_win2012_create,								9,1,4,11, "Vytvoøení nového serveru.", "Vytvoøení nového serveru se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, dns_make_zone,												9,1,5,1, "Vytvoøení zóny v dns.", "Vytvoøení zóny v dns se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_delete_zone,												9,1,5,2, "Smazání zóny z dns.", "Smazání zóny z dns se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_add_a_record,											9,1,5,3, "Pøidání A záznamu do zóny.", "Pøidání A záznamu do zóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_del_a_record,											9,1,5,4, "Smazání A záznamu ze zóny.", "Smazání A záznamu ze zóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_add_cname_record,										9,1,5,5, "Pøidání CNAME záznamu do zóny.", "Pøidání CNAME záznamu do zóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_del_cname_record,										9,1,5,6, "Smazání CNAME záznamu ze zóny.", "Smazání CNAME záznamu ze zóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_sign_zone,												9,1,5,7, "Podepsání zóny.", "Podepsání zóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_unsign_zone,												9,1,5,8, "Zrušení podpisu zóny.", "Zrušení podpisu zóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_add_txt_record,											9,1,5,9, "Pøidání TXT záznamu do zóny.", "Pøidání TXT záznamu do zóny se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, domains_get_info,											9,1,6,1, "Získá informace o doménovém jménu z centra.", "Získání informace o doménovém jménu z centra se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, domains_list_with_zoner_registrator,							9,1,6,2, "Získá seznam doménových jmen z centra, u nichž je Zoner registrátorem.", "Získání seznamu doménových jmen z centra, u nichž je Zoner registrátorem se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, domains_convert_punycode,									9,1,6,3, "Pøeloží doménové jméno z punycode.", "Pøeklad doménového jména z punycode se nezdaøil.") \
\
	MDESC2(c, cadmin_cmsm, domains_change_ns_ccc,										9,0,6,1, "Promítne zmìnu nameserverù u domény do centra.", "Promítnutí zmìny nameserverù u domény do centra se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, domains_sk_cert_new_owner_ccc,								9,0,6,2, "Nastaví nového vlastníka .sk domény pro certifikát.", "Nastavení nového vlastníka .sk domény pro certifikát se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, dns_manager_get_zone_ccc,									9,0,7,1, "Pøeètení zóny z databáze.", "Pøeètení zóny z databáze se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, dns_manager_get_zone,										9,1,7,1, "Pøeètení zóny z databáze.", "Pøeètení zóny z databáze se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_update_zone,										9,1,7,2, "Úprava zóny v databázi.", "Úprava zóny v databázi se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, dns_manager_list_ip_ranges,									9,1,7,3, "Získá seznam ip rozsahù spravovaných dns.", "Získání seznamu ip rozsahù spravovaných dns se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_list_ip_addresses,								9,1,7,4, "Získá seznam ip adres pro daný ip rozsah.", "Získání seznamu ip adres pro daný ip rozsah se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_get_ip_address,									9,1,7,5, "Získá ip adresu.", "Získání ip adresy se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_update_ip_address,								9,1,7,6, "Uloží zmìny pro danou ip adresu do databáze.", "Uložení zmìn pro danou ip adresu do databáze se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_generate_ip_range,								9,1,7,7, "Vygeneruje daný ip rozsah do dns.", "Vygenerování daného ip rozsahu do dns se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_dig,												9,1,7,8, "Pøeète zónu pøímo z dns serveru.", "Pøeètení zóny pøímo z dns serveru se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_dig_ns,											9,1,7,9, "Pøeète a vyhodnoti typ ns zaznamu pøímo z dns.", "Pøeètení zóny se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, invoice_make_payment,										9,1,8,1, "Zaplacení výzvy k úhradì.", "Zaplacení výzvy k úhradì se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, get_request_for_payment,										9,1,8,2, "Získá výzvu k úhradì.", "Získání výzvy k úhradì se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, coupon_campaign_create_ccc,									9,1,9,1, "Vytvoøení nové kampanì pro kupóny.", "Vytvoøení nové kampanì pro kupóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, coupon_campaign_update_ccc,									9,1,9,2, "Úprava kampanì pro kupóny.", "Úprava kampanì pro kupóny se nezdaøila.") \
	MDESC2(c, cadmin_cmsm, coupon_campaign_delete_ccc,									9,1,9,3, "Zrušení kampanì pro kupóny.", "Zrušení kampanì pro kupóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, coupon_campaign_get_ccc,										9,1,9,4, "Získá podrobnosti o kampani pro kupóny.", "Získání podrobností o kampani pro kupóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, coupon_campaign_list_ccc,									9,1,9,5, "Získá seznam kampaní pro kupóny.", "Získání seznamu kampaní pro kupóny se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, coupon_code_create_ccc,										9,1,9,6, "Pøidá nový kupón do kampanì.", "Pøidání nového kupónu do kampanì se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, coupon_code_list_ccc,										9,1,9,7, "Získá seznam kupónù kampanì.", "Získání seznamu kupónù kampanì se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, template_message_get_ccc,									9,1,10,1, "Získá šablonu zprávy a naplní ji dodanými údaji.", "Získání šablony zprávy a její naplnìní dodanými údaji se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, action_set_finish_ccc,										9,1,11,1, "Ukonèí akci v centru administrace.", "Ukonèení akce v centru administrace se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, registry_update_ccc,											9,1,11,2, "Zapsání hodnoty do registru.", "Zapsání hodnoty se nezdaøilo.") \
	MDESC2(c, cadmin_cmsm, action_set_restart_ccc,										9,1,11,3, "Znovu spustí akci v centru administrace.", "Znovu spuštìní akce v centru administrace se nezdaøilo.") \
\
	MDESC2(c, cadmin_cmsm, send_customer_expdom_report,									9,2,1,1, "Odešle zákazníkovi pøehled o expirujících doménách.", "Pøehled o expirujících doménách se nezdaøilo odeslat.") \
	MDESC2(c, cadmin_cmsm, bulk_send_expdom_report,										9,2,1,2, "Odešle všem odebírajícím zákazníkùm pøehled o expirujících doménách.", "Pøehled o expirujících doménách se nezdaøilo všem odebírajícím zákazníkùm odeslat.") \
	MDESC2(c, cadmin_cmsm, send_appeal_mail_invoice_pdf,								9,2,1,3, "Odešle mail upominky pro neplaceni s pdf vyzvou.", "Odeslani mailu upominky se nezdarilo.") \
	
#define CADMIN_RESP(c) \
	MDESC(c, cadmin_resp, unknown_error,												9,0,0,30001, "Nastala neznámá chyba.") \
	MDESC(c, cadmin_resp, unknown_message,												9,0,0,30002, "Byla zaslána neznámá zpráva.") \
	MDESC(c, cadmin_resp, bad_credentials,												9,0,0,30003, "Špatné pøihlašovací údaje.") \
	MDESC(c, cadmin_resp, access_denied,												9,0,0,30004, "Nemáte dostateèná oprávnìní.") \
	MDESC(c, cadmin_resp, adding_ccc_actions_failed,									9,0,0,30005, "Nepodaøilo se vložit akce CCC.") \
	MDESC(c, cadmin_resp, stopping_service_failed,										9,0,0,30006, "Zastavení služby se nezdaøilo.") \
	MDESC(c, cadmin_resp, service_not_found,											9,0,0,30007, "Služba nenalezena.") \
	MDESC(c, cadmin_resp, service_starting_stopping_not_supported,						9,0,0,30008, "Spouštìní a zastavování služby není podporováno.") \
	MDESC(c, cadmin_resp, service_starting_not_supported,								9,0,0,30009, "Spouštìní služby není podporováno.") \
	MDESC(c, cadmin_resp, starting_service_failed,										9,0,0,30010, "Spuštìní služby se nezdaøilo.") \
	MDESC(c, cadmin_resp, service_already_deleted,										9,0,0,30011, "Služba je smazaná.") \
	MDESC(c, cadmin_resp, deleting_service_failed,										9,0,0,30012, "Smazání služby se nezdaøilo.") \
	MDESC(c, cadmin_resp, sql_error,													9,0,0,30013, "Nastala SQL chyba.") \
	MDESC(c, cadmin_resp, remote_addr_forbidden,										9,0,0,30014, "Pøístup ze zakázané adresy.") \
	MDESC(c, cadmin_resp, exception_occured,											9,0,0,30015, "Nastala vyjímka.") \
	MDESC(c, cadmin_resp, service_has_not_any_dns_records,								9,0,0,30016, "Služba nemá žádné dns záznamy.") \
	MDESC(c, cadmin_resp, insert_dns_a_records_failed,									9,0,0,30017, "Nepodaøilo se pøidat dns A záznamy.") \
	MDESC(c, cadmin_resp, delete_dns_a_records_failed,									9,0,0,30018, "Nepodaøilo se smazat dns A záznamy.") \
	MDESC(c, cadmin_resp, dns_a_records_not_defined,									9,0,0,30019, "Dns A záznamy nejsou definovány.") \
	MDESC(c, cadmin_resp, dns_a_records_not_valid,										9,0,0,30020, "Dns A záznamy nejsou platné.") \
	MDESC(c, cadmin_resp, dns_a_records_not_available,									9,0,0,30021, "Dns A záznamy nejsou volné.") \
	MDESC(c, cadmin_resp, dns_a_records_already_exist,									9,0,0,30022, "Dns A záznamy již existují.") \
	MDESC(c, cadmin_resp, insert_dns_cname_records_failed,								9,0,0,30023, "Nepodaøilo se pøidat dns CNAME záznamy.") \
	MDESC(c, cadmin_resp, delete_dns_cname_records_failed,								9,0,0,30024, "Nepodaøilo se smazat dns CNAME záznamy.") \
	MDESC(c, cadmin_resp, dns_cname_records_not_defined,								9,0,0,30025, "Dns CNAME záznamy nejsou definovány.") \
	MDESC(c, cadmin_resp, dns_cname_records_not_valid,									9,0,0,30026, "Dns CNAME záznamy nejsou platné.") \
	MDESC(c, cadmin_resp, dns_cname_records_not_available,								9,0,0,30027, "Dns CNAME záznamy nejsou volné.") \
	MDESC(c, cadmin_resp, dns_cname_records_already_exist,								9,0,0,30028, "Dns CNAME záznamy již existují.") \
	MDESC(c, cadmin_resp, dns_duplicite_records_found,									9,0,0,30029, "Byly nalezeny duplicitní záznamy v dns.") \
	MDESC(c, cadmin_resp, insert_dns_mx_records_failed,									9,0,0,30030, "Nepodaøilo se pøidat dns MX záznamy.") \
	MDESC(c, cadmin_resp, delete_dns_mx_records_failed,									9,0,0,30031, "Nepodaøilo se smazat dns MX záznamy.") \
	MDESC(c, cadmin_resp, dns_mx_records_not_defined,									9,0,0,30032, "Dns MX záznamy nejsou definovány.") \
	MDESC(c, cadmin_resp, dns_mx_records_not_valid,										9,0,0,30033, "Dns MX záznamy nejsou platné.") \
	MDESC(c, cadmin_resp, dns_mx_records_not_available,									9,0,0,30034, "Dns MX záznamy nejsou volné.") \
	MDESC(c, cadmin_resp, dns_mx_records_already_exist,									9,0,0,30035, "Dns MX záznamy již existují.") \
	MDESC(c, cadmin_resp, insert_dns_txt_records_failed,								9,0,0,30036, "Nepodaøilo se pøidat dns TXT záznamy.") \
	MDESC(c, cadmin_resp, delete_dns_txt_records_failed,								9,0,0,30037, "Nepodaøilo se smazat dns TXT záznamy.") \
	MDESC(c, cadmin_resp, dns_txt_records_not_defined,									9,0,0,30038, "Dns TXT záznamy nejsou definovány.") \
	MDESC(c, cadmin_resp, dns_txt_records_not_valid,									9,0,0,30039, "Dns TXT záznamy nejsou platné.") \
	MDESC(c, cadmin_resp, dns_txt_records_not_available,								9,0,0,30040, "Dns TXT záznamy nejsou volné.") \
	MDESC(c, cadmin_resp, dns_txt_records_already_exist,								9,0,0,30041, "Dns TXT záznamy již existují.") \
	MDESC(c, cadmin_resp, insert_dns_srv_records_failed,								9,0,0,30042, "Nepodaøilo se pøidat dns SRV záznamy.") \
	MDESC(c, cadmin_resp, delete_dns_srv_records_failed,								9,0,0,30043, "Nepodaøilo se smazat dns SRV záznamy.") \
	MDESC(c, cadmin_resp, dns_srv_records_not_defined,									9,0,0,30044, "Dns SRV záznamy nejsou definovány.") \
	MDESC(c, cadmin_resp, dns_srv_records_not_valid,									9,0,0,30045, "Dns SRV záznamy nejsou platné.") \
	MDESC(c, cadmin_resp, dns_srv_records_not_available,								9,0,0,30046, "Dns SRV záznamy nejsou volné.") \
	MDESC(c, cadmin_resp, dns_srv_records_already_exist,								9,0,0,30047, "Dns SRV záznamy již existují.") \
	MDESC(c, cadmin_resp, service_no_mailserver_found,									9,0,0,30048, "Služba má nemá náš mailserver.") \
	MDESC(c, cadmin_resp, server_not_imap_server,										9,0,0,30049, "Server není IMAP server.") \
	MDESC(c, cadmin_resp, service_mailserver_already_exist,								9,0,0,30050, "Služba má již mailserver nastaven.") \
	MDESC(c, cadmin_resp, service_mailserver_not_available,								9,0,0,30051, "Služba v dané variantì nemùže mít náš mailserver.") \
	MDESC(c, cadmin_resp, mail_quota_not_defined,										9,0,0,30052, "Daná varianta nemá nastavenou poštovní kvótu.") \
	MDESC(c, cadmin_resp, no_bonus_found,												9,0,0,30053, "Daný bonus nebyl nalezen.") \
	MDESC(c, cadmin_resp, variant_not_valid,											9,0,0,30054, "Kód varianty není platný.") \
	MDESC(c, cadmin_resp, service_name_not_valid,										9,0,0,30055, "Název služby není platný.") \
	MDESC(c, cadmin_resp, invoicing_not_valid,											9,0,0,30056, "Fakturaèní termíny nejsou platné.") \
	MDESC(c, cadmin_resp, payment_period_not_defined,									9,0,0,30057, "Fakturaèní období není definováno.") \
	MDESC(c, cadmin_resp, payment_period_not_valid,										9,0,0,30058, "Fakturaèní období není platné.") \
	MDESC(c, cadmin_resp, due_from_not_defined,											9,0,0,30059, "Datum zahájení fakturace není definováno.") \
	MDESC(c, cadmin_resp, service_ftp_locking_not_supported,							9,0,0,30060, "Zamykání FTP není podporováno.") \
	MDESC(c, cadmin_resp, cannot_perform,												9,0,0,30061, "Nelze provést.") \
	MDESC(c, cadmin_resp, mailbox_user_not_defined,										9,0,0,30062, "Název poštovní schránky není definován.") \
	MDESC(c, cadmin_resp, mailbox_password_not_defined,									9,0,0,30063, "Heslo poštovní schránky není definováno.") \
	MDESC(c, cadmin_resp, hash_not_valid,												9,0,0,30064, "Hash není platný.") \
	MDESC(c, cadmin_resp, dns_cms_error,												9,0,0,30065, "Nastala chyba pøi volání CMS pro DNS.") \
	MDESC(c, cadmin_resp, insert_dns_aaaa_records_failed,								9,0,0,30066, "Nepodaøilo se pøidat dns AAAA záznamy.") \
	MDESC(c, cadmin_resp, delete_dns_aaaa_records_failed,								9,0,0,30067, "Nepodaøilo se smazat dns AAAA záznamy.") \
	MDESC(c, cadmin_resp, dns_aaaa_records_not_defined,									9,0,0,30068, "Dns AAAA záznamy nejsou definovány.") \
	MDESC(c, cadmin_resp, dns_aaaa_records_not_valid,									9,0,0,30069, "Dns AAAA záznamy nejsou platné.") \
	MDESC(c, cadmin_resp, dns_aaaa_records_not_available,								9,0,0,30070, "Dns AAAA záznamy nejsou volné.") \
	MDESC(c, cadmin_resp, dns_aaaa_records_already_exist,								9,0,0,30071, "Dns AAAA záznamy již existují.") \
\
	MDESC(c, cadmin_resp, customer_data_company_name_not_defined,						9,1,0,30002, "Údaj pro název spoleènosti zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_company_name_too_long,							9,1,0,30003, "Údaj pro název spoleènosti zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_company_name_not_token,							9,1,0,30004, "Údaj pro název spoleènosti zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_street_not_defined,								9,1,0,30005, "Údaj pro ulici zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_street_too_long,								9,1,0,30006, "Údaj pro ulici zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_street_not_token,								9,1,0,30007, "Údaj pro ulici zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_city_not_defined,								9,1,0,30008, "Údaj pro mìsto zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_city_too_long,									9,1,0,30009, "Údaj pro mìsto zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_city_not_token,									9,1,0,30010, "Údaj pro mìsto zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_zip_not_defined,								9,1,0,30011, "Údaj pro PSÈ zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_zip_too_long,									9,1,0,30012, "Údaj pro PSÈ zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_zip_not_token,									9,1,0,30013, "Údaj pro PSÈ zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_country_not_defined,							9,1,0,30014, "Údaj pro stát zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_country_not_valid,								9,1,0,30015, "Údaj pro stát zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_ico_too_long,									9,1,0,30016, "Údaj pro IÈ zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_ico_not_valid,									9,1,0,30017, "Údaj pro IÈ zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_dic_too_long,									9,1,0,30018, "Údaj pro DIÈ zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_dic_not_valid,									9,1,0,30019, "Údaj pro DIÈ zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_bank_too_long,									9,1,0,30020, "Údaj pro banku zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_tel_not_defined,								9,1,0,30021, "Údaj pro telefon zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_tel_too_long,									9,1,0,30022, "Údaj pro telefon zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_tel_not_valid,									9,1,0,30023, "Údaj pro telefon zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_fax_too_long,									9,1,0,30024, "Údaj pro fax zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_fax_not_valid,									9,1,0,30025, "Údaj pro fax zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_email_not_defined,								9,1,0,30026, "Údaj pro email zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_email_too_long,									9,1,0,30027, "Údaj pro email zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_email_not_valid,								9,1,0,30028, "Údaj pro email zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_email2_too_long,								9,1,0,30029, "Údaj pro email2 zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_email2_not_valid,								9,1,0,30030, "Údaj pro email2 zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_email_einvoice_too_long,						9,1,0,30031, "Údaj pro email el. faktury zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_email_einvoice_not_valid,						9,1,0,30032, "Údaj pro email el. faktury zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_chief_title_too_long,							9,1,0,30033, "Údaj pro titul osoby jednatele zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_chief_title_not_token,							9,1,0,30034, "Údaj pro titul osoby jednatele zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_chief_first_name_not_defined,					9,1,0,30035, "Údaj pro jméno osoby jednatele zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_chief_first_name_too_long,						9,1,0,30036, "Údaj pro jméno osoby jednatele zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_chief_first_name_not_token,						9,1,0,30037, "Údaj pro jméno osoby jednatele zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_chief_last_name_not_defined,					9,1,0,30038, "Údaj pro pøíjmení osoby jednatele zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_data_chief_last_name_too_long,						9,1,0,30039, "Údaj pro pøíjmení osoby jednatele zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_chief_last_name_not_token,						9,1,0,30040, "Údaj pro pøíjmení osoby jednatele zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_technician_title_too_long,						9,1,0,30041, "Údaj pro titul osoby technika zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_technician_title_not_token,						9,1,0,30042, "Údaj pro titul osoby technika zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_technician_first_name_too_long,					9,1,0,30043, "Údaj pro jméno osoby technika zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_technician_first_name_not_token,				9,1,0,30044, "Údaj pro jméno osoby technika zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_technician_last_name_too_long,					9,1,0,30045, "Údaj pro pøíjmení osoby technika zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_technician_last_name_not_token,					9,1,0,30046, "Údaj pro pøíjmení osoby technika zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_chief_name_too_long,						9,1,0,30047, "Údaj pro celé jméno osoby poštovního kontaktu zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_post_chief_name_not_token,						9,1,0,30048, "Údaj pro celé jméno osoby poštovního kontaktu zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_company_name_too_long,						9,1,0,30049, "Údaj pro název spoleènosti poštovního kontaktu zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_post_company_name_not_token,					9,1,0,30050, "Údaj pro název spoleènosti poštovního kontaktu zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_street_too_long,							9,1,0,30051, "Údaj pro ulici poštovního kontaktu zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_post_street_not_token,							9,1,0,30052, "Údaj pro ulici poštovního kontaktu zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_city_too_long,								9,1,0,30053, "Údaj pro mìsto poštovního kontaktu zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_post_city_not_token,							9,1,0,30054, "Údaj pro mìsto poštovního kontaktu zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_zip_too_long,								9,1,0,30055, "Údaj pro PSÈ poštovního kontaktu zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_data_post_zip_not_token,								9,1,0,30056, "Údaj pro PSÈ poštovního kontaktu zákazníka musí odpovídat požadavkùm pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_country_not_valid,							9,1,0,30057, "Údaj pro stát poštovního kontaktu zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_data_lang_not_valid,									9,1,0,30058, "Údaj pro komunikaèní jazyk zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_login_user_name_not_valid,							9,1,0,30059, "Údaj pro pøihlašovací jméno zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_login_user_password_not_valid,						9,1,0,30060, "Údaj pro pøihlašovací heslo zákazníka není platný.") \
	MDESC(c, cadmin_resp, customer_login_user_password_not_defined,						9,1,0,30061, "Údaj pro pøihlašovací heslo zákazníka není definován.") \
	MDESC(c, cadmin_resp, customer_login_user_password_too_short,						9,1,0,30062, "Údaj pro pøihlašovací heslo zákazníka nedosahuje minimální délku.") \
	MDESC(c, cadmin_resp, customer_login_user_password_too_long,						9,1,0,30063, "Údaj pro pøihlašovací heslo zákazníka pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, customer_with_credit_class_not_allowed,						9,1,0,30064, "Není dovoleno pro zákazníky se zpìtným vyúètováním.") \
\
	MDESC(c, cadmin_resp, service_data_service_name_not_defined,						9,1,1,30001, "Údaj pro název služby není definován.") \
	MDESC(c, cadmin_resp, service_data_var_code_not_valid,								9,1,1,30002, "Údaj pro kód varianty není platný.") \
	MDESC(c, cadmin_resp, service_data_invoice_till_defined,							9,1,1,30003, "Údaj pro vyfakturováno do je již definován.") \
	MDESC(c, cadmin_resp, service_no_service_found,										9,1,1,30004, "Služba nebyla nalezena.") \
	MDESC(c, cadmin_resp, service_multiple_services_found,								9,1,1,30005, "Bylo nalezeno více než jedna služba.") \
	MDESC(c, cadmin_resp, service_account_data_password_not_defined,					9,1,1,30006, "Údaj pro heslo FTP úètu dané služby není definován.") \
	MDESC(c, cadmin_resp, service_account_data_password_too_short,						9,1,1,30007, "Údaj pro heslo FTP úètu dané služby nedosahuje minimální délku.") \
	MDESC(c, cadmin_resp, service_account_data_password_too_long,						9,1,1,30008, "Údaj pro heslo FTP úètu dané služby pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, service_account_data_password_not_valid,						9,1,1,30009, "Údaj pro heslo FTP dané služby úètu není platný.") \
	MDESC(c, cadmin_resp, service_account_change_password_pending,						9,1,1,30010, "Právì probíhá zmìna hesla FTP úètu dané služby.") \
\
	MDESC(c, cadmin_resp, action_set_finished_ok_failed,								9,1,2,30001, "Nepodaøilo se ukonèit akci do stavu OK.") \
	MDESC(c, cadmin_resp, action_set_finished_failed,									9,1,2,30002, "Nepodaøilo se ukonèit akci.") \
	MDESC(c, cadmin_resp, coupon_code_not_valid,										9,1,2,30003, "Kupón není platný.") \
	MDESC(c, cadmin_resp, coupon_campaign_unknown,										9,1,2,30004, "Neznámá kampaò pro kupón.") \
	MDESC(c, cadmin_resp, domain_tld_not_supported,										9,1,2,30005, "TLD není podporováno.") \
	MDESC(c, cadmin_resp, domain_name_not_valid,										9,1,2,30006, "Doménové jméno není platné.") \
	MDESC(c, cadmin_resp, domain_unknown_registrar,										9,1,2,30007, "Neznámý registrátor pro dané TLD.") \
	MDESC(c, cadmin_resp, cannot_register_domain_owner,									9,1,2,30008, "Nelze zaregistrovat držitele domény.") \
	MDESC(c, cadmin_resp, cannot_register_domain,										9,1,2,30009, "Nelze zaregistrovat doménu.") \
	MDESC(c, cadmin_resp, domain_name_not_defined,										9,1,2,30010, "Doménové jméno není definováno.") \
	MDESC(c, cadmin_resp, name_server_not_defined,										9,1,2,30011, "Nameserver není definován.") \
	MDESC(c, cadmin_resp, action_adding_failed,											9,1,2,30012, "Nepodaøilo se vložit akci.") \
	MDESC(c, cadmin_resp, coupon_campaign_not_running,									9,1,2,30013, "Kampaò pro kupón není spuštìna.") \
	MDESC(c, cadmin_resp, coupon_campaign_max_count_reached,							9,1,2,30014, "Dosažen maximální poèet kupónù pro kampaò.") \
	MDESC(c, cadmin_resp, action_set_restarted_failed,									9,1,2,30015, "Nepodaøilo se znovu spustit akci.") \
	MDESC(c, cadmin_resp, name_server_not_valid,										9,1,2,30016, "Nameserver není validni.") \
\
	MDESC(c, cadmin_resp, extraneous_domain_data_new_exp_date_not_defined,				9,1,3,30001, "Údaj pro datum nové expirace cizorodé domény není definován.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_done_defined,							9,1,3,30002, "Údaj pro datum vyøízení cizorodé domény je již definován.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_new_exp_date_not_valid,				9,1,3,30003, "Údaj pro datum nové expirace cizorodé domény není platný.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_realized_by_not_defined,				9,1,3,30004, "Údaj pro osobu vyøizující cizorodou doménu není definován.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_state_out_of_bounds,					9,1,3,30005, "Údaj pro stav zpracování cizorodé domény není v povolených mezích (1-99).") \
	MDESC(c, cadmin_resp, extraneous_domain_data_state_not_valid,						9,1,3,30006, "Údaj pro zpracování stav cizorodé domény není platný.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_note_not_defined,						9,1,3,30007, "Údaj pro poznámku cizorodé domény není definován.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_note_too_long,							9,1,3,30008, "Údaj pro poznámku cizorodé domény pøekroèil povolenou délku.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_registrarid_not_defined,				9,1,3,30009, "Registrátor cizorodé domény není definován.") \
\
	MDESC(c, cadmin_resp, server_is_not_empty,											9,1,4,30001, "Na serveru jsou nezrušené služby.") \
	MDESC(c, cadmin_resp, server_cannot_be_deleted,										9,1,4,30002, "Server nelze odstranit.") \
	MDESC(c, cadmin_resp, server_name_not_defined,										9,1,4,30003, "Není definován název serveru.") \
	MDESC(c, cadmin_resp, ip_address_not_defined,										9,1,4,30004, "Není definována IP adresa.") \
	MDESC(c, cadmin_resp, email_not_defined,											9,1,4,30005, "Není definována emailová adresa.") \
	MDESC(c, cadmin_resp, email_not_valid,												9,1,4,30006, "Emailová adresa není platná.") \
	MDESC(c, cadmin_resp, user_id_not_defined,											9,1,4,30007, "Není definováno èíslo úètu uživatele.") \
	MDESC(c, cadmin_resp, server_name_too_short,										9,1,4,30008, "Název serveru musí být delší.") \
	MDESC(c, cadmin_resp, admin_name_not_defined,										9,1,4,30009, "Není definováno pøihlašovací jméno pro administraci serveru.") \
	MDESC(c, cadmin_resp, admin_password_not_defined,									9,1,4,30010, "Není definováno pøihlašovací heslo pro administraci serveru.") \
	MDESC(c, cadmin_resp, sql_type_not_valid,											9,1,4,30011, "Typ SQL databáze není platný.") \
	MDESC(c, cadmin_resp, server_name_not_valid,										9,1,4,30012, "Název serveru není platný.") \
	MDESC(c, cadmin_resp, operator_name_not_defined,									9,1,4,30013, "Není definováno jméno administrátora.") \
	MDESC(c, cadmin_resp, invoice_not_found,											9,1,4,30014, "Výzva k úhradì nebyla nalezena.") \
	MDESC(c, cadmin_resp, invoice_already_paid,											9,1,4,30015, "Výzva k úhradì byla již zaplacena.") \
	MDESC(c, cadmin_resp, server_has_package,											9,1,4,30016, "Danému serveru je pøiøazen balíèek.") \
\
	MDESC(c, cadmin_resp, dns_operation_failed,											9,1,5,30001, "Operace na dns se nezdaøila.") \
\
	MDESC(c, cadmin_resp, dig_no_ns_records,											9,1,7,30001, "NS zaznamy nenalezeny") \
	MDESC(c, cadmin_resp, dig_operation_failed,											9,1,7,30002, "Operace na dns se nezdaøila.") \
\
	MDESC(c, cadmin_resp, param_title_not_defined,										9,1,9,30001, "Parametr title není definován.") \
	MDESC(c, cadmin_resp, param_comment_not_defined,									9,1,9,30002, "Parametr comment není definován.") \
	MDESC(c, cadmin_resp, param_pbu_not_valid,											9,1,9,30003, "Parametr pbu není platný.") \
	MDESC(c, cadmin_resp, param_currency_code_not_defined,								9,1,9,30004, "Parametr currency_code není definován.") \
	MDESC(c, cadmin_resp, param_currency_code_not_valid,								9,1,9,30005, "Parametr currency_code není platný.") \
	MDESC(c, cadmin_resp, param_var_code_not_valid,										9,1,9,30006, "Parametr var_code není platný.") \
	MDESC(c, cadmin_resp, param_tld_not_defined,										9,1,9,30007, "Parametr tld není definován.") \
	MDESC(c, cadmin_resp, param_tld_not_valid,											9,1,9,30008, "Parametr tld není platný.") \
	MDESC(c, cadmin_resp, param_valid_until_not_valid,									9,1,9,30009, "Parametr valid_until není platný.") \
	MDESC(c, cadmin_resp, coupon_campaign_not_found,									9,1,9,30010, "Kupónová kampaò nebyla nalezena.") \
	MDESC(c, cadmin_resp, param_code_not_defined,										9,1,9,30011, "Parametr code není definován.") \
\
	MDESC(c, cadmin_resp, transaction_error,											9,2,1,30001, "Nastala chyba v transakci.") \
	MDESC(c, cadmin_resp, missing_param_id_user,										9,2,1,30002, "Není definován parametr id_user.") \
	MDESC(c, cadmin_resp, invalid_param_id_user,										9,2,1,30003, "Neplatný parametr id_user.") \
	MDESC(c, cadmin_resp, iduser_not_found,												9,2,1,30004, "Nebyl nalezen iduser.") \
	MDESC(c, cadmin_resp, empty_email,													9,2,1,30005, "Prázdný email.") \
	MDESC(c, cadmin_resp, unknown_lang,													9,2,1,30006, "Neznámý lang.") \
	MDESC(c, cadmin_resp, unknown_pbu,													9,2,1,30007, "Neznámé pbu.") \
	MDESC(c, cadmin_resp, missing_param_report_if_empty,								9,2,1,30008, "Není definován parametr report_if_empty.") \
	MDESC(c, cadmin_resp, invalid_param_report_if_empty,								9,2,1,30009, "Neplatný parametr report_if_empty.") \
	MDESC(c, cadmin_resp, missing_param_update_sent_date,								9,2,1,30010, "Není definován parametr update_sent_date.") \
	MDESC(c, cadmin_resp, invalid_param_update_sent_date,								9,2,1,30011, "Neplatný parametr update_sent_date.") \
	MDESC(c, cadmin_resp, expdom_report_nothing_to_send,								9,2,1,30012, "Pøehled o expirujících doménách neobsahuje žádné domény.") \
	MDESC(c, cadmin_resp, expdom_report_not_all_sent,									9,2,1,30013, "Pøehled o expirujících doménách nebyl zaslán všem zamýšleným zákazníkùm.") \
\
	MDESC(c, cadmin_resp, user_authenticated,											9,0,0,50001, "Autentizace uživatele úspìšnì probìhla.") \
\
	MDESC(c, cadmin_resp, service_stopped,												9,0,1,50001, "Zastavení služby úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_started,												9,0,1,50002, "Spuštìní služby úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_deleted,												9,0,1,50003, "Smazání služby úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_mailserver_created,									9,0,1,50004, "Vytvoøení poštovního serveru pro danou službu úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_mailserver_deleted,									9,0,1,50005, "Smazání poštovního serveru pro danou službu úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_bonus_created,										9,0,1,50006, "Vytvoøení bonusu pro novou službu úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_advertcamp_changed,									9,0,1,50007, "Zmìna advertcamp pro danou službu úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, service_bonus_transfered,										9,0,1,50008, "Pøevedení bonusu pro novou službu úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_name_duplicity_checked,								9,0,1,50009, "Kontrola duplicity doménového jména pro službu úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, service_cert_added,											9,0,1,50010, "Vložení žádosti o certifikát k doménovému jménu úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_idcamp_changed,										9,0,1,50011, "Zmìna IDCamp pro danou službu úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, service_miniweb_mailserver_created,							9,0,1,50012, "Vytvoøení pošty pro miniweb pro danou službu úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, customer_created,												9,1,0,50001, "Vytvoøení nového zákazníka úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, customer_password_changed,									9,1,0,50002, "Zmìna pøihlašovací hesla zákazníka úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, customer_get_data_success,									9,1,0,50003, "Naètení údajù zákazníka úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, customer_get_used_servers_success,							9,1,0,50004, "Získání seznamu serverù používaných daným zákazníkem úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, customer_unsubscribe_mail_sent,								9,1,0,50005, "Rozeslání emailù pro odhlášení zákazníka z odbìru novinek úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, customer_unsubscribed,										9,1,0,50006, "Odhlášení zákazníka z odbìru novinek úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, customer_credit_system_activated,								9,1,0,50007, "Pøepnutí zákazníka na kreditní systém úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, customer_get_gogo_servers_success,							9,1,0,50008, "Získání seznamu serverù GOGO používaných daným zákazníkem úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, service_foto24_upgrade_success,								9,1,1,50001, "Pøevod služby na variantu Foto24 XXL a prodloužení bezplatného provozu úspìšnì probìhl.") \
	MDESC(c, cadmin_resp, service_main_account_password_changed,						9,1,1,50002, "Zmìna hesla hlavního FTP úètu služby úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, service_hosting_able_check_success,							9,1,1,50003, "Ovìøení zda lze službu zprovoznit úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_order_on_parent_domain_success,						9,1,1,50004, "Vložení objednávky služby na pronajmuté doménì úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_order_new_domain_success,								9,1,1,50005, "Vložení objednávky služby na nové doménì úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_inshop4_demo_upgrade_success,							9,1,1,50006, "Pøevod služby na variantu inShop4 Profi T úspìšnì probìhl.") \
	MDESC(c, cadmin_resp, service_safeguard_success,									9,1,1,50007, "Zabezpeèení služby zamknutím a zmìnou ftp hesla úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_access_enabled,										9,1,1,50008, "Zjištìní zda se služba nachází na daném úètu úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_inpage_mini_upgrade_success,							9,1,1,50009, "Povýšení služby ve variantì inPage Mini úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, service_db_limits_changed,									9,1,1,50010, "Zmìna limitù sql databáze úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, service_inpage_upgrade_success,								9,1,1,50011, "Povýšení služby inPage úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, coupon_code_checked,											9,1,2,50001, "Ovìøení platnosti kupónu úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, coupon_order_success,											9,1,2,50002, "Vložení kupónové objednávky úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, extraneous_domain_get_domains_not_done_success,				9,1,3,50001, "Získání seznamu dosud nevyøízených cizorodých domén úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_new_exp_date_success,					9,1,3,50002, "Nastavení nového datumu expirace cizorodé domény úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_get_data_success,							9,1,3,50003, "Naètení údajù o cizorodé doménì úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_get_registration_data_success,				9,1,3,50004, "Naètení údajù pro registraci cizorodé domény úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_state_success,							9,1,3,50005, "Nastavení stavu zpracování cizorodé domény úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_remove_success,								9,1,3,50006, "Zrušení cizorodé úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_get_msg_text_success,						9,1,3,50007, "Naètení zprávy s pokyny pro registraci cizorodé domény úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_note_success,							9,1,3,50008, "Nastavení poznámky cizorodé domény úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_change_registrar_notice_success,			9,1,3,50009, "Oznámení o zmìnì registrátora úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_restart_transfer_success,					9,1,3,50010, "Znovuspuštìní transferu domény úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_update_dns_success,							9,1,3,50011, "Zmena DNS u domeny domény úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_msg_text_success,						9,1,3,50012, "Update zprávy s pokyny pro registraci cizorodé domény úspìšnì probìhl.") \
	MDESC(c, cadmin_resp, extraneous_domain_get_msg_texts_success,						9,1,3,50013, "Naètení všech zpráv s pokyny pro registraci cizorodé domény úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_order_id_success,						9,1,3,50014, "Nastavení orderId cizorodé domény úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, server_deleted,												9,1,4,50001, "Smazání serveru úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, server_created,												9,1,4,50002, "Vytvoøení nového serveru úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, dns_operation_ok,												9,1,5,50001, "Operace na dns úspìšnì probìhla.") \
\
	MDESC(c, cadmin_resp, domains_get_info_ok,											9,1,6,50001, "Získání informace o doménovém jménu z centra úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, domains_with_zoner_registrator_listed,						9,1,6,50002, "Získání seznamu doménových jmen z centra, u nichž je Zoner registrátorem úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, domains_punycode_converted,									9,1,6,50003, "Pøeklad doménového jména z punycode úspìšnì probìhl.") \
\
	MDESC(c, cadmin_resp, domains_ns_changed_ok,										9,0,6,50001, "Promítnutí zmìny nameserverù u domény do centra úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, domains_sk_cert_new_owner_ok,									9,0,6,50002, "Nastavení nového vlastníka .sk domény pro certifikát úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, dns_manager_get_zone_ok,										9,1,7,50001, "Pøeètení zóny z databáze úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, dns_manager_update_zone_ok,									9,1,7,50002, "Úprava zóny v databázi úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, dns_manager_ip_ranges_listed,									9,1,7,50003, "Získání seznamu ip rozsahù spravovaných dns úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, dns_manager_ip_addresses_listed,								9,1,7,50004, "Získání seznamu ip adres pro daný ip rozsah úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, dns_manager_get_ip_address_success,							9,1,7,50005, "Získání ip adresy úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, dns_manager_ip_address_updated,								9,1,7,50006, "Uložení zmìn pro danou ip adresu do databáze úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, dns_manager_generate_ip_range_success,						9,1,7,50007, "Vygenerování daného ip rozsahu do dns úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, dns_manager_dig_ok,											9,1,7,50008, "Pøeètení zóny pøímo z dns serveru úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, dns_manager_dig_ns_ok,										9,1,7,50009, "Pøeètení ns pøímo z dns úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, invoice_make_payment_ok,										9,1,8,50001, "Zaplacení výzvy k úhradì úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, request_for_payment_got,										9,1,8,50002, "Získání výzvy k úhradì úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, coupon_campaign_created,										9,1,9,50001, "Vytvoøení nové kampanì pro kupóny úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, coupon_campaign_updated,										9,1,9,50002, "Úprava kampanì pro kupóny úspìšnì probìhla.") \
	MDESC(c, cadmin_resp, coupon_campaign_deleted,										9,1,9,50003, "Zrušení kampanì pro kupóny úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, coupon_campaign_get_ok,										9,1,9,50004, "Získání podrobností o kampani pro kupóny úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, coupon_campaign_listed,										9,1,9,50005, "Získání seznamu kampaní pro kupóny úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, coupon_code_created,											9,1,9,50006, "Pøidání nového kupónu do kampanì úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, coupon_code_listed,											9,1,9,50007, "Získání seznamu kupónù kampanì úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, template_message_get_ok,										9,1,10,50001, "Získání šablony zprávy a její naplnìní dodanými údaji úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, action_set_finished_ok,										9,1,11,50001, "Ukonèení akce v centru administrace úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, registry_update_ok,											9,1,11,50002, "Zapsání hodnoty do registru úspìšnì probìhlo.") \
	MDESC(c, cadmin_resp, action_set_restarted_ok,										9,1,11,50003, "Znovuspuštìní akce v centru administrace úspìšnì probìhlo.") \
\
	MDESC(c, cadmin_resp, expdom_report_sent,											9,2,1,50001, "Zpráva o expirujících doménách odeslána.") \
	MDESC(c, cadmin_resp, expdom_report_bulk_sent,										9,2,1,50002, "Zpráva o expirujících doménách všem odebírajícím zákazníkùm odeslána.") \
	MDESC(c, cadmin_resp, appeal_mail_invoice_pdf_sent,									9,2,1,50003, "Mail upominky s pdf vyzvou odeslán.") \

#define CADMIN_CMSM_WHS(c) \
	GROUP_WHS(c, cadmin_module_mdesc, cadmin_cmsm, user_authenticate)


#define CADMIN_MDESC_TABLE(c) \
	CADMIN_CMSM(c) \
	CADMIN_RESP(c) \
	CADMIN_CMSM_WHS(c)

// expand the declarations
CMS_NAMESPACE_START
CADMIN_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_CADMIN_MDESCS
