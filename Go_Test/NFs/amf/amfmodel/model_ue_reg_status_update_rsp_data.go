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

type UeRegStatusUpdateRspData struct {

	RegStatusTransferComplete bool `json:"regStatusTransferComplete"`
}

// AssertUeRegStatusUpdateRspDataRequired checks if the required fields are not zero-ed
func AssertUeRegStatusUpdateRspDataRequired(obj UeRegStatusUpdateRspData) error {
	elements := map[string]interface{}{
		"regStatusTransferComplete": obj.RegStatusTransferComplete,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseUeRegStatusUpdateRspDataRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of UeRegStatusUpdateRspData (e.g. [][]UeRegStatusUpdateRspData), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseUeRegStatusUpdateRspDataRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aUeRegStatusUpdateRspData, ok := obj.(UeRegStatusUpdateRspData)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertUeRegStatusUpdateRspDataRequired(aUeRegStatusUpdateRspData)
	})
}
