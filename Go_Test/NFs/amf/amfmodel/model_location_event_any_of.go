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

type LocationEventAnyOf string

// List of LocationEventAnyOf
const (
	LOCATIONEVENTANYOF_EMERGENCY_CALL_ORIGINATION LocationEventAnyOf = "EMERGENCY_CALL_ORIGINATION"
	LOCATIONEVENTANYOF_EMERGENCY_CALL_RELEASE LocationEventAnyOf = "EMERGENCY_CALL_RELEASE"
	LOCATIONEVENTANYOF_EMERGENCY_CALL_HANDOVER LocationEventAnyOf = "EMERGENCY_CALL_HANDOVER"
	LOCATIONEVENTANYOF_ACTIVATION_OF_DEFERRED_LOCATION LocationEventAnyOf = "ACTIVATION_OF_DEFERRED_LOCATION"
	LOCATIONEVENTANYOF_UE_MOBILITY_FOR_DEFERRED_LOCATION LocationEventAnyOf = "UE_MOBILITY_FOR_DEFERRED_LOCATION"
	LOCATIONEVENTANYOF_CANCELLATION_OF_DEFERRED_LOCATION LocationEventAnyOf = "CANCELLATION_OF_DEFERRED_LOCATION"
)

// AssertLocationEventAnyOfRequired checks if the required fields are not zero-ed
func AssertLocationEventAnyOfRequired(obj LocationEventAnyOf) error {
	return nil
}

// AssertRecurseLocationEventAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LocationEventAnyOf (e.g. [][]LocationEventAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLocationEventAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLocationEventAnyOf, ok := obj.(LocationEventAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLocationEventAnyOfRequired(aLocationEventAnyOf)
	})
}