/*
 * Namf_Location
 *
 * AMF Location Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmodel

import (
"amf.com/amfcommon"
)

type PositioningMethodAnyOf string

// List of PositioningMethodAnyOf
const (
	POSITIONINGMETHODANYOF_CELLID PositioningMethodAnyOf = "CELLID"
	POSITIONINGMETHODANYOF_ECID PositioningMethodAnyOf = "ECID"
	POSITIONINGMETHODANYOF_OTDOA PositioningMethodAnyOf = "OTDOA"
	POSITIONINGMETHODANYOF_BAROMETRIC_PRESSURE PositioningMethodAnyOf = "BAROMETRIC_PRESSURE"
	POSITIONINGMETHODANYOF_WLAN PositioningMethodAnyOf = "WLAN"
	POSITIONINGMETHODANYOF_BLUETOOTH PositioningMethodAnyOf = "BLUETOOTH"
	POSITIONINGMETHODANYOF_MBS PositioningMethodAnyOf = "MBS"
	POSITIONINGMETHODANYOF_MOTION_SENSOR PositioningMethodAnyOf = "MOTION_SENSOR"
	POSITIONINGMETHODANYOF_DL_TDOA PositioningMethodAnyOf = "DL_TDOA"
	POSITIONINGMETHODANYOF_DL_AOD PositioningMethodAnyOf = "DL_AOD"
	POSITIONINGMETHODANYOF_MULTI_RTT PositioningMethodAnyOf = "MULTI-RTT"
	POSITIONINGMETHODANYOF_NR_ECID PositioningMethodAnyOf = "NR_ECID"
	POSITIONINGMETHODANYOF_UL_TDOA PositioningMethodAnyOf = "UL_TDOA"
	POSITIONINGMETHODANYOF_UL_AOA PositioningMethodAnyOf = "UL_AOA"
	POSITIONINGMETHODANYOF_NETWORK_SPECIFIC PositioningMethodAnyOf = "NETWORK_SPECIFIC"
)

// AssertPositioningMethodAnyOfRequired checks if the required fields are not zero-ed
func AssertPositioningMethodAnyOfRequired(obj PositioningMethodAnyOf) error {
	return nil
}

// AssertRecursePositioningMethodAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PositioningMethodAnyOf (e.g. [][]PositioningMethodAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePositioningMethodAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPositioningMethodAnyOf, ok := obj.(PositioningMethodAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPositioningMethodAnyOfRequired(aPositioningMethodAnyOf)
	})
}
