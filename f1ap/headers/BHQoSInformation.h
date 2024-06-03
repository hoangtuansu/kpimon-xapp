/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_BHQoSInformation_H_
#define	_BHQoSInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CPTrafficType.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BHQoSInformation_PR {
	BHQoSInformation_PR_NOTHING,	/* No components present */
	BHQoSInformation_PR_bHRLCCHQoS,
	BHQoSInformation_PR_eUTRANBHRLCCHQoS,
	BHQoSInformation_PR_cPTrafficType,
	BHQoSInformation_PR_choice_extension
} BHQoSInformation_PR;

/* Forward declarations */
struct QoSFlowLevelQoSParameters;
struct EUTRANQoS;
struct ProtocolIE_SingleContainer;

/* BHQoSInformation */
typedef struct BHQoSInformation {
	BHQoSInformation_PR present;
	union BHQoSInformation_u {
		struct QoSFlowLevelQoSParameters	*bHRLCCHQoS;
		struct EUTRANQoS	*eUTRANBHRLCCHQoS;
		CPTrafficType_t	 cPTrafficType;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BHQoSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BHQoSInformation;
extern asn_CHOICE_specifics_t asn_SPC_BHQoSInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_BHQoSInformation_1[4];
extern asn_per_constraints_t asn_PER_type_BHQoSInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BHQoSInformation_H_ */
#include "asn_internal.h"