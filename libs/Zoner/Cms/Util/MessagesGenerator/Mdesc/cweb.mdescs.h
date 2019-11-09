// x64 OK

#ifndef __MOD_WEB_MDESCS
#define __MOD_WEB_MDESCS

#include "mdescs.h"

// web messages
#define WEB_CMSM(c) \
	MDESC(c,   web_cmsm,  create_site,                   5,0,0,1,         "Nelze vytvoøit novou site.")  \
	MDESC(c,   web_cmsm,  get_quota,                     5,0,0,2,         "Nelze zjistit diskovou kvótu.")  \
	MDESC(c,   web_cmsm,  set_quota,                     5,0,0,3,         "Nelze nastavit diskovou kvótu.")  \
	MDESC(c,   web_cmsm,  create_vhost,                  5,0,0,4,         "Nelze vytvoøit nový vhost.")  \
	MDESC(c,   web_cmsm,  stop_site_www,                 5,0,0,5,         "Nelze zastavit WWW slu¾bu dané site.")  \
	MDESC(c,   web_cmsm,  start_site_www,                5,0,0,6,         "Nelze spustit WWW slu¾bu dané site.")  \
	MDESC(c,   web_cmsm,  lock_vhost_stats,              5,0,0,7,         "Nelze zamknout statistiky daného vhostu.")  \
	MDESC(c,   web_cmsm,  unlock_vhost_stats,            5,0,0,8,         "Nelze odemknout statistiky daného vhostu.")  \
	MDESC(c,   web_cmsm,  update_vhost_stats_locking,    5,0,0,9,         "Nelze aktualizovat zamèení daného vhostu.")  \
	MDESC(c,   web_cmsm,  create_vhost_alias,            5,0,0,10,        "Nelze vytvoøit alias k danému vhostu.")  \
	MDESC(c,   web_cmsm,  remove_vhost_alias,            5,0,0,11,        "Nelze odstranit alias danému vhostu.")  \
	MDESC(c,   web_cmsm,  create_ftp_account,            5,0,0,12,        "Nelze pøidat FTP úèet.")  \
	MDESC(c,   web_cmsm,  remove_ftp_account,            5,0,0,13,        "Nelze odstranit FTP úèet.")  \
	MDESC(c,   web_cmsm,  update_htauth_password_file,   5,0,0,14,        "Nelze aktualizovat soubor s htauth hesly.")  \
	MDESC(c,   web_cmsm,  update_htauth_locking,         5,0,0,15,        "Nelze aktualizovat htauth zámky adresáøù.")  \
	MDESC(c,   web_cmsm,  remove_htauth_locking,         5,0,0,16,        "Nelze odstranit htauth zámek adresáøe.")  \
	MDESC(c,   web_cmsm,  update_site_permissions,       5,0,0,17,        "Nelze zregenerovat pøístupová práva site.") \
	MDESC(c,   web_cmsm,  get_clid_from_site_name,       5,0,0,18,        "Nelze zjistit ID site z jejího názvu.") \
	MDESC(c,   web_cmsm,  get_vsid_from_vs_name,         5,0,0,19,        "Nelze zjistit ID virtuálního serveru z jeho názvu.") \
	MDESC(c,   web_cmsm,  update_vhost_config,           5,0,0,20,        "Nelze pøegenerovat konfiguraèní soubor vhostu.")  \
	MDESC(c,   web_cmsm,  send_top_traffic_report,       5,0,0,21,        "Nelze odeslat pøehled o slu¾bách s nejvy¹¹ím trafficem.")  \
	MDESC(c,   web_cmsm,  get_top_traffic_report,        5,0,0,22,        "Nelze vytvoøit pøehled o slu¾bách s nejvy¹¹ím trafficem.") \
	MDESC(c,   web_cmsm,  vs_ips_on_same_machine,        5,0,0,23,        "Nelze zjistit zda jsou dané virtuální servery na stejném fyzickém stroji.") \
	MDESC(c,   web_cmsm,  remove_zombie_on_machine,      5,0,0,24,        "Nelze odstranit zombii site z daného serveru.") \
	MDESC(c,   web_cmsm,  get_expired_zombies,           5,0,0,25,        "Nelze naèíst seznam zombies k odstranìní.") \
	MDESC(c,   web_cmsm,  get_expired_shadow_vhosts,     5,0,0,26,        "Nelze naèíst seznam expirovaných shadow vhostù.") \
	MDESC(c,   web_cmsm,  update_site_vhost_config,      5,0,0,27,        "Nelze pøegenerovat konfiguraèní soubor site.")  \
	MDESC(c,   web_cmsm,  find_vhosts_with_server_admin_email, 5,0,0,28,  "Nelze nalézt vhosty s daným emailem správce." ) \
	MDESC(c,   web_cmsm,  create_vhost_alias_by_name,    5,0,0,29,        "Nelze vytvoøit alias k danému vhostu.")  \
	MDESC(c,   web_cmsm,  get_machines_list,             5,0,0,30,        "Nelze vrátit seznam v¹ech webserverù.")  \
	\
	MDESC(c,   web_cmsm,  ccc_create_main_domain,        5,1,0,1,         "Nelze vytvoøit hlavní doménu.")  \
	MDESC(c,   web_cmsm,  ccc_stop_www,                  5,1,0,2,         "Nelze zastavit WWW slu¾bu servisu.")  \
	MDESC(c,   web_cmsm,  ccc_start_www,                 5,1,0,3,         "Nelze spustit WWW slu¾bu servisu.")  \
	MDESC(c,   web_cmsm,  ccc_lock_main_stats,           5,1,0,4,         "Nelze zamknout statistiky hlavní domény.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_main_stats,         5,1,0,5,         "Nelze odemknout statistiky hlavní domény.")  \
	MDESC(c,   web_cmsm,  ccc_create_alias,              5,1,0,6,         "Nelze vytvoøit nový alias hlavní domény.")  \
	MDESC(c,   web_cmsm,  ccc_remove_alias,              5,1,0,7,         "Nelze odstranit alias hlavní domény.")  \
	MDESC(c,   web_cmsm,  ccc_lock_vhost_stats,          5,1,0,8,         "Nelze zamknout statistiky vhostu.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_vhost_stats,        5,1,0,9,         "Nelze odemknout statistiky vhostu.")  \
	MDESC(c,   web_cmsm,  ccc_create_3rdlv_domain,       5,1,0,10,        "Nelze vytvoøit doménu tøetí úrovnì.")  \
	MDESC(c,   web_cmsm,  ccc_remove_3rdlv_domain,       5,1,0,11,        "Nelze odstranit doménu tøetí úrovnì.")  \
	MDESC(c,   web_cmsm,  ccc_destroy_main_domain,       5,1,0,12,        "Nelze nenávratnì zlikvidovat hlavní doménu.")  \
	MDESC(c,   web_cmsm,  ccc_upload_primary_vhost_data, 5,1,0,13,        "Nelze pøenést data domény z po¾adovaného místa.")  \
	MDESC(c,   web_cmsm,  ccc_remove_main_domain,        5,1,0,14,        "Nelze odstranit hlavní doménu.")  \
	MDESC(c,   web_cmsm,  ccc_change_ftp_password,       5,1,0,15,        "Nelze zmìnit heslo FTP úètu.")  \
	MDESC(c,   web_cmsm,  ccc_lock_ftp_account,          5,1,0,16,        "Nelze zamknout FTP úèet.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_ftp_account,        5,1,0,17,        "Nelze odemknout FTP úèet.")  \
	MDESC(c,   web_cmsm,  ccc_get_id_service_from_site_name, 5,1,0,18,        "Nelze zjistit ID servisu na základì jména site.")  \
	MDESC(c,   web_cmsm,  ccc_get_quota,                 5,1,0,19,        "Nelze zjistit diskovou kvótu.")  \
	MDESC(c,   web_cmsm,  ccc_set_quota,                 5,1,0,20,        "Nelze nastavit diskovou kvótu.")  \
	MDESC(c,   web_cmsm,  ccc_set_site_vhosts_language,  5,1,0,21,        "Nelze jazyk vhostù dané site.")  \
	MDESC(c,   web_cmsm,  ccc_get_primary_vhost_language,5,1,0,22,        "Nelze zjistit jazyk primárního vhosta dané site.")  \
	MDESC(c,   web_cmsm,  ccc_set_error_document,        5,1,0,23,        "Nelze nastavit u¾ivatelskou chybovou stránku domény.")  \
	MDESC(c,   web_cmsm,  ccc_remove_error_document,     5,1,0,24,        "Nelze odstranit nastavení u¾ivatelské chybové stránky domény.")  \
	MDESC(c,   web_cmsm,  ccc_unpack_old_hosting_data,   5,1,0,25,        "Nelze rozbalit data site ze starého hostingu.")  \
	MDESC(c,   web_cmsm,  ccc_create_ftp_account,        5,1,0,26,        "Nelze pøidat nový FTP úèet.")  \
	MDESC(c,   web_cmsm,  ccc_remove_ftp_account,        5,1,0,27,        "Nelze odebrat FTP úèet.")  \
	MDESC(c,   web_cmsm,  ccc_migrate_domain_stage1,     5,1,0,28,        "Nelze provést první fázi migrace domény.")  \
	MDESC(c,   web_cmsm,  ccc_migrate_domain_stage2,     5,1,0,29,        "Nelze provést druhou fázi migrace domény.")  \
	MDESC(c,   web_cmsm,  ccc_change_domain_variant,     5,1,0,30,        "Nelze provést zmìnu varianty domény.")  \
	MDESC(c,   web_cmsm,  ccc_unpack_win_hosting_data,   5,1,0,31,        "Nelze rozbalit data site ze hostingu na Windows.")  \
	MDESC(c,   web_cmsm,  ccc_enable_google_sitemaps,    5,1,0,32,        "Nelze zapnout/vypnout Google sitemapy.")  \
	MDESC(c,   web_cmsm,  ccc_generate_google_sitemaps,  5,1,0,33,        "Nelze vygenerovat Google sitemapy.")  \
	MDESC(c,   web_cmsm,  ccc_get_google_sitemaps,       5,1,0,34,        "Nelze zjistit nastavení Google sitemap.")  \
	MDESC(c,   web_cmsm,  ccc_enable_google_sitemaps_cron, 5,1,0,35,      "Nelze zapnout/vypnout periodickou aktualizaci Google sitemapy.")  \
	MDESC(c,   web_cmsm,  ccc_upload_dba_database_backup,  5,1,0,36,      "Nelze stáhnout kopii databáze do u¾ivatelského prostoru site.")  \
	MDESC(c,   web_cmsm,  ccc_update_site_permissions,   5,1,0,37,        "Nelze zregenerovat pøístupová práva site.") \
	MDESC(c,   web_cmsm,  ccc_add_ftp_account,           5,1,0,38,        "Nelze pøidat nový FTP úèet.")  \
	MDESC(c,   web_cmsm,  ccc_delete_ftp_account,        5,1,0,39,        "Nelze odebrat FTP úèet.")  \
	MDESC(c,   web_cmsm,  ccc_set_server_admin_email,    5,1,0,40,        "Nelze nastavit emailovou adresu správce vhosta.")  \
	MDESC(c,   web_cmsm,  ccc_get_server_admin_email,    5,1,0,41,        "Nelze zjistit emailovou adresu správce vhosta.")  \
	MDESC(c,   web_cmsm,  ccc_mail_set_site_limits,      5,1,0,42,        "Nelze nastavit limity odeslaných emailù.") \
	MDESC(c,   web_cmsm,  ccc_mail_get_site_limits,      5,1,0,43,        "Nelze zjistit limity odeslaných emailù.") \
	MDESC(c,   web_cmsm,  ccc_mail_reload_site_limits,   5,1,0,44,        "Nelze vydat pøíkaz k aktualizaci limitù odeslaných emailù.") \
	MDESC(c,   web_cmsm,  ccc_mail_get_current_counts,   5,1,0,45,        "Nelze zjistit aktuální poèty odeslaných emailù.") \
	MDESC(c,   web_cmsm,  ccc_mail_decrease_hour_count,  5,1,0,46,        "Nelze sní¾it poèet odeslaných mailù.") \
	MDESC(c,   web_cmsm,  ccc_backup_customer_site_data, 5,1,0,47,        "Nelze vytvoøit u¾ivatelskou zálohu site.") \
	MDESC(c,   web_cmsm,  ccc_get_site_information,      5,1,0,48,        "Nelze zjistit informace o dané site.")  \
	MDESC(c,   web_cmsm,  ccc_check_ftp_password,        5,1,0,49,        "Nelze ovìøit heslo FTP úètu.")  \
	MDESC(c,   web_cmsm,  ccc_lock_ssh_account,          5,1,0,50,        "Nelze zamknout SSH pøístup danému úètu.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_ssh_account,        5,1,0,51,        "Nelze odemknout SSH pøístup danému úètu.")  \
	MDESC(c,   web_cmsm,  ccc_get_ssh_account_status,    5,1,0,52,        "Nelze zjistit stav SSH pøístupu daného úètu.")  \
	MDESC(c,   web_cmsm,  ccc_get_vhost_ip,              5,1,0,53,        "Nelze zjistit IP adresu daného vhosta.")  \
	MDESC(c,   web_cmsm,  ccc_get_php_admin_value,       5,1,0,56,        "Chyba pøi zji¹»ování php_admin_value parametru.")  \
	MDESC(c,   web_cmsm,  ccc_set_php_admin_value,       5,1,0,57,        "Chyba pøi nastavení php_admin_value parametru.")  \
	MDESC(c,   web_cmsm,  ccc_lock_smb_account,          5,1,0,58,        "Nelze zamknout SMB pøístup danému úètu.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_smb_account,        5,1,0,59,        "Nelze odemknout SMB pøístup danému úètu.")  \
	MDESC(c,   web_cmsm,  ccc_get_smb_account_status,    5,1,0,60,        "Nelze zjistit stav SMB pøístupu daného úètu.")  \
	MDESC(c,   web_cmsm,  ccc_enable_iapp_ftp_account,   5,1,0,61,        "Nelze povolit FTP úèet pro instalace aplikací.")  \
	MDESC(c,   web_cmsm,  ccc_disable_iapp_ftp_account,  5,1,0,62,        "Nelze zakázat FTP úèet pro instalace aplikací.")  \
	MDESC(c,   web_cmsm,  ccc_ssl_set_vhost_certificate, 5,1,0,63,        "Nelze nastavit SSL certifikát vhosta.") \
	MDESC(c,   web_cmsm,  ccc_ssl_remove_vhost_certificate, 5,1,0,64,     "Nelze odstranit SSL certifikát vhosta.") \
	MDESC(c,   web_cmsm,  ccc_set_site_vhosts_ip,        5,1,0,65,        "Nelze nastavit IP adresu vhostùm dané site.") \

// web responses
#define WEB_RESP(c) \
	MDESC(c,   web_resp,  db_error,                      5,0,0,30001,     "Chyba pøi pøístupu k databázi.") \
	MDESC(c,   web_resp,  perl_error,                    5,0,0,30002,     "Chyba pøi volání embedded perlu.") \
	MDESC(c,   web_resp,  missing_site_name,             5,0,0,30003,     "Chybí jméno site.") \
	MDESC(c,   web_resp,  site_already_exists,           5,0,0,30004,     "Site ji¾ existuje.") \
	MDESC(c,   web_resp,  missing_clid,                  5,0,0,30005,     "Chybí identifikátor klienta.") \
	MDESC(c,   web_resp,  invalid_clid,                  5,0,0,30006,     "Neplatný identifikátor klienta.") \
	MDESC(c,   web_resp,  missing_mcid,                  5,0,0,30007,     "Chybí identifikátor fyzického serveru.") \
	MDESC(c,   web_resp,  invalid_mcid,                  5,0,0,30008,     "Neplatný identifikátor fyzického serveru.") \
	MDESC(c,   web_resp,  site_not_found,                5,0,0,30009,     "Site nenalezena.") \
	MDESC(c,   web_resp,  machine_not_found,             5,0,0,30010,     "Fyzický server neexistuje.") \
	MDESC(c,   web_resp,  invalid_quota_limit_order,     5,0,0,30011,     "Chybné poøadí velikosti limitù kvóty (soft limit nesmí být vìt¹í ne¾ hard limit).") \
	MDESC(c,   web_resp,  missing_has_quota,             5,0,0,30012,     "Chybí pøíznak zda má klient kvótu.") \
	MDESC(c,   web_resp,  invalid_has_quota,             5,0,0,30013,     "Neplatný pøíznak zda má klient kvótu.") \
	MDESC(c,   web_resp,  missing_hard_limit,            5,0,0,30014,     "Chybí hard limit kvóty.") \
	MDESC(c,   web_resp,  invalid_hard_limit,            5,0,0,30015,     "Neplatný hard limit kvóty.") \
	MDESC(c,   web_resp,  missing_soft_limit,            5,0,0,30016,     "Chybí soft limit kvóty.") \
	MDESC(c,   web_resp,  invalid_soft_limit,            5,0,0,30017,     "Neplatný soft limit kvóty.") \
	MDESC(c,   web_resp,  request_expired,               5,0,0,30018,     "Po¾adavek na server byl zru¹en z dùvodu vypr¹ení timeoutu.") \
	MDESC(c,   web_resp,  request_failed,                5,0,0,30019,     "Po¾adavek na server skonèil s chybou.") \
	MDESC(c,   web_resp,  request_failed_commit_stage,   5,0,0,30020,     "Po¾adavek na server skonèil s chybou, commit fáze po¾adavku na serveru skonèila s chybou.") \
	MDESC(c,   web_resp,  unsupported_request_action,    5,0,0,30021,     "Po¾adavek na server skonèil s chybou, serveru nepodporuje danou akci.") \
	MDESC(c,   web_resp,  etc_passwd_not_found,          5,0,0,30022,     "Po¾adavek na server skonèil s chybou, soubor s klientskými úèty nenalezen.") \
	MDESC(c,   web_resp,  vhost_alias_exists_as_vhost,   5,0,0,30023,     "Daný alias ji¾ existuje jako samostatný vhost.") \
	MDESC(c,   web_resp,  vhost_alias_exists_as_alias,   5,0,0,30024,     "Daný alias ji¾ existuje jako alias k nìkterému vhostu.") \
	MDESC(c,   web_resp,  vhost_alias_not_found,         5,0,0,30025,     "Alias nenalezen.") \
	MDESC(c,   web_resp,  missing_index_template,        5,0,0,30026,     "Schází parametr index_template.") \
	MDESC(c,   web_resp,  invalid_index_template,        5,0,0,30027,     "Chybná hodnota parametru index_template.") \
	MDESC(c,   web_resp,  missing_vsid,                  5,0,0,30028,     "Schází identifikátor virtuálního serveru.") \
	MDESC(c,   web_resp,  invalid_vsid,                  5,0,0,30029,     "Chybný identifikátor virtuálního serveru.") \
	MDESC(c,   web_resp,  missing_vhost_ip,              5,0,0,30030,     "Schází IP adresa vhostu.") \
	MDESC(c,   web_resp,  invalid_vhost_ip,              5,0,0,30031,     "Chybná IP adresa vhostu.") \
	MDESC(c,   web_resp,  reldir_empty,                  5,0,0,30032,     "Parametr reldir je prázdný.") \
	MDESC(c,   web_resp,  reldir_is_absolute,            5,0,0,30033,     "Parametr reldir obsahuje absolutní cestu.") \
	MDESC(c,   web_resp,  missing_domain,                5,0,0,30034,     "Schází doména.") \
	MDESC(c,   web_resp,  invalid_domain,                5,0,0,30035,     "Chybný název domény.") \
	MDESC(c,   web_resp,  missing_reldir,                5,0,0,30036,     "Schází parametr reldir.") \
	MDESC(c,   web_resp,  virtual_server_ip_not_found,   5,0,0,30037,     "Nelze zjistit IP adresu virtuálního serveru.") \
	MDESC(c,   web_resp,  domain_exists_as_vhost,        5,0,0,30038,     "Doména ji¾ existuje jako samostatný vhost.") \
	MDESC(c,   web_resp,  domain_exists_as_alias,        5,0,0,30039,     "Doména ji¾ existuje jako alias k nìkterému vhostu.") \
	MDESC(c,   web_resp,  vhost_not_found,               5,0,0,30040,     "Vhost nenalezen.") \
	MDESC(c,   web_resp,  missing_vhid,                  5,0,0,30041,     "Schází identifikátor vhosta.") \
	MDESC(c,   web_resp,  invalid_vhid,                  5,0,0,30042,     "Chybný formát identifikátoru vhosta.") \
	MDESC(c,   web_resp,  missing_alias,                 5,0,0,30043,     "Schází alias.") \
	MDESC(c,   web_resp,  invalid_alias,                 5,0,0,30044,     "Chybný alias.") \
	MDESC(c,   web_resp,  ftp_username_already_exists,   5,0,0,30045,     "FTP úèet s tímto u¾ivatelským jménem ji¾ existuje.") \
	MDESC(c,   web_resp,  missing_password,              5,0,0,30046,     "Schází heslo.") \
	MDESC(c,   web_resp,  invalid_password,              5,0,0,30047,     "Chybný formát hesla.") \
	MDESC(c,   web_resp,  missing_user_name,             5,0,0,30048,     "Schází u¾ivatelské jméno.") \
	MDESC(c,   web_resp,  invalid_user_name,             5,0,0,30049,     "Chybný formát u¾ivatelského jména.") \
	MDESC(c,   web_resp,  ftp_account_not_found,         5,0,0,30050,     "FTP úèet nenalezen.") \
	MDESC(c,   web_resp,  ftp_account_instance_not_found,5,0,0,30051,     "Instance FTP úètu nenalezena.") \
	MDESC(c,   web_resp,  missing_admin_email,           5,0,0,30052,     "Chybí parametr admin_email.") \
	MDESC(c,   web_resp,  invalid_admin_email,           5,0,0,30053,     "Chybný formát parametru admin_email.") \
	MDESC(c,   web_resp,  missing_upload_source,         5,0,0,30054,     "Chybí parametr upload_source.") \
	MDESC(c,   web_resp,  invalid_upload_source,         5,0,0,30055,     "Chybná hodnota parametru upload_source.") \
	MDESC(c,   web_resp,  missing_owr_system_dirs,       5,0,0,30056,     "Chybí parametr owr_system_dirs.") \
	MDESC(c,   web_resp,  invalid_owr_system_dirs,       5,0,0,30057,     "Chybná hodnota parametru owr_system_dirs.") \
	MDESC(c,   web_resp,  invalid_upload_source_format,  5,0,0,30058,     "Chybná specifikace zdroje pøenosu dat.") \
	MDESC(c,   web_resp,  unsupported_upload_feature,    5,0,0,30059,     "Nìkterá vlastnost pøenosu dat není podporovaná.") \
	MDESC(c,   web_resp,  ftp_transfer_failed,           5,0,0,30060,     "Do¹lo k chybì pøi FTP pøenosu.") \
	MDESC(c,   web_resp,  no_matching_ftp_account,       5,0,0,30061,     "Odpovídající FTP úèet nenalezen.") \
	MDESC(c,   web_resp,  multiple_matching_ftp_accounts,5,0,0,30062,     "Nalezen více ne¾ jeden odpovídající FTP úèet.") \
	MDESC(c,   web_resp,  ftp_password_change_failed,    5,0,0,30063,     "Zmìna hesla FTP úètu selhala.") \
	MDESC(c,   web_resp,  htauth_haid_dir_not_found,     5,0,0,30064,     "Chránìný htauth adresáø s danou hodnotou haid nenalezen." ) \
	MDESC(c,   web_resp,  missing_haid,                  5,0,0,30065,     "Schází parametr haid." ) \
	MDESC(c,   web_resp,  invalid_haid,                  5,0,0,30066,     "Chybná hodnota parametru haid." ) \
	MDESC(c,   web_resp,  missing_update_pwd_file,       5,0,0,30067,     "Schází parametr update_pwd_file. ") \
	MDESC(c,   web_resp,  invalid_update_pwd_file,       5,0,0,30068,     "Chybná hodnota parametru update_pwd_file. ") \
	MDESC(c,   web_resp,  vhost_exists_as_vhost,         5,0,0,30069,     "Vhost s daným doménovým jménem ji¾ existuje.") \
	MDESC(c,   web_resp,  vhost_exists_as_alias,         5,0,0,30070,     "Dané doménové jméno ji¾ existuje jako alias k nìkterému vhostu.") \
	MDESC(c,   web_resp,  site_name_not_found,           5,0,0,30071,     "Site s daným jménem nenalezena.") \
	MDESC(c,   web_resp,  vs_name_not_found,             5,0,0,30072,     "Virtuální server s daným jménem nenalezen.") \
	MDESC(c,   web_resp,  missing_vs_name,               5,0,0,30073,     "Schází parametr vs_name.") \
	MDESC(c,   web_resp,  invalid_vs_name,               5,0,0,30074,     "Chybá hodnota parametru vs_name.") \
	MDESC(c,   web_resp,  domain_not_found,              5,0,0,30075,     "Doménové jméno nenalezeno.") \
	MDESC(c,   web_resp,  invalid_reldir,                5,0,0,30076,     "Chybná hodnota parametru reldir.") \
	MDESC(c,   web_resp,  vhost_uses_htauth_stats_locking, 5,0,0,30077,   "Vhost pou¾ívá zamykání statistik na bázi htauth") \
	MDESC(c,   web_resp,  chdir_is_absolute,             5,0,0,30078,     "Parametr chdir obsahuje absolutní cestu.") \
	MDESC(c,   web_resp,  invalid_chdir,                 5,0,0,30079,     "Chybná hodnota parametru chdir.") \
	MDESC(c,   web_resp,  missing_year,                  5,0,0,30080,     "Chybí parametr year.") \
	MDESC(c,   web_resp,  invalid_year,                  5,0,0,30081,     "Chybná hodnota parametru year.") \
	MDESC(c,   web_resp,  missing_month,                 5,0,0,30082,     "Chybí parametr month.") \
	MDESC(c,   web_resp,  invalid_month,                 5,0,0,30083,     "Chybná hodnota parametru month.") \
	MDESC(c,   web_resp,  missing_top_sites_count,       5,0,0,30084,     "Chybí parametr top_sites_count.") \
	MDESC(c,   web_resp,  invalid_top_sites_count,       5,0,0,30085,     "Chybná hodnota parametru top_sites_count.") \
	MDESC(c,   web_resp,  missing_emails,                5,0,0,30086,     "Chybí parametr emails.") \
	MDESC(c,   web_resp,  invalid_email_address,         5,0,0,30087,     "Chybný formát emailové adresy.") \
	MDESC(c,   web_resp,  no_email_addresses,            5,0,0,30088,     "Nebyla zadána ¾ádná emailová adresa.") \
	MDESC(c,   web_resp,  invalid_min_mbytes,            5,0,0,30089,     "Chybná hodnota parametru min_bytes.") \
	MDESC(c,   web_resp,  send_email_failed,             5,0,0,30090,     "Do¹lo k chybì pøi odesílání emailu.") \
	MDESC(c,   web_resp,  primary_vhost_not_found,       5,0,0,30091,     "Primární vhost dané site nenalezen." ) \
	MDESC(c,   web_resp,  missing_language,              5,0,0,30092,     "Chybí parametr language." ) \
	MDESC(c,   web_resp,  empty_language,                5,0,0,30093,     "Parametr language je prázdný." ) \
	MDESC(c,   web_resp,  invalid_language,              5,0,0,30094,     "Chybná hodnota parametru language." ) \
	MDESC(c,   web_resp,  missing_error_code,            5,0,0,30095,     "Chybí parametr error_code." ) \
	MDESC(c,   web_resp,  invalid_error_code,            5,0,0,30096,     "Chybná hodnota parametru error_code." ) \
	MDESC(c,   web_resp,  missing_error_document,        5,0,0,30097,     "Chybí parametr error_document." ) \
	MDESC(c,   web_resp,  empty_error_document,          5,0,0,30098,     "Parametr error_document je prázdný." ) \
	MDESC(c,   web_resp,  missing_report_email,          5,0,0,30099,     "Chybí parametr report_email." ) \
	MDESC(c,   web_resp,  invalid_report_email,          5,0,0,30100,     "Chybná hodnota parametru report_email." ) \
	MDESC(c,   web_resp,  missing_verify_migration,      5,0,0,30101,     "Chybí parametr verify_migration." ) \
	MDESC(c,   web_resp,  invalid_verify_migration,      5,0,0,30102,     "Chybná hodnota parametru verify_migration." ) \
	MDESC(c,   web_resp,  missing_src_ip,                5,0,0,30103,     "Chybí parametr src_ip." ) \
	MDESC(c,   web_resp,  invalid_src_ip,                5,0,0,30104,     "Chybná hodnota parametru src_ip." ) \
	MDESC(c,   web_resp,  missing_dst_ip,                5,0,0,30105,     "Chybí parametr dst_ip." ) \
	MDESC(c,   web_resp,  invalid_dst_ip,                5,0,0,30106,     "Chybná hodnota parametru dst_ip." ) \
	MDESC(c,   web_resp,  unknown_src_ip_address,        5,0,0,30107,     "Neznámá zdrojová IP adresa." ) \
	MDESC(c,   web_resp,  unknown_dst_ip_address,        5,0,0,30108,     "Neznámá cílová IP adresa." ) \
	MDESC(c,   web_resp,  database_inconsistency,        5,0,0,30109,     "Nekonzistence v tabulkách databáze." ) \
	MDESC(c,   web_resp,  vhost_with_own_ip_address_found, 5,0,0,30110,   "Mezi migrovanými vhosty je minimálnì jeden vhost s vlastní IP adresou." )\
	MDESC(c,   web_resp,  no_vhosts_on_virtual_server,   5,0,0,30111,     "Na daném virtual_serveru neexistují ¾ádné vhosty dané site.") \
	MDESC(c,   web_resp,  invalid_migration_flags,       5,0,0,30112,     "Chybná kombinace pøíznakù migrace." ) \
	MDESC(c,   web_resp,  missing_f_copy_data,           5,0,0,30113,     "Chybí parametr f_copy_data" ) \
	MDESC(c,   web_resp,  invalid_f_copy_data,           5,0,0,30114,     "Chybná hodnota parametru f_copy_data" ) \
	MDESC(c,   web_resp,  missing_f_realize,             5,0,0,30115,     "Chybí parametr f_realize" ) \
	MDESC(c,   web_resp,  invalid_f_realize,             5,0,0,30116,     "Chybná hodnota parametru f_realize" ) \
	MDESC(c,   web_resp,  missing_f_unpack_data,         5,0,0,30117,     "Chybí parametr f_unpack_data" ) \
	MDESC(c,   web_resp,  invalid_f_unpack_data,         5,0,0,30118,     "Chybná hodnota parametru f_unpack_data" ) \
	MDESC(c,   web_resp,  site_not_being_migrated,       5,0,0,30119,     "Neprobíhá migrace dané site.")\
	MDESC(c,   web_resp,  migration_record_not_found,    5,0,0,30120,     "Nebyl nalezen záznam o probíhající migraci site." )\
	MDESC(c,   web_resp,  nonmatching_source_machines,   5,0,0,30121,     "Fyzický server (mcid) neodpovídá oèekávanému serveru." )\
	MDESC(c,   web_resp,  nonmatching_source_vs,         5,0,0,30122,     "Zdrojový virtuální server neodpovídá oèekávanému virtuálnímu serveru." )\
	MDESC(c,   web_resp,  nonmatching_dest_vs,           5,0,0,30123,     "Cílový virtuální server neodpovídá oèekávanému virtuálnímu serveru." ) \
	MDESC(c,   web_resp,  unexpected_migration_status,   5,0,0,30124,     "Neoèekávaný/nepøípustný stav migrace." )\
	MDESC(c,   web_resp,  site_archive_not_found,        5,0,0,30125,     "Archív se zabalenými daty site nenalezen." ) \
	MDESC(c,   web_resp,  sitehome_already_exists,       5,0,0,30126,     "Hlavní adresáø site ji¾ existuje." ) \
	MDESC(c,   web_resp,  missing_f_must_not_exist,      5,0,0,30127,     "Chybí parametr f_must_not_exist." ) \
	MDESC(c,   web_resp,  invalid_f_must_not_exist,      5,0,0,30128,     "Chybná hodnota parametru f_must_not_exist." ) \
	MDESC(c,   web_resp,  site_is_being_migrated,        5,0,0,30129,     "Probíhá migrace site." ) \
	MDESC(c,   web_resp,  zombie_on_dest_machine,        5,0,0,30130,     "Na cílovém serveru jsou evidovány pozùstatky (zombie) té¾e site." ) \
	MDESC(c,   web_resp,  site_has_references_to_machine,5,0,0,30131,     "Na daný server existují aktivní odkazy (vhosty, FTP úèty, ...) z dané site." ) \
	MDESC(c,   web_resp,  no_zombie_migration_record,    5,0,0,30132,     "Neexistuje záznam o migraci, která by zanechala zombie na daném serveru." ) \
	MDESC(c,   web_resp,  zombie_not_expired_yet,        5,0,0,30133,     "Zombie site je je¹tì pøíli¹ èerstvá." ) \
	MDESC(c,   web_resp,  unsupported_migration,         5,0,0,30134,     "Nepodporovaný typ migrace." ) \
	MDESC(c,   web_resp,  missing_spec_quota,            5,0,0,30135,     "Chybí parametr spec_quota" ) \
	MDESC(c,   web_resp,  invalid_spec_quota,            5,0,0,30136,     "Chybná hodnota parametru spec_quota" ) \
	MDESC(c,   web_resp,  missing_enable,                5,0,0,30137,     "Chybí parametr 'enable'." ) \
	MDESC(c,   web_resp,  invalid_enable,                5,0,0,30138,     "Chybná hodnota parametru 'enable'." ) \
	MDESC(c,   web_resp,  missing_test_only,             5,0,0,30139,     "Chybí parametr 'test_only'." ) \
	MDESC(c,   web_resp,  invalid_test_only,             5,0,0,30140,     "Chybná hodnota parametru 'test_only'." ) \
	MDESC(c,   web_resp,  google_sitemaps_not_enabled,   5,0,0,30141,     "Google sitemaps nejsou povoleny." ) \
	MDESC(c,   web_resp,  missing_create_sample,         5,0,0,30142,     "Chybí parametr 'create_sample'." ) \
	MDESC(c,   web_resp,  invalid_create_sample,         5,0,0,30143,     "Chybná hodnota parametru 'create_sample'." ) \
	MDESC(c,   web_resp,  google_sitemap_config_not_found, 5,0,0,30144,   "Konfiguraèní soubor Google sitemaps nenalezen." ) \
	MDESC(c,   web_resp,  google_sitemap_gen_failed,     5,0,0,30145,     "Generátor Google sitemapy skonèil s chybou." ) \
	MDESC(c,   web_resp,  missing_copy_rotation,         5,0,0,30146,     "Chybí parametr 'copy_rotation'." ) \
	MDESC(c,   web_resp,  invalid_copy_rotation,         5,0,0,30147,     "Chybná hodnota parametru 'copy_rotation'." ) \
	MDESC(c,   web_resp,  missing_ds_ip_must_match,      5,0,0,30148,     "Chybí parametr 'ds_ip_must_match'." ) \
	MDESC(c,   web_resp,  invalid_ds_ip_must_match,      5,0,0,30149,     "Chybná hodnota parametru 'ds_ip_must_match'." ) \
	MDESC(c,   web_resp,  missing_ds_ip,                 5,0,0,30150,     "Chybí parametr 'ds_ip'." ) \
	MDESC(c,   web_resp,  invalid_ds_ip,                 5,0,0,30151,     "Chybná hodnota parametru 'ds_ip'." ) \
	MDESC(c,   web_resp,  invalid_create_ftp_dir,        5,0,0,30152,     "Chybná hodnota parametru 'create_ftp_dir'." ) \
	MDESC(c,   web_resp,  cannot_create_ftp_dir_inside_system_dirs, 5,0,0,30153,     "Cílový adresáø FTP úètu nelze vytvoøit, proto¾e ukazuje dovnitø systémových adresáøù site." ) \
	MDESC(c,   web_resp,  ftp_dir_already_exists_as_nondir, 5,0,0,30154,  "Cílový adresáø FTP úètu nelze vytvoøit, proto¾e ji¾ existuje a pøitom se nejedná o adresáø." ) \
	MDESC(c,   web_resp,  backend_ftp_download_file_connect_failed, 5,0,0,30155, "Chyba pøi stahování vzdáleného souboru na webový server, nelze se pøipojit k FTP serveru." ) \
	MDESC(c,   web_resp,  backend_ftp_download_file_transfer_failed, 5,0,0,30156, "Chyba pøi stahování vzdáleného souboru na webový server, soubor neexistuje nebo do¹lo k chybì pøi pøenosu." ) \
	MDESC(c,   web_resp,  zombie_getifaddrs_error,       5,0,0,30157,     "Nelze odstranit zombie, chyba pøi zji¹»ování sí»ových rozhraní na serveru." ) \
	MDESC(c,   web_resp,  zombie_dnsip_check_error,      5,0,0,30158,     "Nelze odstranit zombie, nepodaøilo se jednoznaènì provìøit ¾e doména v DNS neodkazuje na data zombie." ) \
	MDESC(c,   web_resp,  domain_dns_points_to_zombie,   5,0,0,30159,     "Nelze odstranit zombie, byla nalezena doména dané site která pravdìpodobnì odkazuje na data zombie." ) \
	MDESC(c,   web_resp,  ftp_directory_path_too_long,   5,0,0,30160,     "Cílový adresáø FTP úètu je pøíli¹ dlouhý." ) \
	MDESC(c,   web_resp,  ftp_chdir_path_too_long,       5,0,0,30161,     "Chdir adresáø FTP úètu je pøíli¹ dlouhý." ) \
	MDESC(c,   web_resp,  missing_db_name,               5,0,0,30162,     "Chybí parametr 'db_name'." ) \
	MDESC(c,   web_resp,  invalid_db_name,               5,0,0,30163,     "Chybná hodnota parametru 'db_name'." ) \
	MDESC(c,   web_resp,  missing_minute_limit,          5,0,0,30164,     "Chybí parametr 'minute_limit'." ) \
	MDESC(c,   web_resp,  invalid_minute_limit,          5,0,0,30165,     "Chybná hodnota parametru 'minute_limit'." ) \
	MDESC(c,   web_resp,  missing_month_limit,           5,0,0,30166,     "Chybí parametr 'month_limit'." ) \
	MDESC(c,   web_resp,  invalid_month_limit,           5,0,0,30167,     "Chybná hodnota parametru 'month_limit'." ) \
	MDESC(c,   web_resp,  missing_recursive,             5,0,0,30168,     "Chybí parametr 'recursive'." ) \
	MDESC(c,   web_resp,  invalid_recursive,             5,0,0,30169,     "Chybná hodnota parametru 'recursive'." ) \
	MDESC(c,   web_resp,  missing_hour_count,            5,0,0,30170,     "Chybí parametr 'hour_count'." ) \
	MDESC(c,   web_resp,  invalid_hour_count,            5,0,0,30171,     "Chybná hodnota parametru 'hour_count'." ) \
	MDESC(c,   web_resp,  over_quota,                    5,0,0,30172,     "Disková kvóta site je vyèerpána." ) \
	MDESC(c,   web_resp,  ftp_account_does_not_belong_to_site, 5,0,0,30173, "FTP úèet nenále¾í k dané site." ) \
	MDESC(c,   web_resp,  ssh_account_not_found,         5,0,0,30174,     "SSH úèet nenalezen.") \
	MDESC(c,   web_resp,  ssh_account_instance_not_found,5,0,0,30175,     "Instance SSH úètu nenalezena.") \
	MDESC(c,   web_resp,  missing_from_zwm,              5,0,0,30176,     "Chybí parametr 'from_zwm'." ) \
	MDESC(c,   web_resp,  invalid_from_zwm,              5,0,0,30177,     "Chybná hodnota parametru 'from_zwm'." ) \
	MDESC(c,   web_resp,  missing_restart_action,        5,0,0,30178,     "Chybí parametr 'restart_action'." ) \
	MDESC(c,   web_resp,  invalid_restart_action,        5,0,0,30179,     "Chybná hodnota parametru 'restart_action'." ) \
	MDESC(c,   web_resp,  php_admin_value_not_found,     5,0,0,30180,     "PHP admin direktiva vhosta neexistuje." ) \
	MDESC(c,   web_resp,  missing_php_directive,         5,0,0,30181,     "Chybí parametr 'php_directive'." ) \
	MDESC(c,   web_resp,  invalid_php_directive,         5,0,0,30182,     "Chybná hodnota parametru 'php_directive'." ) \
	MDESC(c,   web_resp,  missing_php_value,             5,0,0,30183,     "Chybí parametr 'php_value'." ) \
	MDESC(c,   web_resp,  invalid_php_value,             5,0,0,30184,     "Chybná hodnota parametru 'php_value'." ) \
	MDESC(c,   web_resp,  smb_account_not_found,         5,0,0,30185,     "SMB úèet nenalezen.") \
	MDESC(c,   web_resp,  smb_account_instance_not_found,5,0,0,30186,     "Instance SMB úètu nenalezena.") \
	MDESC(c,   web_resp,  missing_iapp_token,            5,0,0,30187,     "Chybí parametr 'iapp_token'.") \
	MDESC(c,   web_resp,  cannot_generate_password,      5,0,0,30188,     "Nelze vygenerovat heslo.") \
	MDESC(c,   web_resp,  missing_key_data,              5,0,0,30189,     "Chybí parametr 'key_data'." ) \
	MDESC(c,   web_resp,  invalid_key_data,              5,0,0,30190,     "Chybná hodnota parametru 'key_data'." ) \
	MDESC(c,   web_resp,  missing_cert_data,             5,0,0,30191,     "Chybí parametr 'cert_data'." ) \
	MDESC(c,   web_resp,  invalid_cert_data,             5,0,0,30192,     "Chybná hodnota parametru 'cert_data'." ) \
	MDESC(c,   web_resp,  missing_ca_data,               5,0,0,30193,     "Chybí parametr 'ca_data'." ) \
	MDESC(c,   web_resp,  invalid_ca_data,               5,0,0,30194,     "Chybná hodnota parametru 'ca_data'." ) \
	MDESC(c,   web_resp,  ssl_slave_request_not_queued,  5,0,0,30195,     "SSL po¾adavek nebyl zaøazen do fronty po¾adavkù." ) \
	MDESC(c,   web_resp,  ssl_slave_wait_for_response_failed,  5,0,0,30196,  "Èekání na odpovìd na SSL po¾adavek selhalo." ) \
	MDESC(c,   web_resp,  ssl_slave_request_failed,      5,0,0,30197,     "SSL po¾adavek selhal." ) \
	MDESC(c,   web_resp,  ssl_slave_request_timeout,     5,0,0,30198,     "SSL po¾adavek vytimeoutoval." ) \
	MDESC(c,   web_resp,  invalid_copy_from_domain,      5,0,0,30199,     "Chybná hodnota parametru 'copy_from_domain'." ) \
\
	MDESC(c,   web_resp,  ccc_ip_server_not_found,       5,1,0,30001,     "Virtuální server s danou IP adresou nenalezen.") \
	MDESC(c,   web_resp,  ccc_var_code_not_found,        5,1,0,30002,     "Varianta s daným èíslem neexistuje.") \
	MDESC(c,   web_resp,  ccc_missing_id_service,        5,1,0,30003,     "Schází identifikátor servisu.") \
	MDESC(c,   web_resp,  ccc_invalid_id_service,        5,1,0,30004,     "Chybný formát identifikátoru servisu.") \
	MDESC(c,   web_resp,  ccc_missing_var_code,          5,1,0,30005,     "Schází kód varianty.") \
	MDESC(c,   web_resp,  ccc_invalid_var_code,          5,1,0,30006,     "Chybný formát kódu varianty.") \
	MDESC(c,   web_resp,  ccc_missing_ip_service,        5,1,0,30007,     "Schází IP adresa servisu.") \
	MDESC(c,   web_resp,  ccc_invalid_ip_service,        5,1,0,30008,     "Chybný formát IP adresy servisu.") \
	MDESC(c,   web_resp,  ccc_missing_ip_server,         5,1,0,30009,     "Schází IP adresa serveru.") \
	MDESC(c,   web_resp,  ccc_invalid_ip_server,         5,1,0,30010,     "Chybný formát IP adresy serveru.") \
	MDESC(c,   web_resp,  ccc_id_service_not_found,      5,1,0,30011,     "Servis s daným identifikátorem nenalezen.") \
	MDESC(c,   web_resp,  ccc_vhost_not_found,           5,1,0,30012,     "Vhost nenalezen.") \
	MDESC(c,   web_resp,  ccc_unmatched_id_service,      5,1,0,30013,     "Neodpovídající identifikátor servisu.") \
	MDESC(c,   web_resp,  ccc_cannot_remove_unused_site, 5,1,0,30014,     "Nelze odstranit prázdnou site.") \
	MDESC(c,   web_resp,  ccc_id_service_already_exists, 5,1,0,30015,     "Dané id servisu je ji¾ namapováno na existující site.") \
	MDESC(c,   web_resp,  ccc_invalid_site_relative_reldir, 5,1,0,30016,  "Chybná hodnota parametru site_relative_reldir.") \
	MDESC(c,   web_resp,  ccc_domain_is_primary_vhost,   5,1,0,30017,     "Doména je primárním vhostem celé site.") \
	MDESC(c,   web_resp,  ccc_service_name_does_not_match_id_service, 5,1,0,30018, "Pøedlo¾ené jméno site neodpovídá jménu site zji¹tìnému podle id servisu." ) \
	MDESC(c,   web_resp,  ccc_mig2n_archive_not_found,   5,1,0,30019,     "Archív se zabalenými daty site ze starého hostingu nenalezen." ) \
	MDESC(c,   web_resp,  ccc_migration_between_in_situ_stages, 5,1,0,30020, "Byla detekována neoèekávaná migrace site spu¹tìná uprostøed dvou fází in-situ migrace.") \
	MDESC(c,   web_resp,  ccc_cannot_remember_stage1_done, 5,1,0,30021,   "Do¹lo k chybì pøi zaznamenávání úspì¹ného dokonèení první fáze migrace site." ) \
	MDESC(c,   web_resp,  ccc_site_on_multiple_machines, 5,1,0,30022,     "Doména má vhosty na nìkolika fyzických serverech." ) \
	MDESC(c,   web_resp,  ccc_migration_without_realization, 5,1,0,30023, "Není dovoleno mìnit variantu domény uprostøed migrace, která nebude provádìt realizaci domény na cílovém serveru." ) \
	MDESC(c,   web_resp,  ccc_site_mapping_not_found,    5,1,0,30024,     "Nenalezeno mapování site na identifikátor z Centra." ) \
	MDESC(c,   web_resp,  ccc_dba_module_not_found,      5,1,0,30025,     "Databázový modul CMS nenalezen." ) \
	MDESC(c,   web_resp,  ccc_dba_database_not_found,    5,1,0,30026,     "Po¾adovaná databáze nenalezena." ) \
	MDESC(c,   web_resp,  ccc_dba_database_ip_does_not_match, 5,1,0,30027, "IP adresa databázového serveru neodpovída IP adrese na které eviduje danou databazi modul Dba." ) \
	MDESC(c,   web_resp,  ccc_create_ftp_account_rollback_failed, 5,1,0,30028, "Zotavování z chyby pøi vytáøení FTP úètu selhalo." ) \
\
	MDESC(c,   web_resp,  success,                       5,0,0,50000,     "Operace byla úspì¹nì dokonèena.") \
	MDESC(c,   web_resp,  site_created,                  5,0,0,50001,     "Site úspì¹nì vytvoøena.") \
	MDESC(c,   web_resp,  quota,                         5,0,0,50002,     "Kvóta úspì¹nì zji¹tìna.") \
	MDESC(c,   web_resp,  request_queued,                5,0,0,50003,     "Po¾adavek byl zaøazen do fronty pro zpracování na pøíslu¹ném serveru.") \
	MDESC(c,   web_resp,  quota_set,                     5,0,0,50004,     "Kvóta úspì¹nì nastavena.") \
	MDESC(c,   web_resp,  vhost_created,                 5,0,0,50005,     "Vhost úspì¹nì vytvoøen.") \
	MDESC(c,   web_resp,  site_www_stopped,              5,0,0,50006,     "WWW slu¾ba dané site byla úspì¹nì zastavena.") \
	MDESC(c,   web_resp,  site_www_started,              5,0,0,50007,     "WWW slu¾ba dané site byla úspì¹nì spu¹tìna.") \
	MDESC(c,   web_resp,  vhost_stats_locked,            5,0,0,50008,     "Statistiky vhosta úspì¹nì zamèeny.") \
	MDESC(c,   web_resp,  vhost_stats_unlocked,          5,0,0,50009,     "Statistiky vhosta úspì¹nì odemèeny.") \
	MDESC(c,   web_resp,  vhost_stats_locking_updated,   5,0,0,50010,     "Zamèení statistik vhosta úspì¹nì aktualizováno.") \
	MDESC(c,   web_resp,  vhost_alias_created,           5,0,0,50011,     "Alias k vhostu úspì¹nì pøidán.") \
	MDESC(c,   web_resp,  vhost_alias_removed,           5,0,0,50012,     "Alias vhostu úspì¹nì odstranìn.") \
	MDESC(c,   web_resp,  ftp_account_created,           5,0,0,50013,     "FTP úèet byl úspì¹nì vytvoøen.") \
	MDESC(c,   web_resp,  ftp_account_locks_updated,     5,0,0,50014,     "Zámky závisející na FTP úètu byly úspì¹nì aktualizovány.") \
	MDESC(c,   web_resp,  ftp_account_removed,           5,0,0,50015,     "FTP úèet byl úspì¹nì odstranìn.") \
	MDESC(c,   web_resp,  htauth_password_file_updated,  5,0,0,50016,     "Soubor s hesly pro chránìný pøístup k adresáøùm úspì¹nì aktualizován.") \
	MDESC(c,   web_resp,  htauth_locking_updated,        5,0,0,50017,     "Chránìný pøístup k adresáøi(ùm) úspì¹nì aktualizován.") \
	MDESC(c,   web_resp,  htauth_locking_removed,        5,0,0,50018,     "Chránìný pøístup k adresáøi úspì¹nì odstranìn.") \
	MDESC(c,   web_resp,  site_permissions_updated,      5,0,0,50019,     "Pøístupová práva k site úspì¹nì pøegenerována.") \
	MDESC(c,   web_resp,  clid_of_site_name,             5,0,0,50020,     "ID site úspì¹nì urèeno ze jména site.") \
	MDESC(c,   web_resp,  vsid_of_vs_name,               5,0,0,50021,     "ID virtuálního serveru úspì¹nì urèeno z jeho jména.") \
	MDESC(c,   web_resp,  vhost_config_updated,          5,0,0,50022,     "Konfigurace vhostu byla úspì¹nì pøegenerována.") \
	MDESC(c,   web_resp,  top_traffic_report_empty,      5,0,0,50023,     "Pøehled slu¾eb s nejvy¹¹ím trafficem je prázdný.") \
	MDESC(c,   web_resp,  top_traffic_report_sent,       5,0,0,50024,     "Pøehled slu¾eb s nejvy¹¹ím trafficem úspì¹nì odeslán.") \
	MDESC(c,   web_resp,  top_traffic_report,            5,0,0,50025,     "Pøehled slu¾eb s nejvy¹¹ím trafficem.") \
	MDESC(c,   web_resp,  vs_ips_on_same_machine_result, 5,0,0,50026,     "Výsledek detekce zda IP adresy virtuálních serverù ukazují na stejný fyzický stroj.")\
	MDESC(c,   web_resp,  zombie_removed,                5,0,0,50027,     "Zombie site byla úspì¹nì odstranìna.")\
	MDESC(c,   web_resp,  expired_zombies,               5,0,0,50028,     "Seznam zombie sites urèených k odstranìní.")\
	MDESC(c,   web_resp,  expired_shadow_vhosts,         5,0,0,50029,     "Seznam shadow vhostù urèených k odstranìní.")\
	MDESC(c,   web_resp,  google_sitemaps_enabled,       5,0,0,50030,     "Google sitemaps byly povoleny.")\
	MDESC(c,   web_resp,  google_sitemaps_disabled,      5,0,0,50031,     "Google sitemaps byly zakázány.")\
	MDESC(c,   web_resp,  google_sitemaps_generated,     5,0,0,50032,     "Google sitemapa byla úspì¹nì vygenerována.")\
	MDESC(c,   web_resp,  google_sitemaps,               5,0,0,50033,     "Informace o nastavení Google sitemap.")\
	MDESC(c,   web_resp,  google_sitemaps_cron_enabled,  5,0,0,50034,     "Periodická aktualizace Google sitemaps byla povolena.")\
	MDESC(c,   web_resp,  google_sitemaps_cron_disabled, 5,0,0,50035,     "Periodická aktualizace Google sitemaps byla zakázána.")\
	MDESC(c,   web_resp,  vhosts_with_server_admin_email,5,0,0,50036,     "Seznam vhostù s daným emailem správce domény." ) \
	MDESC(c,   web_resp,  machines,                      5,0,0,50037,     "Seznam serverù." ) \
	\
	MDESC(c,   web_resp,  ccc_main_domain_created,       5,1,0,50001,     "Hlavní doména úspì¹nì vytvoøena.") \
	MDESC(c,   web_resp,  ccc_www_stopped,               5,1,0,50002,     "WWW slu¾ba servisu úspì¹nì zastavena.") \
	MDESC(c,   web_resp,  ccc_www_started,               5,1,0,50003,     "WWW slu¾ba servisu úspì¹nì spu¹tìna.") \
	MDESC(c,   web_resp,  ccc_main_stats_locked,         5,1,0,50004,     "Statistiky hlavní domény úspì¹nì zamèeny.") \
	MDESC(c,   web_resp,  ccc_main_stats_unlocked,       5,1,0,50005,     "Statistiky hlavní domény úspì¹nì odemèeny.") \
	MDESC(c,   web_resp,  ccc_alias_created,             5,1,0,50006,     "Alias k hlavní doménì úspì¹nì vytvoøen.") \
	MDESC(c,   web_resp,  ccc_alias_removed,             5,1,0,50007,     "Alias k hlavní doménì úspì¹nì odstranìn.") \
	MDESC(c,   web_resp,  ccc_vhost_stats_locked,        5,1,0,50008,     "Statistiky vhostu úspì¹nì zamèeny.") \
	MDESC(c,   web_resp,  ccc_vhost_stats_unlocked,      5,1,0,50009,     "Statistiky vhostu úspì¹nì odemèeny.") \
	MDESC(c,   web_resp,  ccc_3rdlv_domain_created,      5,1,0,50010,     "Doména tøetí úrovnì vytvoøena.") \
	MDESC(c,   web_resp,  ccc_3rdlv_domain_removed,      5,1,0,50011,     "Doména tøetí úrovnì odstranìna.") \
	MDESC(c,   web_resp,  ccc_main_domain_destroyed,     5,1,0,50012,     "Hlavní doména úspì¹nì a nenávratnì zlikvidována.") \
	MDESC(c,   web_resp, ccc_primary_vhost_data_uploaded,5,1,0,50013,     "Data primárního vhostu úspì¹nì zkopírována.") \
	MDESC(c,   web_resp,  ccc_main_domain_removed,       5,1,0,50014,     "Hlavní doména úspì¹nì odstranìna.") \
	MDESC(c,   web_resp,  ccc_ftp_password_changed,      5,1,0,50015,     "Heslo FTP úspì¹né zmìnìno.") \
	MDESC(c,   web_resp,  ccc_ftp_account_locked,        5,1,0,50016,     "FTP úèet úspì¹né zamèen.") \
	MDESC(c,   web_resp,  ccc_ftp_account_unlocked,      5,1,0,50017,     "FTP úèet úspì¹né odemèen.") \
	MDESC(c,   web_resp,  ccc_id_service_of_site_name,   5,1,0,50018,     "ID servisu úspì¹nì zji¹tìno z názvu site.") \
	MDESC(c,   web_resp,  ccc_quota,                     5,1,0,50019,     "Disková kvóta servisu úspì¹nì zji¹tìna.") \
	MDESC(c,   web_resp,  ccc_quota_set,                 5,1,0,50020,     "Disková kvóta servisu úspì¹nì nastavena.") \
	MDESC(c,   web_resp,  ccc_site_vhosts_language_set,  5,1,0,50021,     "Jazyk v¹ech vhostù site úspì¹nì zmìnìn." ) \
	MDESC(c,   web_resp,  ccc_primary_vhost_language,    5,1,0,50022,     "Jazyk primárního vhosta site úspì¹nì zji¹tìn." ) \
	MDESC(c,   web_resp,  ccc_error_document_set,        5,1,0,50023,     "U¾ivatelská chybová stránka byla úspì¹nì nastavena." ) \
	MDESC(c,   web_resp,  ccc_error_document_removed,    5,1,0,50024,     "U¾ivatelská chybová stránka byla úspì¹nì odstranìna." ) \
	MDESC(c,   web_resp,  ccc_old_hosting_data_unpacked, 5,1,0,50025,     "Data site ze starého hostingu byla úspì¹nì rozbalena." ) \
	MDESC(c,   web_resp,  ccc_ftp_account_created,       5,1,0,50026,     "FTP úèet úspì¹nì vytvoøen." ) \
	MDESC(c,   web_resp,  ccc_ftp_account_removed,       5,1,0,50027,     "FTP úèet úspì¹nì odstranìn." ) \
	MDESC(c,   web_resp,  ccc_domain_migrated,           5,1,0,50028,     "Doména byla úspì¹nì pøemigrována." ) \
	MDESC(c,   web_resp,  ccc_migration_stage1_done,     5,1,0,50029,     "První fáze migrace domény byla dokonèena." ) \
	MDESC(c,   web_resp,  ccc_domain_variant_changed,    5,1,0,50030,     "Varianta domény byla úspì¹nì zmìnìna." ) \
	MDESC(c,   web_resp,  ccc_win_hosting_data_unpacked, 5,1,0,50031,     "Data site z Windows hostingu byla úspì¹nì rozbalena." ) \
	MDESC(c,   web_resp,  ccc_dba_database_backup_uploaded, 5,1,0,50032,  "Zálo¾ní kopie databáze byla úspì¹nì pøenesena do u¾ivatelského prostoru." ) \
	MDESC(c,   web_resp,  ccc_server_admin_email_set,    5,1,0,50033,     "Email správce vhostu byl úspì¹nì nastaven." ) \
	MDESC(c,   web_resp,  ccc_server_admin_email,        5,1,0,50034,     "Email správce vhostu." ) \
	MDESC(c,   web_resp,  ccc_mail_site_limits_set,      5,1,0,50035,     "Limity odeslaných mailù site byly úspì¹nì nastaveny." ) \
	MDESC(c,   web_resp,  ccc_mail_site_limits,          5,1,0,50036,     "Limity odeslaných mailù site." ) \
	MDESC(c,   web_resp,  ccc_mail_site_limits_reload_issued, 5,1,0,50037,"Pøíkaz na aktualizaci limitù odeslaných mailù dané site byl úspì¹nì nastaven." ) \
	MDESC(c,   web_resp,  ccc_mail_current_counts,       5,1,0,50038,     "Aktuální poèty odeslaných mailù site." ) \
	MDESC(c,   web_resp,  ccc_mail_hour_count_decreased, 5,1,0,50039,     "Poèet odeslaných mailù byl úspì¹nì sní¾en." ) \
	MDESC(c,   web_resp,  ccc_customer_site_data_backup_done, 5,1,0,50040, "U¾ivatelská záloha site byla úspì¹nì provedena." ) \
	MDESC(c,   web_resp,  ccc_site_information,          5,1,0,50041,     "Informace o dané site." ) \
	MDESC(c,   web_resp,  ccc_ftp_password_checked,      5,1,0,50042,     "Kontrola FTP hesla byla provedena.")\
	MDESC(c,   web_resp,  ccc_ssh_account_locked,        5,1,0,50043,     "SSH pøístup daného úètu byl úspì¹nì zakázán.") \
	MDESC(c,   web_resp,  ccc_ssh_account_unlocked,      5,1,0,50044,     "SSH pøístup daného úètu byl úspì¹nì povolen.") \
	MDESC(c,   web_resp,  ccc_ssh_account_status,        5,1,0,50045,     "Stav SSH pøístupu daného úètu.") \
	MDESC(c,   web_resp,  ccc_vhost_ip,                  5,1,0,50046,     "IP adresa daného vhosta.") \
	MDESC(c,   web_resp,  ccc_php_admin_value,           5,1,0,50049,     "Hodnota PHP admin direktivy.") \
	MDESC(c,   web_resp,  ccc_php_admin_value_set,       5,1,0,50050,     "Hodnota PHP admin direktivy úspì¹nì nastavena.") \
	MDESC(c,   web_resp,  ccc_smb_account_locked,        5,1,0,50051,     "SMB pøístup daného úètu byl úspì¹nì zakázán.") \
	MDESC(c,   web_resp,  ccc_smb_account_unlocked,      5,1,0,50052,     "SMB pøístup daného úètu byl úspì¹nì povolen.") \
	MDESC(c,   web_resp,  ccc_smb_account_status,        5,1,0,50053,     "Stav SMB pøístupu daného úètu.") \
	MDESC(c,   web_resp,  ccc_iapp_ftp_account_enabled,  5,1,0,50054,     "FTP úèet pro instalaci aplikací povolen.") \
	MDESC(c,   web_resp,  ccc_iapp_ftp_account_disabled, 5,1,0,50055,     "FTP úèet pro instalaci aplikací zakázán.") \
	MDESC(c,   web_resp,  ccc_ssl_vhost_certificate_set, 5,1,0,50056,     "SSL certifikát vhosta úspì¹nì nastaven.") \
	MDESC(c,   web_resp,  ccc_ssl_vhost_certificate_removed, 5,1,0,50057, "SSL certifikát vhosta úspì¹nì odstranìn.") \
	MDESC(c,   web_resp,  ccc_site_vhosts_ip_set,        5,1,0,50058,     "IP adresa vhostù dané site úspì¹nì zmìnìna.") \


#define WEB_CMSM_WHS(c) \
	GROUP_WHS(c, web_module_mdesc, web_cmsm, create_site)	\
	GROUP_WHS(c, web_module_ccc_mdesc, web_cmsm, ccc_create_main_domain)	

#define WEB_MDESC_TABLE(c) \
	WEB_CMSM(c) \
	WEB_RESP(c) \
	WEB_CMSM_WHS(c)
	
	
// expand the declarations
CMS_NAMESPACE_START
WEB_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // __MOD_WEB_MDESCS
