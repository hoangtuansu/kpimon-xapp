/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_SDTInformation_H_
#define	_SDTInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SDTInformation__sdtIndicator {
	SDTInformation__sdtIndicator_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_SDTInformation__sdtIndicator;
typedef enum SDTInformation__sdtAssistantInformation {
	SDTInformation__sdtAssistantInformation_singlepacket	= 0,
	SDTInformation__sdtAssistantInformation_multiplepackets	= 1
	/*
	 * Enumeration is extensible
	 */
} e_SDTInformation__sdtAssistantInformation;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* SDTInformation */
typedef struct SDTInformation {
	long	 sdtIndicator;
	long	*sdtAssistantInformation;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SDTInformation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sdtIndicator_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sdtAssistantInformation_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SDTInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_SDTInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SDTInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SDTInformation_H_ */
#include "asn_internal.h"