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

type PeriodicCommunicationIndicator struct {
}

// AssertPeriodicCommunicationIndicatorRequired checks if the required fields are not zero-ed
func AssertPeriodicCommunicationIndicatorRequired(obj PeriodicCommunicationIndicator) error {
	return nil
}

// AssertRecursePeriodicCommunicationIndicatorRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PeriodicCommunicationIndicator (e.g. [][]PeriodicCommunicationIndicator), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePeriodicCommunicationIndicatorRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPeriodicCommunicationIndicator, ok := obj.(PeriodicCommunicationIndicator)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPeriodicCommunicationIndicatorRequired(aPeriodicCommunicationIndicator)
	})
}