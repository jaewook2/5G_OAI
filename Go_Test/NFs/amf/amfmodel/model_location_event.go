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

type LocationEvent struct {
}

// AssertLocationEventRequired checks if the required fields are not zero-ed
func AssertLocationEventRequired(obj LocationEvent) error {
	return nil
}

// AssertRecurseLocationEventRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LocationEvent (e.g. [][]LocationEvent), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLocationEventRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLocationEvent, ok := obj.(LocationEvent)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLocationEventRequired(aLocationEvent)
	})
}
