// x64 OK

#ifndef __MOD_CIMAP_MDESCS
#define __MOD_CIMAP_MDESCS

#include "mdescs.h"

// cimap messages
#define CIMAP_CMSM(c) \
	MDESC(c,   cimap_cmsm,  get_domain_mailbox_count,              2,0,0,1,     "Nelze zjistit poèet mailboxù domény.")  \
	MDESC(c,   cimap_cmsm,  get_domain_mailboxes,                  2,0,0,2,     "Nelze naèíst seznam mailboxù domény.")  \
	MDESC(c,   cimap_cmsm,  get_max_mailbox_count,                 2,0,0,3,     "Nelze zjistit maximální poèet mailboxù domény.")  \
	MDESC(c,   cimap_cmsm,  set_max_mailbox_count,                 2,0,0,4,     "Nelze zmìnit maxilmální poèet mailboxù domény.")     \
	MDESC(c,   cimap_cmsm,  get_user_password__obsolete,           2,0,0,5,     "Nelze zjistit heslo mailboxu.")  \
	MDESC(c,   cimap_cmsm,  set_user_password__obsolete,           2,0,0,6,     "Nelze zmìnit heslo mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_domains,                           2,0,0,7,     "Nelze naèíst seznam domén.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_aliases,                   2,0,0,8,     "Nelze naèíst seznam aliasù mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_forwards,                  2,0,0,9,     "Nelze naèíst seznam pøesmìrování mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_fwd_local_copy,            2,0,0,10,    "Nelze zjistit stav pøíznaku lokální kopie pøi pøesmìrování zpráv z mailboxu.") \
	MDESC(c,   cimap_cmsm,  create_alias,                          2,0,0,11,    "Nelze vytvoøit alias.") \
	MDESC(c,   cimap_cmsm,  delete_alias,                          2,0,0,12,    "Nelze odstranit alias.") \
	MDESC(c,   cimap_cmsm,  add_forward,                           2,0,0,13,    "Nelze pøidat pøesmìrování.") \
	MDESC(c,   cimap_cmsm,  delete_forward,                        2,0,0,14,    "Nelze odstranit pøesmìrování z mailboxu.") \
	MDESC(c,   cimap_cmsm,  set_mailbox_fwd_local_copy,            2,0,0,15,    "Nelze zmìnit pøíznak lokální kopie pøi pøesmìrování zpráv z mailboxu.") \
	MDESC(c,   cimap_cmsm,  get_domain_catchall,                   2,0,0,16,    "Nelze zjistit nastavení doménového ko¹e.") \
	MDESC(c,   cimap_cmsm,  set_domain_catchall,                   2,0,0,17,    "Nelze zmìnit nastavení doménového ko¹e.") \
	MDESC(c,   cimap_cmsm,  remove_domain_catchall,                2,0,0,18,    "Nelze odstranit doménový ko¹.") \
	MDESC(c,   cimap_cmsm,  delete_mailbox,                        2,0,0,19,    "Nelze odstranit mailbox.") \
	MDESC(c,   cimap_cmsm,  delete_mailbox_ex,                     2,0,0,20,    "Nelze odstranit mailbox.") \
	MDESC(c,   cimap_cmsm,  create_mailbox,                        2,0,0,21,    "Nelze vytvoøit nový mailbox.") \
	MDESC(c,   cimap_cmsm,  create_domain,                         2,0,0,22,    "Nelze vytvoøit novou doménu.") \
	MDESC(c,   cimap_cmsm,  delete_domain,                         2,0,0,23,    "Nelze odstranit danou doménu.") \
	MDESC(c,   cimap_cmsm,  create_domain_alias,                   2,0,0,24,    "Nelze vytvoøit doménový alias.") \
	MDESC(c,   cimap_cmsm,  get_domain_aliases,                    2,0,0,25,    "Nelze naèíst seznam doménových aliasù.") \
	MDESC(c,   cimap_cmsm,  delete_domain_alias,                   2,0,0,26,    "Nelze odstranit doménový alias.") \
	MDESC(c,   cimap_cmsm,  get_domain_mailboxes_with_pwd,         2,0,0,27,    "Nelze naèíst seznam mailboxù domény.")  \
	MDESC(c,   cimap_cmsm,  get_domain_nameservers,                2,0,0,28,    "Nelze zjistit seznam nameserverù domény.")  \
	MDESC(c,   cimap_cmsm,  get_domain_mx_records,                 2,0,0,29,    "Nelze zjistit MX záznamy domény.")  \
	MDESC(c,   cimap_cmsm,  get_domain_transport,                  2,0,0,30,    "Nelze zjistit cílový po¹tovní server domény.")  \
	MDESC(c,   cimap_cmsm,  get_domain_changelog,                  2,0,0,31,    "Nelze naèíst historii zmìn po¹ty dané domény.")  \
	MDESC(c,   cimap_cmsm,  migrate_virtual_users_table,           2,0,0,32,    "Nelze pøemigrovat databázi u¾ivatelù po¹ty.")  \
	MDESC(c,   cimap_cmsm,  set_quota__obsolete,                   2,0,0,33,    "Nelze zmìnit nastavení kvóty.")  \
	MDESC(c,   cimap_cmsm,  get_quota,                             2,0,0,34,    "Nelze zjistit nastavení kvóty.")  \
	MDESC(c,   cimap_cmsm,  get_domain_usage,                      2,0,0,35,    "Nelze zjistit obsazený prostor domény.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_usage,                     2,0,0,36,    "Nelze zjistit obsazený prostor mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_accounts,                  2,0,0,37,    "Chyba pøi zji¹»ování úètù k mailboxu.")  \
	MDESC(c,   cimap_cmsm,  set_mailbox_account_password,          2,0,0,38,    "Chyba pøi zmìnì hesla úètu.")  \
	MDESC(c,   cimap_cmsm,  set_my_mailbox_account_password,       2,0,0,39,    "Chyba pøi zmìnì hesla úètu.")  \
	MDESC(c,   cimap_cmsm,  set_postmaster_account_password,       2,0,0,40,    "Chyba pøi zmìnì hesla úètu postmastera.")  \
	MDESC(c,   cimap_cmsm,  get_postmaster_account_password,       2,0,0,41,    "Nelze zjistit heslo úètu postmastera.")  \
	MDESC(c,   cimap_cmsm,  get_domain_notes,                      2,0,0,42,    "Nelze naèíst poznámky k dané doménì.")  \
	MDESC(c,   cimap_cmsm,  add_domain_note,                       2,0,0,43,    "Nelze pøidat poznámku k dané doménì.")  \
	MDESC(c,   cimap_cmsm,  delete_domain_note,                    2,0,0,44,    "Nelze odstranit poznámku k dané doménì.")  \
	MDESC(c,   cimap_cmsm,  change_domain_note,                    2,0,0,45,    "Nelze zmìnit poznámku k dané doménì.")  \
	MDESC(c,   cimap_cmsm,  nonstandard_domain,                    2,0,0,46,    "Nelze zjistit, má-li doména nìjaké nestandardy.")  \
	MDESC(c,   cimap_cmsm,  get_max_mailbox_usage,                 2,0,0,47,    "Nelze zjistit kvótu domény a/nebo nejvíce zaplnìný mailbox.")  \
	MDESC(c,   cimap_cmsm,  check_mailbox_password,                2,0,0,48,    "Nelze ovìøit heslo mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_domain_changelog_del,              2,0,0,49,    "Nelze naèíst historii zmìn po¹ty dané domény.")  \
	MDESC(c,   cimap_cmsm,  get_domain_type,                       2,0,0,50,    "Nelze zjistit typ domény.")  \
	MDESC(c,   cimap_cmsm,  search_in_domain,                      2,0,0,51,    "Hledání v doménì selhalo.")  \
	MDESC(c,   cimap_cmsm,  set_domain_transport,                  2,0,0,52,    "Nelze nastavit transport po¹ty pro danou doménu.")  \
	MDESC(c,   cimap_cmsm,  migrate_domain_data,                   2,0,0,53,    "Pøesun obsahu mailboxù domény skonèil neúspì¹nì.")  \
	MDESC(c,   cimap_cmsm,  remove_domain_transport,               2,0,0,54,    "Nelze odstranit transport po¹ty pro danou doménu.")  \
	MDESC(c,   cimap_cmsm,  add_relay_user,                        2,0,0,55,    "Nelze pøidat u¾ivatele relaye.")  \
	MDESC(c,   cimap_cmsm,  remove_relay_user,                     2,0,0,56,    "Nelze odebrat u¾ivatele relaye.")  \
	MDESC(c,   cimap_cmsm,  get_mail_servers,                      2,0,0,57,    "Nelze zjistit seznam po¹tovních serverù.")  \
	MDESC(c,   cimap_cmsm,  get_domain_mail_server,                2,0,0,58,    "Nelze zjistit po¹tovní server domény.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_account_password,          2,0,0,59,    "Nelze zjistit heslo k úètu mailboxu.")  \
	MDESC(c,   cimap_cmsm,  migrate_domain_structure,              2,0,0,60,    "Nelze provést migraci struktury mailboxù domény." ) \
	MDESC(c,   cimap_cmsm,  inject_email,                          2,0,0,61,    "Nelze vlo¾it email do mailboxu." ) \
	MDESC(c,   cimap_cmsm,  remove_migrated_zombies,               2,0,0,62,    "Nelze odstranit zombie odmigrovaných mailboxù." ) \
	MDESC(c,   cimap_cmsm,  check_mailbox_quota,                   2,0,0,63,    "Nelze provìøit kvótu a obsazení mailboxu." ) \
	MDESC(c,   cimap_cmsm,  check_domain_quotas,                   2,0,0,64,    "Nelze provìøit kvóty a obsazení mailboxù domény." ) \
	MDESC(c,   cimap_cmsm,  check_domain_quotas_bulk,              2,0,0,65,    "Provìøování kvóty a obsazení mailboxù domén selhalo." ) \
	MDESC(c,   cimap_cmsm,  get_mail_server_domain_counts,         2,0,0,66,    "Nelze zjistit poèty domén na mailserverech." ) \
	MDESC(c,   cimap_cmsm,  get_mail_server_all_domain_counts,     2,0,0,67,    "Nelze zjistit celkové poèty domén s po¹tou na mailserverech." ) \
	MDESC(c,   cimap_cmsm,  get_mail_server_domain_transport_counts, 2,0,0,68,  "Nelze zjistit celkové poèty domén s transportem na mailservery." ) \
	MDESC(c,   cimap_cmsm,  block_mailbox_incoming_emails,         2,0,0,69,    "Nelze zablokovat/odblokovat pøíjem po¹ty pro daný mailbox." ) \
	MDESC(c,   cimap_cmsm,  get_mailbox_status_flags,              2,0,0,70,    "Nelze zjistit stavové pøíznaky daného mailboxu." ) \
	MDESC(c,   cimap_cmsm,  block_domain_incoming_emails,          2,0,0,71,    "Nelze zablokovat/odblokovat pøíjem po¹ty pro danou doménu." ) \
	MDESC(c,   cimap_cmsm,  set_domain_rbl_policy,                 2,0,0,72,    "Nelze zapnout/vypnout RBL kontrolu pøíchozí po¹ty pro danou doménu." ) \
	MDESC(c,   cimap_cmsm,  get_domain_status_flags,               2,0,0,73,    "Nelze zjistit stavové pøíznaky dané domény." ) \
	MDESC(c,   cimap_cmsm,  check_overquota_mailboxes_bulk,        2,0,0,74,    "Provìøení obsazení overquota mailboxù selhalo." ) \
	MDESC(c,   cimap_cmsm,  disable_mailbox_oq_blocking,           2,0,0,75,    "Nelze zapnout/vypnout blokování pøíjmu po¹ty z dùvodu pøekroèení kvóty mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_domain_quota_type,                 2,0,0,76,    "Nelze zmìnit typ kvóty domény." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_quota_limit,               2,0,0,77,    "Nelze zmìnit velikost kvóty mailboxu." ) \
	MDESC(c,   cimap_cmsm,  get_mailboxes_with_quota_info,         2,0,0,78,    "Nelze zjistit seznam mailboxù s jejich nastavením kvót a obsazeného prostoru." ) \
	MDESC(c,   cimap_cmsm,  set_default_mailbox_quota_limit,       2,0,0,79,    "Nelze zmìnit defaultní velikost novì zøizovaných mailboxù domény." ) \
	MDESC(c,   cimap_cmsm,  get_domain_quotawarn_settings,         2,0,0,80,    "Nelze zjistit nastavení hlídaní obsazeného prostoru pro danou doménu." ) \
	MDESC(c,   cimap_cmsm,  set_domain_quotawarn_settings,         2,0,0,81,    "Nelze upravit nastavení hlídaní obsazeného prostoru pro danou doménu." ) \
	MDESC(c,   cimap_cmsm,  get_mailboxes_with_quotawarn_settings, 2,0,0,82,    "Nelze zjistit seznam mailboxù s jejich nastavením hlídání obsazeného prostoru." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_quotawarn_settings,        2,0,0,83,    "Nelze upravit nastavení hlídaní obsazeného prostoru pro daný mailbox." ) \
	MDESC(c,   cimap_cmsm,  get_domain_language,                   2,0,0,84,    "Nelze zjistit nastavení jazyka domény." ) \
	MDESC(c,   cimap_cmsm,  get_mailbox_language,                  2,0,0,85,    "Nelze zjistit nastavení jazyka mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_domain_language,                   2,0,0,86,    "Nelze nastavit jazyk domény." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_language,                  2,0,0,87,    "Nelze nastavit jazyk mailboxu." ) \
	MDESC(c,   cimap_cmsm,  get_domain_aliases_with_transport,     2,0,0,88,    "Nelze naèíst seznam doménových aliasù s jejich transporty." ) \
	MDESC(c,   cimap_cmsm,  stop_domain,                           2,0,0,89,    "Nelze zastavit provoz domény." ) \
	MDESC(c,   cimap_cmsm,  start_domain,                          2,0,0,90,    "Nelze spustit provoz domény." ) \
	MDESC(c,   cimap_cmsm,  get_webmail_mailbox_flags,             2,0,0,91,    "Nelze naèíst pøíznaky mailboxu pro webmail." ) \
	MDESC(c,   cimap_cmsm,  get_mail_server_mailbox_counts,        2,0,0,92,    "Nelze zjistit poèty mailboxù na mailserverech." ) \
	MDESC(c,   cimap_cmsm,  get_mailbox_quota_info,                2,0,0,93,    "Nelze zjistit informace o kvótì a stavu prostoru mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_users_can_edit_mailbox_aliases,    2,0,0,94,    "Nelze povolit/zakázat bì¾ným u¾ivatelùm úpravy mailboxových aliasù." ) \
	MDESC(c,   cimap_cmsm,  get_users_can_edit_mailbox_aliases,    2,0,0,95,    "Nelze zjistit zda má bì¾ný u¾ivatel mo¾nost úprav mailboxových aliasù." ) \
	MDESC(c,   cimap_cmsm,  clone_mailbox_to_domain,               2,0,0,96,    "Nelze naklonovat mailbox do jiné domény." ) \
	MDESC(c,   cimap_cmsm,  search_in_server_logs,                 2,0,0,97,    "Chyba pøi vyhledávání v log souborech po¹tovních serverù.") \
	MDESC(c,   cimap_cmsm,  get_domain_lists,                      2,0,0,98,    "Nelze vrátit pøehled seznamù domén.") \
	MDESC(c,   cimap_cmsm,  get_mailbox_quotawarn_settings,        2,0,0,99,    "Nelze zjistit nastavení hlídání obsazeného prostoru daného mailboxu." ) \
	MDESC(c,   cimap_cmsm,  list_mailbox_folders,                  2,0,0,100,   "Nelze vylistovat slo¾ky daného mailboxu." ) \
	MDESC(c,   cimap_cmsm,  get_domains_ex,                        2,0,0,101,   "Nelze naèíst seznam domén s roz¹íøenými informacemi.")  \
	MDESC(c,   cimap_cmsm,  get_domain_transports_to_server,       2,0,0,102,   "Nelze naèíst seznam transportù na daný server.")  \
	MDESC(c,   cimap_cmsm,  reupdate_mailbox_quota,                2,0,0,103,   "Nelze pøeaktualizovat diskovou kvótu mailboxu na IMAP serveru.")  \
	MDESC(c,   cimap_cmsm,  save_broken_password,                  2,0,0,104,   "Nelze zaznamenat prolomené heslo schránky.")  \
	MDESC(c,   cimap_cmsm,  get_smtp_blocking_settings,            2,0,0,105,   "Nelze vrátit nastavení blokování SMTP dané schránky.")  \
	MDESC(c,   cimap_cmsm,  set_smtp_blocking_settings,            2,0,0,106,   "Nelze zmìnit nastavení blokování SMTP dané schránky.")  \
	MDESC(c,   cimap_cmsm,  check_my_broken_password,              2,0,0,107,   "Nelze ovìøit zda je heslo schránky prolomené.")  \
	MDESC(c,   cimap_cmsm,  check_broken_password,                 2,0,0,108,   "Nelze ovìøit zda je heslo schránky prolomené.")  \
	MDESC(c,   cimap_cmsm,  set_sender_forgery_forbidden_flag,     2,0,0,109,   "Nelze zmìnit pøíznak zákazu podvr¾ení domény odesílatele.")  \
	MDESC(c,   cimap_cmsm,  learn_spam,                            2,0,0,110,   "Nelze zaøadit email k nauèení jako spam.")  \
	MDESC(c,   cimap_cmsm,  set_mailbox_login_password,            2,0,0,111,   "Chyba pøi zmìnì hesla úètu.")  \
	MDESC(c,   cimap_cmsm,  set_postmaster_mailbox_login_password, 2,0,0,112,   "Chyba pøi zmìnì hesla úètu postmastera.")  \
\
	MDESC(c,   cimap_cmsm,  set_mailbox_trash_autoclear,           2,1,0,1,      "Nelze zmìnit nastavení automatického vysypávání ko¹e.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_trash_autoclear,           2,1,0,2,      "Nelze zjistit nastavení automatického vysypávání ko¹e.")  \
	MDESC(c,   cimap_cmsm,  set_bfu_antispam_level,                2,1,0,3,      "Nelze nastavit antispamová opatøení.") \
	MDESC(c,   cimap_cmsm,  get_bfu_antispam_level,                2,1,0,4,      "Nelze zjistit nastavení antispamových opatøení.") \
	MDESC(c,   cimap_cmsm,  set_mailbox_folder_autoclear,          2,1,0,5,      "Nelze zmìnit nastavení automatického vysypávání slo¾ky.") \
	MDESC(c,   cimap_cmsm,  get_mailbox_folder_autoclear,          2,1,0,6,      "Nelze zjistit nastavení automatického vysypávání slo¾ky.") \
	MDESC(c,   cimap_cmsm,  copy_avelsieve_filters,                2,1,0,7,      "Nelze zkopírovat nastavení filtraèních pravidel.") \
	MDESC(c,   cimap_cmsm,  merge_avelsieve_filters,               2,1,0,8,      "Nelze slouèit nastavení filtraèních pravidel.") \
	MDESC(c,   cimap_cmsm,  mailbox_autoclear_bulk,                2,1,0,9,      "Dávkové automatické èi¹tìní mailboxù selhalo." ) \
\
	MDESC(c,   cimap_cmsm,  batch_create_domain_backup,            2,2,0,1,      "Nelze vytvoøit zálo¾ní kopii nastavení domény.")  \
\
	MDESC(c,   cimap_cmsm,  get_mailbox_folders_acls,              2,4,0,1,      "Nelze vylistovat ACLs slo¾ek daného mailboxu." ) \
	MDESC(c,   cimap_cmsm,  get_mailbox_folder_acl,                2,4,0,2,      "Nelze vylistovat ACL dané slo¾ky mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_folder_acl,                2,4,0,3,      "Nelze zmìnit ACL záznam slo¾ky daného mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_folder_anyone_acl,         2,4,0,4,      "Nelze zmìnit 'anyone' ACL záznam slo¾ky daného mailboxu." ) \
	MDESC(c,   cimap_cmsm,  subscribe_shared_mailbox_folder_to_grantee, 2,4,0,5,      "Nelze pøihlásit u¾ivatele k odbìru sdílené slo¾ky." ) \
	MDESC(c,   cimap_cmsm,  unsubscribe_shared_mailbox_folder_from_grantee, 2,4,0,6,  "Nelze odhlásit u¾ivatele z odbìru sdílené slo¾ky." ) \
\
	MDESC(c,   cimap_cmsm,  set_dkim,                              2,5,0,1,      "Nelze nastavit DKIM podepisování domény." ) \
	MDESC(c,   cimap_cmsm,  get_dkim,                              2,5,0,2,      "Nelze zjistit stav DKIM podepisování domény." ) \


// cimap responses
#define CIMAP_RESP(c) \
	MDESC(c,   cimap_resp,  invalid_domain_name,            2,0,0,30001,      "Chybný formát jména domény.") \
	MDESC(c,   cimap_resp,  missing_domain_name,            2,0,0,30002,      "Chybí jméno domény.") \
	MDESC(c,   cimap_resp,  domain_not_found,               2,0,0,30003,      "Doména neexistuje.") \
	MDESC(c,   cimap_resp,  db_error,                       2,0,0,30004,      "Chyba pøi pøístupu k databázi.") \
	MDESC(c,   cimap_resp,  invalid_user_name,              2,0,0,30005,      "Chybný formát u¾ivatelského jména (názvu mailboxu).") \
	MDESC(c,   cimap_resp,  missing_user_name,              2,0,0,30006,      "Chybí u¾ivatelské jméno (název mailboxu)") \
	MDESC(c,   cimap_resp,  max_mailbox_count_not_found,    2,0,0,30007,      "Maximální poèet mailboxù domény nenalezen.") \
	MDESC(c,   cimap_resp,  missing_max_mailbox_count,      2,0,0,30008,      "Chybí maximální poèet mailboxù domény.") \
	MDESC(c,   cimap_resp,  invalid_max_mailbox_count,      2,0,0,30009,      "Chybný formát hodnoty maximálního poètu mailboxù domény.") \
	MDESC(c,   cimap_resp,  username_not_found,             2,0,0,30010,      "U¾ivatelské jméno (název mailboxu) nenalezeno.") \
	MDESC(c,   cimap_resp,  password_not_found,             2,0,0,30011,      "Heslo nenalezeno.") \
	MDESC(c,   cimap_resp,  password_not_set,               2,0,0,30012,      "Heslo není nastaveno.") \
	MDESC(c,   cimap_resp,  missing_password,               2,0,0,30013,      "Chybí heslo.") \
	MDESC(c,   cimap_resp,  invalid_password,               2,0,0,30014,      "Chybný formát hesla.") \
	MDESC(c,   cimap_resp,  mailbox_count_not_found,        2,0,0,30015,      "Poèet mailboxù neznámý.") \
	MDESC(c,   cimap_resp,  missing_alias,                  2,0,0,30016,      "Chybí alias.") \
	MDESC(c,   cimap_resp,  invalid_alias,                  2,0,0,30017,      "Chybný formát aliasu.") \
	MDESC(c,   cimap_resp,  alias_exists_as_mailbox,        2,0,0,30018,      "Daný alias u¾ existuje jako mailbox.") \
	MDESC(c,   cimap_resp,  alias_not_found,                2,0,0,30019,      "Alias nenalezen.") \
	MDESC(c,   cimap_resp,  missing_forward,                2,0,0,30020,      "Chybí pøesmìrování.") \
	MDESC(c,   cimap_resp,  invalid_forward,                2,0,0,30021,      "Chybný formát pøesmìrování.") \
	MDESC(c,   cimap_resp,  forward_not_found,              2,0,0,30022,      "Pøesmìrování nenalezeno.") \
	MDESC(c,   cimap_resp,  unable_to_set_forward_local_copy, 2,0,0,30023,    "Nastavení pøíznaku lokální kopie pøi pøesmìrování z mailboxu selhalo.") \
	MDESC(c,   cimap_resp,  invalid_fwd_local_copy,         2,0,0,30024,      "Chybný formát pøíznaku lokální kopie pøi pøesmìrování.") \
	MDESC(c,   cimap_resp,  missing_fwd_local_copy,         2,0,0,30025,      "Chybí pøíznak lokální kopie pøi pøesmìrování.") \
	MDESC(c,   cimap_resp,  perl_error,                     2,0,0,30026,      "Chyba pøi volání embedded perlu.") \
	MDESC(c,   cimap_resp,  cannot_delete_postmaster_mailbox, 2,0,0,30027,    "Odstranìní mailboxu 'postmaster' není dovoleno.") \
	MDESC(c,   cimap_resp,  username_already_exists,        2,0,0,30028,      "Dané u¾ivatelské jméno (název mailboxu) ji¾ existuje.") \
	MDESC(c,   cimap_resp,  too_many_mailboxes,             2,0,0,30029,      "Pøíli¹ mnoho mailboxù, byl dosa¾en maximální poèet mailboxù pro danou doménu.") \
	MDESC(c,   cimap_resp,  domain_already_exists,          2,0,0,30030,      "Daná doména ji¾ existuje.") \
	MDESC(c,   cimap_resp,  cannot_create_postmaster_mailbox, 2,0,0,30031,    "Chyba pøi vytváøení mailboxu 'postmaster'.") \
	MDESC(c,   cimap_resp,  cannot_delete_user_mailboxes,   2,0,0,30032,      "Nelze odstranit jeden èi více mailboxù.") \
	MDESC(c,   cimap_resp,  domain_alias_already_exists_as_domain, 2,0,0,30033, "Doména stejného jména jako doménový alias ji¾ existuje.") \
	MDESC(c,   cimap_resp,  invalid_domain_alias_name,      2,0,0,30034,      "Chybný formát jména doménového aliasu.") \
	MDESC(c,   cimap_resp,  missing_domain_alias_name,      2,0,0,30035,      "Chybí jméno doménového aliasu.") \
	MDESC(c,   cimap_resp,  invalid_auto_password_value,    2,0,0,30036,      "Chybná hodnota parametru auto_password.") \
	MDESC(c,   cimap_resp,  domain_alias_exists_as_domain,  2,0,0,30037,      "Doména tohoto jména není doménový alias.") \
	MDESC(c,   cimap_resp,  ns_dns_query_failed,            2,0,0,30038,      "Do¹lo k chybì pøi dotazu na NS záznamy domény v DNS.") \
	MDESC(c,   cimap_resp,  mx_dns_query_failed,            2,0,0,30039,      "Do¹lo k chybì pøi dotazu na MX záznamy domény v DNS.") \
	MDESC(c,   cimap_resp,  cyrus_imap_admin_new_failed,    2,0,0,30040,      "Chyba pøi vytváøení spojení s IMAP serverem (nelze vytvoøit objekt spojení).") \
	MDESC(c,   cimap_resp,  cyrus_imap_admin_connect_failed, 2,0,0,30041,     "Chyba pøi vytváøení spojení s IMAP serverem (nelze otevøít spojení se serverem).") \
	MDESC(c,   cimap_resp,  cyrus_imap_admin_auth_failed,   2,0,0,30042,      "Chyba pøi vytváøení spojení s IMAP serverem (autentizace selhala).") \
	MDESC(c,   cimap_resp,  cyrus_imap_admin_not_connected, 2,0,0,30043,      "Spojení s IMAP serverem nebylo navázáno nebo bylo následnì pøeru¹eno.") \
	MDESC(c,   cimap_resp,  perl_internal_error_rcnt1,      2,0,0,30044,      "Vnitøní chyba v CMS serveru (CImap perl, vnitøní identifikace chyby: 'rcnt1').") \
	MDESC(c,   cimap_resp,  perl_create_mailbox_failed,     2,0,0,30045,      "Chyba pøi vytváøení fyzického mailboxu na IMAP serveru.") \
	MDESC(c,   cimap_resp,  perl_internal_error_rcnt2,      2,0,0,30046,      "Vnitøní chyba v CMS serveru (CImap perl, vnitøní identifikace chyby: 'rcnt2').") \
	MDESC(c,   cimap_resp,  perl_internal_error_mimpu,      2,0,0,30047,      "Vnitøní chyba v CMS serveru (CImap perl, vnitøní identifikace chyby: 'mimpu').") \
	MDESC(c,   cimap_resp,  perl_delete_mailbox_setacl_failed, 2,0,0,30048,   "Nelze zmìnit pøístupová práva (ACL) k fyzickému mailboxu pøed jeho odstranìním.") \
	MDESC(c,   cimap_resp,  perl_delete_mailbox_failed,     2,0,0,30049,      "Chyba pøi odstraòování fyzického mailboxu na IMAP serveru.") \
	MDESC(c,   cimap_resp,  perl_apg_failed,                2,0,0,30050,      "Generátor náhodných hesel selhal.") \
	MDESC(c,   cimap_resp,  perl_apg_returned_empty_pwd,    2,0,0,30051,      "Generátor náhodných hesel vrátil prázdné heslo.") \
	MDESC(c,   cimap_resp,  alias_domain_mismatch,          2,0,0,30052,      "Doména aliasu neodpovídá doménì cílového mailboxu.") \
	MDESC(c,   cimap_resp,  missing_quota_type,             2,0,0,30053,      "Schází typ kvóty.") \
	MDESC(c,   cimap_resp,  invalid_quota_type,             2,0,0,30054,      "Chybný formát typu kvóty.") \
	MDESC(c,   cimap_resp,  missing_quota,                  2,0,0,30055,      "Schází kvóta.") \
	MDESC(c,   cimap_resp,  invalid_quota,                  2,0,0,30056,      "Chybný formát kvóty.") \
	MDESC(c,   cimap_resp,  quota_not_found,                2,0,0,30057,      "Kvóta nenalezena.") \
	MDESC(c,   cimap_resp,  perl_quota_command_failed,      2,0,0,30058,      "Chyba pøi zji¹»ování stavu kvóty na IMAP serveru.") \
	MDESC(c,   cimap_resp,  perl_quotaroot_not_found,       2,0,0,30059,      "Koøen kvóty na IMAP serveru nenalezen.") \
	MDESC(c,   cimap_resp,  perl_setquota_command_failed,   2,0,0,30060,      "Chyba pøi nastavování kvóty na IMAP serveru.") \
	MDESC(c,   cimap_resp,  account_not_found,              2,0,0,30061,      "Úèet nenalezen.") \
	MDESC(c,   cimap_resp,  missing_uid,                    2,0,0,30062,      "Chybí èíslo u¾ivatelského úètu.") \
	MDESC(c,   cimap_resp,  invalid_uid,                    2,0,0,30063,      "Chybný formát èísla u¾ivatelského úètu.") \
	MDESC(c,   cimap_resp,  postmaster_account_not_found,   2,0,0,30064,      "Pøihla¹ovací úèet postmastera domény nenalezen.") \
	MDESC(c,   cimap_resp,  quota_type_change_unsupported,  2,0,0,30065,      "Nepodporovaný typ zmìny kvóty.") \
	MDESC(c,   cimap_resp,  cannot_delete_special_alias,    2,0,0,30066,      "Speciální aliasy (root, abuse) nelze odstranit.") \
	MDESC(c,   cimap_resp,  cannot_change_special_alias,    2,0,0,30067,      "Speciální aliasy (root, abuse) nelze zmìnit.") \
	MDESC(c,   cimap_resp,  alias_already_exists,           2,0,0,30068,      "Alias ji¾ existuje a odkazuje na jiný mailbox.") \
	MDESC(c,   cimap_resp,  plain_pwd_not_available,        2,0,0,30069,      "Heslo v ne¹ifrovaném tvaru není k dispozici.") \
	MDESC(c,   cimap_resp,  domain_note_not_found,          2,0,0,30070,      "Poznámka k doménì nenalezena.") \
	MDESC(c,   cimap_resp,  missing_note_type,              2,0,0,30071,      "Schází typ poznámky.") \
	MDESC(c,   cimap_resp,  invalid_note_type,              2,0,0,30072,      "Chybný formát typu poznámky.") \
	MDESC(c,   cimap_resp,  missing_note,                   2,0,0,30073,      "Schází poznámka.") \
	MDESC(c,   cimap_resp,  missing_ntid,                   2,0,0,30074,      "Schází identifikátor poznámky.") \
	MDESC(c,   cimap_resp,  invalid_ntid,                   2,0,0,30075,      "Chybný formát identifikátoru poznámky.") \
	MDESC(c,   cimap_resp,  missing_search_param,           2,0,0,30076,      "Schází parametr vyhledávání.") \
	MDESC(c,   cimap_resp,  sm_delete_mailbox_incomplete,   2,0,0,30077,      "Odstranìní mailboxu nebylo zcela dokonèeno, mailbox není v konzistentním stavu.") \
	MDESC(c,   cimap_resp,  sm_delete_domain_incomplete,    2,0,0,30078,      "Odstranìní domény nebylo zcela dokonèeno, doména není v konzistentním stavu.") \
	MDESC(c,   cimap_resp,  sm_create_mailbox_incomplete,   2,0,0,30079,      "Vytvoøení mailboxu nebylo zcela dokonèeno, mailbox není v konzistentním stavu.") \
	MDESC(c,   cimap_resp,  sm_create_mailbox_rollbacked,   2,0,0,30080,      "Vytvoøení mailboxu opakovanì selhalo.") \
	MDESC(c,   cimap_resp,  sm_create_domain_incomplete,    2,0,0,30081,      "Vytvoøení domény nebylo zcela dokonèeno, doména není v konzistentním stavu.") \
	MDESC(c,   cimap_resp,  sm_create_domain_rollbacked,    2,0,0,30082,      "Vytvoøení domény opakovanì selhalo.") \
	MDESC(c,   cimap_resp,  randpass_failed,                2,0,0,30083,      "Generátor náhodných hesel selhal.") \
	MDESC(c,   cimap_resp,  migr_cannot_connect_to_src_imap, 2,0,0,30084,      "Nelze se pøihlásit k výchozímu IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_cannot_connect_to_dst_imap, 2,0,0,30085,      "Nelze se pøihlásit k cílovému IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_general_error,             2,0,0,30086,      "Nespecifikovaná chyba pøi migraci mailboxu.") \
	MDESC(c,   cimap_resp,  migr_cannot_fetch_folders,      2,0,0,30087,      "Nelze zjistit seznam slo¾ek mailboxu z IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_cannot_select_folder,      2,0,0,30088,      "Nelze vybrat slo¾ku mailboxu na IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_folder_migration_failed,   2,0,0,30089,      "Do¹lo k chybì pøi kopírování dat na cílový IMAP server.") \
	MDESC(c,   cimap_resp,  migr_incomplete_mailboxe,       2,0,0,30090,      "Do¹lo k chybì pøi kopírování dat na cílový IMAP server, èást dat mailboxu v¹ak ji¾ byla pøesunuta a jejich odstranìní selhalo.") \
	MDESC(c,   cimap_resp,  migr_incompatible_imap_seps,    2,0,0,30091,      "Konvence názvù slo¾ek na IMAP serverech nejsou kompatibilní.") \
	MDESC(c,   cimap_resp,  missing_mail_server,            2,0,0,30092,      "Chybí cílový mailserver.") \
	MDESC(c,   cimap_resp,  mail_server_not_found,          2,0,0,30093,      "Cílový mailserver nebyl nalezen.") \
	MDESC(c,   cimap_resp,  invalid_mail_server,            2,0,0,30094,      "Chybný formát cílového mailserveru.") \
	MDESC(c,   cimap_resp,  missing_src_imap,               2,0,0,30095,      "Chybí výchozí IMAP server.") \
	MDESC(c,   cimap_resp,  invalid_src_imap,               2,0,0,30096,      "Chybný formát výchozího IMAP serveru.") \
	MDESC(c,   cimap_resp,  invalid_dst_imap,               2,0,0,30097,      "Chybný formát cílového IMAP serveru.") \
	MDESC(c,   cimap_resp,  cannot_exec_migr_process,       2,0,0,30098,      "Neze spustit proces migrace mailboxù.") \
	MDESC(c,   cimap_resp,  migr_process_error,             2,0,0,30099,      "Chyba procesu migrace mailboxù.") \
	MDESC(c,   cimap_resp,  migr_process_output_error,      2,0,0,30100,      "Chyba ve výstupu procesu migrace mailboxù.") \
	MDESC(c,   cimap_resp,  migr_process_finished_with_errors, 2,0,0,30101,   "Proces migrace mailboxù skonèil s chybami.") \
	MDESC(c,   cimap_resp,  migr_mailbox_error,             2,0,0,30102,      "Migrace mailboxu selhala.") \
	MDESC(c,   cimap_resp,  invalid_override_param,         2,0,0,30103,      "Chybná hodnota parametru override.") \
	MDESC(c,   cimap_resp,  transport_not_found,            2,0,0,30104,      "Transport po¹ty pro danou doménu nenalezen.") \
	MDESC(c,   cimap_resp,  forward_alias_loop,             2,0,0,30105,      "Pøesmìrování ukazuje na alias k výchozímu mailboxu.") \
	MDESC(c,   cimap_resp,  relay_user_not_found,           2,0,0,30106,      "U¾ivatel relaye nenalezen.") \
	MDESC(c,   cimap_resp,  missing_relay_user,             2,0,0,30107,      "Schází parametr u¾ivatele relaye.") \
	MDESC(c,   cimap_resp,  invalid_relay_user,             2,0,0,30108,      "Chybný formát u¾ivatele relaye.") \
	MDESC(c,   cimap_resp,  invalid_relay_all,              2,0,0,30109,      "Chybný formát parametru relay_all.") \
	MDESC(c,   cimap_resp,  imap_client_connect_failed,     2,0,0,30110,      "Nelze se pøihlásit k IMAP serveru.") \
	MDESC(c,   cimap_resp,  imap_client_cannot_create_folder, 2,0,0,30111,    "Nelze vytvoøit po¾adovanou slo¾ku v mailboxu.") \
	MDESC(c,   cimap_resp,  imap_client_cannot_logout,      2,0,0,30112,      "Nelze se odhlásit od IMAP serveru.") \
	MDESC(c,   cimap_resp,  missing_dst_imap,               2,0,0,30113,      "Chybí parametr cílového IMAP serveru.") \
	MDESC(c,   cimap_resp,  domain_mail_server_not_found,   2,0,0,30114,      "Nenalezen mailserver na kterém le¾í daná doména.") \
	MDESC(c,   cimap_resp,  invalid_mail_server_ip_route,   2,0,0,30115,      "Chybné nastavení server_map.server_route pro daný mailserver.") \
	MDESC(c,   cimap_resp,  invalid_mail_server_ip_address, 2,0,0,30116,      "Chybná IP adresa v server_map.server_route pro daný mailserver.") \
	MDESC(c,   cimap_resp,  missing_mail_server_name,       2,0,0,30117,      "Chybí jméno po¹tovního serveru.") \
	MDESC(c,   cimap_resp,  invalid_mail_server_name,       2,0,0,30118,      "Chybný formát jména po¹tovního serveru.") \
	MDESC(c,   cimap_resp,  missing_local_mail_servers,     2,0,0,30119,      "Chybí parametr local_mail_servers.") \
	MDESC(c,   cimap_resp,  invalid_local_mail_servers,     2,0,0,30120,      "Chybná hodnota parametru local_mail_servers.") \
	MDESC(c,   cimap_resp,  missing_folder_param,           2,0,0,30121,      "Chybí parametr folder.") \
	MDESC(c,   cimap_resp,  empty_folder_param,             2,0,0,30122,      "Parametr folder je prázdný.") \
	MDESC(c,   cimap_resp,  migr_cannot_create_dst_folder,  2,0,0,30123,      "Nelze vytvoøit slo¾ku mailboxu na cílovém IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_cannot_subscribe_folder,   2,0,0,30124,      "Nelze se pøihlásit k slo¾ce mailboxu na cílovém IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_cannot_select_dst_folder,  2,0,0,30125,      "Nelze vybrat slo¾ku mailboxu na cílovém IMAP serveru.") \
	MDESC(c,   cimap_resp,  alias_too_long,                 2,0,0,30126,      "Alias je pøíli¹ dlouhý.") \
	MDESC(c,   cimap_resp,  invalid_src_user_name,          2,0,0,30127,      "Chybný formát zdrojového u¾ivatelského jména (názvu mailboxu).") \
	MDESC(c,   cimap_resp,  missing_src_user_name,          2,0,0,30128,      "Chybí zdrojové u¾ivatelské jméno (název mailboxu).") \
	MDESC(c,   cimap_resp,  src_username_not_found,         2,0,0,30129,      "Zdrojové u¾ivatelské jméno (název mailboxu) nenalezeno.") \
	MDESC(c,   cimap_resp,  src_imap_does_not_match,        2,0,0,30130,      "Zdrojový IMAP server neodpovídá serveru ze kterého probíhá migrace." ) \
	MDESC(c,   cimap_resp,  dst_imap_does_not_match,        2,0,0,30131,      "Cílový IMAP server neodpovídá serveru na který probíhá migrace.") \
	MDESC(c,   cimap_resp,  invalid_migration_status,       2,0,0,30132,      "Nepøípustný stav migrace.") \
	MDESC(c,   cimap_resp,  data_migration_not_possible,    2,0,0,30133,      "Migrace dat není mo¾ná.") \
	MDESC(c,   cimap_resp,  domain_migration_info_not_found,2,0,0,30134,      "Informace o stavu migrace nenalezeny.") \
	MDESC(c,   cimap_resp,  source_and_dest_mail_servers_are_the_same, 2,0,0,30135,  "Cílový mailserver je toto¾ný se zdrojovým mailserverem.") \
	MDESC(c,   cimap_resp,  domain_is_being_migrated,       2,0,0,30136,      "Doména je právì migrována." ) \
	MDESC(c,   cimap_resp,  dest_mail_server_contains_zombie_mailboxes, 2,0,0,30137, "Cílový mailserver obsahuje zombie mailboxù té¾e domény z døívìj¹ích migrací.") \
	MDESC(c,   cimap_resp,  cannot_inject_email,            2,0,0,30138,      "Nepodaøilo se vlo¾it email do cílového mailboxu.") \
	MDESC(c,   cimap_resp,  invalid_email_data,             2,0,0,30139,      "Chybná data emailu.") \
	MDESC(c,   cimap_resp,  missing_email_data,             2,0,0,30140,      "Chybí data emailu.") \
	MDESC(c,   cimap_resp,  missing_email_body_bindata,     2,0,0,30141,      "Chybí binární data s tìlem emailu.") \
	MDESC(c,   cimap_resp,  invalid_email_body_bindata,     2,0,0,30142,      "Chybná binární data s tìlem emailu.") \
	MDESC(c,   cimap_resp,  missing_raw_email_param,        2,0,0,30143,      "Schází parametr raw_email.") \
	MDESC(c,   cimap_resp,  invalid_raw_email_param,        2,0,0,30144,      "Chybná hodnota parametru raw_email.") \
	MDESC(c,   cimap_resp,  missing_from,                   2,0,0,30145,      "Schází parametr from.") \
	MDESC(c,   cimap_resp,  invalid_from,                   2,0,0,30146,      "Chybná hodnota parametru from.") \
	MDESC(c,   cimap_resp,  missing_subject,                2,0,0,30147,      "Schází parametr subject.") \
	MDESC(c,   cimap_resp,  invalid_subject,                2,0,0,30148,      "Chybná hodnota parametru subject.") \
	MDESC(c,   cimap_resp,  domain_is_not_being_migrated,   2,0,0,30149,      "Podle záznamù v databazi neprobíhá migrace této domény.") \
	MDESC(c,   cimap_resp,  remove_migrated_zombies_already_running, 2,0,0,30150, "Odstraòování zombies odmigrovaných mailboxù právì probíhá a není mo¾né jej spustit dvakrát.") \
	MDESC(c,   cimap_resp,  perl_delete_mailbox_not_found,  2,0,0,30151,      "Chyba pøi odstraòování fyzického mailboxu na IMAP serveru - mailbox nenalezen.") \
	MDESC(c,   cimap_resp,  domain_has_zombies_on_mail_server, 2,0,0,30152,   "Doména má zombie mailboxy na cílovém mailserveru.") \
	MDESC(c,   cimap_resp,  invalid_expect_overquota,        2,0,0,30153,      "Chybná hodnota parametru expect_overquota.") \
	MDESC(c,   cimap_resp,  missing_expect_overquota,        2,0,0,30154,      "Chybí parametr expect_overquota.") \
	MDESC(c,   cimap_resp,  perl_rmquota_command_failed,     2,0,0,30155,      "Chyba pøi ru¹ení kvóty na IMAP serveru.") \
	MDESC(c,   cimap_resp,  missing_msid,                    2,0,0,30156,      "Schází parametr msid.") \
	MDESC(c,   cimap_resp,  invalid_msid,                    2,0,0,30157,      "Chybná hodnota parametru msid.") \
	MDESC(c,   cimap_resp,  missing_bulk_size,               2,0,0,30158,      "Schází parametr bulk_size.") \
	MDESC(c,   cimap_resp,  invalid_bulk_size,               2,0,0,30159,      "Chybná hodnota parametru bulk_size.") \
	MDESC(c,   cimap_resp,  missing_last_domain,             2,0,0,30160,      "Schází parametr last_domain.") \
	MDESC(c,   cimap_resp,  invalid_last_domain,             2,0,0,30161,      "Chybná hodnota parametru last_domain.") \
	MDESC(c,   cimap_resp,  msid_not_found,                  2,0,0,30162,      "Mail server s daným identifikátorem msid nenalezen.") \
	MDESC(c,   cimap_resp,  mailbox_record_not_found,        2,0,0,30163,      "Nenalezen pøíslu¹ný záznam v tabulce mailboxes.") \
	MDESC(c,   cimap_resp,  missing_block,                   2,0,0,30164,      "Chybí parametr 'block'.") \
	MDESC(c,   cimap_resp,  invalid_block,                   2,0,0,30165,      "Chybná hodnota parametru 'block'.") \
	MDESC(c,   cimap_resp,  missing_enable_rbl,              2,0,0,30166,      "Chybí parametr 'enable_rbl'.") \
	MDESC(c,   cimap_resp,  invalid_enable_rbl,              2,0,0,30167,      "Chybná hodnota parametru 'enable_rbl'.") \
	MDESC(c,   cimap_resp,  missing_disable_blocking,        2,0,0,30168,      "Chybí parametr 'disable_blocking'.") \
	MDESC(c,   cimap_resp,  invalid_disable_blocking,        2,0,0,30169,      "Chybná hodnota parametru 'disable_blocking'.") \
	MDESC(c,   cimap_resp,  invalid_domain_alias_virtual_map_entry, 2,0,0,30170, "Chybný záznam doménového aliasu ve virtuálních mapách.") \
	MDESC(c,   cimap_resp,  invalid_alias_virtual_map_entry, 2,0,0,30171,      "Chybný záznam aliasu ve virtuálních mapách.") \
	MDESC(c,   cimap_resp,  unsupported_quota_type,          2,0,0,30172,      "Nepodporovaný typ kvóty." ) \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_not_found,   2,0,0,30173,      "Individuální kvóta mailboxu nenalezena." ) \
	MDESC(c,   cimap_resp,  invalid_quota_mb_min_max_limits, 2,0,0,30174,      "Neplatné limity minimální a maximální velikosti kvóty mailboxu." ) \
	MDESC(c,   cimap_resp,  invalid_quota_mb_def_limit,      2,0,0,30175,      "Neplatný limit defaultní kvóty mailboxu." ) \
	MDESC(c,   cimap_resp,  missing_quota_mb_min,            2,0,0,30176,      "Chybí parametr 'quota_mb_min'.") \
	MDESC(c,   cimap_resp,  invalid_quota_mb_min,            2,0,0,30177,      "Chybná hodnota parametru 'quota_mb_min'.") \
	MDESC(c,   cimap_resp,  missing_quota_mb_max,            2,0,0,30178,      "Chybí parametr 'quota_mb_max'.") \
	MDESC(c,   cimap_resp,  invalid_quota_mb_max,            2,0,0,30179,      "Chybná hodnota parametru 'quota_mb_max'.") \
	MDESC(c,   cimap_resp,  missing_quota_mb_def,            2,0,0,30180,      "Chybí parametr 'quota_mb_def'.") \
	MDESC(c,   cimap_resp,  invalid_quota_mb_def,            2,0,0,30181,      "Chybná hodnota parametru 'quota_mb_def'.") \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_over_mb_max, 2,0,0,30182,      "Kvóta daného mailboxu je vy¹¹í ne¾ maximální limit pro danou doménu." ) \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_under_mb_min, 2,0,0,30183,     "Kvóta daného mailboxu je ni¾¹í ne¾ minimální limit pro danou doménu." ) \
	MDESC(c,   cimap_resp,  mailboxes_violate_domain_quota_restrictions, 2,0,0,30184, "Jeden nebo více mailboxù poru¹uje limity omezení kvót pro danou doménu." ) \
	MDESC(c,   cimap_resp,  mailboxes_over_quota_total,      2,0,0,30185,      "Souèet kvót mailboxù pøekraèuje celkovou kvótu domény." ) \
	MDESC(c,   cimap_resp,  missing_quota_total,             2,0,0,30186,      "Chybí parametr 'quota_total'.") \
	MDESC(c,   cimap_resp,  invalid_quota_total,             2,0,0,30187,      "Chybná hodnota parametru 'quota_total'.") \
	MDESC(c,   cimap_resp,  missing_quota_limit,             2,0,0,30188,      "Chybí parametr 'quota_limit'.") \
	MDESC(c,   cimap_resp,  invalid_quota_limit,             2,0,0,30189,      "Chybná hodnota parametru 'quota_limit'.") \
	MDESC(c,   cimap_resp,  mailbox_quota_ex_not_found,      2,0,0,30190,      "Nenalezeny informace o nastavení kvóty daného mailboxu." ) \
	MDESC(c,   cimap_resp,  missing_qw_check,                2,0,0,30191,      "Chybí parametr 'qw_check'.") \
	MDESC(c,   cimap_resp,  invalid_qw_check,                2,0,0,30192,      "Chybná hodnota parametru 'qw_check'.") \
	MDESC(c,   cimap_resp,  missing_relay_all,               2,0,0,30193,      "Chybí parametr 'relay_all'.") \
	MDESC(c,   cimap_resp,  missing_qw_udelay,               2,0,0,30194,      "Chybí parametr 'qw_udelay'.") \
	MDESC(c,   cimap_resp,  invalid_qw_udelay,               2,0,0,30195,      "Chybná hodnota parametru 'qw_udelay'.") \
	MDESC(c,   cimap_resp,  missing_qw_adelay,               2,0,0,30196,      "Chybí parametr 'qw_adelay'.") \
	MDESC(c,   cimap_resp,  invalid_qw_adelay,               2,0,0,30197,      "Chybná hodnota parametru 'qw_adelay'.") \
	MDESC(c,   cimap_resp,  missing_qw_llim,                 2,0,0,30198,      "Chybí parametr 'qw_llim'.") \
	MDESC(c,   cimap_resp,  invalid_qw_llim,                 2,0,0,30199,      "Chybná hodnota parametru 'qw_llim'.") \
	MDESC(c,   cimap_resp,  missing_qw_hlim,                 2,0,0,30200,      "Chybí parametr 'qw_hlim'.") \
	MDESC(c,   cimap_resp,  invalid_qw_hlim,                 2,0,0,30201,      "Chybná hodnota parametru 'qw_hlim'.") \
	MDESC(c,   cimap_resp,  missing_qw_xlim,                 2,0,0,30202,      "Chybí parametr 'qw_xlim'.") \
	MDESC(c,   cimap_resp,  invalid_qw_xlim,                 2,0,0,30203,      "Chybná hodnota parametru 'qw_xlim'.") \
	MDESC(c,   cimap_resp,  missing_admin_email,             2,0,0,30204,      "Chybí parametr 'admin_email'.") \
	MDESC(c,   cimap_resp,  invalid_admin_email,             2,0,0,30205,      "Chybná hodnota parametru 'admin_email'.") \
	MDESC(c,   cimap_resp,  invalid_mailbox_quotawarn_limits,2,0,0,30206,      "Chybné limity hlídaní obsazeného prostoru mailboxu." ) \
	MDESC(c,   cimap_resp,  invalid_domain_quotawarn_limits, 2,0,0,30207,      "Chybné limity hlídaní obsazeného prostoru domény." ) \
	MDESC(c,   cimap_resp,  mailboxes_violate_quotawarn_restrictions, 2,0,0,30208, "Jeden nebo více mailboxù poru¹uje pravidla limitù hlídaní obsazeného prostoru pro danou doménu." ) \
	MDESC(c,   cimap_resp,  missing_qw_email,                2,0,0,30209,      "Chybí parametr 'qw_email'.") \
	MDESC(c,   cimap_resp,  invalid_qw_email,                2,0,0,30210,      "Chybná hodnota parametru 'qw_email'.") \
	MDESC(c,   cimap_resp,  missing_language,                2,0,0,30211,      "Chybí parametr 'language'.") \
	MDESC(c,   cimap_resp,  invalid_language,                2,0,0,30212,      "Chybná hodnota parametru 'language'.") \
	MDESC(c,   cimap_resp,  missing_effective,               2,0,0,30213,      "Chybí parametr 'effective'.") \
	MDESC(c,   cimap_resp,  invalid_effective,               2,0,0,30214,      "Chybná hodnota parametru 'effective'.") \
	MDESC(c,   cimap_resp,  domain_is_stopped,               2,0,0,30215,      "Doména má zastavené po¹tovní slu¾by." ) \
	MDESC(c,   cimap_resp,  missing_can_edit,                2,0,0,30216,      "Schází parametr 'can_edit'.") \
	MDESC(c,   cimap_resp,  invalid_can_edit,                2,0,0,30217,      "Chybná hodnota parametru 'can_edit'.") \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_below_usage, 2,0,0,30218,      "Disková kvóta mailboxu je ni¾¹í ne¾ jeho aktuální obsazený prostor.") \
	MDESC(c,   cimap_resp,  domains_must_differ,             2,0,0,30219,      "Domény musí být rùzné.") \
	MDESC(c,   cimap_resp,  src_domain_not_found,            2,0,0,30220,      "Zdrojová doména neexistuje.") \
	MDESC(c,   cimap_resp,  dst_domain_not_found,            2,0,0,30221,      "Cílová doména neexistuje.") \
	MDESC(c,   cimap_resp,  missing_src_domain,              2,0,0,30222,      "Schází parametr 'src_domain'.") \
	MDESC(c,   cimap_resp,  invalid_src_domain,              2,0,0,30223,      "Chybná hodnota parametru 'src_domain'.") \
	MDESC(c,   cimap_resp,  missing_dst_domain,              2,0,0,30224,      "Schází parametr 'dst_domain'.") \
	MDESC(c,   cimap_resp,  invalid_dst_domain,              2,0,0,30225,      "Chybná hodnota parametru 'dst_domain'.") \
	MDESC(c,   cimap_resp,  missing_merge,                   2,0,0,30226,      "Schází parametr 'merge'.") \
	MDESC(c,   cimap_resp,  invalid_merge,                   2,0,0,30227,      "Chybná hodnota parametru 'merge'.") \
	MDESC(c,   cimap_resp,  log_server_mcid_not_found,       2,0,0,30228,      "Nenalezeno mcid serveru s logy (chybný nebo neexistující název serveru s logy?).") \
	MDESC(c,   cimap_resp,  missing_log_filter,              2,0,0,30229,      "Schází parametr 'log_filter'.") \
	MDESC(c,   cimap_resp,  invalid_log_filter,              2,0,0,30230,      "Chybná hodnota parametru 'log_filter'.") \
	MDESC(c,   cimap_resp,  missing_report_email,            2,0,0,30231,      "Schází parametr 'report_email'.") \
	MDESC(c,   cimap_resp,  invalid_report_email,            2,0,0,30232,      "Chybná hodnota parametru 'report_email'.") \
	MDESC(c,   cimap_resp,  missing_find_email,              2,0,0,30233,      "Schází parametr 'find_email'.") \
	MDESC(c,   cimap_resp,  invalid_find_email,              2,0,0,30234,      "Chybná hodnota parametru 'find_email'.") \
	MDESC(c,   cimap_resp,  missing_start_date,              2,0,0,30235,      "Schází parametr 'start_date'.") \
	MDESC(c,   cimap_resp,  invalid_start_date,              2,0,0,30236,      "Chybná hodnota parametru 'start_date'.") \
	MDESC(c,   cimap_resp,  missing_end_date,                2,0,0,30237,      "Schází parametr 'end_date'.") \
	MDESC(c,   cimap_resp,  invalid_end_date,                2,0,0,30238,      "Chybná hodnota parametru 'end_date'.") \
	MDESC(c,   cimap_resp,  invalid_domain_list,             2,0,0,30239,      "Neplatný seznam domén.") \
	MDESC(c,   cimap_resp,  missing_dlid,                    2,0,0,30240,      "Chybí parametr 'dlid'.") \
	MDESC(c,   cimap_resp,  invalid_dlid,                    2,0,0,30241,      "Chybná hodnota parametru 'dlid'.") \
	MDESC(c,   cimap_resp,  domain_alias_already_exists_as_domain_alias, 2,0,0,30242, "Doménový alias stejného jména ji¾ existuje.") \
	MDESC(c,   cimap_resp,  domain_already_exists_as_domain_alias, 2,0,0,30243, "Doména stejného jména ji¾ existuje jako doménový alias.") \
	MDESC(c,   cimap_resp,  domain_alias_is_equal_to_domain, 2,0,0,30244,      "Doménový alias je toto¾ný s doménovým jménem.") \
	MDESC(c,   cimap_resp,  slave_imap_command_not_found,    2,0,0,30245,      "Po¾adovaný slave imap pøíkaz nenalezen.") \
	MDESC(c,   cimap_resp,  slave_imap_command_exception,    2,0,0,30246,      "Po¾adovaný slave imap pøíkaz skonèil výjimkou.") \
	MDESC(c,   cimap_resp,  slave_request_not_queued,        2,0,0,30247,      "Zaøazení slave po¾adavku do fronty bylo odmítnuto.") \
	MDESC(c,   cimap_resp,  slave_wait_for_response_failed,  2,0,0,30248,      "Èekání na vyøízení slave po¾adavku selhalo.") \
	MDESC(c,   cimap_resp,  slave_request_failed,            2,0,0,30249,      "Slave po¾adavek selhal.") \
	MDESC(c,   cimap_resp,  slave_imap_connect_failed,       2,0,0,30250,      "Slave po¾adavek selhal pøi pøipojování k IMAP serveru.") \
	MDESC(c,   cimap_resp,  slave_no_command_result,         2,0,0,30251,      "Slave po¾adavek nevrátil ¾ádný výsledek slave pøíkazu.") \
	MDESC(c,   cimap_resp,  slave_nonnumeric_command_result, 2,0,0,30252,      "Výsledek slave pøíkazu nelze pøevést na numerickou hodnotu.") \
	MDESC(c,   cimap_resp,  missing_qw_lflags,               2,0,0,30253,      "Chybí parametr 'qw_lflags'.") \
	MDESC(c,   cimap_resp,  invalid_qw_lflags,               2,0,0,30254,      "Chybná hodnota parametru 'qw_lflags'.") \
	MDESC(c,   cimap_resp,  missing_qw_hflags,               2,0,0,30255,      "Chybí parametr 'qw_hflags'.") \
	MDESC(c,   cimap_resp,  invalid_qw_hflags,               2,0,0,30256,      "Chybná hodnota parametru 'qw_hflags'.") \
	MDESC(c,   cimap_resp,  missing_qw_xflags,               2,0,0,30257,      "Chybí parametr 'qw_xflags'.") \
	MDESC(c,   cimap_resp,  invalid_qw_xflags,               2,0,0,30258,      "Chybná hodnota parametru 'qw_xflags'.") \
	MDESC(c,   cimap_resp,  missing_qw_dflags,               2,0,0,30259,      "Chybí parametr 'qw_dflags'.") \
	MDESC(c,   cimap_resp,  invalid_qw_dflags,               2,0,0,30260,      "Chybná hodnota parametru 'qw_dflags'.") \
	MDESC(c,   cimap_resp,  missing_qw_specified,            2,0,0,30261,      "Chybí parametr 'qw_specified'.") \
	MDESC(c,   cimap_resp,  invalid_qw_specified,            2,0,0,30262,      "Chybná hodnota parametru 'qw_specified'.") \
	MDESC(c,   cimap_resp,  imap_client_cannot_list_folders, 2,0,0,30263,      "Nelze vylistovat slo¾ky pøíslu¹né schránky na IMAP serveru.") \
	MDESC(c,   cimap_resp,  imap_client_cannot_stat_folder,  2,0,0,30264,      "Nelze zjistit stav nìkteré slo¾ky pøíslu¹né schránky na IMAP serveru.") \
	MDESC(c,   cimap_resp,  imap_client_invalid_folder_status, 2,0,0,30265,    "Chybný stav nìkteré slo¾ky pøíslu¹né schránky na IMAP serveru.") \
	MDESC(c,   cimap_resp,  folder_info_format_error,        2,0,0,30266,      "Chybný formát informací o slo¾ce mailboxu vrácený z backendu." ) \
	MDESC(c,   cimap_resp,  username_already_exists_as_alias,2,0,0,30267,      "Dané u¾ivatelské jméno (název mailboxu) ji¾ existuje jako alias." ) \
	MDESC(c,   cimap_resp,  cannot_subscribe_folder,         2,0,0,30268,      "Nelze se pøihlásit ke slo¾ce mailboxu.") \
	MDESC(c,   cimap_resp,  cannot_unsubscribe_folder,       2,0,0,30269,      "Nelze zru¹it odbìr slo¾ky mailboxu.") \
	MDESC(c,   cimap_resp,  missing_fix_forwards,            2,0,0,30270,      "Chybí parametr 'fix_forwards'.") \
	MDESC(c,   cimap_resp,  invalid_fix_forwards,            2,0,0,30271,      "Chybná hodnota parametru 'fix_forwards'.") \
	MDESC(c,   cimap_resp,  domain_dlid_mismatch,            2,0,0,30272,      "Nesouhlasí oèekávaný a skuteèný seznam domén." ) \
	MDESC(c,   cimap_resp,  illegal_username,                2,0,0,30273,      "Nedovolené u¾ivatelské jméno." ) \
	MDESC(c,   cimap_resp,  missing_smtp_block_reason,       2,0,0,30274,      "Chybí parametr 'smtp_block_reason'." ) \
	MDESC(c,   cimap_resp,  invalid_smtp_block_reason,       2,0,0,30275,      "Chybný parametr 'smtp_block_reason'." ) \
	MDESC(c,   cimap_resp,  missing_sender_forgery_forbidden,2,0,0,30276,      "Chybí parametr 'sender_forgery_forbidden'." ) \
	MDESC(c,   cimap_resp,  invalid_sender_forgery_forbidden,2,0,0,30277,      "Chybný parametr 'sender_forgery_forbidden'." ) \
	MDESC(c,   cimap_resp,  password_is_broken,              2,0,0,30278,      "Dané heslo bylo v minulosti zneu¾ité." ) \
\
	MDESC(c,   cimap_resp,  folder_autoclear_rule_not_found, 2,1,0,30001,      "Pravidlo automatického mazaní pro danou slo¾ku neexistuje.") \
	MDESC(c,   cimap_resp,  zero_check_interval,             2,1,0,30002,      "Interval kontroly nesmí být nulový.") \
	MDESC(c,   cimap_resp,  quota_percents_invalid,          2,1,0,30003,      "Chybné hodnoty horního a dolního limitu procet kvóty.") \
	MDESC(c,   cimap_resp,  quota_percents_order,            2,1,0,30004,      "Chybné poøadí horního a dolního limitu procet kvóty.") \
	MDESC(c,   cimap_resp,  zero_mail_age,                   2,1,0,30005,      "Stáøí mazaných mailù musí být minimálnì jeden den.") \
	MDESC(c,   cimap_resp,  missing_active_param,            2,1,0,30006,      "Chybí parametr 'active'.") \
	MDESC(c,   cimap_resp,  invalid_active_param,            2,1,0,30007,      "Chybná hodnota parametru 'active'.") \
	MDESC(c,   cimap_resp,  missing_recursive_param,         2,1,0,30008,      "Chybí parametr 'recursive'.") \
	MDESC(c,   cimap_resp,  invalid_recursive_param,         2,1,0,30009,      "Chybná hodnota parametru 'recursive'.") \
	MDESC(c,   cimap_resp,  missing_mail_age_used_param,     2,1,0,30010,      "Chybí parametr 'mail_age_used'.") \
	MDESC(c,   cimap_resp,  invalid_mail_age_used_param,     2,1,0,30011,      "Chybná hodnota parametru 'mail_age_used'.") \
	MDESC(c,   cimap_resp,  missing_quota_percent_used_param,2,1,0,30012,      "Chybí parametr 'quota_percent_used'.") \
	MDESC(c,   cimap_resp,  invalid_quota_percent_used_param,2,1,0,30013,      "Chybná hodnota parametru 'quota_percent_used'.") \
	MDESC(c,   cimap_resp,  missing_check_interval_param,    2,1,0,30014,      "Chybí parametr 'check_interval'.") \
	MDESC(c,   cimap_resp,  invalid_check_interval_param,    2,1,0,30015,      "Chybná hodnota parametru 'check_interval'.") \
	MDESC(c,   cimap_resp,  missing_mail_age_param,          2,1,0,30016,      "Chybí parametr 'mail_age'.") \
	MDESC(c,   cimap_resp,  invalid_mail_age_param,          2,1,0,30017,      "Chybná hodnota parametru 'mail_age'.") \
	MDESC(c,   cimap_resp,  missing_quota_percent_hi_param,  2,1,0,30018,      "Chybí parametr 'quota_percent_hi'.") \
	MDESC(c,   cimap_resp,  invalid_quota_percent_hi_param,  2,1,0,30019,      "Chybná hodnota parametru 'quota_percent_hi'.") \
	MDESC(c,   cimap_resp,  missing_quota_percent_lo_param,  2,1,0,30020,      "Chybí parametr 'quota_percent_lo'.") \
	MDESC(c,   cimap_resp,  invalid_quota_percent_lo_param,  2,1,0,30021,      "Chybná hodnota parametru 'quota_percent_lo'.") \
	MDESC(c,   cimap_resp,  avels_script_gen_parse_error,    2,1,0,30022,      "Chyba pøi rozboru popisu stávajících filtrovacích pravidel.") \
	MDESC(c,   cimap_resp,  avels_script_version_not_found,  2,1,0,30023,      "Chyba pøi rozboru popisu stávajících filtrovacích pravidel, nenalezena verze avelsieve.") \
	MDESC(c,   cimap_resp,  avels_script_created_not_found,  2,1,0,30024,      "Chyba pøi rozboru popisu stávajících filtrovacích pravidel, nenalezeno datum a èas vytvoøení.") \
	MDESC(c,   cimap_resp,  avels_script_modified_not_found,  2,1,0,30025,     "Chyba pøi rozboru popisu stávajících filtrovacích pravidel, nenalezeno datum a èas poslední modifikace.") \
	MDESC(c,   cimap_resp,  avels_script_missing_if_before_rule,  2,1,0,30026, "Chyba pøi rozboru popisu stávajících filtrovacích pravidel, chybí 'if' pøed pravidlem.") \
	MDESC(c,   cimap_resp,  avels_script_wr_missing_version, 2,1,0,30027, "Chyba pøi zápisu filtrovacích pravidel, chybí verze avelsieve.") \
	MDESC(c,   cimap_resp,  avels_script_wr_missing_require, 2,1,0,30028, "Chyba pøi zápisu filtrovacích pravidel, chybí øádek 'require'.") \
	MDESC(c,   cimap_resp,  missing_antispam_level_param,    2,1,0,30029,      "Chybí parametr 'antispam_level'.") \
	MDESC(c,   cimap_resp,  invalid_antispam_level_param,    2,1,0,30030,      "Chybná hodnota parametru 'antispam_level'.") \
	MDESC(c,   cimap_resp,  missing_antispam_action_param,   2,1,0,30031,      "Chybí parametr 'antispam_action'.") \
	MDESC(c,   cimap_resp,  invalid_antispam_action_param,   2,1,0,30032,      "Chybná hodnota parametru 'antispam_action'.") \
	MDESC(c,   cimap_resp,  amavis_policy_name_not_found,    2,1,0,30033,      "Pravidlo politiky amavisu s po¾adovaným názvem nenalezeno.") \
	MDESC(c,   cimap_resp,  cannot_connect_to_timsieved,     2,1,0,30034,      "Není mo¾né se pøipojit na vzdáleného sieve démona 'timsieved'.") \
	MDESC(c,   cimap_resp,  cannot_list_sieve_scripts,       2,1,0,30035,      "Chyba pøi zji¹»ování seznamu sieve skriptù.") \
	MDESC(c,   cimap_resp,  cannot_download_sieve_script,    2,1,0,30036,      "Chyba pøi stahování sieve skriptu z IMAP serveru.") \
	MDESC(c,   cimap_resp,  cannot_upload_sieve_script,      2,1,0,30037,      "Chyba pøi pøená¹ení sieve skriptu na IMAP server.") \
	MDESC(c,   cimap_resp,  cimap_client_perl_internal_error, 2,1,0,30038,     "Vnitøní chyba v perlovém skriptu CImapClient.pm.") \
	MDESC(c,   cimap_resp,  cimap_php_unserialize_parse_error, 2,1,0,30039,    "Chyba pøi parsingu avelsieve filtru (php_unserialize).") \
	MDESC(c,   cimap_resp,  cannot_activate_sieve_script,    2,1,0,30040,      "Chyba pøi aktivaci sieve skriptu na IMAP serveru.") \
	MDESC(c,   cimap_resp,  missing_last_rule_id,            2,1,0,30041,      "Chybí parametr 'last_rule_id'.") \
	MDESC(c,   cimap_resp,  invalid_last_rule_id,            2,1,0,30042,      "Chybná hodnota parametru 'last_rule_id'.") \
\
	MDESC(c,   cimap_resp,  batch_domain_backup_dir_is_not_dir, 2,2,0,30001,   "Adresáø záloh struktury domény není adresáøem.") \
	MDESC(c,   cimap_resp,  batch_cannot_create_domain_backup_dir, 2,2,0,30002, "Nelze vytvoøit adresáø záloh struktury domény.") \
	MDESC(c,   cimap_resp,  batch_cannot_create_domain_backup_file, 2,2,0,30003, "Nelze vytvoøit soubor pro zálohu struktury domény.") \
	MDESC(c,   cimap_resp,  batch_cannot_write_domain_backup_file, 2,2,0,30004, "Chyba pøi zápisu souboru zálohy struktury domény.") \
\
	MDESC(c,   cimap_resp,  brq_unknown_action,             2,3,0,30001,      "Neznámá akce (brq)." ) \
	MDESC(c,   cimap_resp,  brq_backend_error,              2,3,0,30003,      "Chyba pøi provádìní vzdálené akce na serveru (brq).") \
	MDESC(c,   cimap_resp,  brq_no_relay_log_files_match,   2,3,0,30004,      "Nejsou k dispozici ¾ádné log soubory relayù, které by odpovídaly zadaným kritériím (brq).") \
	MDESC(c,   cimap_resp,  brq_no_imap_log_files_match,    2,3,0,30005,      "Nejsou k dispozici ¾ádné log soubory imap serverù, které by odpovídaly zadaným kritériím (brq).") \
	MDESC(c,   cimap_resp,  brq_no_smtp_log_files_match,    2,3,0,30006,      "Nejsou k dispozici ¾ádné log soubory smtp serverù, které by odpovídaly zadaným kritériím (brq).") \
\
	MDESC(c,   cimap_resp,  cannot_parse_imap_folders_acls,  2,4,0,30001,      "Chyba pøi parsingu IMAP ACL záznamù." ) \
	MDESC(c,   cimap_resp,  grant_username_not_found,        2,4,0,30002,      "Mailbox kterému mají být poskytnuta práva neexistuje." ) \
	MDESC(c,   cimap_resp,  missing_acl_rights,              2,4,0,30003,      "Chybí parametr 'acl_rights'.") \
	MDESC(c,   cimap_resp,  invalid_acl_rights,              2,4,0,30004,      "Chybná hodnota parametru 'acl_rights'.") \
	MDESC(c,   cimap_resp,  missing_grant_username,          2,4,0,30005,      "Chybí parametr 'grant_user'.") \
	MDESC(c,   cimap_resp,  invalid_grant_username,          2,4,0,30006,      "Chybná hodnota parametru 'grant_user'.") \
\
	MDESC(c,   cimap_resp,  cdkim_module_not_found,          2,5,0,30001,      "CDKIM modul není k dispozici.") \
	MDESC(c,   cimap_resp,  missing_dkim_enable,             2,5,0,30002,      "Chybí parametr 'dkim_enable'.") \
	MDESC(c,   cimap_resp,  invalid_dkim_enable,             2,5,0,30003,      "Chybná hodnota parametru 'dkim_enable'.") \
	MDESC(c,   cimap_resp,  missing_dkim_subsign,            2,5,0,30004,      "Chybí parametr 'dkim_subsign'.") \
	MDESC(c,   cimap_resp,  invalid_dkim_subsign,            2,5,0,30005,      "Chybná hodnota parametru 'dkim_subsign'.") \
\
	MDESC(c,   cimap_resp,  success,                        2,0,0,50000,      "Operace probìhla úspì¹nì.") \
	MDESC(c,   cimap_resp,  mailbox_count,                  2,0,0,50001,      "Poèet mailboxù.") \
	MDESC(c,   cimap_resp,  mailboxes,                      2,0,0,50002,      "Seznam mailboxù.") \
	MDESC(c,   cimap_resp,  max_mailbox_count,              2,0,0,50003,      "Maximální poèet mailboxù domény.") \
	MDESC(c,   cimap_resp,  password,                       2,0,0,50004,      "Heslo.") \
	MDESC(c,   cimap_resp,  domains,                        2,0,0,50005,      "Seznam domén.") \
	MDESC(c,   cimap_resp,  aliases,                        2,0,0,50006,      "Seznam aliasù.") \
	MDESC(c,   cimap_resp,  forwards,                       2,0,0,50007,      "Seznam pøesmìrování.") \
	MDESC(c,   cimap_resp,  alias_created,                  2,0,0,50008,      "Alias úspì¹nì vytvoøen.") \
	MDESC(c,   cimap_resp,  alias_deleted,                  2,0,0,50009,      "Alias úspì¹nì odstranìn.") \
	MDESC(c,   cimap_resp,  forward_added,                  2,0,0,50010,      "Pøesmìrování úspì¹nì pøidáno.") \
	MDESC(c,   cimap_resp,  forward_deleted,                2,0,0,50011,      "Pøesmìrování úspì¹nì odstranìno.") \
	MDESC(c,   cimap_resp,  forward_local_copy_set,         2,0,0,50012,      "Pøíznak lokální kopie pøi pøesmìrování úspì¹nì zmìnìn.") \
	MDESC(c,   cimap_resp,  domain_catchall,                2,0,0,50013,      "Doménový ko¹.") \
	MDESC(c,   cimap_resp,  domain_catchall_set,            2,0,0,50014,      "Doménový ko¹ úspì¹nì nastaven.") \
	MDESC(c,   cimap_resp,  domain_catchall_removed,        2,0,0,50015,      "Doménový ko¹ úspì¹nì zru¹en.") \
	MDESC(c,   cimap_resp,  mailbox_deleted,                2,0,0,50016,      "Mailbox úspì¹nì odstranìn.") \
	MDESC(c,   cimap_resp,  mailbox_created,                2,0,0,50017,      "Mailbox úspì¹nì vytvoøen.") \
	MDESC(c,   cimap_resp,  domain_created,                 2,0,0,50018,      "Doména úspì¹nì vytvoøena.") \
	MDESC(c,   cimap_resp,  domain_deleted,                 2,0,0,50019,      "Doména úspì¹nì odstranìna.") \
	MDESC(c,   cimap_resp,  domain_aliases,                 2,0,0,50020,      "Seznam doménových aliasù.") \
	MDESC(c,   cimap_resp,  domain_alias_created,           2,0,0,50021,      "Doménový alias úspì¹nì vytvoøen.") \
	MDESC(c,   cimap_resp,  domain_alias_deleted,           2,0,0,50022,      "Doménový alias úspì¹nì odstranìn.") \
	MDESC(c,   cimap_resp,  password_set,                   2,0,0,50023,      "Heslo úspì¹nì zmìnìno.") \
	MDESC(c,   cimap_resp,  domain_nameservers,             2,0,0,50024,      "NS záznamy domény.") \
	MDESC(c,   cimap_resp,  domain_mx_records,              2,0,0,50025,      "MX záznamy domény.") \
	MDESC(c,   cimap_resp,  domain_has_no_transport,        2,0,0,50026,      "Doména nemá nastavený po¹tovní transport.") \
	MDESC(c,   cimap_resp,  domain_transport,               2,0,0,50027,      "Cílový server pro po¹tu dané domény.") \
	MDESC(c,   cimap_resp,  max_mailbox_count_set,          2,0,0,50028,      "Nastaven maximální poèet mailboxù domény.") \
	MDESC(c,   cimap_resp,  domain_changelog,               2,0,0,50029,      "Historie zmìn po¹ty domény úspì¹nì naètena.") \
	MDESC(c,   cimap_resp,  virtual_users_table_migrated,   2,0,0,50030,      "Migrace tabulky virtualusers úspì¹nì dokonèena.") \
	MDESC(c,   cimap_resp,  domain_usage,                   2,0,0,50031,      "Obsazený prostor domény úspì¹nì zji¹tìn.") \
	MDESC(c,   cimap_resp,  mailbox_usage,                  2,0,0,50032,      "Obsazený prostor mailboxu úspì¹nì zji¹tìn.") \
	MDESC(c,   cimap_resp,  quota,                          2,0,0,50033,      "Nastavení quoty úspì¹nì zji¹tìno.") \
	MDESC(c,   cimap_resp,  quota_set,                      2,0,0,50034,      "Nastavení quoty úspì¹nì zmìnìno.") \
	MDESC(c,   cimap_resp,  mailbox_accounts,               2,0,0,50035,      "Seznam úètù mailboxu úspì¹nì naèten.") \
	MDESC(c,   cimap_resp,  password_changed,               2,0,0,50036,      "Heslo úètu úspì¹nì zmìnìno.") \
	MDESC(c,   cimap_resp,  postmaster_account_password,    2,0,0,50037,      "Heslo postmastera.") \
	MDESC(c,   cimap_resp,  domain_notes,                   2,0,0,50038,      "Seznam poznámek k doménì.") \
	MDESC(c,   cimap_resp,  domain_note_added,              2,0,0,50039,      "Poznámka k doménì úspì¹nì pøidána.") \
	MDESC(c,   cimap_resp,  domain_note_deleted,            2,0,0,50040,      "Poznámka k doménì úspì¹nì odstranìna.") \
	MDESC(c,   cimap_resp,  domain_note_changed,            2,0,0,50041,      "Poznámka k doménì úspì¹nì zmìnìna.") \
	MDESC(c,   cimap_resp,  nonstandard_domain,             2,0,0,50042,      "Pøíznak, zda má doména nestandardní nastavení.") \
	MDESC(c,   cimap_resp,  max_mailbox_usage,              2,0,0,50043,      "Kvóta domény a obsazený prostor nejvìt¹ího mailboxu.") \
	MDESC(c,   cimap_resp,  password_checked,               2,0,0,50044,      "Heslo ovìøeno.") \
	MDESC(c,   cimap_resp,  domain_type,                    2,0,0,50045,      "Typ domény.") \
	MDESC(c,   cimap_resp,  search_result,                  2,0,0,50046,      "Výsledek hledání.") \
	MDESC(c,   cimap_resp,  transport_set,                  2,0,0,50047,      "Transport úspì¹nì nastaven.") \
	MDESC(c,   cimap_resp,  migr_process_started,           2,0,0,50048,      "Migrace mailboxù byla úspì¹nì spu¹tìna.") \
	MDESC(c,   cimap_resp,  migr_process_succeeded,         2,0,0,50049,      "Migrace v¹ech mailboxù byla dokonèena.") \
	MDESC(c,   cimap_resp,  migr_mailbox_ok,                2,0,0,50050,      "Migrace mailboxu byla úspì¹ná.") \
	MDESC(c,   cimap_resp,  transport_removed,              2,0,0,50051,      "Transport úspì¹nì odstranìn.") \
	MDESC(c,   cimap_resp,  relay_user_added,               2,0,0,50052,      "U¾ivatel relaye úspì¹nì pøidán.") \
	MDESC(c,   cimap_resp,  relay_user_removed,             2,0,0,50053,      "U¾ivatel relaye úspì¹nì odstranìn.") \
	MDESC(c,   cimap_resp,  mail_servers,                   2,0,0,50054,      "Seznam po¹tovních serverù.") \
	MDESC(c,   cimap_resp,  domain_mail_server,             2,0,0,50055,      "Informace o po¹tovním serveru domény.") \
	MDESC(c,   cimap_resp,  mailbox_account_password,       2,0,0,50056,      "Heslo úètu mailboxu.") \
	MDESC(c,   cimap_resp,  structure_migrated,             2,0,0,50057,      "Struktura domény úspì¹nì pøemigrována na jiný mailserver.") \
	MDESC(c,   cimap_resp,  email_injected,                 2,0,0,50058,      "Email byl úspì¹nì vlo¾en do po¹tovní schránky.") \
	MDESC(c,   cimap_resp,  remove_migrated_zombies_succeeded, 2,0,0,50059,   "Èi¹tìní zombies po migraci mailboxù probìhlo úspì¹nì.") \
	MDESC(c,   cimap_resp,  mailbox_quota_checked,          2,0,0,50060,      "Kontrola kvóty a obsazení mailboxu probìhla úspì¹nì.") \
	MDESC(c,   cimap_resp,  domain_quotas_checked,          2,0,0,50061,      "Kontrola kvót a obsazení mailboxù domény probìhla úspì¹nì.") \
	MDESC(c,   cimap_resp,  mail_server_domain_counts,      2,0,0,50062,      "Poèty domén na po¹tovních serverech úspì¹nì zji¹tìny.") \
	MDESC(c,   cimap_resp,  mail_server_all_domain_counts,  2,0,0,50063,      "Celkové poèty domén s po¹tou na po¹tovních serverech úspì¹nì zji¹tìny.") \
	MDESC(c,   cimap_resp,  mail_server_domain_transport_counts,  2,0,0,50064, "Celkové poèty domén s transportem na po¹tovní servery úspì¹nì zji¹tìny.") \
	MDESC(c,   cimap_resp,  mailbox_incoming_emails_blocking_set, 2,0,0,50065, "(Od)blokování pøíjmu emailù daného mailboxu úspì¹nì nastaveno.") \
	MDESC(c,   cimap_resp,  mailbox_status_flags,           2,0,0,50066,      "Stavové pøíznaky mailboxu úspì¹nì zji¹tìny." ) \
	MDESC(c,   cimap_resp,  domain_rbl_policy_set,          2,0,0,50067,      "Pøíznak RBL kontroly pøíchozí po¹ty domény úspì¹nì zmìnìn." ) \
	MDESC(c,   cimap_resp,  domain_status_flags,            2,0,0,50068,      "Stavové pøíznaky domény úspì¹nì zji¹tìny." ) \
	MDESC(c,   cimap_resp,  overquota_mailboxes_checked,    2,0,0,50069,      "Kontrola obsazení overquota mailboxù probìhla úspì¹nì.") \
	MDESC(c,   cimap_resp,  disable_oq_blocking_set,        2,0,0,50070,      "Zapnutí/vypnutí blokování pøíjmu po¹ty z dùvodu pøekroèení kvóty bylo úspì¹nì provedeno.") \
	MDESC(c,   cimap_resp,  domain_incoming_emails_blocking_set, 2,0,0,50071, "(Od)blokování pøíjmu emailù dané domény úspì¹nì nastaveno.") \
	MDESC(c,   cimap_resp,  domain_quota_type_set,          2,0,0,50072,      "Typ kvóty domény byl úspì¹nì zmìnìn.") \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_set,        2,0,0,50073,      "Kvóta mailboxu byla úspì¹nì zmìnìna.") \
	MDESC(c,   cimap_resp,  default_mailbox_quota_limit_set,2,0,0,50074,      "Defaultní velikost nových mailboxù domény úspì¹nì zmìnìna." ) \
	MDESC(c,   cimap_resp,  domain_quotawarn_settings,      2,0,0,50075,      "Nastavení hlídaní obsazeného prostoru pro doménu bylo úspì¹nì naèteno." ) \
	MDESC(c,   cimap_resp,  domain_quotawarn_settings_set,  2,0,0,50076,      "Nastavení hlídaní obsazeného prostoru pro doménu bylo úspì¹nì zmìnìno." ) \
	MDESC(c,   cimap_resp,  mailboxes_with_quotawarn_settings, 2,0,0,50077,   "Seznam mailboxù s jejich nastavením hlídání obsazeného prostoru." ) \
	MDESC(c,   cimap_resp,  mailbox_quotawarn_settings_set, 2,0,0,50078,      "Nastavení hlídaní obsazeného prostoru pro daný mailbox bylo úspì¹nì zmìnìno." ) \
	MDESC(c,   cimap_resp,  domain_language,                2,0,0,50079,      "Jazyk domény." ) \
	MDESC(c,   cimap_resp,  mailbox_language,               2,0,0,50080,      "Jazyk mailboxu." ) \
	MDESC(c,   cimap_resp,  domain_language_set,            2,0,0,50081,      "Jazyk domény úspì¹nì nastaven." ) \
	MDESC(c,   cimap_resp,  mailbox_language_set,           2,0,0,50082,      "Jazyk mailboxu úspì¹nì nastaven." ) \
	MDESC(c,   cimap_resp,  domain_aliases_with_transport,  2,0,0,50083,      "Doménové aliasy s jejich transporty." ) \
	MDESC(c,   cimap_resp,  domain_stopped,                 2,0,0,50084,      "Doména byla úspì¹nì zastavena." ) \
	MDESC(c,   cimap_resp,  domain_started,                 2,0,0,50085,      "Doména byla úspì¹nì spu¹tìna." ) \
	MDESC(c,   cimap_resp,  webmail_mailbox_flags,          2,0,0,50086,      "Pøíznaky mailboxu pro webmail." ) \
	MDESC(c,   cimap_resp,  mail_server_mailbox_counts,     2,0,0,50087,      "Poèty mailboxù na po¹tovních serverech úspì¹nì zji¹tìny.") \
	MDESC(c,   cimap_resp,  mailbox_quota_info,             2,0,0,50088,      "Informace o kvótì a stavu prostoru mailboxu." ) \
	MDESC(c,   cimap_resp,  users_can_edit_mailbox_aliases_set, 2,0,0,50089,  "Pøíznak zda mù¾ou bì¾ní u¾ivatele editovat své aliasy byl úspì¹nì nastaven." ) \
	MDESC(c,   cimap_resp,  users_can_edit_mailbox_aliases_flag, 2,0,0,50090, "Pøíznak zda mù¾ou bì¾ní u¾ivatelé editovat své aliasy." ) \
	MDESC(c,   cimap_resp,  mailbox_cloned,                 2,0,0,50091,      "Mailbox byl úspì¹nì naklonován." ) \
	MDESC(c,   cimap_resp,  backend_request_done,           2,0,0,50092,      "Po¾adavek na serveru skonèil úspì¹nì.") \
	MDESC(c,   cimap_resp,  backend_request_queued,         2,0,0,50093,      "Po¾adavek na vzdálený server byl úspì¹nì zaøazen do fronty." ) \
	MDESC(c,   cimap_resp,  search_in_server_logs_done,     2,0,0,50094,      "Hledání v log souborech po¹tovních serverù bylo úspì¹nì dokonèeno." ) \
	MDESC(c,   cimap_resp,  domain_lists,                   2,0,0,50095,      "Pøehled seznamù domén." ) \
	MDESC(c,   cimap_resp,  slave_command_succeeded,        2,0,0,50096,      "Slave pøíkaz byl úspì¹nì dokonèen." ) \
	MDESC(c,   cimap_resp,  mailbox_quotawarn_settings,     2,0,0,50097,      "Nastavení hlídaní obsazeného prostoru daného mailboxu." ) \
	MDESC(c,   cimap_resp,  mailbox_folders,                2,0,0,50098,      "Seznam slo¾ek daného mailboxu." ) \
	MDESC(c,   cimap_resp,  transports_to_server,           2,0,0,50099,      "Seznam transportù na daný server." ) \
	MDESC(c,   cimap_resp,  mailbox_quota_reupdated,        2,0,0,50100,      "Disková kvóta mailboxu na IMAP serveru byla úspì¹nì pøeaktualizována.")  \
	MDESC(c,   cimap_resp,  broken_password_saved,          2,0,0,50101,      "Prolomené heslo schránky bylo úspì¹nì zanamenáno.")  \
	MDESC(c,   cimap_resp,  smtp_blocking_settings,         2,0,0,50102,      "Nastavení blokování SMTP schránky.")  \
	MDESC(c,   cimap_resp,  smtp_blocking_settings_set,     2,0,0,50103,      "Nastavení blokování SMTP schránky bylo úspì¹nì zmìnìno.")  \
	MDESC(c,   cimap_resp,  broken_password_checked,        2,0,0,50104,      "Prolomení hesla bylo provìøeno.")  \
	MDESC(c,   cimap_resp,  sender_forgery_forbidden_flag_set, 2,0,0,50105,   "Pøíznak zákazu podvrhávání domény odesílatele byl úspì¹nì zmìnìn.")  \
	MDESC(c,   cimap_resp,  spam_learned,                   2,0,0,50106,      "Spam byl zaøazen k nauèení.")  \
	\
	MDESC(c,   cimap_resp,  trash_autoclear_rule,           2,1,0,50001,      "Pravidlo automatického mazání ko¹e.") \
	MDESC(c,   cimap_resp,  trash_autoclear_rule_set,       2,1,0,50002,      "Nové nastavení pravidla automatického mazání ko¹e úspì¹nì ulo¾eno.") \
	MDESC(c,   cimap_resp,  bfu_antispam_level,             2,1,0,50003,      "Nastavení antispamové ochrany mailboxu.") \
	MDESC(c,   cimap_resp,  bfu_antispam_level_set,         2,1,0,50004,      "Úroveò antispamové ochrany mailboxu úspì¹nì nastavena.") \
	MDESC(c,   cimap_resp,  folder_autoclear_rule,          2,1,0,50005,      "Pravidlo automatického mazání slo¾ky.") \
	MDESC(c,   cimap_resp,  folder_autoclear_rule_set,      2,1,0,50006,      "Nové nastavení pravidla automatického mazání slo¾ky úspì¹nì ulo¾eno.") \
	MDESC(c,   cimap_resp,  avelsieve_filters_copied,       2,1,0,50007,      "Filtraèní pravidla byla úspì¹nì pøekopírována.") \
	MDESC(c,   cimap_resp,  avelsieve_filters_merged,       2,1,0,50008,      "Filtraèní pravidla byla úspì¹nì slouèena.") \
	MDESC(c,   cimap_resp,  mailbox_autoclear_done,         2,1,0,50009,      "Automatické èi¹tìní mailboxù bylo úspì¹nì dokonèeno.") \
	\
	MDESC(c,   cimap_resp,  batch_domain_backup_created,    2,2,0,50001,      "Záloha struktury domény byla úspì¹nì provedena.") \
	\
	MDESC(c,   cimap_resp,  mailbox_folders_acls,           2,4,0,50001,      "Seznam slo¾ek daného mailboxu s jejich pøístupovými právy." ) \
	MDESC(c,   cimap_resp,  mailbox_folder_acl,             2,4,0,50002,      "Pøístupová práva dané slo¾ky." ) \
	MDESC(c,   cimap_resp,  mailbox_folder_acl_set,         2,4,0,50003,      "Pøístupová práva slo¾ky byla úspì¹nì nastavena." ) \
	MDESC(c,   cimap_resp,  shared_mailbox_folder_subscribed_to_grantee, 2,4,0,50004, "U¾ivatel byl úspì¹nì pøihlá¹en k odbìru sdílené slo¾ky.") \
	MDESC(c,   cimap_resp,  shared_mailbox_folder_unsubscribed_from_grantee, 2,4,0,50005, "U¾ivateli byl úspì¹nì zru¹en odbìr sdílené slo¾ky.") \
	\
	MDESC(c,   cimap_resp,  dkim_set,                       2,5,0,50001,      "Zmìna nastavení DKIM byla provedena." ) \
	MDESC(c,   cimap_resp,  dkim_settings,                  2,5,0,50002,      "Aktuální nastavení DKIM domény." ) \
	

#define CIMAP_MDESC_TABLE(c) \
	CIMAP_CMSM(c) \
	CIMAP_RESP(c) \
	GROUP_WHS(c, cimap_module_mdesc, cimap_cmsm, get_domain_mailbox_count) \
	GROUP_WHS(c, cimap_ext_module_mdesc, cimap_cmsm, set_mailbox_trash_autoclear) \
	GROUP_WHS(c, cimap_batch_module_mdesc, cimap_cmsm,  batch_create_domain_backup) \
	GROUP_WHS(c, cimap_acl_folders_module_mdesc, cimap_cmsm, set_mailbox_folder_acl) \
	GROUP_WHS(c, cimap_cdkim_module_mdesc, cimap_cmsm, set_dkim) \

// expand the declarations
CMS_NAMESPACE_START
CIMAP_MDESC_TABLE(DECL)
CMS_NAMESPACE_END


#endif //  __MOD_CIMAP_MDESCS
