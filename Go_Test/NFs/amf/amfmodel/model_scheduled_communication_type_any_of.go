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

type ScheduledCommunicationTypeAnyOf string

// List of ScheduledCommunicationTypeAnyOf
const (
	SCHEDULEDCOMMUNICATIONTYPEANYOF_DOWNLINK_ONLY ScheduledCommunicationTypeAnyOf = "DOWNLINK_ONLY"
	SCHEDULEDCOMMUNICATIONTYPEANYOF_UPLINK_ONLY ScheduledCommunicationTypeAnyOf = "UPLINK_ONLY"
	SCHEDULEDCOMMUNICATIONTYPEANYOF_BIDIRECTIONAL ScheduledCommunicationTypeAnyOf = "BIDIRECTIONAL"
)

// AssertScheduledCommunicationTypeAnyOfRequired checks if the required fields are not zero-ed
func AssertScheduledCommunicationTypeAnyOfRequired(obj ScheduledCommunicationTypeAnyOf) error {
	return nil
}

// AssertRecurseScheduledCommunicationTypeAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ScheduledCommunicationTypeAnyOf (e.g. [][]ScheduledCommunicationTypeAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseScheduledCommunicationTypeAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aScheduledCommunicationTypeAnyOf, ok := obj.(ScheduledCommunicationTypeAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertScheduledCommunicationTypeAnyOfRequired(aScheduledCommunicationTypeAnyOf)
	})
}