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

type Ncgi struct {

	PlmnId PlmnId `json:"plmnId"`

	NrCellId string `json:"nrCellId"`

	Nid string `json:"nid,omitempty"`
}

// AssertNcgiRequired checks if the required fields are not zero-ed
func AssertNcgiRequired(obj Ncgi) error {
	elements := map[string]interface{}{
		"plmnId": obj.PlmnId,
		"nrCellId": obj.NrCellId,
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

// AssertRecurseNcgiRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of Ncgi (e.g. [][]Ncgi), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseNcgiRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNcgi, ok := obj.(Ncgi)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertNcgiRequired(aNcgi)
	})
}
