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

type ReachabilityFilterAnyOf string

// List of ReachabilityFilterAnyOf
const (
	REACHABILITYFILTERANYOF_REACHABILITY_STATUS_CHANGE ReachabilityFilterAnyOf = "UE_REACHABILITY_STATUS_CHANGE"
	REACHABILITYFILTERANYOF_REACHABLE_DL_TRAFFIC ReachabilityFilterAnyOf = "UE_REACHABLE_DL_TRAFFIC"
)

// AssertReachabilityFilterAnyOfRequired checks if the required fields are not zero-ed
func AssertReachabilityFilterAnyOfRequired(obj ReachabilityFilterAnyOf) error {
	return nil
}

// AssertRecurseReachabilityFilterAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ReachabilityFilterAnyOf (e.g. [][]ReachabilityFilterAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseReachabilityFilterAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aReachabilityFilterAnyOf, ok := obj.(ReachabilityFilterAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertReachabilityFilterAnyOfRequired(aReachabilityFilterAnyOf)
	})
}