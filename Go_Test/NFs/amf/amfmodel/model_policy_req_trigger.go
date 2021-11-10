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

type PolicyReqTrigger struct {
}

// AssertPolicyReqTriggerRequired checks if the required fields are not zero-ed
func AssertPolicyReqTriggerRequired(obj PolicyReqTrigger) error {
	return nil
}

// AssertRecursePolicyReqTriggerRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PolicyReqTrigger (e.g. [][]PolicyReqTrigger), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePolicyReqTriggerRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPolicyReqTrigger, ok := obj.(PolicyReqTrigger)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPolicyReqTriggerRequired(aPolicyReqTrigger)
	})
}
