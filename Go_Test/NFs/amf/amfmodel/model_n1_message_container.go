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

type N1MessageContainer struct {

	N1MessageClass N1MessageClass `json:"n1MessageClass"`

	N1MessageContent RefToBinaryData `json:"n1MessageContent"`

	NfId string `json:"nfId,omitempty"`

	ServiceInstanceId string `json:"serviceInstanceId,omitempty"`
}

// AssertN1MessageContainerRequired checks if the required fields are not zero-ed
func AssertN1MessageContainerRequired(obj N1MessageContainer) error {
	elements := map[string]interface{}{
		"n1MessageClass": obj.N1MessageClass,
		"n1MessageContent": obj.N1MessageContent,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertN1MessageClassRequired(obj.N1MessageClass); err != nil {
		return err
	}
	if err := AssertRefToBinaryDataRequired(obj.N1MessageContent); err != nil {
		return err
	}
	return nil
}

// AssertRecurseN1MessageContainerRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of N1MessageContainer (e.g. [][]N1MessageContainer), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseN1MessageContainerRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aN1MessageContainer, ok := obj.(N1MessageContainer)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertN1MessageContainerRequired(aN1MessageContainer)
	})
}
