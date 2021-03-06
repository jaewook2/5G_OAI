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

type AmfEventTriggerAnyOf string

// List of AmfEventTriggerAnyOf
const (
	AMFEVENTTRIGGERANYOF_ONE_TIME AmfEventTriggerAnyOf = "ONE_TIME"
	AMFEVENTTRIGGERANYOF_CONTINUOUS AmfEventTriggerAnyOf = "CONTINUOUS"
	AMFEVENTTRIGGERANYOF_PERIODIC AmfEventTriggerAnyOf = "PERIODIC"
)

// AssertAmfEventTriggerAnyOfRequired checks if the required fields are not zero-ed
func AssertAmfEventTriggerAnyOfRequired(obj AmfEventTriggerAnyOf) error {
	return nil
}

// AssertRecurseAmfEventTriggerAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfEventTriggerAnyOf (e.g. [][]AmfEventTriggerAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfEventTriggerAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfEventTriggerAnyOf, ok := obj.(AmfEventTriggerAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfEventTriggerAnyOfRequired(aAmfEventTriggerAnyOf)
	})
}
