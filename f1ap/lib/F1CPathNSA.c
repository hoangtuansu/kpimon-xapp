/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "F1CPathNSA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_F1CPathNSA_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_F1CPathNSA_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_F1CPathNSA_value2enum_1[] = {
	{ 0,	3,	"lte" },
	{ 1,	2,	"nr" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_F1CPathNSA_enum2value_1[] = {
	2,	/* both(2) */
	0,	/* lte(0) */
	1	/* nr(1) */
};
const asn_INTEGER_specifics_t asn_SPC_F1CPathNSA_specs_1 = {
	asn_MAP_F1CPathNSA_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1CPathNSA_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1CPathNSA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1CPathNSA = {
	"F1CPathNSA",
	"F1CPathNSA",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1CPathNSA_tags_1,
	sizeof(asn_DEF_F1CPathNSA_tags_1)
		/sizeof(asn_DEF_F1CPathNSA_tags_1[0]), /* 1 */
	asn_DEF_F1CPathNSA_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1CPathNSA_tags_1)
		/sizeof(asn_DEF_F1CPathNSA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_F1CPathNSA_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1CPathNSA_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1CPathNSA_specs_1	/* Additional specs */
};
