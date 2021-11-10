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

type AssignEbiData struct {

	PduSessionId int32 `json:"pduSessionId"`

	ArpList []Arp `json:"arpList,omitempty"`

	ReleasedEbiList []int32 `json:"releasedEbiList,omitempty"`

	OldGuami Guami `json:"oldGuami,omitempty"`
}

// AssertAssignEbiDataRequired checks if the required fields are not zero-ed
func AssertAssignEbiDataRequired(obj AssignEbiData) error {
	elements := map[string]interface{}{
		"pduSessionId": obj.PduSessionId,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	for _, el := range obj.ArpList {
		if err := AssertArpRequired(el); err != nil {
			return err
		}
	}
	if err := AssertGuamiRequired(obj.OldGuami); err != nil {
		return err
	}
	return nil
}

// AssertRecurseAssignEbiDataRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AssignEbiData (e.g. [][]AssignEbiData), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAssignEbiDataRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAssignEbiData, ok := obj.(AssignEbiData)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAssignEbiDataRequired(aAssignEbiData)
	})
}
