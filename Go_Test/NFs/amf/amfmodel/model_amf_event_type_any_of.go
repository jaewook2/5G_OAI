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

type AmfEventTypeAnyOf string

// List of AmfEventTypeAnyOf
const (
	AMFEVENTTYPEANYOF_LOCATION_REPORT AmfEventTypeAnyOf = "LOCATION_REPORT"
	AMFEVENTTYPEANYOF_PRESENCE_IN_AOI_REPORT AmfEventTypeAnyOf = "PRESENCE_IN_AOI_REPORT"
	AMFEVENTTYPEANYOF_TIMEZONE_REPORT AmfEventTypeAnyOf = "TIMEZONE_REPORT"
	AMFEVENTTYPEANYOF_ACCESS_TYPE_REPORT AmfEventTypeAnyOf = "ACCESS_TYPE_REPORT"
	AMFEVENTTYPEANYOF_REGISTRATION_STATE_REPORT AmfEventTypeAnyOf = "REGISTRATION_STATE_REPORT"
	AMFEVENTTYPEANYOF_CONNECTIVITY_STATE_REPORT AmfEventTypeAnyOf = "CONNECTIVITY_STATE_REPORT"
	AMFEVENTTYPEANYOF_REACHABILITY_REPORT AmfEventTypeAnyOf = "REACHABILITY_REPORT"
	AMFEVENTTYPEANYOF_COMMUNICATION_FAILURE_REPORT AmfEventTypeAnyOf = "COMMUNICATION_FAILURE_REPORT"
	AMFEVENTTYPEANYOF_UES_IN_AREA_REPORT AmfEventTypeAnyOf = "UES_IN_AREA_REPORT"
	AMFEVENTTYPEANYOF_SUBSCRIPTION_ID_CHANGE AmfEventTypeAnyOf = "SUBSCRIPTION_ID_CHANGE"
	AMFEVENTTYPEANYOF_SUBSCRIPTION_ID_ADDITION AmfEventTypeAnyOf = "SUBSCRIPTION_ID_ADDITION"
	AMFEVENTTYPEANYOF_LOSS_OF_CONNECTIVITY AmfEventTypeAnyOf = "LOSS_OF_CONNECTIVITY"
	AMFEVENTTYPEANYOF__5_GS_USER_STATE_REPORT AmfEventTypeAnyOf = "5GS_USER_STATE_REPORT"
	AMFEVENTTYPEANYOF_AVAILABILITY_AFTER_DDN_FAILURE AmfEventTypeAnyOf = "AVAILABILITY_AFTER_DDN_FAILURE"
	AMFEVENTTYPEANYOF_TYPE_ALLOCATION_CODE_REPORT AmfEventTypeAnyOf = "TYPE_ALLOCATION_CODE_REPORT"
	AMFEVENTTYPEANYOF_FREQUENT_MOBILITY_REGISTRATION_REPORT AmfEventTypeAnyOf = "FREQUENT_MOBILITY_REGISTRATION_REPORT"
)

// AssertAmfEventTypeAnyOfRequired checks if the required fields are not zero-ed
func AssertAmfEventTypeAnyOfRequired(obj AmfEventTypeAnyOf) error {
	return nil
}

// AssertRecurseAmfEventTypeAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfEventTypeAnyOf (e.g. [][]AmfEventTypeAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfEventTypeAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfEventTypeAnyOf, ok := obj.(AmfEventTypeAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfEventTypeAnyOfRequired(aAmfEventTypeAnyOf)
	})
}
