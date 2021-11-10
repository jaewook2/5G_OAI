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

type N1N2MessageTransferCause struct {
}

// AssertN1N2MessageTransferCauseRequired checks if the required fields are not zero-ed
func AssertN1N2MessageTransferCauseRequired(obj N1N2MessageTransferCause) error {
	return nil
}

// AssertRecurseN1N2MessageTransferCauseRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of N1N2MessageTransferCause (e.g. [][]N1N2MessageTransferCause), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseN1N2MessageTransferCauseRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aN1N2MessageTransferCause, ok := obj.(N1N2MessageTransferCause)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertN1N2MessageTransferCauseRequired(aN1N2MessageTransferCause)
	})
}
