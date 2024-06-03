/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_FiveG_ProSeDirectCommunication_H_
#define	_FiveG_ProSeDirectCommunication_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FiveG_ProSeDirectCommunication {
	FiveG_ProSeDirectCommunication_authorized	= 0,
	FiveG_ProSeDirectCommunication_not_authorized	= 1
	/*
	 * Enumeration is extensible
	 */
} e_FiveG_ProSeDirectCommunication;

/* FiveG-ProSeDirectCommunication */
typedef long	 FiveG_ProSeDirectCommunication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FiveG_ProSeDirectCommunication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FiveG_ProSeDirectCommunication;
extern const asn_INTEGER_specifics_t asn_SPC_FiveG_ProSeDirectCommunication_specs_1;
asn_struct_free_f FiveG_ProSeDirectCommunication_free;
asn_struct_print_f FiveG_ProSeDirectCommunication_print;
asn_constr_check_f FiveG_ProSeDirectCommunication_constraint;
ber_type_decoder_f FiveG_ProSeDirectCommunication_decode_ber;
der_type_encoder_f FiveG_ProSeDirectCommunication_encode_der;
xer_type_decoder_f FiveG_ProSeDirectCommunication_decode_xer;
xer_type_encoder_f FiveG_ProSeDirectCommunication_encode_xer;
jer_type_encoder_f FiveG_ProSeDirectCommunication_encode_jer;
oer_type_decoder_f FiveG_ProSeDirectCommunication_decode_oer;
oer_type_encoder_f FiveG_ProSeDirectCommunication_encode_oer;
per_type_decoder_f FiveG_ProSeDirectCommunication_decode_uper;
per_type_encoder_f FiveG_ProSeDirectCommunication_encode_uper;
per_type_decoder_f FiveG_ProSeDirectCommunication_decode_aper;
per_type_encoder_f FiveG_ProSeDirectCommunication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _FiveG_ProSeDirectCommunication_H_ */
#include "asn_internal.h"