/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_RAT_FrequencyPriorityInformation_H_
#define	_RAT_FrequencyPriorityInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SubscriberProfileIDforRFP.h"
#include "RAT-FrequencySelectionPriority.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RAT_FrequencyPriorityInformation_PR {
	RAT_FrequencyPriorityInformation_PR_NOTHING,	/* No components present */
	RAT_FrequencyPriorityInformation_PR_eNDC,
	RAT_FrequencyPriorityInformation_PR_nGRAN,
	RAT_FrequencyPriorityInformation_PR_choice_extension
} RAT_FrequencyPriorityInformation_PR;

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* RAT-FrequencyPriorityInformation */
typedef struct RAT_FrequencyPriorityInformation {
	RAT_FrequencyPriorityInformation_PR present;
	union RAT_FrequencyPriorityInformation_u {
		SubscriberProfileIDforRFP_t	 eNDC;
		RAT_FrequencySelectionPriority_t	 nGRAN;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAT_FrequencyPriorityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAT_FrequencyPriorityInformation;
extern asn_CHOICE_specifics_t asn_SPC_RAT_FrequencyPriorityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_RAT_FrequencyPriorityInformation_1[3];
extern asn_per_constraints_t asn_PER_type_RAT_FrequencyPriorityInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RAT_FrequencyPriorityInformation_H_ */
#include "asn_internal.h"