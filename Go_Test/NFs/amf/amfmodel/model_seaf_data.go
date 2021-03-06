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

type SeafData struct {

	NgKsi NgKsi `json:"ngKsi"`

	KeyAmf KeyAmf `json:"keyAmf"`

	Nh string `json:"nh,omitempty"`

	Ncc int32 `json:"ncc,omitempty"`

	KeyAmfChangeInd bool `json:"keyAmfChangeInd,omitempty"`

	KeyAmfHDerivationInd bool `json:"keyAmfHDerivationInd,omitempty"`
}

// AssertSeafDataRequired checks if the required fields are not zero-ed
func AssertSeafDataRequired(obj SeafData) error {
	elements := map[string]interface{}{
		"ngKsi": obj.NgKsi,
		"keyAmf": obj.KeyAmf,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertNgKsiRequired(obj.NgKsi); err != nil {
		return err
	}
	if err := AssertKeyAmfRequired(obj.KeyAmf); err != nil {
		return err
	}
	return nil
}

// AssertRecurseSeafDataRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of SeafData (e.g. [][]SeafData), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseSeafDataRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aSeafData, ok := obj.(SeafData)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertSeafDataRequired(aSeafData)
	})
}
