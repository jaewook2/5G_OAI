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

type LcsServiceAuthAnyOf string

// List of LcsServiceAuthAnyOf
const (
	LCSSERVICEAUTHANYOF_LOCATION_ALLOWED_WITH_NOTIFICATION LcsServiceAuthAnyOf = "LOCATION_ALLOWED_WITH_NOTIFICATION"
	LCSSERVICEAUTHANYOF_LOCATION_ALLOWED_WITHOUT_NOTIFICATION LcsServiceAuthAnyOf = "LOCATION_ALLOWED_WITHOUT_NOTIFICATION"
	LCSSERVICEAUTHANYOF_LOCATION_ALLOWED_WITHOUT_RESPONSE LcsServiceAuthAnyOf = "LOCATION_ALLOWED_WITHOUT_RESPONSE"
	LCSSERVICEAUTHANYOF_LOCATION_RESTRICTED_WITHOUT_RESPONSE LcsServiceAuthAnyOf = "LOCATION_RESTRICTED_WITHOUT_RESPONSE"
	LCSSERVICEAUTHANYOF_NOTIFICATION_ONLY LcsServiceAuthAnyOf = "NOTIFICATION_ONLY"
	LCSSERVICEAUTHANYOF_NOTIFICATION_AND_VERIFICATION_ONLY LcsServiceAuthAnyOf = "NOTIFICATION_AND_VERIFICATION_ONLY"
)

// AssertLcsServiceAuthAnyOfRequired checks if the required fields are not zero-ed
func AssertLcsServiceAuthAnyOfRequired(obj LcsServiceAuthAnyOf) error {
	return nil
}

// AssertRecurseLcsServiceAuthAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LcsServiceAuthAnyOf (e.g. [][]LcsServiceAuthAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLcsServiceAuthAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLcsServiceAuthAnyOf, ok := obj.(LcsServiceAuthAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLcsServiceAuthAnyOfRequired(aLcsServiceAuthAnyOf)
	})
}
