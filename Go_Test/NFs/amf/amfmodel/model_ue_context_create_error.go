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

type UeContextCreateError struct {

	Error ProblemDetails `json:"error"`

	NgapCause NgApCause `json:"ngapCause,omitempty"`

	TargetToSourceFailureData N2InfoContent `json:"targetToSourceFailureData,omitempty"`
}

// AssertUeContextCreateErrorRequired checks if the required fields are not zero-ed
func AssertUeContextCreateErrorRequired(obj UeContextCreateError) error {
	elements := map[string]interface{}{
		"error": obj.Error,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertProblemDetailsRequired(obj.Error); err != nil {
		return err
	}
	if err := AssertNgApCauseRequired(obj.NgapCause); err != nil {
		return err
	}
	if err := AssertN2InfoContentRequired(obj.TargetToSourceFailureData); err != nil {
		return err
	}
	return nil
}

// AssertRecurseUeContextCreateErrorRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of UeContextCreateError (e.g. [][]UeContextCreateError), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseUeContextCreateErrorRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aUeContextCreateError, ok := obj.(UeContextCreateError)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertUeContextCreateErrorRequired(aUeContextCreateError)
	})
}