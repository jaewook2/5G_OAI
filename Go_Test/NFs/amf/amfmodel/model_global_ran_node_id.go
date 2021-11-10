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

type GlobalRanNodeId struct {

	PlmnId PlmnId `json:"plmnId"`

	N3IwfId string `json:"n3IwfId,omitempty"`

	GNbId GnbId `json:"gNbId,omitempty"`

	NgeNbId string `json:"ngeNbId,omitempty"`

	WagfId string `json:"wagfId,omitempty"`

	TngfId string `json:"tngfId,omitempty"`

	Nid string `json:"nid,omitempty"`

	ENbId string `json:"eNbId,omitempty"`
}

// AssertGlobalRanNodeIdRequired checks if the required fields are not zero-ed
func AssertGlobalRanNodeIdRequired(obj GlobalRanNodeId) error {
	elements := map[string]interface{}{
		"plmnId": obj.PlmnId,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertPlmnIdRequired(obj.PlmnId); err != nil {
		return err
	}
	if err := AssertGnbIdRequired(obj.GNbId); err != nil {
		return err
	}
	return nil
}

// AssertRecurseGlobalRanNodeIdRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of GlobalRanNodeId (e.g. [][]GlobalRanNodeId), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseGlobalRanNodeIdRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aGlobalRanNodeId, ok := obj.(GlobalRanNodeId)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertGlobalRanNodeIdRequired(aGlobalRanNodeId)
	})
}