/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "CauseRadioNetwork.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_CauseRadioNetwork_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_CauseRadioNetwork_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  10 }	/* (0..10,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_CauseRadioNetwork_value2enum_1[] = {
	{ 0,	11,	"unspecified" },
	{ 1,	14,	"rl-failure-rlc" },
	{ 2,	46,	"unknown-or-already-allocated-gnb-cu-ue-f1ap-id" },
	{ 3,	46,	"unknown-or-already-allocated-gnb-du-ue-f1ap-id" },
	{ 4,	42,	"unknown-or-inconsistent-pair-of-ue-f1ap-id" },
	{ 5,	32,	"interaction-with-other-procedure" },
	{ 6,	23,	"not-supported-qci-Value" },
	{ 7,	34,	"action-desirable-for-radio-reasons" },
	{ 8,	28,	"no-radio-resources-available" },
	{ 9,	19,	"procedure-cancelled" },
	{ 10,	14,	"normal-release" },
	{ 11,	18,	"cell-not-available" },
	{ 12,	17,	"rl-failure-others" },
	{ 13,	12,	"ue-rejection" },
	{ 14,	37,	"resources-not-available-for-the-slice" },
	{ 15,	30,	"amf-initiated-abnormal-release" },
	{ 16,	26,	"release-due-to-pre-emption" },
	{ 17,	29,	"plmn-not-served-by-the-gNB-CU" },
	{ 18,	25,	"multiple-drb-id-instances" },
	{ 19,	14,	"unknown-drb-id" },
	{ 20,	31,	"multiple-bh-rlc-ch-id-instances" },
	{ 21,	20,	"unknown-bh-rlc-ch-id" },
	{ 22,	29,	"cho-cpc-resources-tobechanged" },
	{ 23,	17,	"nPN-not-supported" },
	{ 24,	17,	"nPN-access-denied" },
	{ 25,	29,	"gNB-CU-Cell-Capacity-Exceeded" },
	{ 26,	28,	"report-characteristics-empty" },
	{ 27,	23,	"existing-measurement-ID" },
	{ 28,	37,	"measurement-temporarily-not-available" },
	{ 29,	40,	"measurement-not-supported-for-the-object" },
	{ 30,	18,	"unknown-bh-address" },
	{ 31,	22,	"unknown-bap-routing-id" },
	{ 32,	28,	"insufficient-ue-capabilities" },
	{ 33,	35,	"scg-activation-deactivation-failure" },
	{ 34,	49,	"scg-deactivation-failure-due-to-data-transmission" },
	{ 35,	36,	"requested-item-not-supported-on-time" },
	{ 36,	47,	"unknown-or-already-allocated-gNB-CU-MBS-F1AP-ID" },
	{ 37,	47,	"unknown-or-already-allocated-gNB-DU-MBS-F1AP-ID" },
	{ 38,	43,	"unknown-or-inconsistent-pair-of-MBS-F1AP-ID" },
	{ 39,	30,	"unknown-or-inconsistent-MRB-ID" },
	{ 40,	14,	"tat-sdt-expiry" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_CauseRadioNetwork_enum2value_1[] = {
	7,	/* action-desirable-for-radio-reasons(7) */
	15,	/* amf-initiated-abnormal-release(15) */
	11,	/* cell-not-available(11) */
	22,	/* cho-cpc-resources-tobechanged(22) */
	27,	/* existing-measurement-ID(27) */
	25,	/* gNB-CU-Cell-Capacity-Exceeded(25) */
	32,	/* insufficient-ue-capabilities(32) */
	5,	/* interaction-with-other-procedure(5) */
	29,	/* measurement-not-supported-for-the-object(29) */
	28,	/* measurement-temporarily-not-available(28) */
	20,	/* multiple-bh-rlc-ch-id-instances(20) */
	18,	/* multiple-drb-id-instances(18) */
	24,	/* nPN-access-denied(24) */
	23,	/* nPN-not-supported(23) */
	8,	/* no-radio-resources-available(8) */
	10,	/* normal-release(10) */
	6,	/* not-supported-qci-Value(6) */
	17,	/* plmn-not-served-by-the-gNB-CU(17) */
	9,	/* procedure-cancelled(9) */
	16,	/* release-due-to-pre-emption(16) */
	26,	/* report-characteristics-empty(26) */
	35,	/* requested-item-not-supported-on-time(35) */
	14,	/* resources-not-available-for-the-slice(14) */
	12,	/* rl-failure-others(12) */
	1,	/* rl-failure-rlc(1) */
	33,	/* scg-activation-deactivation-failure(33) */
	34,	/* scg-deactivation-failure-due-to-data-transmission(34) */
	40,	/* tat-sdt-expiry(40) */
	13,	/* ue-rejection(13) */
	31,	/* unknown-bap-routing-id(31) */
	30,	/* unknown-bh-address(30) */
	21,	/* unknown-bh-rlc-ch-id(21) */
	19,	/* unknown-drb-id(19) */
	36,	/* unknown-or-already-allocated-gNB-CU-MBS-F1AP-ID(36) */
	37,	/* unknown-or-already-allocated-gNB-DU-MBS-F1AP-ID(37) */
	2,	/* unknown-or-already-allocated-gnb-cu-ue-f1ap-id(2) */
	3,	/* unknown-or-already-allocated-gnb-du-ue-f1ap-id(3) */
	39,	/* unknown-or-inconsistent-MRB-ID(39) */
	38,	/* unknown-or-inconsistent-pair-of-MBS-F1AP-ID(38) */
	4,	/* unknown-or-inconsistent-pair-of-ue-f1ap-id(4) */
	0	/* unspecified(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_CauseRadioNetwork_specs_1 = {
	asn_MAP_CauseRadioNetwork_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CauseRadioNetwork_enum2value_1,	/* N => "tag"; sorted by N */
	41,	/* Number of elements in the maps */
	12,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CauseRadioNetwork_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CauseRadioNetwork = {
	"CauseRadioNetwork",
	"CauseRadioNetwork",
	&asn_OP_NativeEnumerated,
	asn_DEF_CauseRadioNetwork_tags_1,
	sizeof(asn_DEF_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_CauseRadioNetwork_tags_1[0]), /* 1 */
	asn_DEF_CauseRadioNetwork_tags_1,	/* Same as above */
	sizeof(asn_DEF_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_CauseRadioNetwork_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_CauseRadioNetwork_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_CauseRadioNetwork_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CauseRadioNetwork_specs_1	/* Additional specs */
};
