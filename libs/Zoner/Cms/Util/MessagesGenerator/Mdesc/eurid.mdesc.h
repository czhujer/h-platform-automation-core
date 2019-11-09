#ifndef MOD_EURID_MDESCS
#define MOD_EURID_MDESCS

#include "mdescs.h"

// eurid messages
#define EURID_CMSM(c) \
	MDESC2(c, eurid_cmsm, contact_check,						17,0,0,1, "Kontrola dostupnosti kontaktu.", "Kontrola dostupnosti kontaktu se nezdaøila.") \
	MDESC2(c, eurid_cmsm, contact_whois,						17,0,0,2, "Whois kontaktu.", "Whois kontaktu se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, contact_create,						17,0,0,3, "Vytvoøení nového kontaktu.", "Vytvoøení nového kontaktu se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, contact_update_by_admin,				17,0,0,4, "Zmìna údajù kontaktu na základì potvrzení administrátora.", "Zmìna údajù kontaktu se nezdaøila.") \
	MDESC2(c, eurid_cmsm, contact_update_by_password,			17,0,0,5, "Zmìna údajù kontaktu s použitím hesla.", "Zmìna údajù kontaktu se nezdaøila.") \
	MDESC2(c, eurid_cmsm, contact_delete_by_admin,				17,0,0,6, "Smazání kontaktu na základì potvrzení administrátora.", "Smazání kontaktu se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, contact_delete_by_password,			17,0,0,7, "Smazání kontaktu s použitím hesla.", "Smazání kontaktu se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, contact_send_password,				17,0,0,8, "Pøeposlání hesla pro kontakt.", "Pøeposlání hesla pro kontakt se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, contact_list_domains,					17,0,0,9, "Získá seznam doménových jmen, kde figuruje daný kontakt.", "Získání seznamu doménových jmen, kde figuruje daný kontakt se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, contact_list_by_email,				17,0,0,10, "Získá seznam kontaktù, které mají daný email.", "Získání seznamu kontaktù, které mají daný email se nezdaøilo.") \
\
	MDESC2(c, eurid_cmsm, domain_check,							17,0,1,1, "Kontrola dostupnosti domény.", "Kontrola dostupnosti domény se nezdaøila.") \
	MDESC2(c, eurid_cmsm, domain_whois,							17,0,1,2, "Whois domény.", "Whois domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_create_order,					17,0,1,3, "Objednání nové domény.", "Objednání nové domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_create_order_zoner_ns,			17,0,1,4, "Objednání nové domény s nastavením Zoner nameserverù.", "Objednání nové domény s nastavením Zoner nameserverù se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_update_by_admin,				17,0,1,5, "Zmìna údajù domény na základì potvrzení administrátora.", "Zmìna údajù domény se nezdaøila.") \
	MDESC2(c, eurid_cmsm, domain_update_by_password,			17,0,1,6, "Zmìna údajù domény s použitím hesla.", "Zmìna údajù domény se nezdaøila.") \
	MDESC2(c, eurid_cmsm, domain_trade_transfer_order,			17,0,1,7, "Objednání pøevedení domény a/nebo zmìny vlastníka domény.", "Objednání pøevedení domény a/nebo zmìny vlastníka domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_trade_transfer_order_zoner_ns,	17,0,1,8, "Objednání pøevedení domény a/nebo zmìny vlastníka domény s nastavením Zoner nameserverù.", "Objednání pøevedení domény a/nebo zmìny vlastníka domény s nastavením Zoner nameserverù se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_check_state,					17,0,1,9, "Provìøí stav domény.", "Provìøení stavu domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_renew_order,					17,0,1,10, "Objednání prodloužení platnosti domény.", "Objednání prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_update_keygroup_by_admin,		17,0,1,11, "Zmìna keygroup domény na základì potvrzení administrátora.", "Zmìna keygroup domény se nezdaøila.") \
	MDESC2(c, eurid_cmsm, domain_transfer_reset,				17,0,1,12, "Zmìna auth-id a spuštìní akce s transferem domény.", "Zmìna auth-id a spuštìní akce s transferem domény se nezdaøila.") \
	MDESC2(c, eurid_cmsm, domain_get_authid,					17,0,1,13, "Získání auth-id domény.", "Získání auth-id domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_trade_by_admin,				17,0,1,14, "Zmìna vlastníka domény na základì potvrzení administrátora.", "Zmìna vlastníka domény na základì potvrzení administrátora se nezdaøila.") \
	MDESC2(c, eurid_cmsm, domain_whois_eurid,					17,0,1,15, "Whois domény z Euridu.", "Whois domény z Euridu se nezdaøil.") \
\
	MDESC2(c, eurid_cmsm, keygroup_whois,						17,0,2,1, "Whois keygroup.", "Whois keygroup se nezdaøila.") \
	MDESC2(c, eurid_cmsm, keygroup_create,						17,0,2,2, "Vytvoøení keygroup.", "Vytvoøení keygroup se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, keygroup_update_by_admin,				17,0,2,3, "Zmìna údajù keygroup na základì potvrzení administrátora.", "Zmìna údajù keygroup se nezdaøila.") \
	MDESC2(c, eurid_cmsm, keygroup_delete_by_admin,				17,0,2,4, "Smazání keygroup na základì potvrzení administrátora.", "Smazání keygroup se nezdaøilo.") \
\
	MDESC2(c, eurid_cmsm, domain_create_ccc,					17,1,1,1, "Vytvoøení nové domény z údajù v tabulce r_eurid_domain.", "Vytvoøení nové domény z údajù v tabulce r_eurid_domain se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_create_from_v1_ccc,			17,1,1,2, "Vytvoøení nové domény z údajù v tabulce eu_domain_v1.", "Vytvoøení nové domény z údajù v tabulce eu_domain_v1 se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_transfer_ccc,					17,1,1,3, "Pøevedení domény podle údajù v tabulce r_eurid_domain.", "Pøevedení domény podle údajù v tabulce r_eurid_domain se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_transfer_from_v1_ccc,			17,1,1,4, "Pøevedení domény podle údajù v tabulce eu_domain_v1.", "Pøevedení domény podle údajù v tabulce eu_domain_v1 se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_update_cache_ccc,				17,1,1,5, "Vloží nebo aktualizuje doménu v cache.", "Vložení nebo aktualizace domény v cache se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_delete_ccc,					17,1,1,6, "Smazání domény.", "Smazání domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_undelete_ccc,					17,1,1,7, "Obnovení domény.", "Obnovení domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_reactivate_ccc,				17,1,1,8, "Reaktivace domény.", "Reaktivace domény se nezdaøila.") \
	MDESC2(c, eurid_cmsm, registrar_info_credit,				17,1,1,9, "Získá penìžní zùstatek u EURidu.", "Získání penìžního zùstatku u EURidu se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, domain_renew_ccc,						17,1,1,10, "Prodloužení platnosti domény.", "Prodloužení platnosti domény se nezdaøilo.") \
	MDESC2(c, eurid_cmsm, make_poll_ccc,						17,1,1,11, "Vyhodnocení zpráv od registrátora.", "Vyhodnocení zpráv od registrátora se nezdaøilo.") \
\
	MDESC2(c, eurid_cmsm, contact_update_cache_ccc,				17,1,2,1, "Vloží nebo aktualizuje kontakt v cache.", "Vložení nebo aktualizace kontaktu v cache se nezdaøilo.") \

#define EURID_RESP(c) \
	MDESC(c, eurid_resp, unknown_message,						17,0,0,30001, "Byla zaslána neznámá zpráva.") \
	MDESC(c, eurid_resp, access_denied,							17,0,0,30002, "Nemáte dostateèná oprávnìní.") \
	MDESC(c, eurid_resp, exception_occured,						17,0,0,30003, "Nastala vyjímka.") \
	MDESC(c, eurid_resp, unknown_error,							17,0,0,30004, "Nastala neznámá chyba.") \
	MDESC(c, eurid_resp, syntax_error,							17,0,0,30005, "Nastala syntaktická chyba, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, eurid_resp, runtime_error,							17,0,0,30006, "Nastala runtime chyba, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, eurid_resp, sql_error,								17,0,0,30007, "Nastala chyba databáze, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, eurid_resp, eurid_error,							17,0,0,30008, "Nastala chyba EURidu, podrobnosti naleznete ve výstupních parametrech.") \
	MDESC(c, eurid_resp, eurid_exception_error,					17,0,0,30009, "Nastala vyjímka na EURidu, podrobnosti naleznete ve výstupních parametrech.") \
\
	MDESC(c, eurid_resp, contact_checked,						17,0,0,50001, "Kontrola dostupnosti kontaktu úspìšnì probìhla.") \
	MDESC(c, eurid_resp, contact_whois_succeeded,				17,0,0,50002, "Whois kontaktu úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, contact_created,						17,0,0,50003, "Vytvoøení nového kontaktu úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, contact_updated,						17,0,0,50004, "Zmìna údajù kontaktu úspìšnì probìhla.") \
	MDESC(c, eurid_resp, contact_deleted,						17,0,0,50005, "Smazání kontaktu úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, contact_password_sent,					17,0,0,50006, "Pøeposlání hesla pro kontakt úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, contact_domains_listed,				17,0,0,50007, "Získání seznamu doménových jmen, kde figuruje daný kontakt úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, contact_by_email_listed,				17,0,0,50008, "Získání seznamu kontaktù, které mají daný email úspìšnì probìhlo.") \
\
	MDESC(c, eurid_resp, domain_checked,						17,0,1,50001, "Kontrola dostupnosti domény úspìšnì probìhla.") \
	MDESC(c, eurid_resp, domain_whois_succeeded,				17,0,1,50002, "Whois domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_order_created,					17,0,1,50003, "Objednání nové domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_updated,						17,0,1,50004, "Zmìna údajù domény úspìšnì probìhla.") \
	MDESC(c, eurid_resp, domain_trade_transfer_order_created,	17,0,1,50005, "Objednání pøevedení domény a/nebo zmìny vlastníka domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_state_checked,					17,0,1,50006, "Provìøení stavu domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_renewed,						17,0,1,50007, "Prodloužení platnosti domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_transfer_reset_ok,				17,0,1,50008, "Zmìna auth-id a spuštìní akce s transferem domény úspìšnì probìhla.") \
	MDESC(c, eurid_resp, domain_authid_got,						17,0,1,50009, "Získání auth-id domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_trade_ok,						17,0,1,50010, "Zmìna vlastníka domény úspìšnì probìhla.") \
\
	MDESC(c, eurid_resp, keygroup_whois_succeeded,				17,0,2,50001, "Whois keygroup úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, keygroup_created,						17,0,2,50002, "Vytvoøení keygroup úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, keygroup_updated,						17,0,2,50003, "Zmìna údajù keygroup úspìšnì probìhla.") \
	MDESC(c, eurid_resp, keygroup_deleted,						17,0,2,50004, "Smazání keygroup úspìšnì probìhlo.") \
\
	MDESC(c, eurid_resp, domain_created,						17,1,1,50001, "Vytvoøení nové domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_transfered,						17,1,1,50002, "Pøevod domény úspìšnì probìhl.") \
	MDESC(c, eurid_resp, domain_cache_updated,					17,1,1,50003, "Vložení nebo aktualizace domény v cache úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_deleted,						17,1,1,50004, "Smazání domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_undeleted,						17,1,1,50005, "Obnovení domény úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, domain_reactivated,					17,1,1,50006, "Reaktivace domény úspìšnì probìhla.") \
	MDESC(c, eurid_resp, registrar_info_credit_ok,				17,1,1,50007, "Získání penìžního zùstatku u EURidu úspìšnì probìhlo.") \
	MDESC(c, eurid_resp, make_poll_succeeded,					17,1,1,50008, "Vyhodnocení zpráv od registrátora úspìšnì probìhlo.") \
\
	MDESC(c, eurid_resp, contact_cache_updated,					17,1,2,50001, "Vložení nebo aktualizace kontaktu v cache úspìšnì probìhlo.") \

	
#define EURID_CMSM_WHS(c) \
	GROUP_WHS(c, eurid_module_mdesc, eurid_cmsm, contact_whois)


#define EURID_MDESC_TABLE(c) \
	EURID_CMSM(c) \
	EURID_RESP(c) \
	EURID_CMSM_WHS(c)

// expand the declarations
CMS_NAMESPACE_START
EURID_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_EURID_MDESCS
