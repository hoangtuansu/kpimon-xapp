/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_IAB_TNL_Addresses_Exception_H_
#define	_IAB_TNL_Addresses_Exception_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IABTNLAddressList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* IAB-TNL-Addresses-Exception */
typedef struct IAB_TNL_Addresses_Exception {
	IABTNLAddressList_t	 iABTNLAddressList;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IAB_TNL_Addresses_Exception_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IAB_TNL_Addresses_Exception;
extern asn_SEQUENCE_specifics_t asn_SPC_IAB_TNL_Addresses_Exception_specs_1;
extern asn_TYPE_member_t asn_MBR_IAB_TNL_Addresses_Exception_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IAB_TNL_Addresses_Exception_H_ */
#include "asn_internal.h"