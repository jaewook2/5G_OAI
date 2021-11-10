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

type LocationType struct {
}

// AssertLocationTypeRequired checks if the required fields are not zero-ed
func AssertLocationTypeRequired(obj LocationType) error {
	return nil
}

// AssertRecurseLocationTypeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LocationType (e.g. [][]LocationType), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLocationTypeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLocationType, ok := obj.(LocationType)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLocationTypeRequired(aLocationType)
	})
}