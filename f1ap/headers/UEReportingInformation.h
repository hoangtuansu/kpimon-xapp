/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_UEReportingInformation_H_
#define	_UEReportingInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEReportingInformation__reportingAmount {
	UEReportingInformation__reportingAmount_ma0	= 0,
	UEReportingInformation__reportingAmount_ma1	= 1,
	UEReportingInformation__reportingAmount_ma2	= 2,
	UEReportingInformation__reportingAmount_ma4	= 3,
	UEReportingInformation__reportingAmount_ma8	= 4,
	UEReportingInformation__reportingAmount_ma16	= 5,
	UEReportingInformation__reportingAmount_ma32	= 6,
	UEReportingInformation__reportingAmount_ma64	= 7
} e_UEReportingInformation__reportingAmount;
typedef enum UEReportingInformation__reportingInterval {
	UEReportingInformation__reportingInterval_none	= 0,
	UEReportingInformation__reportingInterval_one	= 1,
	UEReportingInformation__reportingInterval_two	= 2,
	UEReportingInformation__reportingInterval_four	= 3,
	UEReportingInformation__reportingInterval_eight	= 4,
	UEReportingInformation__reportingInterval_ten	= 5,
	UEReportingInformation__reportingInterval_sixteen	= 6,
	UEReportingInformation__reportingInterval_twenty	= 7,
	UEReportingInformation__reportingInterval_thirty_two	= 8,
	UEReportingInformation__reportingInterval_sixty_four	= 9
	/*
	 * Enumeration is extensible
	 */
} e_UEReportingInformation__reportingInterval;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UEReportingInformation */
typedef struct UEReportingInformation {
	long	 reportingAmount;
	long	 reportingInterval;
	struct ProtocolExtensionContainer	*iE_extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEReportingInformation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportingAmount_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportingInterval_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UEReportingInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_UEReportingInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_UEReportingInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UEReportingInformation_H_ */
#include "asn_internal.h"