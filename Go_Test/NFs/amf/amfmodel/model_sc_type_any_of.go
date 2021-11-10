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

type ScTypeAnyOf string

// List of ScTypeAnyOf
const (
	SCTYPEANYOF_NATIVE ScTypeAnyOf = "NATIVE"
	SCTYPEANYOF_MAPPED ScTypeAnyOf = "MAPPED"
)

// AssertScTypeAnyOfRequired checks if the required fields are not zero-ed
func AssertScTypeAnyOfRequired(obj ScTypeAnyOf) error {
	return nil
}

// AssertRecurseScTypeAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ScTypeAnyOf (e.g. [][]ScTypeAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseScTypeAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aScTypeAnyOf, ok := obj.(ScTypeAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertScTypeAnyOfRequired(aScTypeAnyOf)
	})
}
