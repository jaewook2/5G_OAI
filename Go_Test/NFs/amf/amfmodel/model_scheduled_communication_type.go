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

type ScheduledCommunicationType struct {
}

// AssertScheduledCommunicationTypeRequired checks if the required fields are not zero-ed
func AssertScheduledCommunicationTypeRequired(obj ScheduledCommunicationType) error {
	return nil
}

// AssertRecurseScheduledCommunicationTypeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ScheduledCommunicationType (e.g. [][]ScheduledCommunicationType), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseScheduledCommunicationTypeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aScheduledCommunicationType, ok := obj.(ScheduledCommunicationType)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertScheduledCommunicationTypeRequired(aScheduledCommunicationType)
	})
}
