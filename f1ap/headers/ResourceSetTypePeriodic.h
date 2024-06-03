/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_ResourceSetTypePeriodic_H_
#define	_ResourceSetTypePeriodic_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ResourceSetTypePeriodic__periodicSet {
	ResourceSetTypePeriodic__periodicSet_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ResourceSetTypePeriodic__periodicSet;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ResourceSetTypePeriodic */
typedef struct ResourceSetTypePeriodic {
	long	 periodicSet;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResourceSetTypePeriodic_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicSet_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ResourceSetTypePeriodic;
extern asn_SEQUENCE_specifics_t asn_SPC_ResourceSetTypePeriodic_specs_1;
extern asn_TYPE_member_t asn_MBR_ResourceSetTypePeriodic_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ResourceSetTypePeriodic_H_ */
#include "asn_internal.h"