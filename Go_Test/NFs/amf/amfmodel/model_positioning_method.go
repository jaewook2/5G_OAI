/*
 * Namf_Location
 *
 * AMF Location Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmodel

import (
"amf.com/amfcommon"
)

type PositioningMethod struct {
}

// AssertPositioningMethodRequired checks if the required fields are not zero-ed
func AssertPositioningMethodRequired(obj PositioningMethod) error {
	return nil
}

// AssertRecursePositioningMethodRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PositioningMethod (e.g. [][]PositioningMethod), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePositioningMethodRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPositioningMethod, ok := obj.(PositioningMethod)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPositioningMethodRequired(aPositioningMethod)
	})
}
