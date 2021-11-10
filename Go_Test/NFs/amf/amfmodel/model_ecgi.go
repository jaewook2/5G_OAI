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

type Ecgi struct {

	PlmnId PlmnId `json:"plmnId"`

	EutraCellId string `json:"eutraCellId"`

	Nid string `json:"nid,omitempty"`
}

// AssertEcgiRequired checks if the required fields are not zero-ed
func AssertEcgiRequired(obj Ecgi) error {
	elements := map[string]interface{}{
		"plmnId": obj.PlmnId,
		"eutraCellId": obj.EutraCellId,
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

// AssertRecurseEcgiRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of Ecgi (e.g. [][]Ecgi), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseEcgiRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aEcgi, ok := obj.(Ecgi)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertEcgiRequired(aEcgi)
	})
}