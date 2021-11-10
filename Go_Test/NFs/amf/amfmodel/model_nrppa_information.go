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

type NrppaInformation struct {

	NfId string `json:"nfId"`

	NrppaPdu N2InfoContent `json:"nrppaPdu"`

	ServiceInstanceId string `json:"serviceInstanceId,omitempty"`
}

// AssertNrppaInformationRequired checks if the required fields are not zero-ed
func AssertNrppaInformationRequired(obj NrppaInformation) error {
	elements := map[string]interface{}{
		"nfId": obj.NfId,
		"nrppaPdu": obj.NrppaPdu,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertN2InfoContentRequired(obj.NrppaPdu); err != nil {
		return err
	}
	return nil
}

// AssertRecurseNrppaInformationRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of NrppaInformation (e.g. [][]NrppaInformation), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseNrppaInformationRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNrppaInformation, ok := obj.(NrppaInformation)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertNrppaInformationRequired(aNrppaInformation)
	})
}
