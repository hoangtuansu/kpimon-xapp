/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "ConditionalInterDUMobilityInformation.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ConditionalInterDUMobilityInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConditionalInterDUMobilityInformation, cho_trigger),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CHOtrigger_InterDU,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"cho-trigger"
		},
	{ ATF_POINTER, 2, offsetof(struct ConditionalInterDUMobilityInformation, targetgNB_DUUEF1APID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_DU_UE_F1AP_ID,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"targetgNB-DUUEF1APID"
		},
	{ ATF_POINTER, 1, offsetof(struct ConditionalInterDUMobilityInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P75,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ConditionalInterDUMobilityInformation_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_ConditionalInterDUMobilityInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ConditionalInterDUMobilityInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cho-trigger */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetgNB-DUUEF1APID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ConditionalInterDUMobilityInformation_specs_1 = {
	sizeof(struct ConditionalInterDUMobilityInformation),
	offsetof(struct ConditionalInterDUMobilityInformation, _asn_ctx),
	asn_MAP_ConditionalInterDUMobilityInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ConditionalInterDUMobilityInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ConditionalInterDUMobilityInformation = {
	"ConditionalInterDUMobilityInformation",
	"ConditionalInterDUMobilityInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_ConditionalInterDUMobilityInformation_tags_1,
	sizeof(asn_DEF_ConditionalInterDUMobilityInformation_tags_1)
		/sizeof(asn_DEF_ConditionalInterDUMobilityInformation_tags_1[0]), /* 1 */
	asn_DEF_ConditionalInterDUMobilityInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConditionalInterDUMobilityInformation_tags_1)
		/sizeof(asn_DEF_ConditionalInterDUMobilityInformation_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ConditionalInterDUMobilityInformation_1,
	3,	/* Elements count */
	&asn_SPC_ConditionalInterDUMobilityInformation_specs_1	/* Additional specs */
};
