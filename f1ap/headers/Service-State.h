/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_Service_State_H_
#define	_Service_State_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Service_State {
	Service_State_in_service	= 0,
	Service_State_out_of_service	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Service_State;

/* Service-State */
typedef long	 Service_State_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Service_State_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Service_State;
extern const asn_INTEGER_specifics_t asn_SPC_Service_State_specs_1;
asn_struct_free_f Service_State_free;
asn_struct_print_f Service_State_print;
asn_constr_check_f Service_State_constraint;
ber_type_decoder_f Service_State_decode_ber;
der_type_encoder_f Service_State_encode_der;
xer_type_decoder_f Service_State_decode_xer;
xer_type_encoder_f Service_State_encode_xer;
jer_type_encoder_f Service_State_encode_jer;
oer_type_decoder_f Service_State_decode_oer;
oer_type_encoder_f Service_State_encode_oer;
per_type_decoder_f Service_State_decode_uper;
per_type_encoder_f Service_State_encode_uper;
per_type_decoder_f Service_State_decode_aper;
per_type_encoder_f Service_State_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Service_State_H_ */
#include "asn_internal.h"