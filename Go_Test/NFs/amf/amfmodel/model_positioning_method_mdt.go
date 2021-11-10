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

type PositioningMethodMdt struct {
}

// AssertPositioningMethodMdtRequired checks if the required fields are not zero-ed
func AssertPositioningMethodMdtRequired(obj PositioningMethodMdt) error {
	return nil
}

// AssertRecursePositioningMethodMdtRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PositioningMethodMdt (e.g. [][]PositioningMethodMdt), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePositioningMethodMdtRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPositioningMethodMdt, ok := obj.(PositioningMethodMdt)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPositioningMethodMdtRequired(aPositioningMethodMdt)
	})
}
