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

type UeContextRelocateData struct {

	UeContext UeContext `json:"ueContext"`

	TargetId NgRanTargetId `json:"targetId"`

	SourceToTargetData N2InfoContent `json:"sourceToTargetData"`

	ForwardRelocationRequest RefToBinaryData `json:"forwardRelocationRequest"`

	PduSessionList []N2SmInformation `json:"pduSessionList,omitempty"`

	UeRadioCapability N2InfoContent `json:"ueRadioCapability,omitempty"`

	NgapCause NgApCause `json:"ngapCause,omitempty"`

	SupportedFeatures string `json:"supportedFeatures,omitempty"`
}

// AssertUeContextRelocateDataRequired checks if the required fields are not zero-ed
func AssertUeContextRelocateDataRequired(obj UeContextRelocateData) error {
	elements := map[string]interface{}{
		"ueContext": obj.UeContext,
		"targetId": obj.TargetId,
		"sourceToTargetData": obj.SourceToTargetData,
		"forwardRelocationRequest": obj.ForwardRelocationRequest,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertUeContextRequired(obj.UeContext); err != nil {
		return err
	}
	if err := AssertNgRanTargetIdRequired(obj.TargetId); err != nil {
		return err
	}
	if err := AssertN2InfoContentRequired(obj.SourceToTargetData); err != nil {
		return err
	}
	if err := AssertRefToBinaryDataRequired(obj.ForwardRelocationRequest); err != nil {
		return err
	}
	for _, el := range obj.PduSessionList {
		if err := AssertN2SmInformationRequired(el); err != nil {
			return err
		}
	}
	if err := AssertN2InfoContentRequired(obj.UeRadioCapability); err != nil {
		return err
	}
	if err := AssertNgApCauseRequired(obj.NgapCause); err != nil {
		return err
	}
	return nil
}

// AssertRecurseUeContextRelocateDataRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of UeContextRelocateData (e.g. [][]UeContextRelocateData), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseUeContextRelocateDataRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aUeContextRelocateData, ok := obj.(UeContextRelocateData)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertUeContextRelocateDataRequired(aUeContextRelocateData)
	})
}
