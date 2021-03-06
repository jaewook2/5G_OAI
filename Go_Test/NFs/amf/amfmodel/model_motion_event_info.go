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

type MotionEventInfo struct {

	LinearDistance int32 `json:"linearDistance"`

	OccurrenceInfo OccurrenceInfo `json:"occurrenceInfo,omitempty"`

	MinimumInterval int32 `json:"minimumInterval,omitempty"`

	MaximumInterval int32 `json:"maximumInterval,omitempty"`

	SamplingInterval int32 `json:"samplingInterval,omitempty"`

	ReportingDuration int32 `json:"reportingDuration,omitempty"`

	ReportingLocationReq bool `json:"reportingLocationReq,omitempty"`
}

// AssertMotionEventInfoRequired checks if the required fields are not zero-ed
func AssertMotionEventInfoRequired(obj MotionEventInfo) error {
	elements := map[string]interface{}{
		"linearDistance": obj.LinearDistance,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertOccurrenceInfoRequired(obj.OccurrenceInfo); err != nil {
		return err
	}
	return nil
}

// AssertRecurseMotionEventInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of MotionEventInfo (e.g. [][]MotionEventInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseMotionEventInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aMotionEventInfo, ok := obj.(MotionEventInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertMotionEventInfoRequired(aMotionEventInfo)
	})
}
