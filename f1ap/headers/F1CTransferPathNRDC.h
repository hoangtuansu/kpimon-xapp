/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_F1CTransferPathNRDC_H_
#define	_F1CTransferPathNRDC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "F1CPathNRDC.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* F1CTransferPathNRDC */
typedef struct F1CTransferPathNRDC {
	F1CPathNRDC_t	 f1CPathNRDC;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1CTransferPathNRDC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1CTransferPathNRDC;
extern asn_SEQUENCE_specifics_t asn_SPC_F1CTransferPathNRDC_specs_1;
extern asn_TYPE_member_t asn_MBR_F1CTransferPathNRDC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _F1CTransferPathNRDC_H_ */
#include "asn_internal.h"