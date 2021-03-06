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

type PwsInformation struct {

	MessageIdentifier int32 `json:"messageIdentifier"`

	SerialNumber int32 `json:"serialNumber"`

	PwsContainer N2InfoContent `json:"pwsContainer"`

	BcEmptyAreaList []GlobalRanNodeId `json:"bcEmptyAreaList,omitempty"`

	SendRanResponse bool `json:"sendRanResponse,omitempty"`

	OmcId string `json:"omcId,omitempty"`
}

// AssertPwsInformationRequired checks if the required fields are not zero-ed
func AssertPwsInformationRequired(obj PwsInformation) error {
	elements := map[string]interface{}{
		"messageIdentifier": obj.MessageIdentifier,
		"serialNumber": obj.SerialNumber,
		"pwsContainer": obj.PwsContainer,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertN2InfoContentRequired(obj.PwsContainer); err != nil {
		return err
	}
	for _, el := range obj.BcEmptyAreaList {
		if err := AssertGlobalRanNodeIdRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecursePwsInformationRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PwsInformation (e.g. [][]PwsInformation), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePwsInformationRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPwsInformation, ok := obj.(PwsInformation)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPwsInformationRequired(aPwsInformation)
	})
}
