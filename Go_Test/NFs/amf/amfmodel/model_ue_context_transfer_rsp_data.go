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

type UeContextTransferRspData struct {

	UeContext UeContext `json:"ueContext"`

	UeRadioCapability N2InfoContent `json:"ueRadioCapability,omitempty"`

	UeNbiotRadioCapability N2InfoContent `json:"ueNbiotRadioCapability,omitempty"`

	SupportedFeatures string `json:"supportedFeatures,omitempty"`
}

// AssertUeContextTransferRspDataRequired checks if the required fields are not zero-ed
func AssertUeContextTransferRspDataRequired(obj UeContextTransferRspData) error {
	elements := map[string]interface{}{
		"ueContext": obj.UeContext,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertUeContextRequired(obj.UeContext); err != nil {
		return err
	}
	if err := AssertN2InfoContentRequired(obj.UeRadioCapability); err != nil {
		return err
	}
	if err := AssertN2InfoContentRequired(obj.UeNbiotRadioCapability); err != nil {
		return err
	}
	return nil
}

// AssertRecurseUeContextTransferRspDataRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of UeContextTransferRspData (e.g. [][]UeContextTransferRspData), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseUeContextTransferRspDataRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aUeContextTransferRspData, ok := obj.(UeContextTransferRspData)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertUeContextTransferRspDataRequired(aUeContextTransferRspData)
	})
}