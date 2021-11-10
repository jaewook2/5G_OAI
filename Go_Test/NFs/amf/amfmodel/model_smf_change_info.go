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

type SmfChangeInfo struct {

	PduSessionIdList []int32 `json:"pduSessionIdList"`

	SmfChangeInd SmfChangeIndication `json:"smfChangeInd"`
}

// AssertSmfChangeInfoRequired checks if the required fields are not zero-ed
func AssertSmfChangeInfoRequired(obj SmfChangeInfo) error {
	elements := map[string]interface{}{
		"pduSessionIdList": obj.PduSessionIdList,
		"smfChangeInd": obj.SmfChangeInd,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertSmfChangeIndicationRequired(obj.SmfChangeInd); err != nil {
		return err
	}
	return nil
}

// AssertRecurseSmfChangeInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of SmfChangeInfo (e.g. [][]SmfChangeInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseSmfChangeInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aSmfChangeInfo, ok := obj.(SmfChangeInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertSmfChangeInfoRequired(aSmfChangeInfo)
	})
}
