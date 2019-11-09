#ifndef MOD_JOKER_MDESCS
#define MOD_JOKER_MDESCS

#include "mdescs.h"

// joker messages
#define JOKER_CMSM(c) \
	MDESC2(c, joker_cmsm, contact_whois,						14,0,0,1, "Whois kontaktu.", "Whois kontaktu se nezdaøilo.") \
	MDESC2(c, joker_cmsm, contact_create,						14,0,0,2, "Vytvoøení nového kontaktu.", "Vytvoøení nového kontaktu se nezdaøilo.") \
	MDESC2(c, joker_cmsm, contact_update_by_admin,				14,0,0,3, "Zmìna údajù kontaktu na základì potvrzení administrátora.", "Zmìna údajù kontaktu se nezdaøila.") \
	MDESC2(c, joker_cmsm, contact_update_by_password,			14,0,0,4, "Zmìna údajù kontaktu s použitím hesla.", "Zmìna údajù kontaktu se nezdaøila.") \
	MDESC2(c, joker_cmsm, contact_send_password,				14,0,0,5, "Pøeposlání hesla pro kontakt.", "Pøeposlání hesla pro kontakt se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, domain_check,							14,0,1,1, "Kontrola dostupnosti domény.", "Kontrola dostupnosti domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, domain_whois,							14,0,1,2, "Whois domény.", "Whois domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_owner_change_by_admin,			14,0,1,3, "Zmìna vlastníka domény na základì potvrzení administrátora.", "Zmìna vlastníka se nezdaøila.") \
	MDESC2(c, joker_cmsm, domain_create_order,					14,0,1,4, "Objednání nové domény.", "Objednání nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_renew_order,					14,0,1,5, "Objednání prodloužení platnosti domény.", "Objednání prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_transfer_by_admin,				14,0,1,6, "Pøevedení domény administrátorem.", "Pøevedení domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_update_by_password,			14,0,1,7, "Zmìna údajù domény s použitím hesla.", "Zmìna údajù domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, domain_lock_by_password,				14,0,1,8, "Zamknutí domény s použitím hesla.", "Zamknutí domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_unlock_by_password,			14,0,1,9, "Odemknutí domény s použitím hesla.", "Odemknutí domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_lock_by_admin,					14,0,1,10, "Zamknutí domény administrátorem.", "Zamknutí domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_unlock_by_admin,				14,0,1,11, "Odemknutí domény administrátorem.", "Odemknutí domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_send_authid_by_password,		14,0,1,12, "Zaslání authid vlastníkovi domény s použitím hesla.", "Zaslání authid vlastníkovi domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_send_authid_by_admin,			14,0,1,13, "Zaslání authid vlastníkovi domény administrátorem.", "Zaslání authid vlastníkovi domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_update_by_admin,				14,0,1,14, "Zmìna údajù domény administrátorem.", "Zmìna údajù domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, domain_transfer_order,				14,0,1,15, "Objednání pøevedení domény.", "Objednání pøevedení domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_transfer_cancel_by_admin,		14,0,1,16, "Zrušení pøevodu domény administrátorem.", "Zrušení pøevodu domény administrátorem se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_transfer_ex_by_admin,			14,0,1,17, "Pøevedení domény administrátorem.", "Pøevedení domény se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, contact_create_ccc,					14,1,0,1, "Vytvoøení nového kontaktu.", "Vytvoøení nového kontaktu se nezdaøilo.") \
	MDESC2(c, joker_cmsm, contact_create_from_table,			14,1,0,2, "Vytvoøení nového kontaktu.", "Vytvoøení nového kontaktu se nezdaøilo.") \
	MDESC2(c, joker_cmsm, contact_get_from_table,				14,1,0,3, "Vrátí kontakt z DB.", "Vracení kontaktu se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, domain_create_ccc,					14,1,1,1, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_create_from_core_table_ccc,	14,1,1,2, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_create_from_joker_table_ccc,	14,1,1,3, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_renew_ccc,						14,1,1,4, "Prodloužení platnosti domény.", "Prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_update_ccc,					14,1,1,5, "Zmìna údajù domény.", "Zmìna údajù domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, domain_get_balance,					14,1,1,6, "Získání zùstatku.", "Získání zùstatku se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_transfer_ccc,					14,1,1,7, "Pøevedení domény.", "Pøevedení domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_sign_ccc,						14,1,1,8, "Podepsani domeny DNSSECem.", "Podepsani domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, domain_unsign_ccc,					14,1,1,9, "Odpodepsani domény DNSSECem.", "Odpodepsani domény se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, hu_domain_whois,						14,2,0,1, "Whois domény.", "Whois domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, hu_domain_create,						14,2,0,2, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, hu_domain_renew,						14,2,0,3, "Prodloužení platnosti domény.", "Prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, hu_domain_update_ns,					14,2,0,4, "Zmìna NS domény.", "Zmìna NS domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, hu_domain_update_admin_tech,			14,2,0,5, "Zmìna Admin a Tech kontaktu domény.", "Zmìna Admin a Tech kontaktu domény se nezdaøila.") \
\
	MDESC2(c, joker_cmsm, hu_contact_whois,						14,2,1,1, "Whois kontaktu.", "Whois kontaktu se nezdaøilo.") \
	MDESC2(c, joker_cmsm, hu_contact_create_owner,				14,2,1,2, "Vytvoøení nového kontaktu v roli vlastníka.", "Vytvoøení nového kontaktu v roli vlastníka se nezdaøilo.") \
	MDESC2(c, joker_cmsm, hu_contact_update_owner,				14,2,1,3, "Zmìna údajù kontaktu v roli vlastníka.", "Zmìna údajù kontaktu v roli vlastníka se nezdaøila.") \
	MDESC2(c, joker_cmsm, hu_contact_create_tech,				14,2,1,4, "Vytvoøení nového kontaktu v roli admin, tech.", "Vytvoøení nového kontaktu v roli admin, tech se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, webenlet_domain_whois,				14,2,5,1, "Whois domény.", "Whois domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, webenlet_domain_create,				14,2,5,2, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, webenlet_domain_renew,				14,2,5,3, "Prodloužení platnosti domény.", "Prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, webenlet_domain_update_ns,			14,2,5,4, "Zmìna NS domény.", "Zmìna NS domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, webenlet_domain_update_admin_tech,	14,2,5,5, "Zmìna Admin a Tech kontaktu domény.", "Zmìna Admin a Tech kontaktu domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, webenlet_make_orders,					14,2,5,6, "Vyhodnocení objednavek od registrátora.", "Vyhodnocení objednavek od registrátora se nezdaøilo.") \
	MDESC2(c, joker_cmsm, webenlet_get_statement,				14,2,5,7, "Pozada o souhlas s podminkami registrátora.", "Pozadavek o souhlas se nezdaøil.") \
	MDESC2(c, joker_cmsm, webenlet_set_statement,				14,2,5,8, "Posle o souhlas s podminkami registrátora.", "Souhlas se nezdaøil.") \
	MDESC2(c, joker_cmsm, webenlet_contact_whois,				14,2,5,10, "Whois kontaktu.", "Whois kontaktu se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, eurodns_domain_renew,					14,3,0,1, "Prodloužení platnosti domény.", "Prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, eurodns_domain_whois,					14,3,0,2, "Whois domény.", "Whois domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, eurodns_contact_whois,				14,3,0,3, "Whois kontaktu.", "Whois kontaktu se nezdaøilo.") \
	MDESC2(c, joker_cmsm, eurodns_poll,							14,3,0,4, "Vyhodnocení zpráv od registrátora.", "Vyhodnocení zpráv od registrátora se nezdaøilo.") \
	MDESC2(c, joker_cmsm, eurodns_domain_create,				14,3,0,5, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, eurodns_get_balance,					14,3,0,6, "Získání zùstatku.", "Získání zùstatku se nezdaøilo.") \
	MDESC2(c, joker_cmsm, eurodns_domain_update_by_admin,		14,3,0,7, "Zmìna údajù domény.", "Zmìna údajù domény se nezdaøila.") \
\
	MDESC2(c, joker_cmsm, aoi_domain_renew,						14,4,0,1, "Prodloužení platnosti domény.", "Prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, aoi_domain_create,					14,4,0,2, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, subreg_domain_create,					14,5,0,1, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, subreg_domain_renew,					14,5,0,2, "Prodloužení platnosti domény.", "Prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, subreg_poll,							14,5,0,3, "Vyhodnocení zpráv od registrátora.", "Vyhodnocení zpráv od registrátora se nezdaøilo.") \
	MDESC2(c, joker_cmsm, subreg_get_balance,					14,5,0,4, "Získání zùstatku.", "Získání zùstatku se nezdaøilo.") \
	MDESC2(c, joker_cmsm, subreg_domain_check,					14,5,0,5, "Kontrola dostupnosti domény.", "Kontrola dostupnosti domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, subreg_domain_whois,					14,5,0,6, "Whois domény.", "Whois domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, subreg_contact_whois,					14,5,0,7, "Whois kontaktu.", "Whois kontaktu se nezdaøilo.") \
	MDESC2(c, joker_cmsm, subreg_domain_update_by_admin,		14,5,0,8, "Zmìna údajù domeny na základì potvrzení administrátora.", "Zmìna údajù domeny se nezdaøila.") \
	MDESC2(c, joker_cmsm, subreg_contact_create,				14,5,0,9, "Vytvoøení nového kontaktu.", "Vytvoøení nového kontaktu se nezdaøilo.") \
	MDESC2(c, joker_cmsm, subreg_contact_update,				14,5,0,10, "Zmìna údajù kontaktu.", "Zmìna údajù kontaktu se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, ro_domain_create,						14,6,0,1, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, ru_domain_create,						14,7,0,1, "Vytvoøení nové domény.", "Vytvoøení nové domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, ru_domain_renew,						14,7,0,2, "Prodloužení platnosti domény.", "Prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, ru_make_orders,						14,7,0,3, "Vyhodnocení objednavek od registrátora.", "Vyhodnocení objednavek od registrátora se nezdaøilo.") \
	MDESC2(c, joker_cmsm, ru_get_balance,						14,7,0,4, "Získání zùstatku.", "Získání zùstatku se nezdaøilo.") \
\
	MDESC2(c, joker_cmsm, uk_domain_check,						14,8,0,1, "Kontrola dostupnosti domény.", "Kontrola dostupnosti domény se nezdaøila.") \
	MDESC2(c, joker_cmsm, uk_domain_whois,						14,8,0,2, "Whois domény.", "Whois domény se nezdaøilo.") \
	MDESC2(c, joker_cmsm, uk_contact_whois,						14,8,0,3, "Whois kontaktu.", "Whois kontaktu se nezdaøilo.") \
	\
	MDESC2(c, symantec_cmsm, cert_enroll,						14,10,0,1, "Registrace ssl certifikátu.", "Registrace ssl certifikátu se nezdaøila.") \
	MDESC2(c, symantec_cmsm, domain_validate,					14,10,0,2, "Validace doménového jména certifikátu.", "Validace doménového jména certifikátu se nezdaøila.") \
	MDESC2(c, symantec_cmsm, cert_renew,						14,10,0,3, "Renew ssl certifikátu.", "Renew ssl certifikátu se nezdaøila.") \
\
	MDESC2(c, joker_cmsm, registrar_make_poll,					14,20,0,1, "Vloží akci na zpracovaní pollu (objednavek) registrátora.", "Vložení akce se nezdaøilo.") \



#define JOKER_RESP(c) \
	MDESC(c, joker_resp, unknown_message,						14,0,0,30001, "Byla zaslána neznámá zpráva.") \
	MDESC(c, joker_resp, access_denied,							14,0,0,30002, "Nemáte dostateèná oprávnìní.") \
	MDESC(c, joker_resp, exception_occured,						14,0,0,30003, "Nastala vyjímka.") \
	MDESC(c, joker_resp, syntax_error,							14,0,0,30004, "Nastala syntaktická chyba, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, joker_resp, joker_error,							14,0,0,30005, "Nastala chyba na JOKERu, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, joker_resp, joker_exception_error,					14,0,0,30006, "Nastala vyjímka na JOKERu, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, joker_resp, runtime_error,							14,0,0,30007, "Nastala runtime chyba, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, joker_resp, sql_error,								14,0,0,30008, "Nastala chyba databáze, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, joker_resp, unknown_error,							14,0,0,30009, "Nastala neznámá chyba.") \
\
	MDESC(c, symantec_resp, internal_data_check_failed,			14,10,0,30001, "INTERNAL_DATA_CHECK_FAILED.") \
\
	MDESC(c, joker_resp, contact_whois_succeeded,				14,0,0,50001, "Whois kontaktu úspìšnì probìhlo.") \
	MDESC(c, joker_resp, contact_created,						14,0,0,50002, "Vytvoøení nového kontaktu úspìšnì probìhlo.") \
	MDESC(c, joker_resp, contact_updated,						14,0,0,50003, "Zmìna údajù kontaktu úspìšnì probìhla.") \
	MDESC(c, joker_resp, contact_password_sent,					14,0,0,50004, "Pøeposlání hesla pro kontakt úspìšnì probìhlo.") \
	MDESC(c, joker_resp, contact_exists,						14,0,0,50005, "Kontaktu již existuje.") \
	MDESC(c, joker_resp, contact_not_exists,					14,0,0,50007, "Kontaktu neexistuje.") \
\
	MDESC(c, joker_resp, domain_checked,						14,0,1,50001, "Kontrola dostupnosti domény úspìšnì probìhla.") \
	MDESC(c, joker_resp, domain_whois_succeeded,				14,0,1,50002, "Whois domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, domain_created,						14,0,1,50003, "Vytvoøení domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, domain_owner_changed,					14,0,1,50004, "Zmìna vlastníka domény úspìšnì probìhla.") \
	MDESC(c, joker_resp, domain_renewed,						14,0,1,50005, "Prodloužení platnosti domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, domain_transferred,					14,0,1,50006, "Pøevedení domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, domain_updated,						14,0,1,50007, "Zmìna údajù domény úspìšnì probìhla.") \
	MDESC(c, joker_resp, domain_locked,							14,0,1,50008, "Zamknutí domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, domain_unlocked,						14,0,1,50009, "Odemknutí domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, domain_authid_sent,					14,0,1,50010, "Zaslání authid vlastníkovi domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, domain_transfer_canceled,				14,0,1,50011, "Zrušení pøevodu domény administrátorem úspìšnì probìhlo.") \
	MDESC(c, joker_resp, domain_get_balance_ok,					14,0,1,50012, "Získání zùstatku úspìšnì probìhlo.") \
\
	MDESC(c, joker_resp, hu_domain_whois_succeeded,				14,2,0,50001, "Whois domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, hu_domain_created,						14,2,0,50002, "Vytvoøení domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, hu_domain_renewed,						14,2,0,50003, "Prodloužení platnosti domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, hu_domain_ns_changed,					14,2,0,50004, "Zmìna NS domény úspìšnì probìhla.") \
	MDESC(c, joker_resp, hu_domain_admin_tech_changed,			14,2,0,50005, "Zmìna admin a tech kontaktu domény úspìšnì probìhla.") \
\
	MDESC(c, joker_resp, hu_contact_whois_succeeded,			14,2,1,50001, "Whois kontaktu úspìšnì probìhlo.") \
	MDESC(c, joker_resp, hu_contact_created,					14,2,1,50002, "Vytvoøení nového kontaktu úspìšnì probìhlo.") \
	MDESC(c, joker_resp, hu_contact_updated,					14,2,1,50003, "Zmìna údajù kontaktu úspìšnì probìhla.") \
\
	MDESC(c, joker_resp, webenlet_domain_whois_succeeded,		14,2,5,50001, "Whois domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, webenlet_domain_created,				14,2,5,50002, "Vytvoøení domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, webenlet_domain_renewed,				14,2,5,50003, "Prodloužení platnosti domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, webenlet_domain_ns_changed,			14,2,5,50004, "Zmìna NS domény úspìšnì probìhla.") \
	MDESC(c, joker_resp, webenlet_domain_admin_tech_changed,	14,2,5,50005, "Zmìna admin a tech kontaktu domény úspìšnì probìhla.") \
	MDESC(c, joker_resp, webenlet_make_orders_succeeded,		14,2,5,50006, "Vyhodnocení objednavek registrátora úspìšnì probìhlo.") \
	MDESC(c, joker_resp, webenlet_get_statement_succeeded,		14,2,5,50007, "Souhlas s podminkami registrátora úspìšnì vygenerovan.") \
	MDESC(c, joker_resp, webenlet_set_statement_succeeded,		14,2,5,50008, "Souhlas s podminkami registrátora úspìšnì zadan.") \
	MDESC(c, joker_resp, webenlet_contact_whois_succeeded,		14,2,5,50010, "Whois kontaktu úspìšnì probìhlo.") \
\
	MDESC(c, joker_resp, eurodns_domain_renewed,				14,3,0,50001, "Prodloužení platnosti domény úspìšnì zadáno.") \
	MDESC(c, joker_resp, eurodns_domain_whois_succeeded,		14,3,0,50002, "Whois domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, eurodns_contact_whois_succeeded,		14,3,0,50003, "Whois kontaktu úspìšnì probìhlo.") \
	MDESC(c, joker_resp, eurodns_poll_succeeded,				14,3,0,50004, "Vyhodnocení zpráv od registrátora úspìšnì probìhlo.") \
	MDESC(c, joker_resp, eurodns_domain_created,				14,3,0,50005, "Vytvoøení domény úspìšnì zadáno.") \
	MDESC(c, joker_resp, eurodns_get_balance_ok,				14,3,0,50006, "Získání zùstatku kreditu úspìšné.") \
	MDESC(c, joker_resp, eurodns_domain_updated,				14,3,0,50007, "Zmìna údajù domény úspìšnì zadána.") \
\
	MDESC(c, joker_resp, aoi_domain_renewed,					14,4,0,50001, "Prodloužení platnosti domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, aoi_domain_created,					14,4,0,50002, "Vytvoøení domény úspìšnì probìhlo.") \
\
	MDESC(c, joker_resp, subreg_domain_created,					14,5,0,50001, "Vytvoøení domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, subreg_domain_renewed,					14,5,0,50002, "Prodloužení platnosti domény úspìšnì zadáno.") \
	MDESC(c, joker_resp, subreg_poll_succeeded,					14,5,0,50003, "Vyhodnocení zpráv od registrátora úspìšnì probìhlo.") \
	MDESC(c, joker_resp, subreg_get_balance_ok,					14,5,0,50004, "Získání zùstatku kreditu úspìšné.") \
	MDESC(c, joker_resp, subreg_domain_checked,					14,5,0,50005, "Kontrola dostupnosti domény úspìšnì probìhla.") \
	MDESC(c, joker_resp, subreg_domain_whois_succeeded,			14,5,0,50006, "Whois domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, subreg_contact_whois_succeeded,		14,5,0,50007, "Whois kontaktu úspìšnì probìhlo.") \
	MDESC(c, joker_resp, subreg_domain_update_send_succeeded,	14,5,0,50008, "Zmena udaju u domény úspìšnì odeslana.") \
	MDESC(c, joker_resp, subreg_contact_created,				14,5,0,50009, "Vytvoøení kontaktu úspìšnì probìhlo.") \
	MDESC(c, joker_resp, subreg_contact_updated,				14,5,0,50010, "Zmena udaju kontaktu úspìšnì probìhla.") \
\
	MDESC(c, joker_resp, ro_domain_created,						14,6,0,50001, "Vytvoøení domény úspìšnì probìhlo.") \
\
	MDESC(c, joker_resp, ru_domain_created,						14,7,0,50001, "Vytvoøení domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, ru_domain_renewed,						14,7,0,50002, "Prodloužení platnosti domény úspìšnì zadáno.") \
	MDESC(c, joker_resp, ru_make_orders_succeeded,				14,7,0,50003, "Vyhodnocení objednavek registrátora úspìšnì probìhlo.") \
	MDESC(c, joker_resp, ru_get_balance_ok,						14,7,0,50004, "Získání zùstatku kreditu úspìšné.") \
\
	MDESC(c, joker_resp, uk_domain_checked,						14,8,0,50001, "Kontrola dostupnosti domény úspìšnì probìhla.") \
	MDESC(c, joker_resp, uk_domain_whois_succeeded,				14,8,0,50002, "Whois domény úspìšnì probìhlo.") \
	MDESC(c, joker_resp, uk_contact_whois_succeeded,			14,8,0,50003, "Whois kontaktu úspìšnì probìhlo.") \
\
	MDESC(c, symantec_resp, cert_created,						14,10,0,50001, "Registrace ssl certifikátu úspìšnì probìhlo.") \
	MDESC(c, symantec_resp, domain_validated,					14,10,0,50002, "Validace doménového jména úspìšnì probìhla.") \
	MDESC(c, symantec_resp, cert_renewed,						14,10,0,50003, "Renewe ssl certifikátu úspìšnì probìhlo.") \

	
#define JOKER_CMSM_WHS(c) \
	GROUP_WHS(c, joker_module_mdesc, joker_cmsm, contact_whois)


#define JOKER_MDESC_TABLE(c) \
	JOKER_CMSM(c) \
	JOKER_RESP(c) \
	JOKER_CMSM_WHS(c)

// expand the declarations
CMS_NAMESPACE_START
JOKER_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_JOKER_MDESCS
