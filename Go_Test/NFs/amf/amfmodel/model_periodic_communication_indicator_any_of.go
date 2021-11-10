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

type PeriodicCommunicationIndicatorAnyOf string

// List of PeriodicCommunicationIndicatorAnyOf
const (
	PERIODICCOMMUNICATIONINDICATORANYOF_PIORIODICALLY PeriodicCommunicationIndicatorAnyOf = "PIORIODICALLY"
	PERIODICCOMMUNICATIONINDICATORANYOF_ON_DEMAND PeriodicCommunicationIndicatorAnyOf = "ON_DEMAND"
)

// AssertPeriodicCommunicationIndicatorAnyOfRequired checks if the required fields are not zero-ed
func AssertPeriodicCommunicationIndicatorAnyOfRequired(obj PeriodicCommunicationIndicatorAnyOf) error {
	return nil
}

// AssertRecursePeriodicCommunicationIndicatorAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PeriodicCommunicationIndicatorAnyOf (e.g. [][]PeriodicCommunicationIndicatorAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePeriodicCommunicationIndicatorAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPeriodicCommunicationIndicatorAnyOf, ok := obj.(PeriodicCommunicationIndicatorAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPeriodicCommunicationIndicatorAnyOfRequired(aPeriodicCommunicationIndicatorAnyOf)
	})
}
