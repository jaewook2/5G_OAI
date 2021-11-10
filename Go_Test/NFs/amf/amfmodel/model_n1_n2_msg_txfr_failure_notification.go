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

type N1N2MsgTxfrFailureNotification struct {

	Cause N1N2MessageTransferCause `json:"cause"`

	N1n2MsgDataUri string `json:"n1n2MsgDataUri"`
}

// AssertN1N2MsgTxfrFailureNotificationRequired checks if the required fields are not zero-ed
func AssertN1N2MsgTxfrFailureNotificationRequired(obj N1N2MsgTxfrFailureNotification) error {
	elements := map[string]interface{}{
		"cause": obj.Cause,
		"n1n2MsgDataUri": obj.N1n2MsgDataUri,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertN1N2MessageTransferCauseRequired(obj.Cause); err != nil {
		return err
	}
	return nil
}

// AssertRecurseN1N2MsgTxfrFailureNotificationRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of N1N2MsgTxfrFailureNotification (e.g. [][]N1N2MsgTxfrFailureNotification), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseN1N2MsgTxfrFailureNotificationRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aN1N2MsgTxfrFailureNotification, ok := obj.(N1N2MsgTxfrFailureNotification)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertN1N2MsgTxfrFailureNotificationRequired(aN1N2MsgTxfrFailureNotification)
	})
}