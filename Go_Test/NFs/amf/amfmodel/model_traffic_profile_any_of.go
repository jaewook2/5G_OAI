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

type TrafficProfileAnyOf string

// List of TrafficProfileAnyOf
const (
	TRAFFICPROFILEANYOF_SINGLE_TRANS_UL TrafficProfileAnyOf = "SINGLE_TRANS_UL"
	TRAFFICPROFILEANYOF_SINGLE_TRANS_DL TrafficProfileAnyOf = "SINGLE_TRANS_DL"
	TRAFFICPROFILEANYOF_DUAL_TRANS_UL_FIRST TrafficProfileAnyOf = "DUAL_TRANS_UL_FIRST"
	TRAFFICPROFILEANYOF_DUAL_TRANS_DL_FIRST TrafficProfileAnyOf = "DUAL_TRANS_DL_FIRST"
	TRAFFICPROFILEANYOF_MULTI_TRANS TrafficProfileAnyOf = "MULTI_TRANS"
)

// AssertTrafficProfileAnyOfRequired checks if the required fields are not zero-ed
func AssertTrafficProfileAnyOfRequired(obj TrafficProfileAnyOf) error {
	return nil
}

// AssertRecurseTrafficProfileAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of TrafficProfileAnyOf (e.g. [][]TrafficProfileAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseTrafficProfileAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aTrafficProfileAnyOf, ok := obj.(TrafficProfileAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertTrafficProfileAnyOfRequired(aTrafficProfileAnyOf)
	})
}