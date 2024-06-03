/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "CellMeasurementResultItem.h"

#include "RadioResourceStatus.h"
#include "CompositeAvailableCapacityGroup.h"
#include "SliceAvailableCapacity.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_CellMeasurementResultItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellMeasurementResultItem, cellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRCGI,
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
		"cellID"
		},
	{ ATF_POINTER, 5, offsetof(struct CellMeasurementResultItem, radioResourceStatus),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceStatus,
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
		"radioResourceStatus"
		},
	{ ATF_POINTER, 4, offsetof(struct CellMeasurementResultItem, compositeAvailableCapacityGroup),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompositeAvailableCapacityGroup,
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
		"compositeAvailableCapacityGroup"
		},
	{ ATF_POINTER, 3, offsetof(struct CellMeasurementResultItem, sliceAvailableCapacity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SliceAvailableCapacity,
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
		"sliceAvailableCapacity"
		},
	{ ATF_POINTER, 2, offsetof(struct CellMeasurementResultItem, numberofActiveUEs),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberofActiveUEs,
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
		"numberofActiveUEs"
		},
	{ ATF_POINTER, 1, offsetof(struct CellMeasurementResultItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P56,
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
static const int asn_MAP_CellMeasurementResultItem_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_CellMeasurementResultItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellMeasurementResultItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioResourceStatus */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* compositeAvailableCapacityGroup */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sliceAvailableCapacity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* numberofActiveUEs */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_CellMeasurementResultItem_specs_1 = {
	sizeof(struct CellMeasurementResultItem),
	offsetof(struct CellMeasurementResultItem, _asn_ctx),
	asn_MAP_CellMeasurementResultItem_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_CellMeasurementResultItem_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellMeasurementResultItem = {
	"CellMeasurementResultItem",
	"CellMeasurementResultItem",
	&asn_OP_SEQUENCE,
	asn_DEF_CellMeasurementResultItem_tags_1,
	sizeof(asn_DEF_CellMeasurementResultItem_tags_1)
		/sizeof(asn_DEF_CellMeasurementResultItem_tags_1[0]), /* 1 */
	asn_DEF_CellMeasurementResultItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellMeasurementResultItem_tags_1)
		/sizeof(asn_DEF_CellMeasurementResultItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CellMeasurementResultItem_1,
	6,	/* Elements count */
	&asn_SPC_CellMeasurementResultItem_specs_1	/* Additional specs */
};
