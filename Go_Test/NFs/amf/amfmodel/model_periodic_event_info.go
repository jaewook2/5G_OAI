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

type PeriodicEventInfo struct {

	ReportingAmount int32 `json:"reportingAmount"`

	ReportingInterval int32 `json:"reportingInterval"`
}

// AssertPeriodicEventInfoRequired checks if the required fields are not zero-ed
func AssertPeriodicEventInfoRequired(obj PeriodicEventInfo) error {
	elements := map[string]interface{}{
		"reportingAmount": obj.ReportingAmount,
		"reportingInterval": obj.ReportingInterval,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecursePeriodicEventInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PeriodicEventInfo (e.g. [][]PeriodicEventInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePeriodicEventInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPeriodicEventInfo, ok := obj.(PeriodicEventInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPeriodicEventInfoRequired(aPeriodicEventInfo)
	})
}
