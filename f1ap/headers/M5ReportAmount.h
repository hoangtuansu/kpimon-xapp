/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_M5ReportAmount_H_
#define	_M5ReportAmount_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M5ReportAmount {
	M5ReportAmount_r1	= 0,
	M5ReportAmount_r2	= 1,
	M5ReportAmount_r4	= 2,
	M5ReportAmount_r8	= 3,
	M5ReportAmount_r16	= 4,
	M5ReportAmount_r32	= 5,
	M5ReportAmount_r64	= 6,
	M5ReportAmount_infinity	= 7
	/*
	 * Enumeration is extensible
	 */
} e_M5ReportAmount;

/* M5ReportAmount */
typedef long	 M5ReportAmount_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M5ReportAmount_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M5ReportAmount;
extern const asn_INTEGER_specifics_t asn_SPC_M5ReportAmount_specs_1;
asn_struct_free_f M5ReportAmount_free;
asn_struct_print_f M5ReportAmount_print;
asn_constr_check_f M5ReportAmount_constraint;
ber_type_decoder_f M5ReportAmount_decode_ber;
der_type_encoder_f M5ReportAmount_encode_der;
xer_type_decoder_f M5ReportAmount_decode_xer;
xer_type_encoder_f M5ReportAmount_encode_xer;
jer_type_encoder_f M5ReportAmount_encode_jer;
oer_type_decoder_f M5ReportAmount_decode_oer;
oer_type_encoder_f M5ReportAmount_encode_oer;
per_type_decoder_f M5ReportAmount_decode_uper;
per_type_encoder_f M5ReportAmount_encode_uper;
per_type_decoder_f M5ReportAmount_decode_aper;
per_type_encoder_f M5ReportAmount_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M5ReportAmount_H_ */
#include "asn_internal.h"