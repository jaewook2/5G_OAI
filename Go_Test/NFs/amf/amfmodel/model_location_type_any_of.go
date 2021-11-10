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

type LocationTypeAnyOf string

// List of LocationTypeAnyOf
const (
	LOCATIONTYPEANYOF_CURRENT_LOCATION LocationTypeAnyOf = "CURRENT_LOCATION"
	LOCATIONTYPEANYOF_CURRENT_OR_LAST_KNOWN_LOCATION LocationTypeAnyOf = "CURRENT_OR_LAST_KNOWN_LOCATION"
	LOCATIONTYPEANYOF_NOTIFICATION_VERIFICATION_ONLY LocationTypeAnyOf = "NOTIFICATION_VERIFICATION_ONLY"
	LOCATIONTYPEANYOF_DEFERRED_LOCATION LocationTypeAnyOf = "DEFERRED_LOCATION"
)

// AssertLocationTypeAnyOfRequired checks if the required fields are not zero-ed
func AssertLocationTypeAnyOfRequired(obj LocationTypeAnyOf) error {
	return nil
}

// AssertRecurseLocationTypeAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LocationTypeAnyOf (e.g. [][]LocationTypeAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLocationTypeAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLocationTypeAnyOf, ok := obj.(LocationTypeAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLocationTypeAnyOfRequired(aLocationTypeAnyOf)
	})
}
