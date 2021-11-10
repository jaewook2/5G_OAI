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

type LocationPrivacyVerResult struct {
}

// AssertLocationPrivacyVerResultRequired checks if the required fields are not zero-ed
func AssertLocationPrivacyVerResultRequired(obj LocationPrivacyVerResult) error {
	return nil
}

// AssertRecurseLocationPrivacyVerResultRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LocationPrivacyVerResult (e.g. [][]LocationPrivacyVerResult), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLocationPrivacyVerResultRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLocationPrivacyVerResult, ok := obj.(LocationPrivacyVerResult)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLocationPrivacyVerResultRequired(aLocationPrivacyVerResult)
	})
}
