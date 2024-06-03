/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_DLPRSResourceSetARP_H_
#define	_DLPRSResourceSetARP_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PRS-Resource-Set-ID.h"
#include "DL-PRSResourceSetARPLocation.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;
struct DLPRSResourceARP;

/* DLPRSResourceSetARP */
typedef struct DLPRSResourceSetARP {
	PRS_Resource_Set_ID_t	 dl_PRSResourceSetID;
	DL_PRSResourceSetARPLocation_t	 dL_PRSResourceSetARPLocation;
	struct DLPRSResourceSetARP__listofDL_PRSResourceARP {
		A_SEQUENCE_OF(struct DLPRSResourceARP) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listofDL_PRSResourceARP;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLPRSResourceSetARP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLPRSResourceSetARP;
extern asn_SEQUENCE_specifics_t asn_SPC_DLPRSResourceSetARP_specs_1;
extern asn_TYPE_member_t asn_MBR_DLPRSResourceSetARP_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DLPRSResourceSetARP_H_ */
#include "asn_internal.h"