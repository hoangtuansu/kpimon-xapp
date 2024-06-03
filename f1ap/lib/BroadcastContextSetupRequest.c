/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "F1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "BroadcastContextSetupRequest.h"

asn_TYPE_member_t asn_MBR_BroadcastContextSetupRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastContextSetupRequest, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_123P96,
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
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_BroadcastContextSetupRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BroadcastContextSetupRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_BroadcastContextSetupRequest_specs_1 = {
	sizeof(struct BroadcastContextSetupRequest),
	offsetof(struct BroadcastContextSetupRequest, _asn_ctx),
	asn_MAP_BroadcastContextSetupRequest_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BroadcastContextSetupRequest = {
	"BroadcastContextSetupRequest",
	"BroadcastContextSetupRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_BroadcastContextSetupRequest_tags_1,
	sizeof(asn_DEF_BroadcastContextSetupRequest_tags_1)
		/sizeof(asn_DEF_BroadcastContextSetupRequest_tags_1[0]), /* 1 */
	asn_DEF_BroadcastContextSetupRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_BroadcastContextSetupRequest_tags_1)
		/sizeof(asn_DEF_BroadcastContextSetupRequest_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BroadcastContextSetupRequest_1,
	1,	/* Elements count */
	&asn_SPC_BroadcastContextSetupRequest_specs_1	/* Additional specs */
};
