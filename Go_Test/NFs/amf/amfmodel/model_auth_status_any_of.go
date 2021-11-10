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

type AuthStatusAnyOf string

// List of AuthStatusAnyOf
const (
	AUTHSTATUSANYOF_EAP_SUCCESS AuthStatusAnyOf = "EAP_SUCCESS"
	AUTHSTATUSANYOF_EAP_FAILURE AuthStatusAnyOf = "EAP_FAILURE"
	AUTHSTATUSANYOF_PENDING AuthStatusAnyOf = "PENDING"
)

// AssertAuthStatusAnyOfRequired checks if the required fields are not zero-ed
func AssertAuthStatusAnyOfRequired(obj AuthStatusAnyOf) error {
	return nil
}

// AssertRecurseAuthStatusAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AuthStatusAnyOf (e.g. [][]AuthStatusAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAuthStatusAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAuthStatusAnyOf, ok := obj.(AuthStatusAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAuthStatusAnyOfRequired(aAuthStatusAnyOf)
	})
}
