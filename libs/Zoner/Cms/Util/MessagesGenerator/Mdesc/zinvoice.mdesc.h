#ifndef MOD_ZONERINVOICE_MDESCS
#define MOD_ZONERINVOICE_MDESCS

#include "mdescs.h"

// ZonerInvoice messages
#define ZINV_MDESCS(c) \
	MDESC(c, zinv_resp, unhandled_exception,        10,0,0,30000, "Neo¹etøená výjimka v obsluze zprávy.") \
	MDESC(c, zinv_resp, unsupported_accountancy,    10,0,0,30001, "Nepodporované úèetnictví.") \
	MDESC(c, zinv_resp, missing_accty,              10,0,0,30002, "Chybí parametr 'accty'.") \
	MDESC(c, zinv_resp, invalid_accty,              10,0,0,30003, "Chybná hodnota parametru 'accty'.") \
	MDESC(c, zinv_resp, invalid_internal_response,  10,0,0,30004, "Chybná interní odpovìï.") \
	MDESC(c, zinv_resp, missing_ccy,                10,0,0,30005, "Chybí parametr 'ccy'.") \
	MDESC(c, zinv_resp, invalid_ccy,                10,0,0,30006, "Chybná hodnota parametru 'ccy'.") \
	MDESC(c, zinv_resp, missing_vs,                 10,0,0,30007, "Chybí parametr 'vs'.") \
	MDESC(c, zinv_resp, invalid_vs,                 10,0,0,30008, "Chybná hodnota parametru 'vs'.") \
	MDESC(c, zinv_resp, missing_amount,             10,0,0,30009, "Chybí parametr 'amount'.") \
	MDESC(c, zinv_resp, invalid_amount,             10,0,0,30010, "Chybná hodnota parametru 'amount'.") \
	MDESC(c, zinv_resp, accountancy_mismatch,       10,0,0,30011, "Nesouhlasí specifikace úèetnictví.") \
	MDESC(c, zinv_resp, missing_paid_date,          10,0,0,30012, "Chybí parametr 'paid_date'.") \
	MDESC(c, zinv_resp, invalid_paid_date,          10,0,0,30013, "Chybná hodnota parametru 'paid_date'.") \
	MDESC(c, zinv_resp, missing_invoice_number,     10,0,0,30014, "Chybí parametr 'invoice_number'.") \
	MDESC(c, zinv_resp, invalid_invoice_number,     10,0,0,30015, "Chybná hodnota parametru 'invoice_number'.") \
	MDESC(c, zinv_resp, ccc_id_user_not_found,      10,0,0,30016, "Ccc úèet s daným ccc_id_user nenalezen.") \
	MDESC(c, zinv_resp, ccc_pbu_mismatch,           10,0,0,30017, "Ccc nesouhlasí poboèky.") \
	MDESC(c, zinv_resp, ccc_unknown_pbu,            10,0,0,30018, "Neznámá poboèka.") \
	MDESC(c, zinv_resp, unknown_localization,       10,0,0,30019, "Neznámá lokalizace.") \
	MDESC(c, zinv_resp, isdoc_unsupported,          10,0,0,30020, "Formát IsDoc není podporovaný.") \
	MDESC(c, zinv_resp, unimplemented,              10,0,0,30021, "Neimplementovaná fukcionalita!!") \
	MDESC(c, zinv_resp, missing_ccc_id_user,        10,0,0,30022, "Chybí parametr 'ccc_id_user'.") \
	MDESC(c, zinv_resp, invalid_ccc_id_user,        10,0,0,30023, "Chybná hodnota parametru 'ccc_id_user'.") \
	MDESC(c, zinv_resp, missing_domain_name,        10,0,0,30024, "Chybí parametr 'domain_name'.") \
	MDESC(c, zinv_resp, invalid_domain_name,        10,0,0,30025, "Chybná hodnota parametru 'domain_name'.") \
	MDESC(c, zinv_resp, missing_ccc_pkid,           10,0,0,30026, "Chybí parametr 'ccc_pkid'.") \
	MDESC(c, zinv_resp, invalid_ccc_pkid,           10,0,0,30027, "Chybná hodnota parametru 'ccc_pkid'.") \
	MDESC(c, zinv_resp, missing_vat_rate,           10,0,0,30028, "Chybí parametr 'vat_rate'.") \
	MDESC(c, zinv_resp, invalid_vat_rate,           10,0,0,30029, "Chybná hodnota parametru 'vat_rate'.") \
	MDESC(c, zinv_resp, ccc_package_not_found,      10,0,0,30030, "Ccc balíèek s daným 'ccc_pkid' neexistuje.") \
	MDESC(c, zinv_resp, missing_payment_way,        10,0,0,30031, "Chybí parametr 'vat_rate'.") \
	MDESC(c, zinv_resp, invalid_payment_way,        10,0,0,30032, "Chybná hodnota parametru 'vat_rate'.") \
	MDESC(c, zinv_resp, no_suitable_invoice_series, 10,0,0,30033, "Nenalezena ¾ádná vhodná èíselná øada." ) \
	MDESC(c, zinv_resp, missing_price_vat_type,     10,0,0,30034, "Chybí parametr 'price_vat_type'.") \
	MDESC(c, zinv_resp, invalid_price_vat_type,     10,0,0,30035, "Chybná hodnota parametru 'price_vat_type'.") \
	MDESC(c, zinv_resp, database_transaction_error, 10,0,0,30036, "Chyba pøi vykonávání databázové transakce.") \
	MDESC(c, zinv_resp, invalid_tax_date,           10,0,0,30037, "Chybná hodnota parametru 'tax_date'.") \
	MDESC(c, zinv_resp, missing_tax_date,           10,0,0,30038, "Chybí parametr 'tax_date'.") \
	MDESC(c, zinv_resp, missing_base_amount,        10,0,0,30039, "Chybí parametr 'base_amount'.") \
	MDESC(c, zinv_resp, invalid_base_amount,        10,0,0,30040, "Chybná hodnota parametru 'base_amount'.") \
	MDESC(c, zinv_resp, missing_full_amount,        10,0,0,30041, "Chybí parametr 'full_amount'.") \
	MDESC(c, zinv_resp, invalid_full_amount,        10,0,0,30042, "Chybná hodnota parametru 'full_amount'.") \
	MDESC(c, zinv_resp, missing_pbu,                10,0,0,30043, "Chybí parametr 'pbu'.") \
	MDESC(c, zinv_resp, invalid_pbu,                10,0,0,30044, "Chybná hodnota parametru 'pbu'.") \
	MDESC(c, zinv_resp, invalid_last_n,             10,0,0,30045, "Chybná hodnota parametru 'last_n'.") \
	MDESC(c, zinv_resp, invalid_override_base_amount, 10,0,0,30046, "Chybná hodnota parametru 'override_base_amount'.") \
	MDESC(c, zinv_resp, no_matching_accounting_year, 10,0,0,30047, "®ádný odpovídající úèetní rok nenalezen.") \
	MDESC(c, zinv_resp, missing_do_not_send,        10,0,0,30048, "Chybí parametr 'do_not_send'.") \
	MDESC(c, zinv_resp, invalid_do_not_send,        10,0,0,30049, "Chybná hodnota parametru 'do_not_send'.") \
	MDESC(c, zinv_resp, missing_payment_reason_note,10,0,0,30050, "Chybí parametr 'payment_reason_note'.") \
	MDESC(c, zinv_resp, invalid_payment_reason_note,10,0,0,30051, "Chybná hodnota parametru 'payment_reason_note'.") \
	MDESC(c, zinv_resp, devel_assert_failed,        10,0,0,30052, "Kontrola devel invariantu selhala!!!") \

// ZonerInvoice authentication messages
#define AUTH_MDESCS(c) \
	MDESC2(c, ziauth_cmsm, login,                     10,1,0,1, "Pøihlá¹ení k systému fakturace.",  "Pøihlá¹ení k systému fakturace selhalo.") \
	MDESC2(c, ziauth_cmsm, logout,                    10,1,0,2, "Odhlá¹ení od systému fakturace.",  "Odhlá¹ení od systému fakturace selhalo.") \
\
	MDESC(c, ziauth_resp, access_denied,              10,1,0,30001, "Pøístup k systému fakturace odepøen.") \
	MDESC(c, ziauth_resp, login_failed,               10,1,0,30002, "Pøihlá¹ení k systému fakturace se nepodaøilo.") \
	MDESC(c, ziauth_resp, logout_failed,              10,1,0,30003, "Odhlá¹ení od systému fakturace se nepodaøilo.") \
	MDESC(c, ziauth_resp, bad_credentials,            10,1,0,30004, "Pøihla¹ovací údaje byly odmítnuty.") \
	MDESC(c, ziauth_resp, missing_user,               10,1,0,30005, "Chybí parametr 'user'.") \
	MDESC(c, ziauth_resp, invalid_user,               10,1,0,30006, "Chybná hodnota parametru 'user'.") \
	MDESC(c, ziauth_resp, missing_auth_source,        10,1,0,30007, "Chybí parametr 'auth_source'.") \
	MDESC(c, ziauth_resp, invalid_auth_source,        10,1,0,30008, "Chybná hodnota parametru 'auth_source'.") \
	MDESC(c, ziauth_resp, missing_auth_type,          10,1,0,30009, "Chybí parametr 'auth_type'.") \
	MDESC(c, ziauth_resp, invalid_auth_type,          10,1,0,30010, "Chybná hodnota parametru 'auth_type'.") \
\
	MDESC(c, ziauth_resp, login_succeeded,            10,1,0,50001, "Pøihlá¹ení k systému fakturace skonèilo úspì¹nì.") \
	MDESC(c, ziauth_resp, logout_succeeded,           10,1,0,50002, "Odhlá¹ení od systému fakturace skonèilo úspì¹nì.") \


// ZonerInvoice electronic invoice messages
#define ELINV_MDESCS(c) \
	MDESC2(c, elinv_cmsm, get_customer_invoices_list, 10,4,0,1, "Vrací seznam elektronických faktur daného zákazníka.",  "Nelze vrátit seznam elektronických faktur zákazníka.") \
	MDESC2(c, elinv_cmsm, send_invoice,               10,4,0,2, "Ode¹le elektronickou fakturu zákazníkovi.",  "Nelze odeslat elektronickou fakturu.") \
	MDESC2(c, elinv_cmsm, get_invoice_money_data,     10,4,0,3, "Vrací binární reprezentaci faktury po naètení z Money.",  "Nelze vrátit binární reprezentaci faktury z Money.") \
	MDESC2(c, elinv_cmsm, get_invoice,                10,4,0,4, "Vrací elektronickou fakturu.",  "Nelze vrátit po¾adovanou elektronickou fakturu.") \
	MDESC2(c, elinv_cmsm, get_preview,                10,4,0,5, "Vrací náhled elektronické faktury.",  "Nelze vytvoøit náhled elektronické faktury.") \
	MDESC2(c, elinv_cmsm, get_invoices_by_number,     10,4,0,6, "Vrací informace o dané elektronické faktuøe.",  "Nelze zjistit informace o dané elektronické faktuøe.") \
	MDESC2(c, elinv_cmsm, fix_isdoc,                  10,4,0,7, "Oprava chybného formátu IsDoc.",  "Nelze opravit chybný formát IsDoc.") \
	MDESC2(c, elinv_cmsm, send_archived_invoices,     10,4,0,8, "Ode¹le archivované elektronické faktury z daného období.",  "Nelze odeslat archivované elektronické faktury.") \
	MDESC2(c, elinv_cmsm, block_electronic_invoice,   10,4,0,9, "Zablokuje/odblokuje mo¾nost odeslání elektronické faktury.",  "Nelze zablokovat/odblokovat mo¾nost odeslání el. faktury.") \
	MDESC2(c, elinv_cmsm, set_email,                  10,4,0,10, "Nastaví email na který se odesílá elektronická faktura.",  "Nelze nastavit email.") \
	MDESC2(c, elinv_cmsm, insert_electronic_invoice,  10,4,0,11, "Vlo¾í do evidence novou elektronickou fakturu.",  "Nelze vlo¾it novou elektronickou fakturu.") \
	MDESC2(c, elinv_cmsm, get_ccc_customer,           10,4,0,12, "Vrací informace o zákazníkovi v Centru.",  "Nelze vrátit informace o zákazníkovi v Centru.") \
	MDESC2(c, elinv_cmsm, get_electronic_invoice_history, 10,4,0,13, "Vrací historii elektronické faktury.",  "Nelze vrátit historii elektornické faktury.") \
\
	MDESC(c, elinv_resp, unhandled_exception,          10,4,0,30000, "Neo¹etøená výjimka v modulu elektronických faktur.") \
	MDESC(c, elinv_resp, missing_id_user,              10,4,0,30001, "Chybí parametr 'id_user'.") \
	MDESC(c, elinv_resp, invalid_id_user,              10,4,0,30002, "Chybná hodnota parametru 'id_user'.") \
	MDESC(c, elinv_resp, database_error,               10,4,0,30003, "Chyba pøi pøístupu k databázi.") \
	MDESC(c, elinv_resp, generate_permission_required, 10,4,0,30004, "Je nutné oprávnìní ke generování elektronických faktur.") \
	MDESC(c, elinv_resp, invoice_request_not_found,    10,4,0,30005, "Po¾adavek na elektronickou fakturu nenalezen.") \
	MDESC(c, elinv_resp, invoice_request_blocked,      10,4,0,30006, "Elektronická faktura je blokována.") \
	MDESC(c, elinv_resp, invoice_not_generated_yet,    10,4,0,30007, "Elektronická faktura dosud nebyla vygenerována.") \
	MDESC(c, elinv_resp, invoice_generate_error,       10,4,0,30008, "Do¹lo k chybì pøi generování elektronické faktury.") \
	MDESC(c, elinv_resp, invoice_generate_exception,   10,4,0,30009, "Do¹lo k výjimce pøi generování elektronické faktury.") \
	MDESC(c, elinv_resp, invoice_send_error,           10,4,0,30010, "Do¹lo k chybì pøi odesílání elektronické faktury.") \
	MDESC(c, elinv_resp, invoice_send_exception,       10,4,0,30011, "Do¹lo k výjimce pøi odesílání elektronické faktury.") \
	MDESC(c, elinv_resp, missing_eiid,                 10,4,0,30012, "Chybí parametr 'eiid'.") \
	MDESC(c, elinv_resp, invalid_eiid,                 10,4,0,30013, "Chybná hodnota parametru 'eiid'.") \
	MDESC(c, elinv_resp, missing_generate_if_not_gen,  10,4,0,30014, "Chybí parametr 'generate_if_not_gen'.") \
	MDESC(c, elinv_resp, invalid_generate_if_not_gen,  10,4,0,30015, "Chybná hodnota parametru 'generate_if_not_gen'.") \
	MDESC(c, elinv_resp, missing_regenerate,           10,4,0,30016, "Chybí parametr 'regenerate'.") \
	MDESC(c, elinv_resp, invalid_regenerate,           10,4,0,30017, "Chybná hodnota parametru 'regenerate'.") \
	MDESC(c, elinv_resp, missing_accty,                10,4,0,30018, "Chybí parametr 'accty'.") \
	MDESC(c, elinv_resp, invalid_accty,                10,4,0,30019, "Chybná hodnota parametru 'accty'.") \
	MDESC(c, elinv_resp, missing_form_type,            10,4,0,30020, "Chybí parametr 'form_type'.") \
	MDESC(c, elinv_resp, invalid_form_type,            10,4,0,30021, "Chybná hodnota parametru 'form_type'.") \
	MDESC(c, elinv_resp, get_money_data_failed,        10,4,0,30022, "Chyba pøi ètení dat faktury z Money.") \
	MDESC(c, elinv_resp, money_data_permission_required, 10,4,0,30023, "Je nutné oprávnìní k pøímému získávání dat z Money.") \
	MDESC(c, elinv_resp, missing_invoice_number,       10,4,0,30024, "Chybí parametr 'invoice_number'.") \
	MDESC(c, elinv_resp, invalid_invoice_number,       10,4,0,30025, "Chybná hodnota parametru 'invoice_number'.") \
	MDESC(c, elinv_resp, missing_sign,                 10,4,0,30026, "Chybí parametr 'sign'.") \
	MDESC(c, elinv_resp, invalid_sign,                 10,4,0,30027, "Chybná hodnota parametru 'sign'.") \
	MDESC(c, elinv_resp, missing_locale,               10,4,0,30028, "Chybí parametr 'locale'.") \
	MDESC(c, elinv_resp, invalid_locale,               10,4,0,30029, "Chybná hodnota parametru 'locale'.") \
	MDESC(c, elinv_resp, missing_pbu,                  10,4,0,30030, "Chybí parametr 'pbu'.") \
	MDESC(c, elinv_resp, invalid_pbu,                  10,4,0,30031, "Chybná hodnota parametru 'pbu'.") \
	MDESC(c, elinv_resp, ambiguous_invoice_request,    10,4,0,30032, "Nejednoznaèný po¾adavek na elektronickou fakturaci." ) \
	MDESC(c, elinv_resp, cannot_pack_invoices,         10,4,0,30033, "Chyba pøi komprimování elektronických faktur." ) \
	MDESC(c, elinv_resp, missing_begin_date,           10,4,0,30034, "Chybí parametr 'begin_date'.") \
	MDESC(c, elinv_resp, invalid_begin_date,           10,4,0,30035, "Chybná hodnota parametru 'begin_date'.") \
	MDESC(c, elinv_resp, missing_end_date,             10,4,0,30036, "Chybí parametr 'end_date'.") \
	MDESC(c, elinv_resp, invalid_end_date,             10,4,0,30037, "Chybná hodnota parametru 'end_date'.") \
	MDESC(c, elinv_resp, missing_include_isdocs,       10,4,0,30038, "Chybí parametr 'include_isdocs'.") \
	MDESC(c, elinv_resp, invalid_include_isdocs,       10,4,0,30039, "Chybná hodnota parametru 'include_isdocs'.") \
	MDESC(c, elinv_resp, missing_max_archive_size_mb,  10,4,0,30040, "Chybí parametr 'max_archive_size_mb'.") \
	MDESC(c, elinv_resp, invalid_max_archive_size_mb,  10,4,0,30041, "Chybná hodnota parametru 'max_archive_size_mb'.") \
	MDESC(c, elinv_resp, archive_too_large,            10,4,0,30042, "Archiv s daòovými doklady je pøíli¹ velký.") \
	MDESC(c, elinv_resp, no_archived_invoices,         10,4,0,30043, "®ádné odpovídající archivní daòové doklady nebyly nalezeny.") \
	MDESC(c, elinv_resp, missing_send_no_invoices,     10,4,0,30044, "Chybí parametr 'send_no_invoices'.") \
	MDESC(c, elinv_resp, invalid_send_no_invoices,     10,4,0,30045, "Chybná hodnota parametru 'send_no_invoices'.") \
	MDESC(c, elinv_resp, invalid_override_email,       10,4,0,30046, "Chybná hodnota parametru 'override_email'.") \
	MDESC(c, elinv_resp, isdoc_not_available,          10,4,0,30047, "Faktura není k dispozici ve formátu IsDoc.") \
	MDESC(c, elinv_resp, missing_block,                10,4,0,30048, "Chybí parametr 'block'.") \
	MDESC(c, elinv_resp, invalid_block,                10,4,0,30049, "Chybná hodnota parametru 'block'.") \
	MDESC(c, elinv_resp, missing_reason,               10,4,0,30050, "Chybí parametr 'reason'.") \
	MDESC(c, elinv_resp, invalid_reason,               10,4,0,30051, "Chybná hodnota parametru 'reason'.") \
	MDESC(c, elinv_resp, missing_email,                10,4,0,30052, "Chybí parametr 'email'.") \
	MDESC(c, elinv_resp, invalid_email,                10,4,0,30053, "Chybná hodnota parametru 'email'.") \
	MDESC(c, elinv_resp, missing_sign_email,           10,4,0,30054, "Chybí parametr 'sign_email'.") \
	MDESC(c, elinv_resp, invalid_sign_email,           10,4,0,30055, "Chybná hodnota parametru 'sign_email'.") \
	MDESC(c, elinv_resp, missing_send_isdoc,           10,4,0,30056, "Chybí parametr 'send_isdoc'.") \
	MDESC(c, elinv_resp, invalid_send_isdoc,           10,4,0,30057, "Chybná hodnota parametru 'send_isdoc'.") \
	MDESC(c, elinv_resp, missing_vs,                   10,4,0,30058, "Chybí parametr 'vs'.") \
	MDESC(c, elinv_resp, invalid_vs,                   10,4,0,30059, "Chybná hodnota parametru 'vs'.") \
	MDESC(c, elinv_resp, missing_content_category,     10,4,0,30060, "Chybí parametr 'content_category'.") \
	MDESC(c, elinv_resp, invalid_content_category,     10,4,0,30061, "Chybná hodnota parametru 'content_category'.") \
	MDESC(c, elinv_resp, missing_extern_attachments,   10,4,0,30062, "Chybí parametr 'extern_attachments'.") \
	MDESC(c, elinv_resp, invalid_extern_attachments,   10,4,0,30063, "Chybná hodnota parametru 'extern_attachments'.") \
\
	MDESC(c, elinv_resp, customer_invoices_list,      10,4,0,50001, "Seznam elektronických faktur daného zákazníka.") \
	MDESC(c, elinv_resp, invoice_sent,                10,4,0,50002, "Faktura byla úspì¹nì odeslána.") \
	MDESC(c, elinv_resp, invoice_money_data,          10,4,0,50003, "Data faktury z Money.") \
	MDESC(c, elinv_resp, invoice,                     10,4,0,50004, "Elektronická faktura.") \
	MDESC(c, elinv_resp, invoice_preview,             10,4,0,50005, "Náhled elektronické faktury.") \
	MDESC(c, elinv_resp, invoices_by_number,          10,4,0,50006, "Elektronické faktury podle èísla.") \
	MDESC(c, elinv_resp, isdoc_fixed,                 10,4,0,50007, "IsDoc formát byl úspì¹nì opraven.") \
	MDESC(c, elinv_resp, archived_invoices_sent,      10,4,0,50008, "Archivované elektronické faktury úspì¹nì odeslány.") \
	MDESC(c, elinv_resp, invoice_block_flag_set,      10,4,0,50009, "Pøíznak zablokování faktury byl úspì¹nì nastaven.") \
	MDESC(c, elinv_resp, email_set,                   10,4,0,50010, "Email faktury byl úspì¹nì nastaven.") \
	MDESC(c, elinv_resp, electronic_invoice_inserted, 10,4,0,50011, "Nová elektronická faktura byla úspì¹nì vlo¾ena.") \
	MDESC(c, elinv_resp, ccc_customer,                10,4,0,50012, "Údaje zákazníka z Centra.") \
	MDESC(c, elinv_resp, electronic_invoice_history,  10,4,0,50013, "Historie elektronické faktury.") \

// ZonerInvoice electronic request-for-payment messages
#define RFPI_MDESCS(c) \
	MDESC2(c, rfpi_cmsm, send_rfp,                    10,5,0,1, "Ode¹le výzvu k úhradì zákazníkovi.",  "Nelze odeslat výzvu k úhradì.") \
	MDESC2(c, rfpi_cmsm, get_rfp,                     10,5,0,2, "Vrací binární data výzvy k úhradì.",  "Nelze vrátit výzvu k úhradì.") \
	MDESC2(c, rfpi_cmsm, get_hotline_failed_requests_list, 10,5,0,3, "Vrací seznam fakturaèních po¾adavkù které selhaly, ty které mù¾e øe¹it hotline.", "Nelze vrátit seznam fakturaèních po¾adavkù, které selhaly.") \
	MDESC2(c, rfpi_cmsm, fix_hotline_failed_request,  10,5,0,4, "Provede opravu fakturaèního po¾adavku, který selhal.", "Nelze provést opravu fakturaèního po¾adavku, který selhal.") \
	MDESC2(c, rfpi_cmsm, render_einvoice_html_rfp,    10,5,0,5, "Generuje HTML výzvu k úhradì pro EInvoice.",  "Nelze vygenerovat výzvu k úhradì.") \
	MDESC2(c, rfpi_cmsm, send_einvoice_html_rfp,      10,5,0,6, "Ode¹le HTML výzvu k úhradì pro EInvoice.",  "Nelze odeslat výzvu k úhradì.") \
	MDESC2(c, rfpi_cmsm, adjust_appeals_after_stopped_service_start, 10,5,0,7, "Upraví data upomínek po spu¹tìní slu¾by, která byla zastavena pro neplacení.", "Nelze provést úpravu dat upomínek.") \
	MDESC2(c, rfpi_cmsm, adjust_next_appeal,          10,5,0,8, "Posune datum pøí¹tí upomínky výzvy k úhradì.", "Nelze provést úpravu dat upomínek.") \
	MDESC2(c, rfpi_cmsm, render_einvoice_pdf_rfp,     10,5,0,9, "Generuje PDF výzvu k úhradì pro EInvoice.",  "Nelze vygenerovat výzvu k úhradì.") \
	\
	MDESC(c, rfpi_resp, missing_accty,                10,5,0,30001, "Chybí parametr 'accty'.") \
	MDESC(c, rfpi_resp, invalid_accty,                10,5,0,30002, "Chybná hodnota parametru 'accty'.") \
	MDESC(c, rfpi_resp, rfp_not_found,                10,5,0,30003, "Výzva k úhradì nenalezena.") \
	MDESC(c, rfpi_resp, accty_mismatch,               10,5,0,30004, "Nesouhlasí úèetnictví výzvy k úhradì.") \
	MDESC(c, rfpi_resp, invalid_invoice_series,       10,5,0,30005, "Chybná nebo neexistující èíselná øada výzvy k úhradì.") \
	MDESC(c, rfpi_resp, rfp_file_not_found,           10,5,0,30006, "Soubor s výzvou k úhradì nenalezen.") \
	MDESC(c, rfpi_resp, cannot_read_rfp_file,         10,5,0,30007, "Chyba pøi ètení souboru s výzvou k úhradì.") \
	MDESC(c, rfpi_resp, missing_fix,                  10,5,0,30008, "Chybí parametr 'fix'.") \
	MDESC(c, rfpi_resp, invalid_fix,                  10,5,0,30009, "Chybná hodnota parametru 'fix'.") \
	MDESC(c, rfpi_resp, failed_request_not_found,     10,5,0,30010, "Fakturaèní po¾adavek nenalezen." ) \
	MDESC(c, rfpi_resp, unmatched_failed_request_fix, 10,5,0,30011, "Oprava fakturaèního po¾adavku neodpovídá ¾ádné z mo¾ností." ) \
	MDESC(c, rfpi_resp, failed_request_in_unsupported_status, 10,5,0,30012, "Fakturaèní po¾adavek není ve stavu, kdy by mohl být opraven." ) \
	MDESC(c, rfpi_resp, missing_id_beinvoice,         10,5,0,30013, "Chybí parametr 'id_beinvoice'.") \
	MDESC(c, rfpi_resp, invalid_id_beinvoice,         10,5,0,30014, "Chybná hodnota parametru 'id_beinvoice'.") \
	MDESC(c, rfpi_resp, missing_pbu,                  10,5,0,30015, "Chybí parametr 'pbu'.") \
	MDESC(c, rfpi_resp, invalid_pbu,                  10,5,0,30016, "Chybná hodnota parametru 'pbu'.") \
	MDESC(c, rfpi_resp, missing_locale,               10,5,0,30017, "Chybí parametr 'locale'.") \
	MDESC(c, rfpi_resp, invalid_locale,               10,5,0,30018, "Chybná hodnota parametru 'locale'.") \
	MDESC(c, rfpi_resp, missing_rfp_field,            10,5,0,30019, "Chybí povinný parametr specifikující pole výzvy k úhradì.") \
	MDESC(c, rfpi_resp, invalid_rfp_field,            10,5,0,30020, "Chybná hodnota parametru specifikujícího pole výzvy k úhradì.") \
	MDESC(c, rfpi_resp, missing_binary_data,          10,5,0,30021, "Chybí binární data.") \
	MDESC(c, rfpi_resp, missing_registers_domain,     10,5,0,30022, "Chybí parametr 'registers_domain'.") \
	MDESC(c, rfpi_resp, invalid_registers_domain,     10,5,0,30023, "Chybná hodnota parametru 'registers_domain'.") \
	MDESC(c, rfpi_resp, missing_renews_domain,        10,5,0,30024, "Chybí parametr 'renews_domain'.") \
	MDESC(c, rfpi_resp, invalid_renews_domain,        10,5,0,30025, "Chybná hodnota parametru 'renews_domain'.") \
	MDESC(c, rfpi_resp, missing_sign_email,           10,5,0,30026, "Chybí parametr 'sign_email'.") \
	MDESC(c, rfpi_resp, invalid_sign_email,           10,5,0,30027, "Chybná hodnota parametru 'sign_email'.") \
	MDESC(c, rfpi_resp, missing_rfp_template_family,  10,5,0,30028, "Chybí parametr 'rfp_template_family'.") \
	MDESC(c, rfpi_resp, invalid_rfp_template_family,  10,5,0,30029, "Chybná hodnota parametru 'rfp_template_family'.") \
	MDESC(c, rfpi_resp, missing_to_email,             10,5,0,30030, "Chybí parametr 'to_email'.") \
	MDESC(c, rfpi_resp, invalid_to_email,             10,5,0,30031, "Chybná hodnota parametru 'to_email'.") \
	MDESC(c, rfpi_resp, missing_bank_fee_warning,     10,5,0,30032, "Chybí parametr 'bank_fee_warning'.") \
	MDESC(c, rfpi_resp, invalid_bank_fee_warning,     10,5,0,30033, "Chybná hodnota parametru 'bank_fee_warning'.") \
	MDESC(c, rfpi_resp, cannot_adjust_appeals,        10,5,0,30034, "Nelze upravit data upomínek výzvy.") \
	MDESC(c, rfpi_resp, missing_invoice_number,       10,5,0,30035, "Chybí parametr 'invoice_number'.") \
	MDESC(c, rfpi_resp, invalid_invoice_number,       10,5,0,30036, "Chybná hodnota parametru 'invoice_number'.") \
	MDESC(c, rfpi_resp, missing_appeal_date,          10,5,0,30037, "Chybí parametr 'appeal_date'.") \
	MDESC(c, rfpi_resp, invalid_appeal_date,          10,5,0,30038, "Chybná hodnota parametru 'appeal_date'.") \
	MDESC(c, rfpi_resp, appeal_date_too_low,          10,5,0,30039, "Pøíli¹ nízké datum pøí¹tí upomínky.") \
	MDESC(c, rfpi_resp, appeal_date_too_high,         10,5,0,30040, "Pøíli¹ vysoké datum pøí¹tí upomínky.") \
	MDESC(c, rfpi_resp, invalid_override_email,       10,5,0,30041, "Chybná hodnota parametru 'override_email'.") \
	\
	MDESC(c, rfpi_resp, electronic_rfpi_send_queued,  10,5,0,50001, "Odeslání výzvy k úhradì bylo úspì¹nì zaøazeno do fronty po¾adavkù.") \
	MDESC(c, rfpi_resp, rfp_data,                     10,5,0,50002, "Data dané výzvy k úhradì.") \
	MDESC(c, rfpi_resp, failed_requests_list,         10,5,0,50003, "Seznam fakturaèních po¾adavkù, které selhaly." ) \
	MDESC(c, rfpi_resp, failed_request_fix_done,      10,5,0,50004, "Fakturaèní po¾adavek byl opraven." ) \
	MDESC(c, rfpi_resp, einvoice_html_rfp_rendered,   10,5,0,50005, "HTML výzva k úhradì byla úspì¹nì vygenerována." ) \
	MDESC(c, rfpi_resp, einvoice_html_rfp_sent,       10,5,0,50006, "HTML výzva k úhradì byla úspì¹nì odeslána.") \
	MDESC(c, rfpi_resp, appeals_adjusted,             10,5,0,50007, "Data upomínek výzvy k úhradì byly úspì¹nì upraveny.") \
	MDESC(c, rfpi_resp, einvoice_pdf_rfp_rendered,    10,5,0,50008, "PDF výzva k úhradì byla úspì¹nì vygenerována." ) \


// ZonerInvoice partner invoices messages
#define INVPART_MDESCS(c) \
	MDESC2(c, invp_cmsm, get_partner_invoices,        10,6,0,1, "Vrací seznam partnerských faktur z úèetnictví.", "Nelze vrátit seznam partnerských faktur z úèetnictví.") \
	\
	MDESC(c, invp_resp, unhandled_exception,          10,6,0,30000, "Neo¹etøená výjimka v modulu partnerských faktur.") \
	MDESC(c, invp_resp, invalid_invoice_series,       10,6,0,30001, "Chybná nebo neexistující èíselná øada faktury.") \
	MDESC(c, invp_resp, end_invoice_out_of_range,     10,6,0,30002, "Hodnota parametru 'end_invoice_number' je mimo platný rozsah èíselné øady." ) \
	MDESC(c, invp_resp, missing_begin_invoice_number, 10,6,0,30003, "Chybí parametr 'begin_invoice_number'.") \
	MDESC(c, invp_resp, invalid_begin_invoice_number, 10,6,0,30004, "Chybná hodnota parametru 'begin_invoice_number'.") \
	MDESC(c, invp_resp, missing_end_invoice_number,   10,6,0,30005, "Chybí parametr 'end_invoice_number'.") \
	MDESC(c, invp_resp, invalid_end_invoice_number,   10,6,0,30006, "Chybná hodnota parametru 'end_invoice_number'.") \
	\
	MDESC(c, invp_resp, partner_invoices,             10,6,0,50001, "Seznam partnerských faktur z úèetnictví.") \

// ZonerInvoice credit unit messages
#define ZICREDIT_MDESCS(c) \
	MDESC2(c, cred_cmsm, deposit_by_permanent_vs,     10,7,0,1,     "Vlo¾í èástku na kreditní úèet pøes permanentní variabilní symbol.", "Nelze vlo¾it èástku pøes permanentní variabilní symbol.") \
	MDESC2(c, cred_cmsm, withdraw_immediate,          10,7,0,2,     "Provede jednorázové èerpání èástky.", "Nelze provést jednorázové èerpání èástky.") \
	MDESC2(c, cred_cmsm, withdraw_start,              10,7,0,3,     "Zahájí èerpání èástky.", "Nelze zahájit èerpání èástky.") \
	MDESC2(c, cred_cmsm, withdraw_cancel,             10,7,0,4,     "Zru¹í èerpání èástky.", "Nelze zru¹it èerpání èástky.") \
	MDESC2(c, cred_cmsm, withdraw_finish,             10,7,0,5,     "Potvrdí èerpání èástky.", "Nelze potvrdit èerpání èástky.") \
	MDESC2(c, cred_cmsm, get_credit_account_info,     10,7,0,6,     "Vrací informace o kreditním úètu.", "Chyba pøi zji¹»ování informací o kreditním úètu.") \
	MDESC2(c, cred_cmsm, has_credit_for_withdraw,     10,7,0,7,     "Vrací informaci zda je na kreditním úètu dostateèná èástka pro dané èerpání.", "Chyba pøi zji¹»ování dostupnosti èerpání èástky z kreditního úètu.") \
	MDESC2(c, cred_cmsm, precredit,                   10,7,0,8,     "Vlo¾í èástku na kreditní úèet která bude teprve v budoucnu uhrazena.", "Nelze vlo¾it èástku na kreditní úèet.") \
	MDESC2(c, cred_cmsm, add_bonus,                   10,7,0,9,     "Vlo¾í bonusové kredity na kreditní úèet.", "Nelze vlo¾it bonusové kredity na kreditní úèet.") \
	MDESC2(c, cred_cmsm, expose_deposit_tax_invoice,  10,7,0,10,    "Vystaví daòový doklad na èástku vlo¾enou na kreditní úèet.", "Nelze vystavit daòový doklad na vlo¾enou èástku.") \
	MDESC2(c, cred_cmsm, expose_clearing_invoice,     10,7,0,11,    "Vystaví vyúètovací daòový doklad na nevyúètované pohyby za dané období.", "Nelze vystavit vyúètovací daòový doklad.") \
	MDESC2(c, cred_cmsm, get_clearing_report_pdf,     10,7,0,12,    "Vrací souhrn vyúètovaných slu¾eb daného vyúètovacího dokladu.", "Nelze vrátit souhrn vyúètovaných slu¾eb daného vyúètovacího dokladu.") \
	MDESC2(c, cred_cmsm, deposit_by_rfp_vs,           10,7,0,13,    "Vlo¾í èástku na kreditní úèet pøes jednorázový variabilní symbol.", "Nelze vlo¾it èástku pøes jednorázový variabilní symbol.") \
	MDESC2(c, cred_cmsm, get_credit_account_movements, 10,7,0,14,   "Vrací seznam pohybù na daném kreditním úètu.", "Nelze vrátit seznam pohybù na daném kreditním úètu.") \
	MDESC2(c, cred_cmsm, get_credit_accounts_for_clearing, 10,7,0,15, "Vrací kreditní úèty které mají nevyúètované pohyby za dané období.", "Nelze vrátit kreditní úèty s nevyúètovanými pohyby.") \
	MDESC2(c, cred_cmsm, update_clearing_report,      10,7,0,16,    "Pøegeneruje report pohybù daného vyúètovacího daòového dokladu.", "Nelze pøegenerovat report vyúètovaných pohybù.") \
	MDESC2(c, cred_cmsm, set_lowcredit_warning_email, 10,7,0,17,    "Nastaví email pro upozoròování na nedostatek kreditù.", "Nelze nastavit email pro upozoròování na nedostatek kreditù.") \
	MDESC2(c, cred_cmsm, set_lowcredit_warning_sms,   10,7,0,18,    "Nastaví èíslo mobilu pro upozoròování na nedostatek kreditù.", "Nelze nastavit èíslo mobilu pro upozoròování na nedostatek kreditù.") \
	MDESC2(c, cred_cmsm, get_lowcredit_warning_levels,10,7,0,19,    "Vrací seznam hladin upozoròování na nedostatek kreditù.", "Nelze vrátit seznam hladin upozoròování na nedostatek kreditù.") \
	MDESC2(c, cred_cmsm, set_lowcredit_warning_levels,10,7,0,20,    "Nastavuje seznam hladin upozoròování na nedostatek kreditù.", "Nelze nastavit seznam hladin upozoròování na nedostatek kreditù.") \
	MDESC2(c, cred_cmsm, get_clearing_movements_for_time_distinct_report,10,7,0,21, "Vrací informace a seznam pohybù dané vyúètovací faktury pro report èasového rozli¹ení.", "Nelze vrátit informace a seznam pohybù dané vyúètovací faktury.") \
	MDESC2(c, cred_cmsm, get_accounting_balance_in_time, 10,7,0,23, "Vrací vývoj úèetního zùstatku v èase.", "Nelze vrátit vývoj úèetního zùstatku v èase.") \
	\
	MDESC2(c, cred_cmsm, ccc_create_credit_account,   10,7,1,1,     "Zalo¾í nový kreditní úèet vázaný na Centrum.", "Nelze zalo¾it nový kreditní úèet.") \
	MDESC2(c, cred_cmsm, ccc_get_credit_account_info, 10,7,1,2,     "Vrací informace o kreditním úètu vázaném na úèet Centra.", "Nelze vrátit informace o kreditní úèet vázaném na úèet Centra.") \
	MDESC2(c, cred_cmsm, ccc_get_customer_billing_info, 10,7,1,3,   "Vrací úèetní informace o zákazníkovi vázaném na úèet Centra.", "Nelze vrátit úèetní informace o zákazníkovi vázaném na úèet Centra.") \
	\
	MDESC(c, cred_resp, unhandled_exception,          10,7,0,30000, "Neo¹etøená výjimka v kreditním modulu.") \
	MDESC(c, cred_resp, database_error,               10,7,0,30003, "Chyba pøi pøístupu k databázi.") \
	MDESC(c, cred_resp, database_transaction_error,   10,7,0,30004, "Chyba pøi vykonávání databázové transakce.") \
	MDESC(c, cred_resp, nonpositive_deposit_amount,   10,7,0,30007, "Vkládaná èástka není kladná.") \
	MDESC(c, cred_resp, invalid_permanent_vs,         10,7,0,30008, "Neplatný permanentní variabilní symbol.") \
	MDESC(c, cred_resp, credit_account_not_found,     10,7,0,30009, "Kreditní úèet nenalezen.") \
	MDESC(c, cred_resp, currency_mismatch,            10,7,0,30010, "Nesouhlasí mìna.") \
	MDESC(c, cred_resp, cannot_create_deposit_movement,10,7,0,30011, "Nelze vytvoøit depositní záznam na kreditním úètu.") \
	MDESC(c, cred_resp, cannot_increment_credit_account,10,7,0,30012, "Nelze navý¹it èástku na kreditním úètu.") \
	MDESC(c, cred_resp, missing_payid,                10,7,0,30013, "Chybí parametr 'payid'.") \
	MDESC(c, cred_resp, invalid_payid,                10,7,0,30014, "Chybná hodnota parametru 'payid'.") \
	MDESC(c, cred_resp, missing_caid,                 10,7,0,30015, "Chybí parametr 'caid'.") \
	MDESC(c, cred_resp, invalid_caid,                 10,7,0,30016, "Chybná hodnota parametru 'caid'.") \
	MDESC(c, cred_resp, withdraw_not_negative,        10,7,0,30017, "Èástka výbìru z kreditního úètu není záporná.") \
	MDESC(c, cred_resp, cannot_create_withdraw_movement,10,7,0,30018, "Nelze vytvoøit výbìrový záznam na kreditním úètu.") \
	MDESC(c, cred_resp, cannot_decrement_credit_account,10,7,0,30019, "Nelze poní¾it èástku na kreditním úètu.") \
	MDESC(c, cred_resp, not_enaugh_credit,            10,7,0,30020, "Nedostateèný kredit na kreditním úètu.") \
	MDESC(c, cred_resp, missing_cmid,                 10,7,0,30021, "Chybí parametr 'cmid'.") \
	MDESC(c, cred_resp, invalid_cmid,                 10,7,0,30022, "Chybná hodnota parametru 'cmid'.") \
	MDESC(c, cred_resp, withdraw_movement_not_found,  10,7,0,30023, "Záznam o pohybu na kreditním úètu nebyl nalezen.") \
	MDESC(c, cred_resp, bad_movement_state,           10,7,0,30024, "Záznam o pohybu na kreditním úètu je v neoèekávaném stavu.") \
	MDESC(c, cred_resp, cannot_cancel_withdraw_movement,10,7,0,30025, "Nelze zru¹it výbìrový záznam na kreditním úètu.") \
	MDESC(c, cred_resp, cannot_complete_withdraw_movement,10,7,0,30026, "Nelze potvrdit výbìrový záznam na kreditním úètu.") \
	MDESC(c, cred_resp, nonpositive_precredit_amount, 10,7,0,30027, "Vkládaná èástka není kladná.") \
	MDESC(c, cred_resp, cannot_create_precredit_movement,10,7,0,30028, "Nelze vytvoøit záznam o neuhrazeném vkladu na kreditním úètu.") \
	MDESC(c, cred_resp, missing_note,                 10,7,0,30029, "Chybí parametr 'note'.") \
	MDESC(c, cred_resp, invalid_note,                 10,7,0,30030, "Chybná hodnota parametru 'note'.") \
	MDESC(c, cred_resp, cannot_settle_precredit_movements, 10,7,0,30031, "Nelze vypoøádat neuhrazené vklady na kreditní úèet.") \
	MDESC(c, cred_resp, missing_vat_percent,          10,7,0,30032, "Chybí parametr 'vat_percent'.") \
	MDESC(c, cred_resp, invalid_vat_percent,          10,7,0,30033, "Chybná hodnota parametru 'vat_percent'.") \
	MDESC(c, cred_resp, nonpositive_bonus_amount,     10,7,0,30034, "Bonusová èástka není kladná.") \
	MDESC(c, cred_resp, cannot_create_add_bonus_movement,10,7,0,30035, "Nelze vytvoøit záznam o pøidání bonusu na kreditní úèet.") \
	MDESC(c, cred_resp, cannot_increment_uncleared_bonus,10,7,0,30036, "Nelze navý¹it bonusovou èástku na nevyúètovaném bonusu.") \
	MDESC(c, cred_resp, missing_tax_date,                10,7,0,30037, "Chybí parametr 'tax_date'.") \
	MDESC(c, cred_resp, invalid_tax_date,                10,7,0,30038, "Chybná hodnota parametru 'tax_date'.") \
	MDESC(c, cred_resp, deposit_movement_not_found,      10,7,0,30039, "Depositní záznam na kreditním úètu nenalezen.") \
	MDESC(c, cred_resp, deposit_movement_payid_mismatch, 10,7,0,30040, "Nesouhlasí polo¾ka 'payid' depositního záznamu.") \
	MDESC(c, cred_resp, deposit_movement_currency_mismatch, 10,7,0,30041, "Nesouhlasí polo¾ka 'currency' depositního záznamu.") \
	MDESC(c, cred_resp, deposit_movement_amount_mismatch, 10,7,0,30042, "Nesouhlasí polo¾ka 'amount' depositního záznamu.") \
	MDESC(c, cred_resp, cannot_expose_invoice_to_money,   10,7,0,30043, "Chyba pøi vystavování faktury do Money.") \
	MDESC(c, cred_resp, missing_begin_date,              10,7,0,30044, "Chybí parametr 'begin_date'.") \
	MDESC(c, cred_resp, invalid_begin_date,              10,7,0,30045, "Chybná hodnota parametru 'begin_date'.") \
	MDESC(c, cred_resp, missing_end_date,                10,7,0,30046, "Chybí parametr 'end_date'.") \
	MDESC(c, cred_resp, invalid_end_date,                10,7,0,30047, "Chybná hodnota parametru 'end_date'.") \
	MDESC(c, cred_resp, no_uncleared_withdraw_movements, 10,7,0,30048, "V daném období nejsou ¾ádné nevyúètované pohyby.") \
	MDESC(c, cred_resp, withdraw_movement_currency_mismatch, 10,7,0,30049, "Nesouhlasí polo¾ka 'currency' výbìrového záznamu.") \
	MDESC(c, cred_resp, low_uncleared_credit_for_clearing, 10,7,0,30050, "Nedostatek nevyúètovaného kreditu pro provedení vyúètování.") \
	MDESC(c, cred_resp, cannot_finish_withdraw_movement, 10,7,0,30051, "Nelze finalizovat výbìrový záznam na kreditním úètu.") \
	MDESC(c, cred_resp, cannot_update_uncleared_counters, 10,7,0,30052, "Nelze aktualizovat poèítadla nevyúètovaných kreditù/bonusù.") \
	MDESC(c, cred_resp, vat_percent_mismatch,             10,7,0,30053, "Nesouhlasí sazba DPH.") \
	MDESC(c, cred_resp, clearing_invoice_number_not_found,10,7,0,30054, "Vyúètovací faktura s daným èíslem neexistuje.") \
	MDESC(c, cred_resp, ambiguous_clearing_invoice_number,10,7,0,30055, "Nejednoznaèné èíslo vyúètovací faktury.") \
	MDESC(c, cred_resp, clearing_report_not_found,        10,7,0,30056, "Soupis vyúètovaných slu¾eb nenalezen.") \
	MDESC(c, cred_resp, credit_account_permanent_vs_not_available, 10,7,0,30057, "Permanentní variabilní symbol ke kreditnímu úètu není k dispozici." ) \
	MDESC(c, cred_resp, invalid_last_n,                   10,7,0,30058, "Chybná hodnota parametru 'last_n'.") \
	MDESC(c, cred_resp, invalid_filter_movement_type,     10,7,0,30059, "Chybná hodnota parametru 'filter_movement_type'.") \
	MDESC(c, cred_resp, invalid_filter_inserted_begin,    10,7,0,30060, "Chybná hodnota parametru 'filter_inserted_begin'.") \
	MDESC(c, cred_resp, invalid_filter_inserted_end,      10,7,0,30061, "Chybná hodnota parametru 'filter_inserted_end'.") \
	MDESC(c, cred_resp, no_withdraw_movements,            10,7,0,30062, "Nebyly nalezeny ¾ádné výbìrové pohyby.") \
	MDESC(c, cred_resp, billing_request_not_found,        10,7,0,30063, "Fakturaèní po¾adavek nenalezen.") \
	MDESC(c, cred_resp, cannot_set_lowcredit_warning_email, 10,7,0,30064, "Nelze nastavit email pro upozoròování na nedostatek kreditù.") \
	MDESC(c, cred_resp, cannot_set_lowcredit_warning_sms, 10,7,0,30065, "Nelze nastavit èíslo mobilu pro SMS upozoròování na nedostatek kreditù.") \
	MDESC(c, cred_resp, missing_lowcredit_warning_email,  10,7,0,30066, "Chybí parametr 'lowcredit_warning_email'.") \
	MDESC(c, cred_resp, invalid_lowcredit_warning_email,  10,7,0,30067, "Chybná hodnota parametru 'lowcredit_warning_email'.") \
	MDESC(c, cred_resp, missing_lowcredit_warning_sms,    10,7,0,30068, "Chybí parametr 'lowcredit_warning_sms'.") \
	MDESC(c, cred_resp, invalid_lowcredit_warning_sms,    10,7,0,30069, "Chybná hodnota parametru 'lowcredit_warning_sms'.") \
	MDESC(c, cred_resp, missing_lowcredit_warning_levels_table, 10,7,0,30070, "Chybí tabulka 'lowcredit_warning_levels'.") \
	MDESC(c, cred_resp, invalid_lowcredit_warning_levels_table, 10,7,0,30071, "Chybný obsah tabulky 'lowcredit_warning_levels'.") \
	MDESC(c, cred_resp, invalid_lowcredit_warning_level_amount, 10,7,0,30072, "Chybná èástka v tabulce 'lowcredit_warning_levels'.") \
	MDESC(c, cred_resp, nonaccredited_deposits_exist,     10,7,0,30073, "Existují neakreditované depositní pohyby.") \
	MDESC(c, cred_resp, no_clearable_withdraw_movements,  10,7,0,30074, "Nebyly nalezeny ¾ádné výbìrové pohyby které lze vyúètovat.") \
	MDESC(c, cred_resp, invalid_filter_accredited_begin,  10,7,0,30076, "Chybná hodnota parametru 'filter_accredited_begin'.") \
	MDESC(c, cred_resp, invalid_filter_accredited_end,    10,7,0,30077, "Chybná hodnota parametru 'filter_accredited_end'.") \
	\
	MDESC(c, cred_resp, ccc_id_user_already_has_credit_account, 10,7,1,30001, "Daný CCC u¾ivatel ji¾ má existující kreditní úèet.") \
	MDESC(c, cred_resp, ccc_missing_ccc_id_user,      10,7,1,30002, "Chybí parametr 'ccc_id_user'.") \
	MDESC(c, cred_resp, ccc_invalid_ccc_id_user,      10,7,1,30003, "Chybná hodnota parametru 'ccc_id_user'.") \
	MDESC(c, cred_resp, ccc_id_user_not_found,        10,7,1,30004, "Daný CCC u¾ivatel neexistuje.") \
	\
	MDESC(c, cred_resp, credit_account_created,       10,7,0,50001, "Nový kreditní úèet byl úspì¹nì zalo¾en.") \
	MDESC(c, cred_resp, deposit_amount_inserted,      10,7,0,50002, "Vklad na kreditní úèet byl úspì¹nì proveden.") \
	MDESC(c, cred_resp, withdraw_done,                10,7,0,50003, "Výbìr z kreditního úètu byl úspì¹nì proveden.") \
	MDESC(c, cred_resp, withdraw_started,             10,7,0,50004, "Výbìr z kreditního úètu byl úspì¹nì zahájen.") \
	MDESC(c, cred_resp, withdraw_cancelled,           10,7,0,50005, "Výbìr z kreditního úètu byl úspì¹nì zru¹en.") \
	MDESC(c, cred_resp, withdraw_finished,            10,7,0,50006, "Výbìr z kreditního úètu byl úspì¹nì potvrzen.") \
	MDESC(c, cred_resp, credit_account_info,          10,7,0,50007, "Informace o kreditním úètu.") \
	MDESC(c, cred_resp, has_credit_for_withdraw,      10,7,0,50008, "Na úètu je dostateèný kredit pro po¾adované èerpání.") \
	MDESC(c, cred_resp, precredit_amount_inserted,    10,7,0,50009, "Neuhrazený vklad na kreditní úèet byl úspì¹nì proveden.") \
	MDESC(c, cred_resp, bonus_added,                  10,7,0,50010, "Bonusové kredity byly úspì¹nì pøidány na kreditní úèet.") \
	MDESC(c, cred_resp, deposit_tax_invoice_exposed,  10,7,0,50011, "Daòový doklad na vklad na kreditní úèet byl úspì¹nì vystaven.") \
	MDESC(c, cred_resp, clearing_invoice_exposed,     10,7,0,50012, "Vyúètovací faktura byl úspì¹nì vystavena.") \
	MDESC(c, cred_resp, clearing_report_pdf,          10,7,0,50013, "PDF soubor soupisu vyúètovaných slu¾eb.") \
	MDESC(c, cred_resp, customer_billing_info,        10,7,0,50014, "Úèetní informace o daném zákazníkovi.") \
	MDESC(c, cred_resp, credit_account_movements,     10,7,0,50015, "Seznam pohybù na kreditním úètu.") \
	MDESC(c, cred_resp, credit_accounts_for_clearing, 10,7,0,50016, "Seznam kreditních úètù s nevyúètovanými pohyby.") \
	MDESC(c, cred_resp, clearing_report_updated,      10,7,0,50017, "Soupis vyúètovaných slu¾eb byl úspì¹nì pøegenerován.") \
	MDESC(c, cred_resp, lowcredit_warning_email_set,  10,7,0,50018, "Email pro upozoròování na nedostatek kreditù byl úspì¹nì nastaven.") \
	MDESC(c, cred_resp, lowcredit_warning_sms_set,    10,7,0,50019, "Mobil pro SMS upozoròování na nedostatek kreditù byl úspì¹nì nastaven.") \
	MDESC(c, cred_resp, lowcredit_warning_levels,     10,7,0,50020, "Hladiny upozoròování na nedostatek kreditù.") \
	MDESC(c, cred_resp, lowcredit_warning_levels_set, 10,7,0,50021, "Hladiny upozoròování na nedostatek kreditù byly nastaveny.") \
	MDESC(c, cred_resp, clearing_movements_for_time_distinct_report, 10,7,0,50022, "Informace a pohyby vyúètovací faktury pro report èasového rozli¹ení.") \
	MDESC(c, cred_resp, fix_of_base_uncleared_amounts_of_movements_finished,  10,7,0,50023, "Úprava nevyúètovaných zùstatkù ve vkladových kreditních pohybech byla dokonèena.") \
	MDESC(c, cred_resp, accounting_balance_in_time,   10,7,0,50024, "Vývoj úèetního zùstatku v èase.") \
	
// ZonerInvoice Payment Evidence unit messages
#define ZIPAYEV_MDESCS(c) \
	MDESC2(c, payev_cmsm, pay_in_cash,                10,8,0,1,     "Platba èástky pod variabilním symbolem v hotovosti.", "Platba v hotovosti selhala.") \
	MDESC2(c, payev_cmsm, expose_tax_invoice_by_payid,10,8,0,2,     "Vystavení daòového dokladu na pøijatou platbu.", "Vystavení daòového dokladu na pøijatou platbu selhalo.") \
	MDESC2(c, payev_cmsm, pay_by_bank,                10,8,0,3,     "Platba èástky pod variabilním symbolem na bankovní úèet.", "Pøijetí platby na bankovní úèet selhalo.") \
	MDESC2(c, payev_cmsm, create_credit_request_by_vs,10,8,0,4,     "Vytvoøení po¾adavku na vlo¾ení èástky na kreditní úèet pod variabilním symbolem.", "Nelze vytvoøit po¾adavek na vlo¾ení èástky na kreditní úèet pod variabilním symbolem." ) \
	MDESC2(c, payev_cmsm, pair_new_bank_payments,     10,8,0,5,     "Provìøí zda nejsou v pøijatých bankovních platbách nezpracované transakce, spáruje je a aktivuje úhrady v pøíslu¹ných subsystémech.", "Nelze provìøit nezpracované pøijaté bankovní platby." ) \
	MDESC2(c, payev_cmsm, lookup_unique_payment_evidence_for_tax, 10,8,0,6, "Vyhledá odpovídající platbu na základì var. symbolu apod. pro vystavení daòového dokladu.", "®ádná odpovídající platba nenalezena." ) \
	MDESC2(c, payev_cmsm, insert_card_payment,        10,8,0,7,     "Vlo¾í a spáruje platbu pøes kreditní kartu.", "Nelze vlo¾it a/nebo spárovat platbu pøes kreditní kartu." ) \
	MDESC2(c, payev_cmsm, accredit_payment,           10,8,0,9,     "Prohlásí platbu za definitivnì pøijatou, obvykle na základì bankovního výpisu.", "Nelze prohlásit platbu za definitivnì pøijatou.") \
	MDESC2(c, payev_cmsm, create_qrcode_for_vs,       10,8,0,10,    "Vytvoøi platební QR kód pro daný variabilní symbol.", "Nelze vytvoøit platební QR kód.") \
	MDESC2(c, payev_cmsm, get_payment_evidence_by_vs, 10,8,0,11,    "Vrací tabulku platebních po¾adavkù podle variabilního symbolu.", "Nelze vrátit tabulku platebních po¾adavkù.") \
	MDESC2(c, payev_cmsm, get_payments_for_due_notification, 10,8,0,12, "Vrací tabulku platebních po¾adavkù u kterých by mìlo být odesláno upozornìní na výzvu/fakturu po splatnosti.", "Nelze vrátit tabulku po¾adavkù pro upozornìní po splatnosti.") \
	MDESC2(c, payev_cmsm, send_payment_due_notification, 10,8,0,13, "Po¹le upozornìní po splatnosti platebního po¾adavku.", "Zaslání upozornìní po splatnosti selhalo.") \
	MDESC2(c, payev_cmsm, check_vs_exists,            10,8,0,14,    "Rychlý bezzámkový dotaz zda existuje libovolný platební po¾adavek s daným variabilem.", "Nelze zkontrolovat existence variabilního symbolu.") \
	MDESC2(c, payev_cmsm, get_payment_evidence,       10,8,0,15,    "Vrací kompletní informace platebního po¾adavku s daným payid.", "Nelze vrátit informace o platebním po¾adavku.") \
	MDESC2(c, payev_cmsm, make_manual_payment,        10,8,0,16,    "Provede manuální úhradu platebního po¾adavku.", "Nelze provést manuální úhradu.") \
	\
	MDESC(c, payev_resp, unhandled_exception,         10,8,0,30000, "Neo¹etøená výjimka v modulu evidence plateb.") \
	MDESC(c, payev_resp, database_error,              10,8,0,30003, "Chyba pøi pøístupu k databázi.") \
	MDESC(c, payev_resp, database_transaction_error,  10,8,0,30004, "Chyba pøi vykonávání databázové transakce.") \
	MDESC(c, payev_resp, invalid_invoice_series,      10,8,0,30005, "Neplatná èíselná øada.") \
	MDESC(c, payev_resp, unsupported_invoice_series,  10,8,0,30006, "Daná èíselná øada není v platebním subsystému podporovaná.") \
	MDESC(c, payev_resp, payment_rejected_by_credit_unit, 10,8,0,30007, "Platba byla odmítnuta krednitním subsystémem.") \
	MDESC(c, payev_resp, missing_payid,               10,8,0,30008, "Chybí parametr 'payid'.") \
	MDESC(c, payev_resp, invalid_payid,               10,8,0,30009, "Chybná hodnota parametru 'payid'.") \
	MDESC(c, payev_resp, wrong_payment_state,         10,8,0,30010, "Chybný stav platebního záznamu.") \
	MDESC(c, payev_resp, invoice_already_exposed,     10,8,0,30011, "Faktura na danou platbu byla ji¾ vystavena.") \
	MDESC(c, payev_resp, unsupported_subsystem,       10,8,0,30012, "Nepodporovaný subsystém.") \
	MDESC(c, payev_resp, unsupported_payment_source,  10,8,0,30013, "Nepodporovaný zdroj platby.") \
	MDESC(c, payev_resp, subsystem_message_failed,    10,8,0,30014, "Zpráva do subsystému selhala.") \
	MDESC(c, payev_resp, payment_not_accredited,      10,8,0,30015, "Nebylo potvrzeno pøijetí platby.") \
	MDESC(c, payev_resp, nonpositive_amount,          10,8,0,30016, "Èástka není kladná.") \
	MDESC(c, payev_resp, missing_caid,                10,8,0,30017, "Chybí parametr 'caid'.") \
	MDESC(c, payev_resp, invalid_caid,                10,8,0,30018, "Chybná hodnota parametru 'caid'.") \
	MDESC(c, payev_resp, no_matching_accounting_year, 10,8,0,30019, "Nenalezen ¾ádný odpovídající úèetní rok.") \
	MDESC(c, payev_resp, no_matching_invoice_series,  10,8,0,30020, "Nenalezena ¾ádná odpovídající èíselná øada." ) \
	MDESC(c, payev_resp, cannot_generate_variable_symbol, 10,8,0,30021, "Chyba pøi generování unikátního variabilního symbolu." ) \
	MDESC(c, payev_resp, variable_symbol_not_found,   10,8,0,30022, "Variabilní symbol nebyl nalezen.") \
	MDESC(c, payev_resp, payment_not_in_waiting_state, 10,8,0,30023, "Platební po¾adavek není ve stavu èekajícím na platbu.") \
	MDESC(c, payev_resp, currency_mismatch,           10,8,0,30024, "Nesouhlasí mìna platby.") \
	MDESC(c, payev_resp, amount_mismatch,             10,8,0,30025, "Nesouhlasí èástka platby.") \
	MDESC(c, payev_resp, record_not_bound_to_caid,    10,8,0,30026, "Platební záznam není vázaný na ¾ádný kreditní úèet.") \
	MDESC(c, payev_resp, new_bank_payments_paired_with_errors, 10,8,0,30027, "Párování nových bankovních po¾adavkù probìhlo s chybami." ) \
	MDESC(c, payev_resp, ambiguous_variable_symbol,   10,8,0,30028, "Nejednoznaèný variabilní symbol.") \
	MDESC(c, payev_resp, payment_evidence_not_found,  10,8,0,30029, "Nenalezen odpovídající záznam o platbì.") \
	MDESC(c, payev_resp, unexpected_tax_state,        10,8,0,30030, "Neoèekávaný stav daòového dokladu platebního záznamu.") \
	MDESC(c, payev_resp, payment_not_in_requested_tax_state,  10,8,0,30031, "Záznam o platbì nemá po¾adovaný stav daòového dokladu.") \
	MDESC(c, payev_resp, missing_send_rfp,            10,8,0,30032, "Chybí parametr 'send_rfp'.") \
	MDESC(c, payev_resp, invalid_send_rfp,            10,8,0,30033, "Chybná hodnota parametru 'send_rfp'.") \
	MDESC(c, payev_resp, payment_already_accredited,  10,8,0,30034, "Platba byla ji¾ oznaèena za akreditovanou.") \
	MDESC(c, payev_resp, missing_accredit_date,       10,8,0,30035, "Chybí parametr 'accredit_date'.") \
	MDESC(c, payev_resp, invalid_accredit_date,       10,8,0,30036, "Chybná hodnota parametru 'accredit_date'.") \
	MDESC(c, payev_resp, record_not_bound_to_irqid,   10,8,0,30037, "Platební záznam není vázaný na ¾ádný fakturaèní po¾adavek.") \
	MDESC(c, payev_resp, payment_rejected_by_billing_requests_unit, 10,8,0,30038, "Platba byla odmítnuta subsystémem fakturaèních po¾adavkù.") \
	MDESC(c, payev_resp, missing_pixels_per_square,   10,8,0,30039, "Chybí parametr 'pixels_per_square'.") \
	MDESC(c, payev_resp, invalid_pixels_per_square,   10,8,0,30040, "Chybná hodnota parametru 'pixels_per_square'.") \
	MDESC(c, payev_resp, due_notification_already_sent, 10,8,0,30041, "Upozornìní o splatnosti u¾ bylo odesláno.") \
	MDESC(c, payev_resp, no_due_date,                 10,8,0,30042, "Platební po¾adavek nemá specifikované ¾ádné datum splatnosti.") \
	MDESC(c, payev_resp, no_due_notification_needed,  10,8,0,30043, "Platební po¾adavek nevy¾aduje upozornìní o splatnosti.") \
	MDESC(c, payev_resp, ambiguous_irqid,             10,8,0,30044, "Nejednoznaèná identifikace platebního po¾adavku pøes irqid.") \
	MDESC(c, payev_resp, missing_payment_bank,        10,8,0,30045, "Chybí parametr 'payment_bank'.") \
	MDESC(c, payev_resp, invalid_payment_bank,        10,8,0,30046, "Chybná hodnota parametru 'payment_bank'.") \
	MDESC(c, payev_resp, missing_payment_source,      10,8,0,30047, "Chybí parametr 'payment_source'.") \
	MDESC(c, payev_resp, invalid_payment_source,      10,8,0,30048, "Chybná hodnota parametru 'payment_source'.") \
	MDESC(c, payev_resp, missing_note,                10,8,0,30049, "Chybí parametr 'note'.") \
	MDESC(c, payev_resp, invalid_note,                10,8,0,30050, "Chybná hodnota parametru 'note'.") \
	MDESC(c, payev_resp, sslmarket_payment_failed,    10,8,0,30051, "Platba pro SSLMarket selhala.") \
	\
	MDESC(c, payev_resp, payment_in_cash_accepted,    10,8,0,50001, "Platba v hotovosti byla pøijata." ) \
	MDESC(c, payev_resp, tax_invoice_exposed,         10,8,0,50002, "Daòový doklad na platbu byl úspì¹nì vystaven." ) \
	MDESC(c, payev_resp, payment_by_bank_accepted,    10,8,0,50003, "Platba na bankovní úèet byla pøijata." ) \
	MDESC(c, payev_resp, credit_request_by_vs_created,10,8,0,50004, "Po¾adavek na vklad na kreditní úèet pod variabilním symbolem byl úspì¹nì vytvoøen." ) \
	MDESC(c, payev_resp, new_bank_payments_paired,    10,8,0,50005, "Párování nových bankovních po¾adavkù úspì¹nì probìhlo." ) \
	MDESC(c, payev_resp, payment_evidence_found,      10,8,0,50006, "Platba byla úspì¹nì nalezena." ) \
	MDESC(c, payev_resp, payment_by_card_accepted,    10,8,0,50007, "Platba kartou byla pøijata." ) \
	MDESC(c, payev_resp, payment_accredited,          10,8,0,50008, "Platba byla úspì¹nì prohlá¹ena za akreditovanou." ) \
	MDESC(c, payev_resp, qrcode_created,              10,8,0,50009, "Platební QR kód byl úspì¹nì vytvoøen." ) \
	MDESC(c, payev_resp, payment_evidence_list,       10,8,0,50010, "Seznam platebních po¾adavkù." ) \
	MDESC(c, payev_resp, payments_for_due_notification, 10,8,0,50011, "Seznam platebních po¾adavkù kterým by mìlo být zasláno upozornìni po splatnosti." ) \
	MDESC(c, payev_resp, payment_due_notification_sent, 10,8,0,50012, "Upozornìni po splatnosti bylo úspì¹nì odesláno." ) \
	MDESC(c, payev_resp, subsystem_mismatch,          10,8,0,50013, "Nesouhlasí subsystém." ) \
	MDESC(c, payev_resp, no_invoice_number,           10,8,0,50014, "Èíslo daòového dokladu není k dispozici." ) \
	MDESC(c, payev_resp, evidence_vs_exists,          10,8,0,50015, "Variabilní symbol existuje." ) \
	MDESC(c, payev_resp, payment_evidence,            10,8,0,50016, "Informace o platebním po¾adavku." ) \
	MDESC(c, payev_resp, manual_payment_accepted,     10,8,0,50017, "Manuální platba byla pøijata." ) \
	MDESC(c, payev_resp, sslmarket_payment_paired,    10,8,0,50018, "Platba pro SSLMarket byla úspì¹nì spárovaná." ) \

// ZonerInvoice Billing Requests unit messages
#define ZIREQUESTS_MDESCS(c) \
	MDESC2(c, irq_cmsm, dummy_message,                10,9,0,1,     "Nìco nedefinovaného.", "Nedefinovaná vìc selhala.") \
	MDESC2(c, irq_cmsm, finalize_request,             10,9,0,2,     "Potvrdí realizaci slu¾by daného fakturaèního po¾adavku.", "Nelze potvrdit realizaci slu¾by fakturaèního po¾adavku.") \
	MDESC2(c, irq_cmsm, cancel_request,               10,9,0,3,     "Potvrdí zru¹ení slu¾by daného fakturaèního po¾adavku.", "Nelze potvrdit zru¹ení slu¾by fakturaèního po¾adavku.") \
	MDESC2(c, irq_cmsm, finalize_domain_reg_request,  10,9,0,4,     "Potvrdí realizaci fakturaèního po¾adavku na registraci/renew domény.", "Nelze potvrdit realizaci fakturaèního po¾adavku na registraci/renew domény.") \
	MDESC2(c, irq_cmsm, get_request_invoice_data_ex,  10,9,0,6,     "Vrací komplexní data fakturaèního po¾adavku vèetnì fakturaèních polo¾ek atd.", "Nelze vrátit data fakturaèního po¾adavku.") \
	MDESC2(c, irq_cmsm, get_nonexposed_serverhosting_requests, 10,9,0,7, "Vrací nevystavené fakturaèní po¾adavky typu serverhosting", "Nelze vrátit nevystavené fakturaèní po¾adavky.") \
	MDESC2(c, irq_cmsm, expose_request,               10,9,0,8,     "Vystaví výzvu/fakturu daného fakturaèního po¾adavku.", "Nelze vystavit výzvu/fakturu daného fakturaèního po¾adavku.") \
	MDESC2(c, irq_cmsm, pay_request_from_payment_evidence, 10,9,0,9, "Uhradí fakturaèní po¾adavek na základì pøijaté platby v platební evidenci.", "Nelze uhradit fakturaèní po¾adavek na základì pøijaté platby v platební evidenci.") \
	MDESC2(c, irq_cmsm, expose_tax_invoice,           10,9,0,10,    "Vystaví daòový doklad na fakturaèní po¾adavek.", "Nelze vystavit daòový doklad na fakturaèní po¾adavek.") \
	MDESC2(c, irq_cmsm, set_nonexposed_serverhosting_request_period, 10,9,0,11, "Zmìní/nastaví období nevystaveného fakturaèního po¾adavku.", "Nelze vystavit zmìnit období nevystaveného fakturaèního po¾adavku.") \
	MDESC2(c, irq_cmsm, get_end_date_by_periods_of_opened_package_requests, 10,9,0,12, "Vrací koncové datum vzniklé pøiètením souètu období otevøených fakturaèních po¾adavkù daného balíèku k zadanému datumu.", "Nelze spoèítat koncové datum.") \
	MDESC2(c, irq_cmsm, edit_request,                 10,9,0,13,    "Edituje u¾ vystavený fakturaèní po¾adavek.", "Nelze editovat fakturaèní po¾adavek.") \
	MDESC2(c, irq_cmsm, get_basic_request_data_by_vs, 10,9,0,14,    "Vrací základní data fakturaèního po¾adavku na základì variabilního symbolu.", "Nelze vrátit data fakturaèního po¾adavku.") \
	MDESC2(c, irq_cmsm, update_request_xml_data,      10,9,0,15,    "Naète a znovu ulo¾í XML data fakturaèního po¾adavku.", "Nelze naèíst a znovu ulo¾it data fakturaèního po¾adavku.") \
	MDESC2(c, irq_cmsm, update_all_xml_data,          10,9,0,16,    "Naète a znovu ulo¾í XML data V©ECH fakturaèních po¾adavkù.", "Chyba pøi naètení a znovuulo¾ení dat fakturaèních po¾adavkù.") \
	\
	MDESC2(c, irq_cmsm, ccc_create_domain_reg_request,10,9,1,1,     "Vytvoøí fakturaèní po¾adavek na registraci/renew domény.", "Nelze vytvoøit fakturaèní po¾adavek na registraci/renew domény.") \
	MDESC2(c, irq_cmsm, ccc_has_credit_for_domain_reg_request,10,9,1,2, "Zkontroluje zda by pro¹el fakturaèní po¾adavek na registraci/renew domény z kreditního úètu.", "Nelze ovìøit mo¾nost fakturaèní po¾adavku na registraci/renew domény z kreditního úètu.") \
	MDESC2(c, irq_cmsm, ccc_create_serverhosting_request, 10,9,1,3, "Vytvoøí faktuaèní po¾adavek serverhostingové slu¾by.", "Nelze vytvoøit fakturaèní po¾adavek serverhostingové slu¾by.") \
	MDESC2(c, irq_cmsm, ccc_get_billing_requests_related_to_id_user, 10,9,1,4, "Vrací fakturaèní po¾adavky se vztahem k u¾ivateli v Centru", "Nelze vrátit fakturaèní po¾adavky.") \
	MDESC2(c, irq_cmsm, ccc_get_billing_requests_related_to_pkid, 10,9,1,5, "Vrací fakturaèní po¾adavky se vztahem k balíèku v Centru", "Nelze vrátit fakturaèní po¾adavky.") \
	MDESC2(c, irq_cmsm, ccc_filter_billing_requests,  10,9,1,6,     "Vrací fakturaèní po¾adavky podle zadaných kritérií", "Nelze vrátit fakturaèní po¾adavky.") \
	MDESC2(c, irq_cmsm, ccc_update_money_customer,    10,9,1,7,     "Pøektualizuje kartu zákazníka (firmy) v Money podle aktuálních údajù v Centry.", "Nelze pøeaktualizovat údaje zákazníka.") \
	MDESC2(c, irq_cmsm, ccc_create_domain_adm_request,10,9,1,8,     "Vytvoøí fakturaèní po¾adavek na administrativní poplatek domény.", "Nelze vytvoøit fakturaèní po¾adavek na administrativní poplatek domény.") \
	\
	MDESC2(c, irq_cmsm, stat_get_permon_total_income, 10,9,2,1,     "Vrací statistiku celkových tr¾eb v daném rozsahu mìsícù.", "Nelze vrátit statistiku celkových tr¾eb v daném rozsahu mìsícù.") \
	\
	MDESC(c, irq_resp, unhandled_exception,           10,9,0,30000, "Neo¹etøená výjimka v modulu fakturaèních po¾adavkù.") \
	MDESC(c, irq_resp, database_error,                10,9,0,30003, "Chyba pøi pøístupu k databázi.") \
	MDESC(c, irq_resp, database_transaction_error,    10,9,0,30004, "Chyba pøi vykonávání databázové transakce.") \
	MDESC(c, irq_resp, cannot_insert_billing_request, 10,9,0,30005, "Chyba pøi vkládání fakturaèního po¾adavku do databáze.") \
	MDESC(c, irq_resp, cannot_update_billing_request, 10,9,0,30006, "Chyba pøi aktualizaci fakturaèního po¾adavku v databázi.") \
	MDESC(c, irq_resp, billing_request_not_paid,      10,9,0,30007, "Fakturaèní po¾adavek není uhrazen.") \
	MDESC(c, irq_resp, billing_request_not_found,     10,9,0,30008, "Fakturaèní po¾adavek nenalezen.") \
	MDESC(c, irq_resp, missing_irqid,                 10,9,0,30009, "Chybí parametr 'irqid'.") \
	MDESC(c, irq_resp, invalid_irqid,                 10,9,0,30010, "Chybná hodnota parametru 'irqid'.") \
	MDESC(c, irq_resp, no_credit_account,             10,9,0,30011, "Po¾adavek není svázaný s kreditním úètem.") \
	MDESC(c, irq_resp, no_credit_movement,            10,9,0,30012, "Po¾adavek není svázaný s pohybem na kreditním úètu.") \
	MDESC(c, irq_resp, unknown_domain_name_tld,       10,9,0,30013, "Neznámé TLD domény.") \
	MDESC(c, irq_resp, cannot_determine_fee_price,    10,9,0,30014, "Nelze urèit fakturovanou èástku po¾adavku.") \
	MDESC(c, irq_resp, irq_item_property_not_found,   10,9,0,30015, "Vlastnost polo¾ky fakturaèního po¾adavku nenalezena.") \
	MDESC(c, irq_resp, invalid_irq_item_property_type,10,9,0,30016, "Nepøípustný datový typ vlastnosti polo¾ky fakturaèního po¾adavku.") \
	MDESC(c, irq_resp, unsupported_irq_item_type,     10,9,0,30017, "Nepodporovaný typ polo¾ky fakturaèního po¾adavku.") \
	MDESC(c, irq_resp, missing_period_begin,          10,9,0,30018, "Chybí parametr 'period_begin'.") \
	MDESC(c, irq_resp, invalid_period_begin,          10,9,0,30019, "Chybná hodnota parametru 'period_begin'.") \
	MDESC(c, irq_resp, missing_period_end,            10,9,0,30020, "Chybí parametr 'period_end'.") \
	MDESC(c, irq_resp, invalid_period_end,            10,9,0,30021, "Chybná hodnota parametru 'period_end'.") \
	MDESC(c, irq_resp, unsupported_payment_way,       10,9,0,30022, "Nepodporovaný zpùsob platby fakturaèního po¾adavku.") \
	MDESC(c, irq_resp, request_guid_exists,           10,9,0,30023, "Dané GUID fakturaèního po¾adavku ji¾ existuje.") \
	MDESC(c, irq_resp, missing_request_guid,          10,9,0,30024, "Chybí parametr 'request_guid'.") \
	MDESC(c, irq_resp, invalid_request_guid,          10,9,0,30025, "Chybná hodnota parametru 'request_guid'.") \
	MDESC(c, irq_resp, missing_request_type,          10,9,0,30026, "Chybí parametr 'request_type'.") \
	MDESC(c, irq_resp, invalid_request_type,          10,9,0,30027, "Chybná hodnota parametru 'request_type'.") \
	MDESC(c, irq_resp, missing_time_period,           10,9,0,30028, "Chybí parametr 'time_period'.") \
	MDESC(c, irq_resp, invalid_time_period,           10,9,0,30029, "Chybná hodnota parametru 'time_period'.") \
	MDESC(c, irq_resp, invalid_calculate_to_date,     10,9,0,30030, "Chybná hodnota parametru 'calculate_to_date'.") \
	MDESC(c, irq_resp, billing_request_not_waiting_for_expose, 10,9,0,30031, "Po¾adavek není ve stavu èekání na vystavení.") \
	MDESC(c, irq_resp, cannot_expose_invoice_to_money, 10,9,0,30032, "Chyba pøi vytváøení faktury v Money.") \
	MDESC(c, irq_resp, billing_request_already_paid,  10,9,0,30033, "Fakturaèní po¾adavek byl ji¾ jednou uhrazen.") \
	MDESC(c, irq_resp, billing_request_is_cancelled,  10,9,0,30034, "Fakturaèní po¾adavek byl ji¾ stornovaný.") \
	MDESC(c, irq_resp, billing_request_already_realized, 10,9,0,30035, "Fakturaèní po¾adavek byl ji¾ realizovaný.") \
	MDESC(c, irq_resp, wrong_billing_request_state,   10,9,0,30036, "Chybný stav fakturaèního po¾adavku.") \
	MDESC(c, irq_resp, payment_way_mismatch,          10,9,0,30037, "Nesouhlasí zpùsob platby po¾adavku.") \
	MDESC(c, irq_resp, currency_mismatch,             10,9,0,30038, "Nesouhlasí mìna po¾adavku.") \
	MDESC(c, irq_resp, amount_mismatch,               10,9,0,30039, "Nesouhlasí èástka po¾adavku.") \
	MDESC(c, irq_resp, immediate_invoice_already_exposed, 10,9,0,30040, "Na fakturaèní po¾adavek byla ji¾ vystavena okam¾itá faktura.") \
	MDESC(c, irq_resp, cannot_expose_tax_invoice_for_credit_automatic_request, 10,9,0,30041, "Na fakturaèní po¾adavek hrazený automaticky z kreditu nelze vystavit daòový doklad.") \
	MDESC(c, irq_resp, request_guid_mismatch,         10,9,0,30042, "Nesouhlasí GUID po¾adavku.") \
	MDESC(c, irq_resp, invalid_filter_request_state,  10,9,0,30043, "Chybná hodnota parametru 'filter_request_state'.") \
	MDESC(c, irq_resp, invalid_preferred_due_date,    10,9,0,30044, "Chybná hodnota parametru 'preferred_due_date'.") \
	MDESC(c, irq_resp, charge_fee_auto_source_mismatch, 10,9,0,30045, "Nesouhlasí auto_source fakturaèního poplatku.") \
	MDESC(c, irq_resp, no_suitable_charge_fee_found,  10,9,0,30046, "Nebyl nalezen ¾ádný odpovídající fakturaèní poplatek.") \
	MDESC(c, irq_resp, customer_update_in_money_failed, 10,9,0,30047, "Update údajù zákazníka v Money selhal.") \
	MDESC(c, irq_resp, missing_new_fees,              10,9,0,30048, "Chybí vstupní tabulka 'new_fees'.") \
	MDESC(c, irq_resp, invalid_new_fees,              10,9,0,30049, "Chybný formát vstupní tabulky 'new_fees'.") \
	MDESC(c, irq_resp, invalid_item_index,            10,9,0,30050, "Chybná hodnota parametru 'item_index'.") \
	MDESC(c, irq_resp, item_index_out_of_range,       10,9,0,30051, "Index polo¾ky fakturaèního po¾adavku je mimo rozsah.") \
	MDESC(c, irq_resp, missing_dom_adm_fee_type,      10,9,0,30052, "Chybí parametr 'dom_adm_fee_type'.") \
	MDESC(c, irq_resp, invalid_dom_adm_fee_type,      10,9,0,30053, "Chybná hodnota parametru 'dom_adm_fee_type'.") \
	MDESC(c, irq_resp, cannot_expose_tax_invoice_for_free_of_charge_request, 10,9,0,30054, "Na fakturaèní po¾adavek zdarma nelze vystavit daòový doklad.") \
	MDESC(c, irq_resp, request_amount_not_positive,   10,9,0,30055, "Fakturovaná èástka po¾adavku není kladná hodnota!") \
	\
	MDESC(c, irq_resp, missing_ccc_id_service,        10,9,1,30005, "Chybí parametr 'ccc_id_service'.") \
	MDESC(c, irq_resp, invalid_ccc_id_service,        10,9,1,30006, "Chybná hodnota parametru 'ccc_id_service'.") \
	MDESC(c, irq_resp, ccc_id_service_not_found,      10,9,1,30007, "Ccc servis s daným ccc_id_service nenalezen.") \
	MDESC(c, irq_resp, missing_ccc_reg_cert,          10,9,1,30011, "Chybí parametr 'ccc_reg_cert'.") \
	MDESC(c, irq_resp, invalid_ccc_reg_cert,          10,9,1,30012, "Chybná hodnota parametru 'ccc_reg_cert'.") \
	MDESC(c, irq_resp, missing_ccc_reg_fee_type,      10,9,1,30013, "Chybí parametr 'ccc_reg_fee_type'.") \
	MDESC(c, irq_resp, invalid_ccc_reg_fee_type,      10,9,1,30014, "Chybná hodnota parametru 'ccc_reg_fee_type'.") \
	MDESC(c, irq_resp, missing_ccc_reg_period,        10,9,1,30015, "Chybí parametr 'ccc_reg_period'.") \
	MDESC(c, irq_resp, invalid_ccc_reg_period,        10,9,1,30016, "Chybná hodnota parametru 'ccc_reg_period'.") \
	MDESC(c, irq_resp, no_ccc_user,                   10,9,1,30017, "®ádný úèet v centru administrace není k dispozici.") \
	MDESC(c, irq_resp, ccc_user_mismatch,             10,9,1,30018, "Nejednoznaènost v úètu centra administrace.") \
	MDESC(c, irq_resp, ccc_package_mismatch,          10,9,1,30019, "Nejednoznaènost v balíèku centra administrace.") \
	MDESC(c, irq_resp, ccc_service_mismatch,          10,9,1,30020, "Nejednoznaènost v servisu centra administrace.") \
	MDESC(c, irq_resp, no_suitable_ccc_user,          10,9,1,30021, "Nenalezen ¾ádný vhodný úèet v centru administrace.") \
	MDESC(c, irq_resp, invalid_filter_request_type,   10,9,1,30022, "Chybná hodnota parametru 'filter_request_type'.") \
	\
	MDESC(c, irq_resp, request_finalized,             10,9,0,50001, "Fakturaèní po¾adavek byl úspì¹nì prohlá¹en za realizovaný." ) \
	MDESC(c, irq_resp, request_cancelled,             10,9,0,50002, "Fakturaèní po¾adavek byl úspì¹nì stornovaný." ) \
	MDESC(c, irq_resp, billing_request_data,          10,9,0,50004, "Data fakturaèního po¾adavku." ) \
	MDESC(c, irq_resp, nonexposed_serverhosting_requests, 10,9,0,50005, "Nevystavené fakturaèní po¾adavky na serverhosting.") \
	MDESC(c, irq_resp, request_exposed,               10,9,0,50006, "Fakturaèní po¾adavek byl úspì¹nì vystavený." ) \
	MDESC(c, irq_resp, request_paid,                  10,9,0,50007, "Fakturaèní po¾adavek byl úspì¹nì uhrazený." ) \
	MDESC(c, irq_resp, tax_invoice_exposed,           10,9,0,50008, "Daòový doklad na fakturaèní po¾adavek byl úspì¹nì vystavený." ) \
	MDESC(c, irq_resp, serverhosting_request_period_set, 10,9,0,50009, "Období fakturaèního po¾adavku serverhostingu úspì¹nì zmìnìno." ) \
	MDESC(c, irq_resp, end_date_by_periods_of_opened_package_requests, 10,9,0,50010, "Koncové datum z otevøených fakturaèních po¾adavkù spoèítáno." ) \
	MDESC(c, irq_resp, billing_requests,               10,9,0,50011, "Seznam fakturaèních po¾adavkù." ) \
	MDESC(c, irq_resp, customer_update_in_money_succeeded, 10,9,0,50012, "Update údajù zákazníka v Money byl úspì¹nì proveden." ) \
	MDESC(c, irq_resp, basic_request_data,            10,9,0,50013, "Základní data fakturaèního po¾adavku." ) \
	MDESC(c, irq_resp, request_edited,                10,9,0,50014, "Fakturaèní po¾adavek byl úspì¹nì zeditován." ) \
	MDESC(c, irq_resp, request_xml_data_updated,      10,9,0,50015, "XML data fakturaèního po¾adavku byly úspì¹nì naèteny a znovu ulo¾eny." ) \
	MDESC(c, irq_resp, all_xml_data_updated,          10,9,0,50016, "XML data V©ECH fakturaèních po¾adavkù byly úspì¹nì naèteny a znovu ulo¾eny." ) \
	\
	MDESC(c, irq_resp, ccc_domain_reg_request_created,10,9,1,50001, "Fakturaèní po¾adavek na registraci/renew domény byl úspì¹nì vytvoøen." ) \
	MDESC(c, irq_resp, ccc_has_credit_for_domain_reg_request_withdraw, 10,9,1,50002, "Kreditní úèet má dostateèný kredit pro pøípadný fakturaèní po¾adavek na registraci/renew domény.") \
	MDESC(c, irq_resp, ccc_serverhosting_request_created, 10,9,1,50003, "Fakturaèní po¾adavek na serverhosting byl úspì¹nì vytvoøený." ) \
	MDESC(c, irq_resp, ccc_domain_adm_request_created, 10,9,1,50004, "Fakturaèní po¾adavek na administrativní poplatek domény byl úspì¹nì vytvoøen." ) \
	\
	MDESC(c, irq_resp, stat_permon_total_income,       10,9,2,50001, "Statistiky celkových pøíjmù v daných mìsících." ) \

// ZonerInvoice Charge Fees Unit
#define ZICHARGEFEES_MDESCS(c) \
	MDESC2(c, chfee_cmsm, add_package_charge_fee,       10,10,0,1,    "Pøidá nový fakturaèní poplatek vázaný k danému balíèku.", "Nelze pøidat nový fakturaèní poplatek vázaný k danému balíèku.") \
	MDESC2(c, chfee_cmsm, remove_package_charge_fee,    10,10,0,2,    "Odstraní fakturaèní poplatek vázaný k danému balíèku.", "Nelze odstranit fakturaèní poplatek vázaný k danému balíèku.") \
	MDESC2(c, chfee_cmsm, disable_charge_fee,           10,10,0,3,    "Enabluje/disabluje daný fakturaèní poplatek.", "Nelze enablovat/disablovat fakturaèní poplatek.") \
	MDESC2(c, chfee_cmsm, set_charge_fee_alarm,         10,10,0,4,    "Zapnout/vypnout alarm daného fakturaèního poplatku.", "Nelze zapnout/vypnout alarm fakturaèní poplatku.") \
	MDESC2(c, chfee_cmsm, get_package_charge_fees,      10,10,0,5,    "Vrací fakturaèní poplatky daného balíèku.", "Nelze vrátit fakturaèní poplatky daného balíèku.") \
	MDESC2(c, chfee_cmsm, update_package_charge_fee,    10,10,0,6,    "Mìní existující fakturaèní poplatek daného balíèku.", "Nelze zmìnit fakturaèní poplatek daného balíèku.") \
	MDESC2(c, chfee_cmsm, get_package_charge_fee,       10,10,0,7,    "Vrací jeden fakturaèní poplatek daného balíèku.", "Nelze vrátit fakturaèní poplatek daného balíèku.") \
	MDESC2(c, chfee_cmsm, set_charge_fee_ordnum,        10,10,0,8,    "Nastavuje poøadové èíslo poplatku.", "Nelze nastavit poøadové èíslo poplatku.") \
	\
	MDESC(c, chfee_resp, unhandled_exception,           10,10,0,30000, "Neo¹etøená výjimka v modulu fakturaèních poplatkù.") \
	MDESC(c, chfee_resp, database_error,                10,10,0,30003, "Chyba pøi pøístupu k databázi.") \
	MDESC(c, chfee_resp, database_transaction_error,    10,10,0,30004, "Chyba pøi vykonávání databázové transakce.") \
	MDESC(c, chfee_resp, missing_alarm,                 10,10,0,30005, "Chybí parametr 'alarm'.") \
	MDESC(c, chfee_resp, invalid_alarm,                 10,10,0,30006, "Chybná hodnota parametru 'alarm'.") \
	MDESC(c, chfee_resp, missing_disabled,              10,10,0,30007, "Chybí parametr 'disabled'.") \
	MDESC(c, chfee_resp, invalid_disabled,              10,10,0,30008, "Chybná hodnota parametru 'disabled'.") \
	MDESC(c, chfee_resp, missing_description,           10,10,0,30009, "Chybí parametr 'description'.") \
	MDESC(c, chfee_resp, invalid_description,           10,10,0,30010, "Chybná hodnota parametru 'description'.") \
	MDESC(c, chfee_resp, missing_mu_count,              10,10,0,30011, "Chybí parametr 'mu_count'.") \
	MDESC(c, chfee_resp, invalid_mu_count,              10,10,0,30012, "Chybná hodnota parametru 'mu_count'.") \
	MDESC(c, chfee_resp, missing_unit_price,            10,10,0,30013, "Chybí parametr 'unit_price'.") \
	MDESC(c, chfee_resp, invalid_unit_price,            10,10,0,30014, "Chybná hodnota parametru 'unit_price'.") \
	MDESC(c, chfee_resp, missing_unit_time_period,      10,10,0,30015, "Chybí parametr 'unit_time_period'.") \
	MDESC(c, chfee_resp, invalid_unit_time_period,      10,10,0,30016, "Chybná hodnota parametru 'unit_time_period'.") \
	MDESC(c, chfee_resp, missing_invoice_item_label,    10,10,0,30017, "Chybí parametr 'invoice_item_label'.") \
	MDESC(c, chfee_resp, invalid_invoice_item_label,    10,10,0,30018, "Chybná hodnota parametru 'invoice_item_label'.") \
	MDESC(c, chfee_resp, missing_disable,               10,10,0,30019, "Chybí parametr 'disable'.") \
	MDESC(c, chfee_resp, invalid_disable,               10,10,0,30020, "Chybná hodnota parametru 'disable'.") \
	MDESC(c, chfee_resp, missing_chfid,                 10,10,0,30021, "Chybí parametr 'chfid'.") \
	MDESC(c, chfee_resp, invalid_chfid,                 10,10,0,30022, "Chybná hodnota parametru 'chfid'.") \
	MDESC(c, chfee_resp, charge_fee_not_found,          10,10,0,30023, "Fakturaèní poplatek nenalezen.") \
	MDESC(c, chfee_resp, charge_fee_ccc_pkid_mismatch,  10,10,0,30024, "Nesouhlasí ccc_pkid fakturaèního poplatku.") \
	MDESC(c, chfee_resp, missing_auto_remove,           10,10,0,30025, "Chybí parametr 'auto_remove'.") \
	MDESC(c, chfee_resp, invalid_auto_remove,           10,10,0,30026, "Chybná hodnota parametru 'auto_remove'.") \
	MDESC(c, chfee_resp, invalid_tag,                   10,10,0,30027, "Chybná hodnota parametru 'tag'.") \
	MDESC(c, chfee_resp, missing_ordnum,                10,10,0,30028, "Chybí parametr 'ordnum'.") \
	MDESC(c, chfee_resp, invalid_ordnum,                10,10,0,30029, "Chybná hodnota parametru 'ordnum'.") \
	\
	MDESC(c, chfee_resp, charge_fee_added,              10,10,0,50001, "Nový fakturaèní poplatek byl úspì¹nì pøidán.") \
	MDESC(c, chfee_resp, charge_fee_removed,            10,10,0,50002, "Fakturaèní poplatek byl úspì¹nì odstranìn.") \
	MDESC(c, chfee_resp, charge_fee_disable_flag_updated, 10,10,0,50003, "Pøíznak 'disabled' daného fakturaèního poplatku byl úspì¹nì nastaven.") \
	MDESC(c, chfee_resp, charge_fee_alarm_flag_updated, 10,10,0,50004, "Pøíznak 'alarm' daného fakturaèního poplatku byl úspì¹nì nastaven.") \
	MDESC(c, chfee_resp, charge_fees,                   10,10,0,50005, "Seznam fakturaèních poplatkù.") \
	MDESC(c, chfee_resp, charge_fee_updated,            10,10,0,50006, "Fakturaèní poplatek byl úspì¹nì zmìnìn.") \
	MDESC(c, chfee_resp, charge_fee,                    10,10,0,50007, "Fakturaèní poplatek.") \
	MDESC(c, chfee_resp, charge_fee_ordnum_set,         10,10,0,50008, "Poøadové èíslo poplatku nastaveno.") \


#define ZINV_MDESC_TABLE(c) \
	ZINV_MDESCS(c) \
	AUTH_MDESCS(c) \
	ELINV_MDESCS(c) \
	RFPI_MDESCS(c) \
	INVPART_MDESCS(c) \
	ZICREDIT_MDESCS(c) \
	ZIPAYEV_MDESCS(c) \
	ZIREQUESTS_MDESCS(c) \
	ZICHARGEFEES_MDESCS(c)

#define ZINV_GROUP_WHS_TABLE(c) \
	GROUP_WHS(c, electronic_invoices_unit_mdesc, elinv_cmsm, get_customer_invoices_list) \
	GROUP_WHS(c, request_for_payment_invoices_unit_mdesc, rfpi_cmsm, send_rfp) \
	GROUP_WHS(c, zonerinvoice_authentication_unit_mdesc, ziauth_cmsm, login) \
	GROUP_WHS(c, partner_invoices_unit_mdesc, invp_cmsm, get_partner_invoices) \
	GROUP_WHS(c, credit_unit_mdesc, cred_cmsm, deposit_by_permanent_vs) \
	GROUP_WHS(c, payment_evidence_unit_mdesc, payev_cmsm, pay_in_cash) \
	GROUP_WHS(c, billing_requests_unit_mdesc, irq_cmsm, dummy_message) \
	GROUP_WHS(c, charge_fees_unit_mdesc, chfee_cmsm, add_package_charge_fee) \


// expand the declarations
CMS_NAMESPACE_START
ZINV_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_ZONERINVOICE_MDESCS


