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

type StatusChange struct {
}

// AssertStatusChangeRequired checks if the required fields are not zero-ed
func AssertStatusChangeRequired(obj StatusChange) error {
	return nil
}

// AssertRecurseStatusChangeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of StatusChange (e.g. [][]StatusChange), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseStatusChangeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aStatusChange, ok := obj.(StatusChange)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertStatusChangeRequired(aStatusChange)
	})
}