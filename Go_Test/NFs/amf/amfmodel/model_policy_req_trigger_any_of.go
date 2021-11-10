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

type PolicyReqTriggerAnyOf string

// List of PolicyReqTriggerAnyOf
const (
	POLICYREQTRIGGERANYOF_LOCATION_CHANGE PolicyReqTriggerAnyOf = "LOCATION_CHANGE"
	POLICYREQTRIGGERANYOF_PRA_CHANGE PolicyReqTriggerAnyOf = "PRA_CHANGE"
	POLICYREQTRIGGERANYOF_SARI_CHANGE PolicyReqTriggerAnyOf = "SARI_CHANGE"
	POLICYREQTRIGGERANYOF_RFSP_INDEX_CHANGE PolicyReqTriggerAnyOf = "RFSP_INDEX_CHANGE"
	POLICYREQTRIGGERANYOF_ALLOWED_NSSAI_CHANGE PolicyReqTriggerAnyOf = "ALLOWED_NSSAI_CHANGE"
)

// AssertPolicyReqTriggerAnyOfRequired checks if the required fields are not zero-ed
func AssertPolicyReqTriggerAnyOfRequired(obj PolicyReqTriggerAnyOf) error {
	return nil
}

// AssertRecursePolicyReqTriggerAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PolicyReqTriggerAnyOf (e.g. [][]PolicyReqTriggerAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePolicyReqTriggerAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPolicyReqTriggerAnyOf, ok := obj.(PolicyReqTriggerAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPolicyReqTriggerAnyOfRequired(aPolicyReqTriggerAnyOf)
	})
}
