/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_IAB_DU_Cell_Resource_Configuration_Mode_Info_H_
#define	_IAB_DU_Cell_Resource_Configuration_Mode_Info_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IAB_DU_Cell_Resource_Configuration_Mode_Info_PR {
	IAB_DU_Cell_Resource_Configuration_Mode_Info_PR_NOTHING,	/* No components present */
	IAB_DU_Cell_Resource_Configuration_Mode_Info_PR_fDD,
	IAB_DU_Cell_Resource_Configuration_Mode_Info_PR_tDD,
	IAB_DU_Cell_Resource_Configuration_Mode_Info_PR_choice_extension
} IAB_DU_Cell_Resource_Configuration_Mode_Info_PR;

/* Forward declarations */
struct IAB_DU_Cell_Resource_Configuration_FDD_Info;
struct IAB_DU_Cell_Resource_Configuration_TDD_Info;
struct ProtocolIE_SingleContainer;

/* IAB-DU-Cell-Resource-Configuration-Mode-Info */
typedef struct IAB_DU_Cell_Resource_Configuration_Mode_Info {
	IAB_DU_Cell_Resource_Configuration_Mode_Info_PR present;
	union IAB_DU_Cell_Resource_Configuration_Mode_Info_u {
		struct IAB_DU_Cell_Resource_Configuration_FDD_Info	*fDD;
		struct IAB_DU_Cell_Resource_Configuration_TDD_Info	*tDD;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IAB_DU_Cell_Resource_Configuration_Mode_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IAB_DU_Cell_Resource_Configuration_Mode_Info;
extern asn_CHOICE_specifics_t asn_SPC_IAB_DU_Cell_Resource_Configuration_Mode_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_IAB_DU_Cell_Resource_Configuration_Mode_Info_1[3];
extern asn_per_constraints_t asn_PER_type_IAB_DU_Cell_Resource_Configuration_Mode_Info_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _IAB_DU_Cell_Resource_Configuration_Mode_Info_H_ */
#include "asn_internal.h"