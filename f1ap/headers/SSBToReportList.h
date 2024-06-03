/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_SSBToReportList_H_
#define	_SSBToReportList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SSBToReportItem;

/* SSBToReportList */
typedef struct SSBToReportList {
	A_SEQUENCE_OF(struct SSBToReportItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSBToReportList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSBToReportList;
extern asn_SET_OF_specifics_t asn_SPC_SSBToReportList_specs_1;
extern asn_TYPE_member_t asn_MBR_SSBToReportList_1[1];
extern asn_per_constraints_t asn_PER_type_SSBToReportList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SSBToReportList_H_ */
#include "asn_internal.h"