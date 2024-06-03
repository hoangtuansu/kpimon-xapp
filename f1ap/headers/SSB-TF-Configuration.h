/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_SSB_TF_Configuration_H_
#define	_SSB_TF_Configuration_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "RelativeTime1900.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SSB_TF_Configuration__sSB_subcarrier_spacing {
	SSB_TF_Configuration__sSB_subcarrier_spacing_kHz15	= 0,
	SSB_TF_Configuration__sSB_subcarrier_spacing_kHz30	= 1,
	SSB_TF_Configuration__sSB_subcarrier_spacing_kHz60	= 2,
	SSB_TF_Configuration__sSB_subcarrier_spacing_kHz120	= 3,
	SSB_TF_Configuration__sSB_subcarrier_spacing_kHz240	= 4,
	/*
	 * Enumeration is extensible
	 */
	SSB_TF_Configuration__sSB_subcarrier_spacing_kHz480	= 5,
	SSB_TF_Configuration__sSB_subcarrier_spacing_kHz960	= 6
} e_SSB_TF_Configuration__sSB_subcarrier_spacing;
typedef enum SSB_TF_Configuration__sSB_periodicity {
	SSB_TF_Configuration__sSB_periodicity_ms5	= 0,
	SSB_TF_Configuration__sSB_periodicity_ms10	= 1,
	SSB_TF_Configuration__sSB_periodicity_ms20	= 2,
	SSB_TF_Configuration__sSB_periodicity_ms40	= 3,
	SSB_TF_Configuration__sSB_periodicity_ms80	= 4,
	SSB_TF_Configuration__sSB_periodicity_ms160	= 5
	/*
	 * Enumeration is extensible
	 */
} e_SSB_TF_Configuration__sSB_periodicity;

/* Forward declarations */
struct SSB_PositionsInBurst;
struct ProtocolExtensionContainer;

/* SSB-TF-Configuration */
typedef struct SSB_TF_Configuration {
	long	 sSB_frequency;
	long	 sSB_subcarrier_spacing;
	long	 sSB_Transmit_power;
	long	 sSB_periodicity;
	long	 sSB_half_frame_offset;
	long	 sSB_SFN_offset;
	struct SSB_PositionsInBurst	*sSB_position_in_burst;	/* OPTIONAL */
	RelativeTime1900_t	*sFNInitialisationTime;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSB_TF_Configuration_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sSB_subcarrier_spacing_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sSB_periodicity_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SSB_TF_Configuration;
extern asn_SEQUENCE_specifics_t asn_SPC_SSB_TF_Configuration_specs_1;
extern asn_TYPE_member_t asn_MBR_SSB_TF_Configuration_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _SSB_TF_Configuration_H_ */
#include "asn_internal.h"