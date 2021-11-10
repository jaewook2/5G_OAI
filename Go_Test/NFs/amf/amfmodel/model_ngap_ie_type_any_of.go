/*
 * Namf_Communication
 *
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmodel

import (
"amf.com/amfcommon"
)

type NgapIeTypeAnyOf string

// List of NgapIeTypeAnyOf
const (
	NGAPIETYPEANYOF_PDU_RES_SETUP_REQ NgapIeTypeAnyOf = "PDU_RES_SETUP_REQ"
	NGAPIETYPEANYOF_PDU_RES_REL_CMD NgapIeTypeAnyOf = "PDU_RES_REL_CMD"
	NGAPIETYPEANYOF_PDU_RES_MOD_REQ NgapIeTypeAnyOf = "PDU_RES_MOD_REQ"
	NGAPIETYPEANYOF_HANDOVER_CMD NgapIeTypeAnyOf = "HANDOVER_CMD"
	NGAPIETYPEANYOF_HANDOVER_REQUIRED NgapIeTypeAnyOf = "HANDOVER_REQUIRED"
	NGAPIETYPEANYOF_HANDOVER_PREP_FAIL NgapIeTypeAnyOf = "HANDOVER_PREP_FAIL"
	NGAPIETYPEANYOF_SRC_TO_TAR_CONTAINER NgapIeTypeAnyOf = "SRC_TO_TAR_CONTAINER"
	NGAPIETYPEANYOF_TAR_TO_SRC_CONTAINER NgapIeTypeAnyOf = "TAR_TO_SRC_CONTAINER"
	NGAPIETYPEANYOF_TAR_TO_SRC_FAIL_CONTAINER NgapIeTypeAnyOf = "TAR_TO_SRC_FAIL_CONTAINER"
	NGAPIETYPEANYOF_RAN_STATUS_TRANS_CONTAINER NgapIeTypeAnyOf = "RAN_STATUS_TRANS_CONTAINER"
	NGAPIETYPEANYOF_SON_CONFIG_TRANSFER NgapIeTypeAnyOf = "SON_CONFIG_TRANSFER"
	NGAPIETYPEANYOF_NRPPA_PDU NgapIeTypeAnyOf = "NRPPA_PDU"
	NGAPIETYPEANYOF_UE_RADIO_CAPABILITY NgapIeTypeAnyOf = "UE_RADIO_CAPABILITY"
	NGAPIETYPEANYOF_RIM_INFO_TRANSFER NgapIeTypeAnyOf = "RIM_INFO_TRANSFER"
	NGAPIETYPEANYOF_SECONDARY_RAT_USAGE NgapIeTypeAnyOf = "SECONDARY_RAT_USAGE"
	NGAPIETYPEANYOF_PC5_QOS_PARA NgapIeTypeAnyOf = "PC5_QOS_PARA"
	NGAPIETYPEANYOF_EARLY_STATUS_TRANS_CONTAINER NgapIeTypeAnyOf = "EARLY_STATUS_TRANS_CONTAINER"
)

// AssertNgapIeTypeAnyOfRequired checks if the required fields are not zero-ed
func AssertNgapIeTypeAnyOfRequired(obj NgapIeTypeAnyOf) error {
	return nil
}

// AssertRecurseNgapIeTypeAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of NgapIeTypeAnyOf (e.g. [][]NgapIeTypeAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseNgapIeTypeAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNgapIeTypeAnyOf, ok := obj.(NgapIeTypeAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertNgapIeTypeAnyOfRequired(aNgapIeTypeAnyOf)
	})
}