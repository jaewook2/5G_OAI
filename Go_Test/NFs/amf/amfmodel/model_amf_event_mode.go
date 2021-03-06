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

	"time"
)

type AmfEventMode struct {

	Trigger AmfEventTrigger `json:"trigger"`

	MaxReports int32 `json:"maxReports,omitempty"`

	Expiry time.Time `json:"expiry,omitempty"`

	RepPeriod int32 `json:"repPeriod,omitempty"`

	SampRatio int32 `json:"sampRatio,omitempty"`
}

// AssertAmfEventModeRequired checks if the required fields are not zero-ed
func AssertAmfEventModeRequired(obj AmfEventMode) error {
	elements := map[string]interface{}{
		"trigger": obj.Trigger,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertAmfEventTriggerRequired(obj.Trigger); err != nil {
		return err
	}
	return nil
}

// AssertRecurseAmfEventModeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfEventMode (e.g. [][]AmfEventMode), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfEventModeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfEventMode, ok := obj.(AmfEventMode)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfEventModeRequired(aAmfEventMode)
	})
}
