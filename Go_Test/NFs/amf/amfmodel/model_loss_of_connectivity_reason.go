/*
 * Namf_EventExposure
 *
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmodel

import (
"amf.com/amfcommon"
)

type LossOfConnectivityReason struct {
}

// AssertLossOfConnectivityReasonRequired checks if the required fields are not zero-ed
func AssertLossOfConnectivityReasonRequired(obj LossOfConnectivityReason) error {
	return nil
}

// AssertRecurseLossOfConnectivityReasonRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LossOfConnectivityReason (e.g. [][]LossOfConnectivityReason), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLossOfConnectivityReasonRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLossOfConnectivityReason, ok := obj.(LossOfConnectivityReason)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLossOfConnectivityReasonRequired(aLossOfConnectivityReason)
	})
}
