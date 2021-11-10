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

type CellGlobalId struct {

	PlmnId PlmnId `json:"plmnId"`

	Lac string `json:"lac"`

	CellId string `json:"cellId"`
}

// AssertCellGlobalIdRequired checks if the required fields are not zero-ed
func AssertCellGlobalIdRequired(obj CellGlobalId) error {
	elements := map[string]interface{}{
		"plmnId": obj.PlmnId,
		"lac": obj.Lac,
		"cellId": obj.CellId,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertPlmnIdRequired(obj.PlmnId); err != nil {
		return err
	}
	return nil
}

// AssertRecurseCellGlobalIdRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CellGlobalId (e.g. [][]CellGlobalId), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseCellGlobalIdRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCellGlobalId, ok := obj.(CellGlobalId)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertCellGlobalIdRequired(aCellGlobalId)
	})
}