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

	"time"
)

type UeDifferentiationInfo struct {

	PeriodicComInd PeriodicCommunicationIndicator `json:"periodicComInd,omitempty"`

	PeriodicTime int32 `json:"periodicTime,omitempty"`

	ScheduledComTime ScheduledCommunicationTime `json:"scheduledComTime,omitempty"`

	StationaryInd StationaryIndication `json:"stationaryInd,omitempty"`

	TrafficProfile TrafficProfile `json:"trafficProfile,omitempty"`

	BatteryInd BatteryIndication `json:"batteryInd,omitempty"`

	ValidityTime time.Time `json:"validityTime,omitempty"`
}

// AssertUeDifferentiationInfoRequired checks if the required fields are not zero-ed
func AssertUeDifferentiationInfoRequired(obj UeDifferentiationInfo) error {
	if err := AssertPeriodicCommunicationIndicatorRequired(obj.PeriodicComInd); err != nil {
		return err
	}
	if err := AssertScheduledCommunicationTimeRequired(obj.ScheduledComTime); err != nil {
		return err
	}
	if err := AssertStationaryIndicationRequired(obj.StationaryInd); err != nil {
		return err
	}
	if err := AssertTrafficProfileRequired(obj.TrafficProfile); err != nil {
		return err
	}
	if err := AssertBatteryIndicationRequired(obj.BatteryInd); err != nil {
		return err
	}
	return nil
}

// AssertRecurseUeDifferentiationInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of UeDifferentiationInfo (e.g. [][]UeDifferentiationInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseUeDifferentiationInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aUeDifferentiationInfo, ok := obj.(UeDifferentiationInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertUeDifferentiationInfoRequired(aUeDifferentiationInfo)
	})
}
