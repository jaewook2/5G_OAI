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

type LcsPriority struct {
}

// AssertLcsPriorityRequired checks if the required fields are not zero-ed
func AssertLcsPriorityRequired(obj LcsPriority) error {
	return nil
}

// AssertRecurseLcsPriorityRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LcsPriority (e.g. [][]LcsPriority), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLcsPriorityRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLcsPriority, ok := obj.(LcsPriority)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLcsPriorityRequired(aLcsPriority)
	})
}
