#ifndef MOD_ZONERCONTROLCENTER_MDESCS
#define MOD_ZONERCONTROLCENTER_MDESCS

#include "mdescs.h"

// zcc messages
#define ZONERCONTROLCENTER_CMSM(c) \
	MDESC2(c, zcc_cmsm, client_authenticate,														19,0,0,1, "Pøihlášení cms klienta.", "Pøihlášení cms klienta se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, user_authenticate,															19,0,0,2, "Pøihlášení uživatele.", "Pøihlášení uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, user_authenticate_with_identkey,											19,0,0,3, "Pøihlášení uživatele s klíèem.", "Pøihlášení uživatele s klíèem se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, sslmarket_create_user_identity,												19,0,0,4, "Vytvoøení nové identity pro uživatele SSL market.", "Vytvoøení nové identity pro uživatele SSL market se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, general_search,																19,0,1,1, "Všeobecné vyhledávání.", "Všeobecné vyhledávání se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, make_dns_snapshot,															19,1,0,1, "Vytvoøení snapshotu dns.", "Vytvoøení snapshotu dns se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_dns_snapshot,															19,1,0,2, "Získání snapshotu dns.", "Získání snapshotu dns se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_dns_snapshots,															19,1,0,3, "Získání seznamu poøízených snapshotù dns.", "Získání seznamu poøízených snapshotù dns se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_user,																	19,1,1,1, "Získání uživatele.", "Získání uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, send_hotline_request,														19,1,1,2, "Zaslání požadavku na hotline.", "Zaslání požadavku na hotline se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_price,																19,1,1,3, "Získání ceny pro dané TLD.", "Získání ceny pro dané TLD se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, user_update_profile,														19,1,1,4, "Úprava kontaktních údajù uživatele.", "Úprava kontaktních údajù uživatele se nezdaøila.") \
	MDESC2(c, zcc_cmsm, create_user,																19,1,1,5, "Vytvoøení uživatele.", "Vytvoøení uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_prices,																19,1,1,6, "Získání seznamu cen pro dané TLD.", "Získání seznamu cen pro dané TLD se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_reg_prices,													19,1,1,7, "Získání seznamu TLD s cenou za roèní registraci.", "Získání seznamu TLD s cenou za roèní registraci se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_reg_common_prices,											19,1,1,8, "Získání seznamu TLD s bìžnou cenou za roèní registraci.", "Získání seznamu TLD s bìžnou cenou za roèní registraci se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_sms_notification,														19,1,1,9, "Získání údajù pro SMS upozoròování.", "Získání údajù pro SMS upozoròování se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_sms_notification_subject,											19,1,1,10, "Nastavení pøedmìtu SMS upozoròování.", "Nastavení pøedmìtu SMS upozoròování se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_sms_phone,															19,1,1,11, "Nastavení telefonního èísla pro SMS upozoròování.", "Nastavení telefonního èísla pro SMS upozoròování se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, send_lost_credentials,														19,1,1,12, "Zaslání odkazu pro obnovu hesla.", "Zaslání odkazu pro obnovu hesla se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_renew_prices,												19,1,1,13, "Získání seznamu TLD s cenou za roèní prodloužení.", "Získání seznamu TLD s cenou za roèní prodloužení se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_idle_user,															19,1,1,14, "Smazání neaktivního uživatele.", "Smazání neaktivního uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_idle_users,															19,1,1,15, "Smazání neaktivních uživatelù.", "Smazání neaktivních uživatelù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_user_note,															19,1,1,16, "Vytvoøení poznámky u uživatele.", "Vytvoøení poznámky u uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_user_note,															19,1,1,17, "Smazání poznámky u uživatele.", "Smazání poznámky u uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_user_note,															19,1,1,18, "Úprava poznámky u uživatele.", "Úprava poznámky u uživatele se nezdaøila.") \
	MDESC2(c, zcc_cmsm, get_user_note,																19,1,1,19, "Získání poznámky u uživatele.", "Získání poznámky u uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_user_notes,																19,1,1,20, "Získání seznamu poznámek u uživatele.", "Získání seznamu poznámek u uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_users_with_blocked_gpwebpay,											19,1,1,21, "Získání seznamu uživatelù se zablokovanou platbou kartami.", "Získání seznamu uživatelù se zablokovanou platbou kartami se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_gpwebpay_blockation_settings,										19,1,1,22, "Úprava parametrù pro blokaci plateb kartami.", "Úprava parametrù pro blokaci plateb kartami se nezdaøila.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_transfer_prices,											19,1,1,23, "Získání seznamu TLD s cenou za roèní pøevod.", "Získání seznamu TLD s cenou za roèní pøevod se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_transfer_common_prices,										19,1,1,24, "Získání seznamu TLD s bìžnou cenou za roèní pøevod.", "Získání seznamu TLD s bìžnou cenou za roèní pøevod se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_specreg_prices,													19,1,1,25, "Získání seznamu TLD s cenou za speciální registraci.", "Získání seznamu TLD s cenou za speciální registraci se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_specreg_common_prices,												19,1,1,26, "Získání seznamu TLD s bìžnou cenou za speciální registraci.", "Získání seznamu TLD s bìžnou cenou za speciální registraci se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_common_price,														19,1,1,27, "Získání bìžné ceny pro dané TLD.", "Získání bìžné ceny pro dané TLD se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_complete_common_reg_prices,												19,1,1,28, "Získání kompletního ceníku bìžných cen za registrace.", "Získání kompletního ceníku bìžných cen za registrace se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_complete_reg_prices,													19,1,1,29, "Získání kompletního ceníku za registrace.", "Získání kompletního ceníku za registrace se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_common_prices,														19,1,1,30, "Získání seznamu bìžných cen pro dané TLD.", "Získání seznamu bìžných cen pro dané TLD se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, credit_account_active_notify,												19,1,1,31, "Oznámení o aktivaci kreditního úètu.", "Oznámení o aktivaci kreditního úètu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, approve_user,																19,1,1,32, "Schválení uživatele.", "Schválení uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_server_audit_log_events,												19,1,1,33, "Získání historie uživatele.", "Získání historie uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, activate_tester,															19,1,1,34, "Aktivace testera.", "Aktivace testera se nezdaøila.") \
	MDESC2(c, zcc_cmsm, update_news_subscription,													19,1,1,35, "Úprava pøihlášení k odbìru novinek.", "Úprava pøihlášení k odbìru novinek se nezdaøila.") \
	MDESC2(c, zcc_cmsm, create_and_send_email_message,												19,1,1,36, "Vytvoøení a odeslání mailové zprávy.", "Vytvoøení a odeslání mailové zprávy se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_user_delegations,														19,1,1,37, "Získání seznamu delegací uživatele.", "Získání seznamu delegací uživatele se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_unpaid_reqs_for_payment,												19,1,2,1, "Získání seznamu nezaplacených výzev k úhradì.", "Získání seznamu nezaplacených výzev k úhradì se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_req_for_payment_by_number,												19,1,2,2, "Získání výzvy k úhradì podle VS.", "Získání výzvy k úhradì podle VS se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_pay_debt,																19,1,2,3, "Získání údajù pro úhradu pohledávky.", "Získání údajù pro úhradu pohledávky se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_vs_for_first_payment,													19,1,2,4, "Získání vs pro úhradu první pohledávky.", "Získání vs pro úhradu první pohledávky se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_gpwebpay_shutdown,														19,1,2,5, "Získání datumu pøíští odstávky systému GPwebpay.", "Získání datumu pøíští odstávky systému GPwebpay se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, credit_pay,																	19,1,2,6, "Uhrazení pohledávky z kreditního úètu.", "Uhrazení pohledávky z kreditního úètu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_view_of_req_for_payment,												19,1,2,7, "Zmìna viditelnosti pohledávky.", "Zmìna viditelnosti pohledávky se nezdaøila.") \
	MDESC2(c, zcc_cmsm, get_last_req_for_payment,													19,1,2,8, "Získání poslední výzvy k úhradì.", "Získání poslední výzvy k úhradì se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_managed_domains,														19,1,3,1, "Získání seznamu domén, kde je Zoner registrátorem.", "Získání seznamu domén, kde je Zoner registrátorem se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_domain,																	19,1,3,2, "Získání domény.", "Získání domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_auto_renew,															19,1,3,3, "Nastavení pøíznaku pro automatické prodlužování domény.", "Nastavení pøíznaku pro automatické prodlužování domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, check_domain_name,															19,1,3,4, "Zjištìní dostupnosti domény.", "Zjištìní dostupnosti domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domains,														19,1,3,5, "Získání seznamu top level domén.", "Získání seznamu top level domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domain,														19,1,3,6, "Získání top level domény.", "Získání top level domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_top_level_domain,													19,1,3,7, "Úprava top level domény.", "Úprava top level domény se nezdaøila.") \
	MDESC2(c, zcc_cmsm, get_domain_name_owner,														19,1,3,8, "Získání kontaktních údajù vlastníka domény.", "Získání kontaktních údajù vlastníka domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_domain_name_contact,													19,1,3,9, "Úprava údajù kontaktu domény.", "Úprava údajù kontaktu domény se nezdaøila.") \
	MDESC2(c, zcc_cmsm, get_domain_name_contact,													19,1,3,10, "Získání kontaktních údajù kontaktu domény.", "Získání kontaktních údajù kontaktu domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, start_reg_of_new_tld,														19,1,3,11, "Zahájení registrací nového tld.", "Zahájení registrací nového tld se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, determine_tld,																19,1,3,12, "Urèení tld.", "Urèení tld se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domain_last_change,											19,1,3,13, "Získání datumu poslední zmìny top level domény.", "Získání datumu poslední zmìny top level domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_premium_reg_price,														19,1,3,14, "Získání ceny za registraci prémivé domény.", "Získání ceny za registraci prémivé domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_registrars,																19,1,3,15, "Získání seznamu registrátorù.", "Získání seznamu registrátorù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, registrar_make_poll,														19,1,3,16, "Zpracování poll msg u registrátora.", "Zpracování poll msg u registrátora se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, send_auth_info,																19,1,3,17, "Poslání autorizaèního kódu pro pøevod domény.", "Poslání autorizaèního kódu pro pøevod domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_cznic_registrant_email,													19,1,3,18, "Získání emailu držitele .cz domény.", "Získání emailu držitele .cz domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domains_counts,												19,1,3,19, "Získání poètu spravovaných domén rozdìlených podle top level domén.", "Získání poètu spravovaných domén rozdìlených podle top level domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domain_registrar_counts,										19,1,3,20, "Získání poètu spravovaných domén rozdìlených podle registrátora pro dané tld.", "Získání poètu spravovaných domén rozdìlených podle registrátora pro dané tld se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, create_database,															19,1,4,1, "Vytvoøení databáze.", "Vytvoøení databáze se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_database,																19,1,4,2, "Získání databáze.", "Získání databáze se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, migrate_database,															19,1,4,3, "Migrace databáze.", "Migrace databáze se nezdaøila.") \
	MDESC2(c, zcc_cmsm, assign_database,															19,1,4,4, "Pøiøazení databáze k doménì.", "Pøiøazení databáze k doménì se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, assign_pooled_database,														19,1,4,5, "Pøiøazení pøedvytvoøené databáze k doménì.", "Pøiøazení pøedvytvoøené databáze k doménì se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_database,															19,1,4,6, "Smazání databáze.", "Smazání databáze se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_database_server,														19,1,4,7, "Získání databázového serveru pro danou databázi.", "Získání databázového serveru pro danou databázi se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, change_database_size,														19,1,4,8, "Zmìna max. velikosti databáze.", "Zmìna max. velikosti databáze se nezdaøila.") \
	MDESC2(c, zcc_cmsm, create_database_simplified,													19,1,4,9, "Vytvoøení databáze zjednodušenì.", "Vytvoøení databáze zjednodušenì se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_service,																19,1,5,1, "Získání služby.", "Získání služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_main_account,													19,1,5,2, "Získání hlavního úètu dané služby.", "Získání hlavního úètu dané služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_services,																19,1,5,3, "Získání seznamu služeb.", "Získání seznamu služeb se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, simulate_activity,															19,1,5,4, "Simulace èinnosti.", "Simulace èinnosti se nezdaøila.") \
	MDESC2(c, zcc_cmsm, service_redirect,															19,1,5,5, "Pøesmìrování domény.", "Pøesmìrování domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, service_upgrade,															19,1,5,6, "Povýšení služby.", "Povýšení služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_mail,																19,1,5,7, "Vytvoøení pošty.", "Vytvoøení pošty se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_mail,																19,1,5,8, "Smazání pošty.", "Smazání pošty se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, service_replace_ipv4,														19,1,5,9, "Výmìna IP adresy u služby.", "Výmìna IP adresy u služby se nezdaøila.") \
	MDESC2(c, zcc_cmsm, remove_own_ip,																19,1,5,10, "Odstranìní vlastní IP adresy.", "Odstranìní vlastní IP adresy se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, add_own_ip,																	19,1,5,11, "Pøidání vlastní IP adresy.", "Pøidání vlastní IP adresy se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delegate_permission,														19,1,5,12, "Delegování oprávnìní.", "Delegování oprávnìní se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, undelegate_permission,														19,1,5,13, "Oddelegování oprávnìní.", "Oddelegování oprávnìní se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_service_note,														19,1,5,14, "Vytvoøení poznámky u služby.", "Vytvoøení poznámky u služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_service_note,														19,1,5,15, "Smazání poznámky u služby.", "Smazání poznámky u služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_service_note,														19,1,5,16, "Zmìna poznámky u služby.", "Zmìna poznámky u služby se nezdaøila.") \
	MDESC2(c, zcc_cmsm, get_service_note,															19,1,5,17, "Získání poznámky u služby.", "Získání poznámky u služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_notes,															19,1,5,18, "Získání seznamu poznámek u služby.", "Získání seznamu poznámek u služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_permission_delegations,											19,1,5,19, "Získání seznamu oprávnìní.", "Získání seznamu oprávnìní se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_service_chc_request,													19,1,5,20, "Vytvoøení žádosti do CHC pro službu.", "Vytvoøení žádosti do CHC pro službu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, check_service_name,															19,1,5,21, "Ovìøení dostupnosti názvu služby.", "Ovìøení dostupnosti názvu služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, carry_out_service_application_pool_task,									19,1,5,22, "Provedení úlohy na aplikaèním poolu služby.", "Provedení úlohy na aplikaèním poolu služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, is_installatron_available,													19,1,5,23, "Zjištìní dostupnosti installatronu pro službu.", "Zjištìní dostupnosti installatronu pro službu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, installatron_cleanup_site,													19,1,5,24, "Smazání služby z installatronu.", "Smazání služby z installatronu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_third_level_domains,											19,1,5,25, "Získání domén tøetí úrovnì pro službu.", "Získání domén tøetí úrovnì pro službu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_service_data,														19,1,5,27, "Smazání dat služby.", "Smazání dat služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, park_service_data,															19,1,5,28, "Zaparkování dat služby.", "Zaparkování dat služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, deny_service_data,															19,1,5,29, "Odstavení dat služby pro neplacení.", "Odstavení dat služby pro neplacení se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, park_service,																19,1,5,30, "Zaparkování služby.", "Zaparkování služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_service,																19,1,5,31, "Smazání služby.", "Smazání služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_aliases,																19,1,5,32, "Získání seznamu aliasù.", "Získání seznamu aliasù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_alias,																19,1,5,33, "Vytvoøení aliasu.", "Vytvoøení aliasu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_features,														19,1,5,34, "Získání stavù zámkù služby.", "Získání stavù zámkù služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, stats_lock,																	19,1,5,35, "Zamknutí statistiky služby.", "Zamknutí statistiky služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, stats_unlock,																19,1,5,36, "Odemknutí statistiky služby.", "Odemknutí statistiky služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_accounts,														19,1,5,37, "Získání seznamu ftp úètù služby.", "Získání seznamu ftp úètù služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, ftp_lock,																	19,1,5,38, "Zamknutí ftp úètu služby.", "Zamknutí ftp úètu služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, ftp_unlock,																	19,1,5,39, "Odemknutí ftp úètu služby.", "Odemknutí ftp úètu služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, ssh_lock,																	19,1,5,40, "Zamknutí ssh úètu služby.", "Zamknutí ssh úètu služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, ssh_unlock,																	19,1,5,41, "Odemknutí ssh úètu služby.", "Odemknutí ssh úètu služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, service_permission_granted,													19,1,5,42, "Ovìøení udìlených práv ke službì.", "Ovìøení udìlených práv ke službì se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_hosting_server,															19,1,5,43, "Získání hostingového serveru pro danou službu.", "Získání hostingového serveru pro danou službu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_mail_server,															19,1,5,44, "Získání poštovního serveru pro danou službu.", "Získání poštovního serveru pro danou službu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_master_service,															19,1,5,45, "Získání master služby.", "Získání master služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_third_level_domain_from_alias,									19,1,5,46, "Získání domény tøetí úrovnì z aliasu na ni.", "Získání domény tøetí úrovnì z aliasu na ni se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, domain_transfer_available,													19,1,5,47, "Zjištìní dostupnosti transferu domény.", "Zjištìní dostupnosti transferu domény se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_databases,																19,1,5,48, "Získání seznamu databází.", "Získání seznamu databází se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_database_server_deployments,											19,1,5,49, "Získání seznamu serverù pro zøizování jednotlivých typù databází služby.", "Získání seznamu serverù pro zøizování jednotlivých typù databází služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_free_database_name,														19,1,5,50, "Získání volného názvu databáze odvozeného od názvu služby.", "Získání volného názvu databáze odvozeného od názvu služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_db_quotas,														19,1,5,51, "Získání databázových kvót pro službu.", "Získání databázových kvót pro službu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, upgrade_service_db_quotas,													19,1,5,52, "Navýšení databázových kvót pro službu.", "Navýšení databázových kvót pro službu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_billing_info,													19,1,5,53, "Získání informací pro fakturaci služby.", "Získání informací pro fakturaci služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_delegations,													19,1,5,54, "Získání seznamu delegací služby.", "Získání seznamu delegací služby se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, search_services,															19,1,5,55, "Hledání mezi službami.", "Hledání mezi službami se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, downgrade_service_db_quotas,												19,1,5,56, "Ponížení databázových kvót pro službu.", "Ponížení databázových kvót pro službu se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, create_service_tasks_batch,													19,1,6,1, "Vytvoøení dávky úloh.", "Vytvoøení dávky úloh se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_service_tasks_batch,													19,1,6,2, "Získání dávky úloh.", "Získání dávky úloh se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, process_service_task,														19,1,6,3, "Zpracování úlohy.", "Zpracování úlohy se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, service_sign_dnssec,														19,1,7,1, "Podepsání zóny DNSSEC.", "Podepsání zóny DNSSEC se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, service_unsign_dnssec,														19,1,7,2, "Odpodepsání zóny DNSSEC.", "Odpodepsání zóny DNSSEC se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_user_domain_lists,														19,1,8,1, "Získání uživatelských seznamù domén.", "Získání uživatelských seznamù domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_user_domain_list,													19,1,8,2, "Vytvoøení uživatelského seznamu domén.", "Vytvoøení uživatelského seznamu domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_user_domain_list,														19,1,8,3, "Získání uživatelského seznamu domén.", "Získání uživatelského seznamu domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_user_domain_list,													19,1,8,4, "Úprava uživatelského seznamu domén.", "Úprava uživatelského seznamu domén se nezdaøila.") \
	MDESC2(c, zcc_cmsm, delete_user_domain_list,													19,1,8,5, "Zrušení uživatelského seznamu domén.", "Zrušení uživatelského seznamu domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, add_domain_to_user_domain_list,												19,1,8,6, "Pøidání domény do uživatelského seznamu domén.", "Pøidání domény do uživatelského seznamu domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_domain_from_user_domain_list,										19,1,8,7, "Zrušení domény z uživatelského seznamu domén.", "Zrušení domény z uživatelského seznamu domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, domain_is_on_user_domain_list,												19,1,8,8, "Zjištìní zda je doména v uživatelském seznamu domén.", "Zjištìní zda je doména v uživatelském seznamu domén se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, create_order,																19,1,9,1, "Vytvoøení objednávky.", "Vytvoøení objednávky se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_order,																	19,1,9,2, "Získání objednávky.", "Získání objednávky se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, process_order_item,															19,1,9,3, "Zpracování položky v objednávce.", "Zpracování položky v objednávce se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, order_hosting,																19,1,9,4, "Objednání hostingu.", "Objednání hostingu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, order_cloud_server,															19,1,9,5, "Objednání cloud serveru.", "Objednání cloud serveru se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, assign_anonymous_order,														19,1,9,6, "Pøiøazení anonymní objednávky.", "Pøiøazení anonymní objednávky se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, process_order,																19,1,9,7, "Zpracování objednávky.", "Zpracování objednávky se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, order_create_group_payment,													19,1,9,8, "Vytvoøení hromadné výzvy pro objednávku.", "Vytvoøení hromadné výzvy pro objednávku se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, change_mailbox_count,														19,1,10,1, "Zmìna poètu poštovních schránek.", "Zmìna poètu poštovních schránek se nezdaøila.") \
	MDESC2(c, zcc_cmsm, change_mail_quota,															19,1,10,2, "Zmìna celkové poštovní kvóty.", "Zmìna celkové poštovní kvóty se nezdaøila.") \
\
	MDESC2(c, zcc_cmsm, change_web_quota,															19,1,11,1, "Zmìna webové kvóty.", "Zmìna webové kvóty se nezdaøila.") \
\
	MDESC2(c, zcc_cmsm, mojeid_handle_check,														19,1,12,1, "Kontrola dostupnosti uživatelského jména mojeID identity.", "Kontrola dostupnosti uživatelského jména mojeID identity se nezdaøila.") \
	MDESC2(c, zcc_cmsm, mojeid_register,															19,1,12,2, "Registrace nové mojeID identity.", "Registrace nové mojeID identity se nezdaøila.") \
\
	MDESC2(c, zcc_cmsm, update_zone_ipv6,															19,1,13,1, "Aktualizace zóny doplnìním záznamù IPv6.", "Aktualizace zóny doplnìním záznamù IPv6 se nezdaøila.") \
	MDESC2(c, zcc_cmsm, publish_zone,																19,1,13,2, "Pøenesení dns záznamù na produkèní dns server.", "Pøenesení dns záznamù na produkèní dns server se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, add_arecord_ipv6,															19,1,13,3, "Pøidání odpovídajícího záznamu IPv6 do zóny.", "Pøidání odpovídajícího záznamu IPv6 do zóny se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, activate_ipv6,																19,1,13,4, "Aktivace IPv4 ze Zoner rozsahu pro podporu IPv6.", "Aktivace IPv4 ze Zoner rozsahu pro podporu IPv6 se nezdaøila.") \
	MDESC2(c, zcc_cmsm, dns_get_ip_ranges,															19,1,13,5, "Získání seznamu IP rozsahù.", "Získání seznamu IP rozsahù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, dns_get_ptr_records,														19,1,13,6, "Získání seznamu PTR záznamù.", "Získání seznamu PTR záznamù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, dns_get_ptr_record,															19,1,13,7, "Získání PTR záznamu.", "Získání PTR záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, dns_update_ptr_record,														19,1,13,8, "Úprava PTR záznamu.", "Úprava PTR záznamu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, dns_rewrite_reverse_zone,													19,1,13,9, "Vygenerování reverzní zóny.", "Vygenerování reverzní zóny se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, dns_get_zone,																19,1,13,10, "Získání zóny.", "Získání zóny se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_arecord_ipv6,														19,1,13,11, "Odebrání odpovídajícího záznamu IPv6 ze zóny.", "Odebrání odpovídajícího záznamu IPv6 ze zóny se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_zone,																19,1,13,12, "Smazání zóny z produkèního dns serveru.", "Smazání zóny z produkèního dns serveru se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, clear_zone,																	19,1,13,13, "Smazání dns záznamù z databáze.", "Smazání dns záznamù z databáze se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_dns_a_record,														19,1,13,14, "Vytvoøení A záznamu.", "Vytvoøení A záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_dns_cname_record,													19,1,13,15, "Vytvoøení CName záznamu.", "Vytvoøení CName záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_dns_aaaa_record,														19,1,13,16, "Vytvoøení AAAA záznamu.", "Vytvoøení AAAA záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_dns_txt_record,														19,1,13,17, "Vytvoøení TXT záznamu.", "Vytvoøení TXT záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_dns_mx_record,														19,1,13,18, "Vytvoøení MX záznamu.", "Vytvoøení MX záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_dns_srv_record,														19,1,13,19, "Vytvoøení SRV záznamu.", "Vytvoøení SRV záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_txt_records,															19,1,13,20, "Smazání TXT záznamù s daným hostname.", "Smazání TXT záznamù s daným hostname se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_a_record,															19,1,13,21, "Smazání A záznamu.", "Smazání A záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, is_dns_zone_uptodate,														19,1,13,22, "Zobrazení aktuálnosti dns zóny.", "Zobrazení aktuálnosti dns zóny se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_a_record,															19,1,13,23, "Úprava A záznamu.", "Úprava A záznamu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, delete_cname_record,														19,1,13,24, "Smazání CNAME záznamu.", "Smazání CNAME záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_cname_record,														19,1,13,25, "Úprava CNAME záznamu.", "Úprava CNAME záznamu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, delete_aaaa_record,															19,1,13,26, "Smazání AAAA záznamu.", "Smazání AAAA záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_aaaa_record,															19,1,13,27, "Úprava AAAA záznamu.", "Úprava AAAA záznamu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, delete_mx_record,															19,1,13,28, "Smazání MX záznamu.", "Smazání MX záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_mx_record,															19,1,13,29, "Úprava MX záznamu.", "Úprava MX záznamu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, is_dns_zone_managed,														19,1,13,30, "Ovìøení, že dns zóna je spravována Zonerem.", "Ovìøení, že dns zóna je spravována Zonerem se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_txt_record,															19,1,13,31, "Úprava TXT záznamu.", "Úprava TXT záznamu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, delete_txt_record,															19,1,13,32, "Smazání TXT záznamu.", "Smazání TXT záznamu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, convert_mail_cname_records,													19,1,13,33, "Pøevedení poštovních CNAME záznamù na zoner.com.", "Pøevedení poštovních CNAME záznamù na zoner.com se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_package,																19,1,14,1, "Získání balíèku.", "Získání balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_packages_by_init,														19,1,14,2, "Získání seznamu (ne)zahájených balíèkù.", "Získání seznamu (ne)zahájených balíèkù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, init_package,																19,1,14,3, "Zahájení balíèku.", "Zahájení balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, package_billing_update_notify,												19,1,14,4, "Oznámení o zmìnì poèáteèního data fakturace balíèku.", "Oznámení o zmìnì poèáteèního data fakturace balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_all_packages,															19,1,14,5, "Získání seznamu všech balíèkù.", "Získání seznamu všech balíèkù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, package_payment_made_notify,												19,1,14,6, "Oznámení o provedené platbì za balíèek.", "Oznámení o provedené platbì za balíèek se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_packages_by_hwid,														19,1,14,7, "Získání seznamu balíèkù podle HwId.", "Získání seznamu balíèkù podle HwId se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_packages_by_server_name,												19,1,14,8, "Získání seznamu balíèkù podle názvu serveru.", "Získání seznamu balíèkù podle názvu serveru se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, merge_packages,																19,1,14,9, "Slouèení dvou balíèkù do jednoho.", "Slouèení dvou balíèkù do jednoho se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_package,																19,1,14,10, "Úprava balíèku.", "Úprava balíèku se nezdaøila.") \
	MDESC2(c, zcc_cmsm, create_package,																19,1,14,11, "Vytvoøení balíèku.", "Vytvoøení balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_package,																19,1,14,12, "Zrušení balíèku.", "Zrušení balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, add_server_to_package,														19,1,14,13, "Pøidání serveru do balíèku.", "Pøidání serveru do balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, remove_server_from_package,													19,1,14,14, "Zrušení serveru z balíèku.", "Zrušení serveru z balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_package_invoice_request,												19,1,14,15, "Zrušení požadavku na fakturaci balíèku.", "Zrušení požadavku na fakturaci balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_package_invoice_request,												19,1,14,16, "Vytvoøení požadavku na fakturaci balíèku.", "Vytvoøení požadavku na fakturaci balíèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_packages,																19,1,14,17, "Získání seznamu balíèkù.", "Získání seznamu balíèkù se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_variant,																19,1,15,1, "Získání varianty.", "Získání varianty se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_variants_on_menu,														19,1,15,2, "Získání seznamu variant v nabídce.", "Získání seznamu variant v nabídce se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_variants_for_upgrade,													19,1,15,3, "Získání seznamu variant pro ugrade.", "Získání seznamu variant pro ugrade se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_all_variants_for_upgrade,												19,1,15,4, "Získání seznamu všech variant pro ugrade.", "Získání seznamu všech variant pro ugrade se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_all_variants_with_monthly_fee,											19,1,15,5, "Získání seznamu všech placených variant.", "Získání seznamu všech placených variant se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_variant_config,															19,1,15,6, "Získání konfigurace varianty.", "Získání konfigurace varianty se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_variants,																19,1,15,7, "Získání seznamu variant.", "Získání seznamu variant se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_credentials,															19,1,16,1, "Získání pøihlašovacích údajù k úètu.", "Získání pøihlašovacích údajù k úètu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_credentials,															19,1,16,2, "Zmìna pøihlašovacích údajù k úètu.", "Zmìna pøihlašovacích údajù k úètu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, update_alt_credentials,														19,1,16,3, "Zmìna alternativních pøihlašovacích údajù.", "Zmìna alternativních pøihlašovacích údajù se nezdaøila.") \
	MDESC2(c, zcc_cmsm, delete_alt_credentials,														19,1,16,4, "Zrušení alternativních pøihlašovacích údajù.", "Zrušení alternativních pøihlašovacích údajù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_alt_credentials,														19,1,16,5, "Vytvoøení alternativních pøihlašovacích údajù.", "Vytvoøení alternativních pøihlašovacích údajù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, bind_alt_credentials,														19,1,16,6, "Pøipojení alternativních pøihlašovacích údajù.", "Pøipojení alternativních pøihlašovacích údajù se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_tld_fee_tlds,															19,1,17,1, "Získání seznamu tld z ceníku domén.", "Získání seznamu tld z ceníku domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fees_for_users,														19,1,17,2, "Získání ceníku domén pro vybrané uživatele.", "Získání ceníku domén pro vybrané uživatele se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fees_for_categories,												19,1,17,3, "Získání ceníku domén pro uživatelské kategorie.", "Získání ceníku domén pro uživatelské kategorie se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fees_for_branches,													19,1,17,4, "Získání ceníku domén pro poboèky.", "Získání ceníku domén pro poboèky se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_tld_fee,																19,1,17,5, "Vytvoøení nové položky v ceníku domén.", "Vytvoøení nové položky v ceníku domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, delete_tld_fee,																19,1,17,6, "Zrušení položky v ceníku domén.", "Zrušení položky v ceníku domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fee,																19,1,17,7, "Získání položky v ceníku domén.", "Získání položky v ceníku domén se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, update_tld_fee,																19,1,17,8, "Úprava èástky u položky v ceníku domén.", "Úprava èástky u položky v ceníku domén se nezdaøila.") \
	MDESC2(c, zcc_cmsm, get_basic_tld_fees_for_branch,												19,1,17,9, "Získání základního ceníku domén pro poboèku.", "Získání základního ceníku domén pro poboèku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fee_extra_tlds,														19,1,17,10, "Získání seznamu tld z ceníku domén, které mají nastaveny individuální ceny pro uživatele èi kategorie.", "Získání seznamu tld z ceníku domén, které mají nastaveny individuální ceny pro uživatele èi kategorie se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_pricelist_tld,														19,1,17,11, "Pøidání nové TLD do ceníku.", "Pøidání nové TLD do ceníku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fee_amount_last_change,												19,1,17,12, "Získání datumu poslední zmìny v ceníku domén.", "Získání datumu poslední zmìny v ceníku domén se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, update_end_report_message_box,												19,1,18,1, "Úprava závìreèné zprávy v message boxu.", "Úprava závìreèné zprávy v message boxu se nezdaøila.") \
\
	MDESC2(c, zcc_cmsm, deploy_cloud_server,														19,1,19,1, "Nasazení cloud serveru.", "Nasazení cloud serveru se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_server,																	19,1,19,2, "Získání serveru.", "Získání serveru se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_servers,																19,1,19,3, "Získání seznamu serverù.", "Získání seznamu serverù se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, invoice_request_cancelled_notify,											19,1,20,1, "Oznámení o zrušení fakturaèního požadavku.", "Oznámení o zrušení fakturaèního požadavku se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, invoice_request_paid_notify,												19,1,20,2, "Oznámení o uhrazení fakturaèního požadavku. ", "Oznámení o uhrazení fakturaèního požadavku se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, reward_old_invoicing_payment_notify,										19,1,21,1, "Oznámení pro systém odmìn o platbì ze starého fakturaèního systému.", "Oznámení pro systém odmìn o platbì ze starého fakturaèního systému se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, reward_new_invoicing_payment_notify,										19,1,21,2, "Oznámení pro systém odmìn o platbì z nového fakturaèního systému.", "Oznámení pro systém odmìn o platbì z nového fakturaèního systému se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_certificates,															19,1,22,1, "Získání seznamu certifikátù.", "Získání seznamu certifikátù se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_certificate,															19,1,22,2, "Vytvoøení certifikátu.", "Vytvoøení certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_certificate,															19,1,22,3, "Získání certifikátu.", "Získání certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_private_key,												19,1,22,4, "Získání privátního klíèe certifikátu.", "Získání privátního klíèe certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, symantec_send_post_request,													19,1,22,5, "Poslání POST žádosti na Symantec.", "Poslání POST žádosti na Symantec se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_binding_for_service,										19,1,22,6, "Získání instalace certifikátu.", "Získání instalace certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, install_certificate,														19,1,22,7, "Instalace certifikátu.", "Instalace certifikátu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, certificate_installation_possible,											19,1,22,8, "Ovìøení možnosti instalace certifikátu.", "Ovìøení možnosti instalace certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, uninstall_certificate,														19,1,22,9, "Odinstalace certifikátu.", "Odinstalace certifikátu se nezdaøila.") \
	MDESC2(c, zcc_cmsm, get_certificate_domains,													19,1,22,10, "Získání seznamu domén z certifikátu.", "Získání seznamu domén z certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_binding,													19,1,22,11, "Získání instalace certifikátu.", "Získání instalace certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_for_cn,														19,1,22,12, "Získání certifikátu pro CN.", "Získání certifikátu pro CN se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_pfx,														19,1,22,13, "Získání .pfx souboru certifikátu.", "Získání .pfx souboru certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, create_commercial_certificate,												19,1,22,14, "Vytvoøení komerèního certifikátu.", "Vytvoøení komerèního certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, insert_certificate,															19,1,22,15, "Vložení certifikátu.", "Vložení certifikátu se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_installable_domains,										19,1,22,16, "Získání seznamu domén, pro které lze instalovat certifikát.", "Získání seznamu domén, pro které lze instalovat certifikát se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, renew_certificate,															19,1,22,17, "Obnovení certifikátu.", "Obnovení certifikátu se nezdaøilo.") \
\
	MDESC2(c, zcc_cmsm, get_eet_bills,																19,1,23,1, "Získání seznamu EET úètenek.", "Získání seznamu EET úètenek se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, assign_credit_eet_bill,														19,1,23,2, "Pøiøazení EET úètenky z kreditního systému.", "Pøiøazení EET úètenky z kreditního systému se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_eet_bill_info,															19,1,23,3, "Získání podrobností o EET úètence.", "Získání podrobností o EET úètence se nezdaøilo.") \
	MDESC2(c, zcc_cmsm, get_eet_bill,																19,1,23,4, "Získání EET úètenky.", "Získání EET úètenky se nezdaøilo.") \


#define ZONERCONTROLCENTER_RESP(c) \
	MDESC(c, zcc_resp, unknown_message,																19,0,0,30001, "Byla zaslána neznámá zpráva.") \
	MDESC(c, zcc_resp, access_denied,																19,0,0,30002, "Nemáte oprávnìní pøístupu k dané zprávì.") \
	MDESC(c, zcc_resp, client_authentication_failed,												19,0,0,30003, "Pøihlášení cms klienta nebylo úspìšné.") \
	MDESC(c, zcc_resp, user_authentication_failed,													19,0,0,30004, "Pøihlášení uživatele nebylo úspìšné.") \
	MDESC(c, zcc_resp, uknown_error_occurred,														19,0,0,30005, "Nastala neznámá chyba.") \
	MDESC(c, zcc_resp, remote_call_failed,															19,0,0,30006, "Selhalo vzdálené volání.") \
	MDESC(c, zcc_resp, operations_insert_failed,													19,0,0,30007, "Selhalo vložení akcí.") \
	MDESC(c, zcc_resp, sql_exception,																19,0,0,30008, "Nastala sql vyjímka.") \
	MDESC(c, zcc_resp, unxpected_exception,															19,0,0,30009, "Nastala neoèekávaní vyjímka.") \
	MDESC(c, zcc_resp, user_id_not_valid,															19,0,0,30010, "Neplatný identifikátor uživatele.") \
\
	MDESC(c, zcc_resp, search_criterion_missing,													19,0,1,30001, "Chybí kritérium hledání.") \
\
	MDESC(c, zcc_resp, dns_snapshot_not_made,														19,1,0,30001, "Vytvoøení snapshotu dns nebylo provedeno.") \
	MDESC(c, zcc_resp, dns_snapshot_get_failed,														19,1,0,30002, "Získání snapshotu dns se nezdaøilo.") \
\
	MDESC(c, zcc_resp, hotline_request_body_missing,												19,1,1,30001, "Chybí tìlo požadavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_inform_by_missing,											19,1,1,30002, "Chybí zpùsob zpìtného informování u požadavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_phone_missing,												19,1,1,30003, "Chybí telefon u požadavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_phone_invalid,												19,1,1,30004, "Neplatný telefon u požadavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_email_missing,												19,1,1,30005, "Chybí email u požadavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_email_invalid,												19,1,1,30006, "Neplatný email u požadavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_sending_failed,												19,1,1,30007, "Nepodaøilo se odeslat požadavek na hotline.") \
	MDESC(c, zcc_resp, user_profile_updating_failed,												19,1,1,30008, "Nepodaøilo se provést úpravu kontaktních údajù uživatele.") \
	MDESC(c, zcc_resp, user_billing_address_name_missing,											19,1,1,30009, "Chybí název spoleènosti u fakturaèní adresy.") \
	MDESC(c, zcc_resp, user_billing_address_name_max_length_exceeded,								19,1,1,30010, "Název spoleènosti u fakturaèní adresy pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_billing_address_street_missing,											19,1,1,30011, "Chybí ulice u fakturaèní adresy.") \
	MDESC(c, zcc_resp, user_billing_address_street_max_length_exceeded,								19,1,1,30012, "Ulice u fakturaèní adresy pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_billing_address_city_missing,											19,1,1,30013, "Chybí mìsto u fakturaèní adresy.") \
	MDESC(c, zcc_resp, user_billing_address_city_max_length_exceeded,								19,1,1,30014, "Mìsto u fakturaèní adresy pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_billing_address_zip_missing,											19,1,1,30015, "Chybí psè u fakturaèní adresy.") \
	MDESC(c, zcc_resp, user_billing_address_zip_max_length_exceeded,								19,1,1,30016, "Psè u fakturaèní adresy pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_delivery_address_name_missing,											19,1,1,30017, "Chybí název spoleènosti u korespondenèní adresy.") \
	MDESC(c, zcc_resp, user_delivery_address_name_max_length_exceeded,								19,1,1,30018, "Název spoleènosti u korespondenèní adresy pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_delivery_address_street_missing,										19,1,1,30019, "Chybí ulice u korespondenèní adresy.") \
	MDESC(c, zcc_resp, user_delivery_address_street_max_length_exceeded,							19,1,1,30020, "Ulice u korespondenèní adresy pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_delivery_address_city_missing,											19,1,1,30021, "Chybí mìsto u korespondenèní adresy.") \
	MDESC(c, zcc_resp, user_delivery_address_city_max_length_exceeded,								19,1,1,30022, "Mìsto u korespondenèní adresy pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_delivery_address_zip_missing,											19,1,1,30023, "Chybí psè u korespondenèní adresy.") \
	MDESC(c, zcc_resp, user_delivery_address_zip_max_length_exceeded,								19,1,1,30024, "Psè u korespondenèní adresy pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_identification_max_length_exceeded,										19,1,1,30025, "IÈ pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_vat_identification_max_length_exceeded,									19,1,1,30026, "DIÈ pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_bank_max_length_exceeded,												19,1,1,30027, "Bankovní spojení pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_fax_max_length_exceeded,												19,1,1,30028, "Fax pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_fax_invalid,															19,1,1,30029, "Neplatný fax.") \
	MDESC(c, zcc_resp, user_authorized_person_before_name_titles_max_length_exceeded,				19,1,1,30030, "Tituly pøed jménem oprávnìné osoby pøekraèují povolenou délku.") \
	MDESC(c, zcc_resp, user_authorized_person_first_name_missing,									19,1,1,30031, "Chybí jméno oprávnìné osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_first_name_max_length_exceeded,						19,1,1,30032, "Jméno oprávnìné osoby pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_authorized_person_last_name_missing,									19,1,1,30033, "Chybí pøíjmení oprávnìné osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_last_name_max_length_exceeded,						19,1,1,30034, "Pøíjmení oprávnìné osoby pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_authorized_person_after_name_titles_max_length_exceeded,				19,1,1,30035, "Tituly za jménem oprávnìné osoby pøekraèují povolenou délku.") \
	MDESC(c, zcc_resp, user_authorized_person_phone_missing,										19,1,1,30036, "Chybí telefon oprávnìné osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_phone_max_length_exceeded,							19,1,1,30037, "Telefon oprávnìné osoby pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_authorized_person_phone_invalid,										19,1,1,30038, "Neplatný telefon oprávnìné osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_email_missing,										19,1,1,30039, "Chybí e-mail oprávnìné osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_email_max_length_exceeded,							19,1,1,30040, "E-mail oprávnìné osoby pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_authorized_person_email_invalid,										19,1,1,30041, "Neplatný e-mail oprávnìné osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_duplicate,											19,1,1,30042, "Stejná oprávnìná osoba.") \
	MDESC(c, zcc_resp, user_authorized_person_at_least_one_must_be_defined,							19,1,1,30043, "Musí být ustanovena alespoò jedna oprávnìná osoba.") \
	MDESC(c, zcc_resp, hotline_request_subject_missing,												19,1,1,30044, "Chybí pøedmìt požadavku na hotline.") \
	MDESC(c, zcc_resp, sms_area_code_missing,														19,1,1,30045, "Chybí èíslo pøedvolby.") \
	MDESC(c, zcc_resp, sms_area_code_invalid,														19,1,1,30046, "Èíslo pøedvolby není platné.") \
	MDESC(c, zcc_resp, sms_phone_invalid,															19,1,1,30047, "Telefonní èíslo není platné.") \
	MDESC(c, zcc_resp, sms_phone_same,																19,1,1,30048, "Telefonní èíslo je nezmìnìné.") \
	MDESC(c, zcc_resp, tld_price_missing,															19,1,1,30049, "Cena pro dané TLD chybí.") \
	MDESC(c, zcc_resp, user_some_services_exist,													19,1,1,30050, "Na úètu uživatele existují nìjaké služby.") \
	MDESC(c, zcc_resp, user_has_system_role,														19,1,1,30051, "Uživatel má admin práva.") \
	MDESC(c, zcc_resp, user_delegated_services_exist,												19,1,1,30052, "Na úètu uživatele existují delegované služby.") \
	MDESC(c, zcc_resp, user_undeletable,															19,1,1,30053, "Úèet uživatele je nesmazatelný.") \
	MDESC(c, zcc_resp, user_creation_failed,														19,1,1,30054, "Vytvoøení uživatele selhalo.") \
	MDESC(c, zcc_resp, user_note_type_not_valid,													19,1,1,30055, "Neplatný typ poznámky u uživatele.") \
	MDESC(c, zcc_resp, user_not_found,																19,1,1,30056, "Uživatel nebyl nalezen.") \
	MDESC(c, zcc_resp, note_of_same_type_already_exists,											19,1,1,30057, "Poznámka stejného typu již existuje.") \
	MDESC(c, zcc_resp, user_note_not_found,															19,1,1,30058, "Poznámka u uživatele nebyla nalezena.") \
	MDESC(c, zcc_resp, user_already_exists,															19,1,1,30059, "Úèet již existuje.") \
	MDESC(c, zcc_resp, user_email_einvoice_missing,													19,1,1,30060, "Chybí fakturaèní e-mail.") \
	MDESC(c, zcc_resp, user_email_einvoice_max_length_exceeded,										19,1,1,30061, "Fakturaèní e-mail pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_email_einvoice_invalid,													19,1,1,30062, "Neplatný fakturaèní e-mail.") \
	MDESC(c, zcc_resp, user_some_servers_exist,														19,1,1,30063, "Na úètu uživatele existují nìjaké servery.") \
	MDESC(c, zcc_resp, event_type_invalid,															19,1,1,30064, "Typ události není platný.") \
	MDESC(c, zcc_resp, message_template_not_found,													19,1,1,30065, "Šablona zprávy nebyla nalezena.") \
	MDESC(c, zcc_resp, message_template_not_implemented,											19,1,1,30066, "Šablonu zprávy zatím nelze použít.") \
	MDESC(c, zcc_resp, message_empty,																19,1,1,30067, "Zpráva je prázdná.") \
	MDESC(c, zcc_resp, admin_name_missing,															19,1,1,30068, "Chybí jméno administrátora.") \
\
	MDESC(c, zcc_resp, debt_not_found,																19,1,2,30001, "Pohledávka nebyla nalezena.") \
	MDESC(c, zcc_resp, debt_already_paid,															19,1,2,30002, "Pohledávka byla již uhrazena.") \
	MDESC(c, zcc_resp, more_debts_exist,															19,1,2,30003, "Existuje více pohledávek.") \
	MDESC(c, zcc_resp, credit_system_not_available,													19,1,2,30004, "Kreditní úèet není aktivován.") \
	MDESC(c, zcc_resp, low_credit,																	19,1,2,30005, "Nedostateèný kredit na kreditním úètu.") \
	MDESC(c, zcc_resp, credit_pay_unspecified_error,												19,1,2,30006, "Platba se nezdaøila z jiných pøíèin.") \
\
	MDESC(c, zcc_resp, expires_within_days_out_of_range,											19,1,3,30001, "Hodnota položky expires_within_days je mimo povolený rozsah -720 až 720.") \
	MDESC(c, zcc_resp, domain_name_check_failed,													19,1,3,30002, "Zjištìní dostupnosti domény selhalo.") \
	MDESC(c, zcc_resp, tld_years_out_of_bounds,														19,1,3,30003, "Hodnota rokù pro dané tld je mimo povolené meze.") \
	MDESC(c, zcc_resp, tld_min_years_greater_than_max_years,										19,1,3,30004, "Hodnota min. rokù pro dané tld je vìtší než hodnota max. rokù.") \
	MDESC(c, zcc_resp, tld_domain_length_out_of_bounds,												19,1,3,30005, "Délka domény pro dané tld je mimo povolené meze.") \
	MDESC(c, zcc_resp, tld_min_domain_length_greater_than_max_domain_length,						19,1,3,30006, "Hodnota min. délky domény pro dané tld je vìtší než hodnota max. délky domény.") \
	MDESC(c, zcc_resp, tld_time_window_out_of_bounds,												19,1,3,30007, "Èasové okno pro dané tld je mimo povolené meze.") \
	MDESC(c, zcc_resp, tld_invalid,																	19,1,3,30008, "Neplatné tld.") \
	MDESC(c, zcc_resp, domain_name_owner_not_found,													19,1,3,30009, "Vlastník domény nebyl nalezen.") \
	MDESC(c, zcc_resp, contact_handle_not_found,													19,1,3,30010, "Handle kontaktu nebyl nalezen.") \
	MDESC(c, zcc_resp, contact_role_not_valid,														19,1,3,30011, "Role kontaktu není validní.") \
	MDESC(c, zcc_resp, tld_not_found,																19,1,3,30012, "Tld nebylo nalezeno.") \
	MDESC(c, zcc_resp, registrar_already_defined,													19,1,3,30013, "Registrátor je již definován.") \
	MDESC(c, zcc_resp, registrar_id_unknown,														19,1,3,30014, "Id registrátora je neznámé.") \
	MDESC(c, zcc_resp, registrar_id_cannot_be_used,													19,1,3,30015, "Id registrátora nelze použít.") \
	MDESC(c, zcc_resp, auth_info_sending_failed,													19,1,3,30016, "Poslání autorizaèního kódu pro pøevod domény selhalo.") \
	MDESC(c, zcc_resp, renew_in_progress,															19,1,3,30017, "Právì probíha proces obnovy domény.") \
\
	MDESC(c, zcc_resp, database_type_not_defined,													19,1,4,30001, "Neznámý typ databáze.") \
	MDESC(c, zcc_resp, database_type_not_available,													19,1,4,30002, "Typ databáze nelze v daném pøípadì použít.") \
	MDESC(c, zcc_resp, database_data_file_not_available,											19,1,4,30003, "Datový soubor nelze u této databáze použít.") \
	MDESC(c, zcc_resp, database_server_not_available,												19,1,4,30004, "Pro daný typ databáze není pøiøazen server.") \
	MDESC(c, zcc_resp, database_name_not_available,													19,1,4,30005, "Název databáze nelze použít.") \
	MDESC(c, zcc_resp, database_name_not_valid,														19,1,4,30006, "Název databáze není validní.") \
	MDESC(c, zcc_resp, database_creation_failed,													19,1,4,30007, "Vytvoøení databáze selhalo.") \
	MDESC(c, zcc_resp, database_user_creation_failed,												19,1,4,30008, "Vytvoøení uživatele databáze selhalo.") \
	MDESC(c, zcc_resp, database_operations_failed,													19,1,4,30009, "Vytvoøení operací pro vytvoøení databáze selhalo.") \
	MDESC(c, zcc_resp, database_name_max_length_exceeded,											19,1,4,30010, "Název databáze pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, database_user_password_length_out_of_bounds,									19,1,4,30011, "Délka hesla uživatele databáze mimo stanovený limit.") \
	MDESC(c, zcc_resp, target_server_not_valid,														19,1,4,30012, "Cílový server nelze použít.") \
	MDESC(c, zcc_resp, database_state_not_ok,														19,1,4,30013, "Databáze se nenachází ve stavu OK.") \
	MDESC(c, zcc_resp, operation_on_dba_server_failed,												19,1,4,30014, "Operace na databázovém serveru selhala.") \
	MDESC(c, zcc_resp, sql_transact_failed,															19,1,4,30015, "Sql transakce selhala.") \
	MDESC(c, zcc_resp, dns_update_impossible,														19,1,4,30016, "Úprava dns není možná.") \
	MDESC(c, zcc_resp, dns_operation_failed,														19,1,4,30017, "Operace na dns serveru selhala.") \
	MDESC(c, zcc_resp, target_and_source_servers_identical,											19,1,4,30018, "Cílový server je stejný jako zdrojový.") \
	MDESC(c, zcc_resp, database_not_found,															19,1,4,30019, "Databáze nebyla nalezena.") \
	MDESC(c, zcc_resp, database_count_exceeded,														19,1,4,30020, "Poèet pøedplacených databází vyèerpán.") \
	MDESC(c, zcc_resp, database_space_exceeded,														19,1,4,30021, "Pøedplacený diskový prostor pro databáze vyèerpán.") \
	MDESC(c, zcc_resp, database_size_too_small,														19,1,4,30022, "Velikost databáze je pøíliš malá.") \
	MDESC(c, zcc_resp, database_size_too_big,														19,1,4,30023, "Velikost databáze je pøíliš velká.") \
\
	MDESC(c, zcc_resp, service_not_found,															19,1,5,30001, "Služba nebyla nalezena.") \
	MDESC(c, zcc_resp, service_account_not_found,													19,1,5,30002, "Úèet služby nebyl nalezen.") \
	MDESC(c, zcc_resp, email_not_authorized_for_service,											19,1,5,30003, "Email není pro danou službu autorizovaný.") \
	MDESC(c, zcc_resp, service_state_not_acceptable,												19,1,5,30004, "Služba není v pøijatelném stavu.") \
	MDESC(c, zcc_resp, service_has_no_mail,															19,1,5,30005, "Služba neprovozuje poštu.") \
	MDESC(c, zcc_resp, service_has_no_web,															19,1,5,30006, "Služba neprovozuje web.") \
	MDESC(c, zcc_resp, url_not_valid,																19,1,5,30007, "Url není validní.") \
	MDESC(c, zcc_resp, service_must_be_parked,														19,1,5,30008, "Služba musí být zaparkována.") \
	MDESC(c, zcc_resp, variant_not_defined,															19,1,5,30009, "Varianta není definována.") \
	MDESC(c, zcc_resp, service_payer_someone_else,													19,1,5,30010, "Nesprávný plátce za službu.") \
	MDESC(c, zcc_resp, service_state_not_ok,														19,1,5,30011, "Služba není ve stavu OK.") \
	MDESC(c, zcc_resp, upgrade_not_available,														19,1,5,30012, "Zmìna varianty není možná.") \
	MDESC(c, zcc_resp, varcode_identical,															19,1,5,30013, "Nová varianta je stejná jako pùvodní.") \
	MDESC(c, zcc_resp, service_paying_already,														19,1,5,30014, "Služba již bìží v placeném režimu.") \
	MDESC(c, zcc_resp, payment_period_invalid,														19,1,5,30015, "Platební období není platné.") \
	MDESC(c, zcc_resp, bad_varcode,																	19,1,5,30016, "Variantu nelze použít.") \
	MDESC(c, zcc_resp, bad_domain_name,																19,1,5,30017, "Doménové jméno nelze použít.") \
	MDESC(c, zcc_resp, bad_user,																	19,1,5,30018, "Nesprávný uživatel.") \
	MDESC(c, zcc_resp, hosting_server_identical,													19,1,5,30019, "Daný server pro hosting je shodný s aktuálním.") \
	MDESC(c, zcc_resp, bad_server,																	19,1,5,30020, "Daný server nelze použít.") \
	MDESC(c, zcc_resp, service_has_already_mail,													19,1,5,30021, "Služba má již poštu vytvoøenu.") \
	MDESC(c, zcc_resp, variant_has_no_mail,															19,1,5,30022, "Varianta neobsahuje poštu.") \
	MDESC(c, zcc_resp, shared_ip_varcode_not_available,												19,1,5,30023, "Varianta bez vlastní IP adresy není k dispozici.") \
	MDESC(c, zcc_resp, server_shared_ip_missing,													19,1,5,30024, "Server nemá nastavenu sdílenou IP adresu.") \
	MDESC(c, zcc_resp, own_ip_varcode_not_available,												19,1,5,30025, "Varianta s vlastní IP adresou není k dispozici.") \
	MDESC(c, zcc_resp, permission_not_valid,														19,1,5,30026, "Neplatné oprávnìní.") \
	MDESC(c, zcc_resp, permission_already_delegated,												19,1,5,30027, "Oprávnìní již existuje.") \
	MDESC(c, zcc_resp, permission_not_found,														19,1,5,30028, "Oprávnìní nebylo nalezeno.") \
	MDESC(c, zcc_resp, already_operating_free,														19,1,5,30029, "Služba již bìží zdarma.") \
	MDESC(c, zcc_resp, service_note_type_not_valid,													19,1,5,30030, "Neplatný typ poznámky u služby.") \
	MDESC(c, zcc_resp, note_not_defined,															19,1,5,30031, "Poznámka není definována.") \
	MDESC(c, zcc_resp, service_note_not_found,														19,1,5,30032, "Poznámka u služby nebyla nalezena.") \
	MDESC(c, zcc_resp, service_app_pool_task_not_valid,												19,1,5,30033, "Úloha pro aplikaèní pool služby není platná.") \
	MDESC(c, zcc_resp, server_not_found,															19,1,5,30034, "Server nebyl nalezen.") \
	MDESC(c, zcc_resp, operation_on_server_failed,													19,1,5,30035, "Operace na serveru selhala.") \
	MDESC(c, zcc_resp, service_app_pool_not_found,													19,1,5,30036, "Aplikaèní pool služby nebyl nalezen.") \
	MDESC(c, zcc_resp, installatron_not_available,													19,1,5,30037, "Installatron není pro službu dostupný.") \
	MDESC(c, zcc_resp, variant_not_valid,															19,1,5,30038, "Varianta není platná.") \
	MDESC(c, zcc_resp, parking_not_possible,														19,1,5,30040, "Službu nelze zaparkovat.") \
	MDESC(c, zcc_resp, deletion_not_possible,														19,1,5,30041, "Službu nelze smazat.") \
	MDESC(c, zcc_resp, reg_already_paid_but_not_registred,											19,1,5,30042, "Registrace domény již uhrazena, ale registrace neprovedena.") \
	MDESC(c, zcc_resp, aliases_max_count_exceeded,													19,1,5,30043, "Poèet aliasù dosáhl povoleného poètu.") \
	MDESC(c, zcc_resp, bad_lock_state,																19,1,5,30044, "Stav zámku není správný.") \
	MDESC(c, zcc_resp, not_ftp_account,																19,1,5,30045, "Úèet není ftp.") \
	MDESC(c, zcc_resp, service_permission_not_granted,												19,1,5,30046, "Práva ke službì nebyla udìlena.") \
	MDESC(c, zcc_resp, dns_not_ready,																19,1,5,30047, "Dns není pøipravena.") \
	MDESC(c, zcc_resp, service_not_usable,															19,1,5,30048, "Službu nelze použít.") \
	MDESC(c, zcc_resp, domain_name_not_managed,														19,1,5,30049, "Doména není Zonerem spravována. Nejsme registrátorem.") \
	MDESC(c, zcc_resp, domain_not_exists,															19,1,5,30050, "Doména v centru neexistuje.") \
	MDESC(c, zcc_resp, domain_name_managed,															19,1,5,30051, "Doména Zonerem spravována. Jsme registrátorem.") \
	MDESC(c, zcc_resp, transfer_pending,															19,1,5,30052, "Transfer zahájen.") \
	MDESC(c, zcc_resp, service_db_quotas_no_change_required,										19,1,5,30053, "Zmìna kvót není požadována.") \
	MDESC(c, zcc_resp, db_count_quota_cannot_be_lower_than_created_db_count,						19,1,5,30054, "Limit poètu databází nemùže být menší než poèet existujících databází.") \
	MDESC(c, zcc_resp, db_count_quota_cannot_be_lower_than_min_db_count,							19,1,5,30055, "Limit poètu databází nemùže být menší než poèet databází, které má varianta k dispozici.") \
	MDESC(c, zcc_resp, db_space_quota_cannot_be_lower_than_allocated_db_space,						19,1,5,30056, "Limit celkové velikosti databází nemùže být menší než souèet aktuální velikosti existujících databází.") \
	MDESC(c, zcc_resp, db_space_quota_cannot_be_lower_than_min_db_space,							19,1,5,30057, "Limit celkové velikosti databází nemùže být menší než limit, který má varianta k dispozici.") \
\
	MDESC(c, zcc_resp, service_task_type_unknown,													19,1,6,30001, "Neznámý typ úlohy.") \
	MDESC(c, zcc_resp, service_task_params_invalid,													19,1,6,30002, "Neplatné parametry úlohy.") \
	MDESC(c, zcc_resp, service_task_permissions_denied,												19,1,6,30003, "Nemáte oprávnìní k vykonání dané úlohy.") \
	MDESC(c, zcc_resp, service_task_unexpected_exception,											19,1,6,30004, "Nastala neoèekávaná vyjímka.") \
	MDESC(c, zcc_resp, service_task_parsing_error_failed,											19,1,6,30005, "Parsování chyby selhalo.") \
	MDESC(c, zcc_resp, service_task_database_not_found,												19,1,6,30006, "Databáze nebyla nalezena.") \
\
	MDESC(c, zcc_resp, dnssec_not_available,														19,1,7,30001, "Pro dané doménové jméno není DNSSEC k dispozici.") \
	MDESC(c, zcc_resp, dns_not_managed_dnssec_forbidden,											19,1,7,30002, "Doménové jméno nemá DNS spravováno. DNSSEC nelze použít.") \
	MDESC(c, zcc_resp, dnssec_state_not_valid,														19,1,7,30003, "U daného doménového jména právì probíhá zmìna stavu DNSSEC.") \
	MDESC(c, zcc_resp, dnssec_operations_failed,													19,1,7,30004, "Vložení operací pro DNSSEC selhalo.") \
	MDESC(c, zcc_resp, domain_expired,																19,1,7,30005, "Doména expirovala.") \
\
	MDESC(c, zcc_resp, user_domain_list_name_missing,												19,1,8,30001, "Chybí název uživatelského seznamu domén.") \
	MDESC(c, zcc_resp, user_domain_list_name_max_length_exceeded,									19,1,8,30002, "Název uživatelského seznamu domén pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_domain_list_description_max_length_exceeded,							19,1,8,30003, "Popis uživatelského seznamu domén pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, user_domain_list_creation_failed,											19,1,8,30004, "Vytvoøení uživatelského seznamu domén selhalo.") \
\
	MDESC(c, zcc_resp, order_item_not_knowing_how_to_process,										19,1,9,30001, "Nelze urèit jak položku v objednávce zpracovat.") \
	MDESC(c, zcc_resp, order_item_unable_to_parse_params,											19,1,9,30002, "Nelze parsovat parametry položky v objednávce.") \
	MDESC(c, zcc_resp, order_item_domain_payer_someone_else,										19,1,9,30003, "Plátcem za doménu je jiný úèet než je uvedeno v objednávce.") \
	MDESC(c, zcc_resp, order_item_not_zoner_registrar,												19,1,9,30004, "Registrátorem domény není Zoner.") \
	MDESC(c, zcc_resp, order_item_renew_in_progress,												19,1,9,30005, "Prodloužení platnosti domény již bylo zahájeno.") \
	MDESC(c, zcc_resp, order_item_years_to_renew_out_of_range,										19,1,9,30006, "Nelze prodloužit platnost domény o zvolený poèet let.") \
	MDESC(c, zcc_resp, order_item_low_credit,														19,1,9,30007, "Na kreditním úètu není dostatek kreditù.") \
	MDESC(c, zcc_resp, order_item_exception_occurred,												19,1,9,30008, "Vyskytly se potíže pøi práci s databází nebo kreditním systémem.") \
	MDESC(c, zcc_resp, order_item_tld_not_supported,												19,1,9,30009, "TLD není podporováno.") \
	MDESC(c, zcc_resp, order_item_owner_does_not_exist,												19,1,9,30010, "Kontakt uvedený jako vlastník neexistuje.") \
	MDESC(c, zcc_resp, order_item_owner_missing_data,												19,1,9,30011, "U vlastníka nejsou uvedeny všechny potøebné údaje.") \
	MDESC(c, zcc_resp, order_item_admin_does_not_exist,												19,1,9,30012, "Kontakt uvedený jako admin neexistuje.") \
	MDESC(c, zcc_resp, order_item_admin_missing_data,												19,1,9,30013, "U admina nejsou uvedeny všechny potøebné údaje.") \
	MDESC(c, zcc_resp, order_item_tech_does_not_exist,												19,1,9,30014, "Kontakt uvedený jako tech neexistuje.") \
	MDESC(c, zcc_resp, order_item_tech_missing_data,												19,1,9,30015, "U techa nejsou uvedeny všechny potøebné údaje.") \
	MDESC(c, zcc_resp, order_item_domain_name_not_available,										19,1,9,30016, "Doménové jméno nelze použít.") \
	MDESC(c, zcc_resp, order_item_service_state_not_ok,												19,1,9,30017, "Služba musí být ve stavu OK.") \
	MDESC(c, zcc_resp, order_item_varcode_identical,												19,1,9,30018, "Cílová varianta je stejná jako aktuální.") \
	MDESC(c, zcc_resp, order_item_upgrade_not_available,											19,1,9,30019, "Upgrade nelze provést.") \
	MDESC(c, zcc_resp, order_item_payment_period_invalid,											19,1,9,30020, "Platební období je neplatné.") \
	MDESC(c, zcc_resp, order_item_bad_user,															19,1,9,30021, "Neexistující uživatel.") \
	MDESC(c, zcc_resp, order_item_bad_varcode,														19,1,9,30022, "Daný kód varianty nelze použít.") \
	MDESC(c, zcc_resp, order_item_bad_domain_name,													19,1,9,30023, "Doménové jméno nelze použít.") \
	MDESC(c, zcc_resp, order_item_bad_registration_data,											19,1,9,30024, "Údaje pro registraci doménového jména nelze použít.") \
	MDESC(c, zcc_resp, order_item_registering_contact_failed,										19,1,9,30025, "Registrace kontaktu selhala.") \
	MDESC(c, zcc_resp, order_item_dns_conflict,														19,1,9,30026, "V dns již jméno existuje.") \
	MDESC(c, zcc_resp, order_item_hosting_server_identical,											19,1,9,30027, "Daný server pro hosting je shodný s aktuálním.") \
	MDESC(c, zcc_resp, order_item_bad_server,														19,1,9,30028, "Daný server nelze použít.") \
	MDESC(c, zcc_resp, order_item_inpage_package_not_available,										19,1,9,30029, "Daný inapge balíèek nelze použít.") \
	MDESC(c, zcc_resp, cloud_server_program_not_valid,												19,1,9,30030, "Program cloud serveru je neplatný.") \
	MDESC(c, zcc_resp, cloud_server_opsys_not_valid,												19,1,9,30031, "Operaèní systém cloud serveru je neplatný.") \
	MDESC(c, zcc_resp, order_item_bad_voucher_code,													19,1,9,30032, "Slevový kupón nelze použít.") \
	MDESC(c, zcc_resp, order_item_transfer_failed,													19,1,9,30033, "Transfer se nepodaøilo provést.") \
	MDESC(c, zcc_resp, anonymous_order_assigning_impossible,										19,1,9,30034, "Pøiøazení anonymní objednávky není možné.") \
	MDESC(c, zcc_resp, transfer_failed,																19,1,9,30035, "Pøevod nìkteré domény selhal.") \
	MDESC(c, zcc_resp, create_group_payment_failed,													19,1,9,30036, "Vytvoøení hromadné platby se nezdaøilo.") \
\
	MDESC(c, zcc_resp, mailbox_count_below_default,													19,1,10,30001, "Poèet poštovních schránek je nižší než urèuje varianta.") \
	MDESC(c, zcc_resp, operation_on_mailserver_failed,												19,1,10,30002, "Vykonání operace na poštovním serveru selhalo.") \
	MDESC(c, zcc_resp, mail_quota_below_default,													19,1,10,30003, "Celková poštovní kvóta je nižší než urèuje varianta.") \
\
	MDESC(c, zcc_resp, web_quota_below_default,														19,1,11,30001, "Webová kvóta je nižší než urèuje varianta.") \
	MDESC(c, zcc_resp, operation_on_webserver_failed,												19,1,11,30002, "Vykonání operace na webovém serveru selhalo.") \
	MDESC(c, zcc_resp, web_quota_below_min,															19,1,11,30003, "Webová kvóta je nižší než urèuje minimum u varianty.") \
\
	MDESC(c, zcc_resp, mojeid_handle_check_failed,													19,1,12,30001, "Kontrola dostupnosti uživatelského jména mojeID identity selhala.") \
	MDESC(c, zcc_resp, mojeid_username_missing,														19,1,12,30002, "Chybí uživatelské jméno mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_username_max_length_exceeded,											19,1,12,30003, "Uživatelské jméno mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_first_name_missing,													19,1,12,30004, "Chybí jméno mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_first_name_max_length_exceeded,										19,1,12,30005, "Jméno mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_last_name_missing,													19,1,12,30006, "Chybí pøíjmení mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_last_name_max_length_exceeded,										19,1,12,30007, "Pøíjmení mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_address_street_missing,												19,1,12,30008, "Chybí ulice mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_address_street_max_length_exceeded,									19,1,12,30009, "Ulice mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_address_city_missing,													19,1,12,30010, "Chybí mìsto mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_address_city_max_length_exceeded,										19,1,12,30011, "Mìsto mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_address_postal_code_missing,											19,1,12,30012, "Chybí PSÈ mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_address_postal_code_max_length_exceeded,								19,1,12,30013, "PSÈ mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_address_country_missing,												19,1,12,30014, "Chybí zemì mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_address_country_max_length_exceeded,									19,1,12,30015, "Zemì mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_address_country_invalid,												19,1,12,30016, "Neplatná zemì mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_email_missing,														19,1,12,30017, "Chybí e-mail mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_email_max_length_exceeded,											19,1,12,30018, "E-mail mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_email_invalid,														19,1,12,30019, "Neplatný e-mail mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_phone_number_missing,													19,1,12,30020, "Chybí telefon mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_phone_number_max_length_exceeded,										19,1,12,30021, "Telefon mojeID identity pøekraèuje povolenou délku.") \
	MDESC(c, zcc_resp, mojeid_phone_number_invalid,													19,1,12,30022, "Neplatný telefon mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_register_error,														19,1,12,30023, "Došlo k protokolární chybì.") \
	MDESC(c, zcc_resp, mojeid_register_exception,													19,1,12,30024, "Došlo k vyjímce.") \
	MDESC(c, zcc_resp, mojeid_register_failure,														19,1,12,30025, "Došlo k regstraèní chybì.") \
\
	MDESC(c, zcc_resp, ipv4_not_found,																19,1,13,30001, "IPv4 nebyla nalezena.") \
	MDESC(c, zcc_resp, dns_domain_name_invalid,														19,1,13,30002, "Doménové jméno není platné.") \
	MDESC(c, zcc_resp, dns_ptr_record_not_found,													19,1,13,30003, "PTR záznam nebyl nalezen.") \
	MDESC(c, zcc_resp, dns_host_name_invalid,														19,1,13,30004, "Název hosta není platný.") \
	MDESC(c, zcc_resp, ipv4_invalid,																19,1,13,30005, "IPv4 není platná.") \
	MDESC(c, zcc_resp, dns_alias_name_invalid,														19,1,13,30006, "Název aliasu není platný.") \
	MDESC(c, zcc_resp, ipv6_invalid,																19,1,13,30007, "IPv6 není platná.") \
	MDESC(c, zcc_resp, dns_mail_server_name_invalid,												19,1,13,30008, "Název poštovního serveru není platný.") \
	MDESC(c, zcc_resp, dns_name_invalid,															19,1,13,30009, "Název služby, protokolu a pøípadnì celé domény není platný.") \
	MDESC(c, zcc_resp, dns_target_invalid,															19,1,13,30010, "Název cílové domény není platný.") \
	MDESC(c, zcc_resp, dns_zone_not_managed,														19,1,13,30011, "Zóna není spravována na serverech Zoneru.") \
	MDESC(c, zcc_resp, dns_ttl_invalid,																19,1,13,30012, "TTL není platné.") \
	MDESC(c, zcc_resp, dns_record_already_exists,													19,1,13,30013, "Dns záznam již existuje.") \
	MDESC(c, zcc_resp, is_dns_zone_managed_failed,													19,1,13,30014, "Ovìøení, že dns zóna je spravována Zonerem selhalo.") \
\
	MDESC(c, zcc_resp, package_class_invalid,														19,1,14,30001, "Neplatná tøída balíèku.") \
	MDESC(c, zcc_resp, package_payment_period_invalid,												19,1,14,30002, "Neplatné platební období balíèku.") \
	MDESC(c, zcc_resp, package_not_found,															19,1,14,30003, "Balíèek nenalezen.") \
	MDESC(c, zcc_resp, package_already_initialized,													19,1,14,30004, "Balíèek již zahájen.") \
	MDESC(c, zcc_resp, package_not_initialized,														19,1,14,30005, "Balíèek nebyl dosud zahájen.") \
	MDESC(c, zcc_resp, package_invoice_request_not_found,											19,1,14,30006, "Žádost k fakturaci balíèku nenalezena.") \
	MDESC(c, zcc_resp, invoice_request_id_mismatch,													19,1,14,30007, "Identifikátor žádosti k fakturaci balíèku nesouhlasí.") \
	MDESC(c, zcc_resp, payment_already_notified,													19,1,14,30008, "Oznámení o platbì bylo již zaznamenáno.") \
	MDESC(c, zcc_resp, package_subclass_invalid,													19,1,14,30009, "Neplatná podtøída balíèku.") \
	MDESC(c, zcc_resp, package_bound_servers_found,													19,1,14,30010, "Nalezeny servery svázané s balíèkem.") \
\
	MDESC(c, zcc_resp, credentials_password_too_short,												19,1,16,30001, "Heslo je pøíliš krátké. Minimum je 6 znakù.") \
	MDESC(c, zcc_resp, credentials_password_too_long,												19,1,16,30002, "Heslo je pøíliš dlouhé. Maximum je 50 znakù.") \
	MDESC(c, zcc_resp, credentials_password_invalid_chars,											19,1,16,30003, "Heslo obsahuje nepovolené znaky.") \
	MDESC(c, zcc_resp, credentials_username_too_short,												19,1,16,30004, "Jméno je pøíliš krátké. Minimum jsou 4 znaky.") \
	MDESC(c, zcc_resp, credentials_username_too_long,												19,1,16,30005, "Jméno je pøíliš dlouhé. Maximum je 50 znakù.") \
	MDESC(c, zcc_resp, credentials_username_invalid_chars,											19,1,16,30006, "Jméno obsahuje nepovolené znaky.") \
	MDESC(c, zcc_resp, alt_credentials_do_not_exist,												19,1,16,30007, "Tento úèet nemá nastaveny alternativní pøihlašovací údaje.") \
	MDESC(c, zcc_resp, credentials_username_already_exists,											19,1,16,30008, "Jméno nelze použít, je již obsazené.") \
	MDESC(c, zcc_resp, alt_credentials_already_exist,												19,1,16,30009, "Tento úèet má již nastaveny alternativní pøihlašovací údaje.") \
	MDESC(c, zcc_resp, credentials_username_empty,													19,1,16,30010, "Jméno není vyplnìno.") \
	MDESC(c, zcc_resp, credentials_password_empty,													19,1,16,30011, "Heslo není vyplnìno.") \
	MDESC(c, zcc_resp, alt_credentials_invalid,														19,1,16,30012, "Jméno nebo heslo nesouhlasí.") \
	MDESC(c, zcc_resp, credentials_current_password_incorrect,										19,1,16,30013, "Nynìjší heslo je nesprávné.") \
	MDESC(c, zcc_resp, credentials_master_password_incorrect,										19,1,16,30014, "Hlavní heslo je nesprávné.") \
\
	MDESC(c, zcc_resp, tld_fee_userid_invalid,														19,1,17,30001, "Neplatné userId.") \
	MDESC(c, zcc_resp, tld_fee_category_invalid,													19,1,17,30002, "Neplatná kategorie.") \
	MDESC(c, zcc_resp, tld_fee_tld_missing,															19,1,17,30003, "Tld není zadáno.") \
	MDESC(c, zcc_resp, tld_fee_period_out_of_bounds,												19,1,17,30004, "Hodnota period není v povolených mezích.") \
	MDESC(c, zcc_resp, tld_fee_pbu_invalid,															19,1,17,30005, "Neplatné pbu.") \
	MDESC(c, zcc_resp, tld_fee_amount_empty,														19,1,17,30006, "Èástka není zadána.") \
	MDESC(c, zcc_resp, tld_fee_amount_currency_invalid,												19,1,17,30007, "Neplatná mìna.") \
	MDESC(c, zcc_resp, tld_fee_amount_limit_count_invalid,											19,1,17,30008, "Neplatná hodnota limitCount.") \
	MDESC(c, zcc_resp, tld_fee_tld_invalid,															19,1,17,30009, "Neplatné tld.") \
	MDESC(c, zcc_resp, tld_fee_create_failed,														19,1,17,30010, "Vytvoøení nové položky v ceníku domén selhalo, stejná položka již nejspíš existuje.") \
	MDESC(c, zcc_resp, tld_fee_delete_failed,														19,1,17,30011, "Zrušení položky v ceníku domén selhalo.") \
	MDESC(c, zcc_resp, tld_fee_not_found,															19,1,17,30012, "Položka v ceníku domén nenalezena.") \
	MDESC(c, zcc_resp, tld_fee_delete_not_possible,													19,1,17,30013, "Zrušit položku v ceníku domén nelze.") \
	MDESC(c, zcc_resp, tld_fee_update_failed,														19,1,17,30014, "Úprava èásty u položky v ceníku domén selhala.") \
	MDESC(c, zcc_resp, pricelist_tld_create_failed,													19,1,17,30015, "Pøidání nové TLD do ceníku domén selhalo.") \
	MDESC(c, zcc_resp, tld_fee_amount_under_purchase,												19,1,17,30016, "Èástka musí být vyšší než nákupní cena.") \
\
	MDESC(c, zcc_resp, payment_notified_before,														19,1,21,30001, "Oznámení o platbì bylo již uèinìno døíve.") \
\
	MDESC(c, zcc_resp, domain_name_already_used,													19,1,22,30001, "Doménové jméno se již používá.") \
	MDESC(c, zcc_resp, domain_name_invalid,															19,1,22,30002, "Doménové jméno není platné.") \
	MDESC(c, zcc_resp, phone_invalid,																19,1,22,30003, "Telefonní èíslo není platné.") \
	MDESC(c, zcc_resp, email_invalid,																19,1,22,30004, "E-mail adresa není platná.") \
	MDESC(c, zcc_resp, country_code_invalid,														19,1,22,30005, "Kód zemì není platný.") \
	MDESC(c, zcc_resp, first_name_invalid,															19,1,22,30006, "Jméno není platné.") \
	MDESC(c, zcc_resp, last_name_invalid,															19,1,22,30007, "Pøíjmení není platné.") \
	MDESC(c, zcc_resp, new_password_invalid,														19,1,22,30008, "Heslo pro privátní klíè nelze použít.") \
	MDESC(c, zcc_resp, org_unit_invalid,															19,1,22,30009, "Organizaèní jednotka není platná.") \
	MDESC(c, zcc_resp, org_invalid,																	19,1,22,30010, "Organizace není platná.") \
	MDESC(c, zcc_resp, state_invalid,																19,1,22,30011, "Stát není platný.") \
	MDESC(c, zcc_resp, locality_invalid,															19,1,22,30012, "Lokalita není platná.") \
	MDESC(c, zcc_resp, certificate_data_not_found,													19,1,22,30013, "Nejprve vložte data certifikátu.") \
	MDESC(c, zcc_resp, certificate_expired,															19,1,22,30014, "Platnost certifikátu již vypršela.") \
	MDESC(c, zcc_resp, certificate_not_usable,														19,1,22,30015, "Data certifikátu nelze použít.") \
	MDESC(c, zcc_resp, exp_date_out_of_range,														19,1,22,30016, "Datum expirace je mimo povolený rozsah.") \
\
	MDESC(c, zcc_resp, client_authenticated,														19,0,0,50001, "Cms klient úspìšnì pøihlášen.") \
	MDESC(c, zcc_resp, user_authenticated,															19,0,0,50002, "Uživatel úspìšnì pøihlášen.") \
	MDESC(c, zcc_resp, sslmarket_user_identity_created,												19,0,0,50003, "Vytvoøení nové identity pro uživatele SSL market úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, general_search_succeeded,													19,0,1,50001, "Všeobecné vyhledávání úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, dns_snapshot_made,															19,1,0,50001, "Vytvoøení snapshotu dns úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_snapshot_got,															19,1,0,50002, "Získání snapshotu dns úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_snapshots_got,															19,1,0,50003, "Získání seznamu poøízených snapshotù dns úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, user_got,																	19,1,1,50001, "Získání uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, hotline_request_sent,														19,1,1,50002, "Zaslání požadavku na hotline úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_price_got,																19,1,1,50003, "Získání ceny pro dané TLD úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_profile_updated,														19,1,1,50004, "Úprava kontaktních údajù uživatele úspìšnì probìhla.") \
	MDESC(c, zcc_resp, tld_prices_got,																19,1,1,50005, "Získání seznamu cen pro dané TLD úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tlds_and_1y_reg_prices_got,													19,1,1,50006, "Získání seznamu TLD s cenou za roèní registraci úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tlds_and_1y_reg_common_prices_got,											19,1,1,50007, "Získání seznamu TLD s bìžnou cenou za roèní registraci úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, sms_notification_got,														19,1,1,50008, "Získání údajù pro SMS upozoròování úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, sms_notification_subject_updated,											19,1,1,50009, "Nastavení pøedmìtu SMS upozoròování úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, sms_phone_updated,															19,1,1,50010, "Nastavení telefonního èísla pro SMS upozoròování úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, lost_credentials_sent,														19,1,1,50011, "Zaslání odkazu pro obnovu hesla úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tlds_and_1y_renew_prices_got,												19,1,1,50012, "Získání seznamu TLD s cenou za roèní prodloužení úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, idle_user_deleted,															19,1,1,50013, "Smazání neaktivního uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, idle_users_deleted,															19,1,1,50014, "Smazání neaktivních uživatelù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_created,																19,1,1,50015, "Vytvoøení uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_note_created,															19,1,1,50016, "Vytvoøení poznámky u uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_note_deleted,															19,1,1,50017, "Smazání poznámky u uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_note_updated,															19,1,1,50018, "Úprava poznámky u uživatele úspìšnì probìhla.") \
	MDESC(c, zcc_resp, user_note_got,																19,1,1,50019, "Získání poznámky u uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_notes_got,																19,1,1,50020, "Získání seznamu poznámek u uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, users_with_blocked_gpwebpay_got,												19,1,1,50021, "Získání seznamu uživatelù se zablokovanou platbou kartami úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, gpwebpay_blockation_settings_updated,										19,1,1,50022, "Úprava parametrù pro blokaci plateb kartami úspìšnì probìhla.") \
	MDESC(c, zcc_resp, tlds_and_1y_transfer_prices_got,												19,1,1,50023, "Získání seznamu TLD s cenou za roèní pøevod úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tlds_and_1y_transfer_common_prices_got,										19,1,1,50024, "Získání seznamu TLD s bìžnou cenou za roèní pøevod úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tlds_specreg_prices_got,														19,1,1,50025, "Získání seznamu TLD s cenou za speciální registraci úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tlds_specreg_common_prices_got,												19,1,1,50026, "Získání seznamu TLD s bìžnou cenou za speciální registraci úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_common_price_got,														19,1,1,50027, "Získání bìžné ceny pro dané TLD úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, complete_common_reg_prices_got,												19,1,1,50028, "Získání kompletního ceníku bìžných cen za registrace úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, complete_reg_prices_got,														19,1,1,50029, "Získání kompletního ceníku za registrace úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_common_prices_got,														19,1,1,50030, "Získání seznamu bìžných cen pro dané TLD úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, credit_account_active_notified,												19,1,1,50031, "Oznámení o aktivaci kreditního úètu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_approved,																19,1,1,50032, "Schválení uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, server_audit_log_events_got,													19,1,1,50033, "Získání historie uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tester_activated,															19,1,1,50034, "Aktivace testera úspìšnì probìhla.") \
	MDESC(c, zcc_resp, news_subscription_updated,													19,1,1,50035, "Úprava pøihlášení k odbìru novinek úspìšnì probìhla.") \
	MDESC(c, zcc_resp, email_message_created_and_sent,												19,1,1,50036, "Vytvoøení a odeslání mailové zprávy úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_delegations_got,														19,1,1,50037, "Získání seznamu delegací uživatele úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, unpaid_reqs_for_payment_got,													19,1,2,50001, "Získání seznamu nezaplacených výzev k úhradì úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, req_for_payment_got,															19,1,2,50002, "Získání výzvy k úhradì úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, pay_debt_got,																19,1,2,50003, "Získání údajù pro úhradu pohledávky úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, vs_for_first_payment_got,													19,1,2,50004, "Získání vs pro úhradu první pohledávky úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, gpwebpay_shutdown_got,														19,1,2,50005, "Získání datumu pøíští odstávky systému GPwebpay úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, credit_pay_ok,																19,1,2,50006, "Uhrazení pohledávky z kreditního úètu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, view_of_req_for_payment_updated,												19,1,2,50007, "Zmìna viditelnosti pohledávky úspìšnì probìhla.") \
	MDESC(c, zcc_resp, last_req_for_payment_got,													19,1,2,50008, "Získání poslední výzvy k úhradì úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, managed_domains_got,															19,1,3,50001, "Získání seznamu domén, kde je Zoner registrátorem úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, domain_got,																	19,1,3,50002, "Získání domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, auto_renew_updated,															19,1,3,50003, "Nastavení pøíznaku pro automatické prodlužování domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, domain_name_checked,															19,1,3,50004, "Zjištìní dostupnosti domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, top_level_domains_got,														19,1,3,50005, "Získání seznamu top level domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, top_level_domain_got,														19,1,3,50006, "Získání top level domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, top_level_domain_updated,													19,1,3,50007, "Úprava top level domény úspìšnì probìhla.") \
	MDESC(c, zcc_resp, domain_name_owner_got,														19,1,3,50008, "Získání kontaktních údajù vlastníka domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, domain_name_contact_updated,													19,1,3,50009, "Úprava údajù kontaktu domény úspìšnì probìhla.") \
	MDESC(c, zcc_resp, domain_name_contact_got,														19,1,3,50010, "Získání kontaktních údajù kontaktu domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, reg_of_new_tld_started,														19,1,3,50011, "Zahájení registrací nového tld úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_determined,																19,1,3,50012, "Urèení tld úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, top_level_domain_last_change_got,											19,1,3,50013, "Získání datumu poslední zmìny top level domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, premium_reg_price_got,														19,1,3,50014, "Získání ceny za registraci prémivé domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, registrars_got,																19,1,3,50015, "Získání seznamu registrátorù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, registrar_poll_made,															19,1,3,50016, "Zpracování poll msg u registrátora úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, auth_info_sent,																19,1,3,50017, "Poslání autorizaèního kódu pro pøevod domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, cznic_registrant_email_got,													19,1,3,50018, "Získání emailu držitele .cz domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, top_level_domains_counts_got,												19,1,3,50019, "Získání poètu spravovaných domén rozdìlených podle top level domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, top_level_domain_registrar_counts_got,										19,1,3,50020, "Získání poètu spravovaných domén rozdìlených podle registrátora pro dané tld úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, database_created,															19,1,4,50001, "Vytvoøení databáze úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, database_got,																19,1,4,50002, "Získání databáze úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, database_migrated,															19,1,4,50003, "Migrace databáze úspìšnì probìhla.") \
	MDESC(c, zcc_resp, database_assigned,															19,1,4,50004, "Pøiøazení databáze k doménì úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, pooled_database_assigned,													19,1,4,50005, "Pøiøazení pøedvytvoøené databáze k doménì úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, database_deleted,															19,1,4,50006, "Smazání databáze úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, database_server_got,															19,1,4,50007, "Získání databázového serveru pro danou databázi úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, database_size_changed,														19,1,4,50008, "Zmìna max. velikosti databáze úspìšnì probìhla.") \
	MDESC(c, zcc_resp, database_simplified_created,													19,1,4,50009, "Vytvoøení databáze zjednodušenì úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, service_got,																	19,1,5,50001, "Získání služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_main_account_got,													19,1,5,50002, "Získání hlavního úètu dané služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, services_got,																19,1,5,50003, "Získání seznamu služeb úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, activity_simulated,															19,1,5,50004, "Simulace èinnosti úspìšnì probìhla.") \
	MDESC(c, zcc_resp, service_redirected,															19,1,5,50005, "Pøesmìrování domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_upgraded,															19,1,5,50006, "Povýšení služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, mail_created,																19,1,5,50007, "Vytvoøení pošty úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, mail_deleted,																19,1,5,50008, "Smazání pošty úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_ipv4_replaced,														19,1,5,50009, "Výmìna IP adresy u služby úspìšnì probìhla.") \
	MDESC(c, zcc_resp, own_ip_removed,																19,1,5,50010, "Odstranìní vlastní IP adresy úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, own_ip_added,																19,1,5,50011, "Pøidání vlastní IP adresy úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, permission_delegated,														19,1,5,50012, "Delegování oprávnìní úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, permission_undelegated,														19,1,5,50013, "Oddelegování oprávnìní úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_note_created,														19,1,5,50014, "Vytvoøení poznámky u služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_note_deleted,														19,1,5,50015, "Smazání poznámky u služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_note_updated,														19,1,5,50016, "Zmìna poznámky u služby úspìšnì probìhla.") \
	MDESC(c, zcc_resp, service_note_got,															19,1,5,50017, "Získání poznámky u služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_notes_got,															19,1,5,50018, "Získání seznamu poznámek u služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_permission_delegations_got,											19,1,5,50019, "Získání seznamu oprávnìní úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_chc_request_created,													19,1,5,50020, "Vytvoøení žádosti do CHC pro službu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_name_checked,														19,1,5,50021, "Ovìøení dostupnosti názvu služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_application_pool_task_carried_out,									19,1,5,50022, "Provedení úlohy na aplikaèním poolu služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, installatron_available,														19,1,5,50023, "Installatron je pro službu dostupný.") \
	MDESC(c, zcc_resp, installatron_cleanup_site_ok,												19,1,5,50024, "Smazání služby z installatronu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_third_level_domains_got,												19,1,5,50025, "Získání domén tøetí úrovnì pro službu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_data_deleted,														19,1,5,50027, "Smazání dat služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_data_parked,															19,1,5,50028, "Zaparkování dat služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_data_denied,															19,1,5,50029, "Odstavení dat služby pro neplacení úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_parked,																19,1,5,50030, "Zaparkování služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_deleted,																19,1,5,50031, "Smazání služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, aliases_got,																	19,1,5,50032, "Získání seznamu aliasù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, alias_created,																19,1,5,50033, "Vytvoøení aliasu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_features_got,														19,1,5,50034, "Získání stavù zámkù služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, stats_locked,																19,1,5,50035, "Zamknutí statistiky služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, stats_unlocked,																19,1,5,50036, "Odemknutí statistiky služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_accounts_got,														19,1,5,50037, "Získání seznamu ftp úètù služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, ftp_locked,																	19,1,5,50038, "Zamknutí ftp úètu služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, ftp_unlocked,																19,1,5,50039, "Odemknutí ftp úètu služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, ssh_locked,																	19,1,5,50040, "Zamknutí ssh úètu služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, ssh_unlocked,																19,1,5,50041, "Odemknutí ssh úètu služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_permission_granted_ok,												19,1,5,50042, "Ovìøení udìlených práv ke službì úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, hosting_server_got,															19,1,5,50043, "Získání hostingového serveru pro danou službu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, mail_server_got,																19,1,5,50044, "Získání poštovního serveru pro danou službu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, master_service_got,															19,1,5,50045, "Získání master služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_third_level_domain_from_alias_got,									19,1,5,50046, "Získání domény tøetí úrovnì z aliasu na ni úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, domain_transfer_available_ok,												19,1,5,50047, "Zjištìní dostupnosti transferu domény úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, databases_got,																19,1,5,50048, "Získání seznamu databází úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, database_server_deployments_got,												19,1,5,50049, "Získání seznamu serverù pro zøizování jednotlivých typù databází služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, free_database_name_got,														19,1,5,50050, "Získání volného názvu databáze odvozeného od názvu služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_db_quotas_got,														19,1,5,50051, "Získání databázových kvót pro službu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_db_quotas_upgraded,													19,1,5,50052, "Navýšení databázových kvót pro službu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_billing_info_got,													19,1,5,50053, "Získání informací pro fakturaci služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_delegations_got,														19,1,5,50054, "Získání seznamu delegací služby úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, services_searched,															19,1,5,50055, "Hledání mezi službami úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_db_quotas_downgraded,												19,1,5,50056, "Ponížení databázových kvót pro službu úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, service_tasks_batch_created,													19,1,6,50001, "Vytvoøení dávky úloh úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_tasks_batch_got,														19,1,6,50002, "Získání dávky úloh úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_task_processed,														19,1,6,50003, "Zpracování úlohy úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, service_dnssec_signed,														19,1,7,50001, "Podepsání zóny DNSSEC úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, service_dnssec_unsigned,														19,1,7,50002, "Odpodepsání zóny DNSSEC úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, user_domain_lists_got,														19,1,8,50001, "Získání uživatelských seznamù domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_domain_list_created,													19,1,8,50002, "Vytvoøení uživatelského seznamu domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_domain_list_got,														19,1,8,50003, "Získání uživatelského seznamu domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, user_domain_list_updated,													19,1,8,50004, "Úprava uživatelského seznamu domén úspìšnì probìhla.") \
	MDESC(c, zcc_resp, user_domain_list_deleted,													19,1,8,50005, "Zrušení uživatelského seznamu domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, domain_added_to_user_domain_list,											19,1,8,50006, "Pøidání domény do uživatelského seznamu domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, domain_deleted_from_user_domain_list,										19,1,8,50007, "Zrušení domény z uživatelského seznamu domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, domain_is_on_user_domain_list_success,										19,1,8,50008, "Zjištìní zda je doména v uživatelském seznamu domén úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, order_created,																19,1,9,50001, "Vytvoøení objednávky úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, order_got,																	19,1,9,50002, "Získání objednávky úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, order_item_processed,														19,1,9,50003, "Zpracování položky v objednávce úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, hosting_ordered,																19,1,9,50004, "Objednání hostingu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, cloud_server_ordered,														19,1,9,50005, "Objednání cloud serveru úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, anonymous_order_assigned,													19,1,9,50006, "Pøiøazení anonymní objednávky úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, order_processed,																19,1,9,50007, "Zpracování objednávky úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, order_group_payment_created,													19,1,9,50008, "Vytvoøení hromadné výzvy pro objednávku úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, mailbox_count_changed,														19,1,10,50001, "Zmìna poètu poštovních schránek úspìšnì probìhla.") \
	MDESC(c, zcc_resp, mail_quota_changed,															19,1,10,50002, "Zmìna celkové poštovní kvóty úspìšnì probìhla.") \
\
	MDESC(c, zcc_resp, web_quota_changed,															19,1,11,50001, "Zmìna webové kvóty úspìšnì probìhla.") \
\
	MDESC(c, zcc_resp, mojeid_handle_checked,														19,1,12,50001, "Kontrola dostupnosti uživatelského jména mojeID identity úspìšnì probìhla.") \
	MDESC(c, zcc_resp, mojeid_registered,															19,1,12,50002, "Registrace nové mojeID identity úspìšnì probìhla.") \
\
	MDESC(c, zcc_resp, zone_ipv6_updated,															19,1,13,50001, "Aktualizace zóny doplnìním záznamù IPv6 úspìšnì probìhla.") \
	MDESC(c, zcc_resp, zone_published,																19,1,13,50002, "Pøenesení dns záznamù na produkèní dns server úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, arecord_ipv6_added,															19,1,13,50003, "Pøidání odpovídajícího záznamu IPv6 do zóny úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, ipv6_activated,																19,1,13,50004, "Aktivace IPv4 ze Zoner rozsahu pro podporu IPv6 úspìšnì probìhla.") \
	MDESC(c, zcc_resp, dns_ip_ranges_got,															19,1,13,50005, "Získání seznamu IP rozsahù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_ptr_records_got,															19,1,13,50006, "Získání seznamu PTR záznamù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_ptr_record_got,															19,1,13,50007, "Získání PTR záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_ptr_record_updated,														19,1,13,50008, "Úprava PTR záznamu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, dns_reverse_zone_rewritten,													19,1,13,50009, "Vygenerování reverzní zóny úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_zone_got,																19,1,13,50010, "Získání zóny úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, arecord_ipv6_deleted,														19,1,13,50011, "Odebrání odpovídajícího záznamu IPv6 ze zóny úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, zone_deleted,																19,1,13,50012, "Smazání zóny z produkèního dns serveru úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, zone_cleared,																19,1,13,50013, "Smazání dns záznamù z databáze úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_a_record_created,														19,1,13,50014, "Vytvoøení A záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_cname_record_created,													19,1,13,50015, "Vytvoøení CName záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_aaaa_record_created,														19,1,13,50016, "Vytvoøení AAAA záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_txt_record_created,														19,1,13,50017, "Vytvoøení TXT záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_mx_record_created,														19,1,13,50018, "Vytvoøení MX záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_srv_record_created,														19,1,13,50019, "Vytvoøení SRV záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, txt_records_deleted,															19,1,13,50020, "Smazání TXT záznamù s daným hostname úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_a_record_deleted,														19,1,13,50021, "Smazání A záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, is_dns_zone_uptodate_got,													19,1,13,50022, "Zobrazení aktuálnosti dns zóny úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_a_record_updated,														19,1,13,50023, "Úprava A záznamu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, dns_cname_record_deleted,													19,1,13,50024, "Smazání CNAME záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_cname_record_updated,													19,1,13,50025, "Úprava CNAME záznamu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, dns_aaaa_record_deleted,														19,1,13,50026, "Smazání AAAA záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_aaaa_record_updated,														19,1,13,50027, "Úprava AAAA záznamu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, dns_mx_record_deleted,														19,1,13,50028, "Smazání MX záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_mx_record_updated,														19,1,13,50029, "Úprava MX záznamu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, is_dns_zone_managed_succeeded,												19,1,13,50030, "Ovìøení, že dns zóna je spravována Zonerem úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, dns_txt_record_updated,														19,1,13,50031, "Úprava TXT záznamu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, dns_txt_record_deleted,														19,1,13,50032, "Smazání TXT záznamu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, mail_cname_records_converted,												19,1,13,50033, "Pøevedení poštovních CNAME záznamù na zoner.com úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, package_got,																	19,1,14,50001, "Získání balíèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, packages_got,																19,1,14,50002, "Získání seznamu balíèkù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, package_init_success,														19,1,14,50003, "Zahájení balíèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, package_billing_update_notified,												19,1,14,50004, "Oznámení o zmìnì poèáteèního data fakturace balíèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, package_payment_made_notified,												19,1,14,50005, "Oznámení o provedené platbì za balíèek úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, packages_merged,																19,1,14,50006, "Slouèení dvou balíèkù do jednoho úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, package_updated,																19,1,14,50007, "Úprava balíèku úspìšnì probìhla.") \
	MDESC(c, zcc_resp, package_created,																19,1,14,50008, "Vytvoøení balíèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, package_deleted,																19,1,14,50009, "Zrušení balíèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, server_to_package_added,														19,1,14,50010, "Pøidání serveru do balíèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, server_from_package_removed,													19,1,14,50011, "Zrušení serveru z balíèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, package_invoice_request_deleted,												19,1,14,50012, "Zrušení požadavku na fakturaci balíèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, package_invoice_request_created,												19,1,14,50013, "Vytvoøení požadavku na fakturaci balíèku úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, variant_got,																	19,1,15,50001, "Získání varianty úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, variants_on_menu_got,														19,1,15,50002, "Získání seznamu variant v nabídce úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, variants_for_upgrade_got,													19,1,15,50003, "Získání seznamu variant pro ugrade úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, all_variants_for_upgrade_got,												19,1,15,50004, "Získání seznamu všech variant pro ugrade úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, all_variants_with_monthly_fee_got,											19,1,15,50005, "Získání seznamu všech placených variant úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, variant_config_got,															19,1,15,50006, "Získání konfigurace varianty úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, variants_got,																19,1,15,50007, "Získání seznamu variant úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, credentials_got,																19,1,16,50001, "Získání pøihlašovacích údajù k úètu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, credentials_updated,															19,1,16,50002, "Zmìna pøihlašovacích údajù k úètu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, alt_credentials_updated,														19,1,16,50003, "Zmìna alternativních pøihlašovacích údajù úspìšnì probìhla.") \
	MDESC(c, zcc_resp, alt_credentials_deleted,														19,1,16,50004, "Zrušení alternativních pøihlašovacích údajù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, alt_credentials_created,														19,1,16,50005, "Vytvoøení alternativních pøihlašovacích údajù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, alt_credentials_binded,														19,1,16,50006, "Pøipojení alternativních pøihlašovacích údajù úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, tld_fee_tlds_got,															19,1,17,50001, "Získání seznamu tld z ceníku domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fees_for_users_got,														19,1,17,50002, "Získání ceníku domén pro vybrané uživatele úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fees_for_categories_got,													19,1,17,50003, "Získání ceníku domén pro uživatelské kategorie úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fees_for_branches_got,													19,1,17,50004, "Získání ceníku domén pro poboèky úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fee_created,																19,1,17,50005, "Vytvoøení nové položky v ceníku domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fee_deleted,																19,1,17,50006, "Zrušení položky v ceníku domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fee_got,																	19,1,17,50007, "Získání položky v ceníku domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fee_updated,																19,1,17,50008, "Úprava èástky u položky v ceníku domén úspìšnì probìhla.") \
	MDESC(c, zcc_resp, basic_tld_fees_for_branch_got,												19,1,17,50009, "Získání základního ceníku domén pro poboèku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fee_extra_tlds_got,														19,1,17,50010, "Získání seznamu tld z ceníku domén, které mají nastaveny individuální ceny pro uživatele èi kategorie úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_pricelist_created,														19,1,17,50011, "Pøidání nové TLD do ceníku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fee_amount_last_change_got,												19,1,17,50012, "Získání datumu poslední zmìny v ceníku domén úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_reg_czk,										19,1,17,50013, "Nìkteré koncové ceny pro poplatek reg v Kè nejsou vyšší než nová nákupní cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_renew_czk,									19,1,17,50014, "Nìkteré koncové ceny pro poplatek renew v Kè nejsou vyšší než nová nákupní cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_transfer_czk,									19,1,17,50015, "Nìkteré koncové ceny pro poplatek transfer v Kè nejsou vyšší než nová nákupní cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_reg_eur,										19,1,17,50016, "Nìkteré koncové ceny pro poplatek reg v € nejsou vyšší než nová nákupní cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_renew_eur,									19,1,17,50017, "Nìkteré koncové ceny pro poplatek renew v € nejsou vyšší než nová nákupní cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_transfer_eur,									19,1,17,50018, "Nìkteré koncové ceny pro poplatek transfer v € nejsou vyšší než nová nákupní cena.") \
\
	MDESC(c, zcc_resp, end_report_message_box_updated,	 											19,1,18,50001, "Úprava závìreèné zprávy v message boxu úspìšnì probìhla.") \
\
	MDESC(c, zcc_resp, cloud_server_deployed,			 											19,1,19,50001, "Nasazení cloud serveru úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, server_got,						 											19,1,19,50002, "Získání serveru úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, servers_got,						 											19,1,19,50003, "Získání seznamu serverù úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, invoice_request_cancelled_notified, 											19,1,20,50001, "Oznámení o zrušení fakturaèního požadavku úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, invoice_request_paid_notified, 												19,1,20,50002, "Oznámení o uhrazení fakturaèního požadavku úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, reward_old_invoicing_payment_notified, 										19,1,21,50001, "Oznámení pro systém odmìn o platbì ze starého fakturaèního systému úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, reward_new_invoicing_payment_notified, 										19,1,21,50002, "Oznámení pro systém odmìn o platbì z nového fakturaèního systému úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, certificates_got,					 										19,1,22,50001, "Získání seznamu certifikátù úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_created,					 										19,1,22,50002, "Vytvoøení certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_got,						 										19,1,22,50003, "Získání certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_private_key_got,			 										19,1,22,50004, "Získání privátního klíèe certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, symantec_post_request_sended,			 									19,1,22,50005, "Poslání POST žádosti na Symantec úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_binding_for_service_got,		 									19,1,22,50006, "Získání instalace certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_installed,		 												19,1,22,50007, "Instalace certifikátu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, certificate_installation_possible_ok,										19,1,22,50008, "Ovìøení možnosti instalace certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_uninstalled,		 												19,1,22,50009, "OdiInstalace certifikátu úspìšnì probìhla.") \
	MDESC(c, zcc_resp, certificate_domains_got,		 												19,1,22,50010, "Získání seznamu domén z certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_binding_got,		 												19,1,22,50011, "Získání instalace certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_for_cn_got,				 										19,1,22,50012, "Získání certifikátu pro CN úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_pfx_got,				 											19,1,22,50013, "Získání .pfx souboru certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, commercial_certificate_created,					 							19,1,22,50014, "Vytvoøení komerèního certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_inserted,							 							19,1,22,50015, "Vložení certifikátu úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_installable_domains_got,				 							19,1,22,50016, "Získání seznamu domén, pro které lze instalovat certifikát úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, certificate_renewed,								 							19,1,22,50017, "Obnovení certifikátu úspìšnì probìhlo.") \
\
	MDESC(c, zcc_resp, eet_bills_got,						 										19,1,23,50001, "Získání seznamu EET úètenek úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, credit_eet_bill_assigned,			 										19,1,23,50002, "Pøiøazení EET úètenky z kreditního systému úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, eet_bill_info_got,					 										19,1,23,50003, "Získání podrobností o EET úètence úspìšnì probìhlo.") \
	MDESC(c, zcc_resp, eet_bill_got,						 										19,1,23,50004, "Získání EET úètenky úspìšnì probìhlo.") \

	
#define ZONERCONTROLCENTER_CMSM_WHS(c) \
	GROUP_WHS(c, zcc_module_mdesc, zcc_cmsm, client_authenticate)


#define ZONERCONTROLCENTER_MDESC_TABLE(c) \
	ZONERCONTROLCENTER_CMSM(c) \
	ZONERCONTROLCENTER_RESP(c) \
	ZONERCONTROLCENTER_CMSM_WHS(c)

// expand the declarations
CMS_NAMESPACE_START
ZONERCONTROLCENTER_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_ZONERCONTROLCENTER_MDESCS
