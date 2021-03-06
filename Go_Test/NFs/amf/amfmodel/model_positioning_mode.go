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

type PositioningMode struct {
}

// AssertPositioningModeRequired checks if the required fields are not zero-ed
func AssertPositioningModeRequired(obj PositioningMode) error {
	return nil
}

// AssertRecursePositioningModeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PositioningMode (e.g. [][]PositioningMode), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePositioningModeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPositioningMode, ok := obj.(PositioningMode)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPositioningModeRequired(aPositioningMode)
	})
}
