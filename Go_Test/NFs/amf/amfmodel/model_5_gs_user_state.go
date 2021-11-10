/*
 * Namf_EventExposure
 *
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmodel

import (
"amf.com/amfcommon"
)

type Model5GsUserState struct {
}

// AssertModel5GsUserStateRequired checks if the required fields are not zero-ed
func AssertModel5GsUserStateRequired(obj Model5GsUserState) error {
	return nil
}

// AssertRecurseModel5GsUserStateRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of Model5GsUserState (e.g. [][]Model5GsUserState), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseModel5GsUserStateRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aModel5GsUserState, ok := obj.(Model5GsUserState)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertModel5GsUserStateRequired(aModel5GsUserState)
	})
}