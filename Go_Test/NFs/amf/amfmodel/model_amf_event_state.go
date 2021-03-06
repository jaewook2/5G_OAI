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

type AmfEventState struct {

	Active bool `json:"active"`

	RemainReports int32 `json:"remainReports,omitempty"`

	RemainDuration int32 `json:"remainDuration,omitempty"`
}

// AssertAmfEventStateRequired checks if the required fields are not zero-ed
func AssertAmfEventStateRequired(obj AmfEventState) error {
	elements := map[string]interface{}{
		"active": obj.Active,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseAmfEventStateRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfEventState (e.g. [][]AmfEventState), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfEventStateRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfEventState, ok := obj.(AmfEventState)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfEventStateRequired(aAmfEventState)
	})
}
