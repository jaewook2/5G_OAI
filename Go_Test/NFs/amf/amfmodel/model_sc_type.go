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

type ScType struct {
}

// AssertScTypeRequired checks if the required fields are not zero-ed
func AssertScTypeRequired(obj ScType) error {
	return nil
}

// AssertRecurseScTypeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ScType (e.g. [][]ScType), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseScTypeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aScType, ok := obj.(ScType)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertScTypeRequired(aScType)
	})
}
