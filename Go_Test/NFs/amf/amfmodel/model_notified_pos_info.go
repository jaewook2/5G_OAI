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

type NotifiedPosInfo struct {

	LocationEvent LocationEvent `json:"locationEvent"`

	Supi string `json:"supi,omitempty"`

	Gpsi string `json:"gpsi,omitempty"`

	Pei string `json:"pei,omitempty"`

	LocationEstimate GeographicArea `json:"locationEstimate,omitempty"`

	AgeOfLocationEstimate int32 `json:"ageOfLocationEstimate,omitempty"`

	VelocityEstimate VelocityEstimate `json:"velocityEstimate,omitempty"`

	PositioningDataList []PositioningMethodAndUsage `json:"positioningDataList,omitempty"`

	GnssPositioningDataList []GnssPositioningMethodAndUsage `json:"gnssPositioningDataList,omitempty"`

	Ecgi Ecgi `json:"ecgi,omitempty"`

	Ncgi Ncgi `json:"ncgi,omitempty"`

	ServingNode string `json:"servingNode,omitempty"`

	TargetMmeName string `json:"targetMmeName,omitempty"`

	TargetMmeRealm string `json:"targetMmeRealm,omitempty"`

	UtranSrvccInd bool `json:"utranSrvccInd,omitempty"`

	CivicAddress CivicAddress `json:"civicAddress,omitempty"`

	BarometricPressure int32 `json:"barometricPressure,omitempty"`

	Altitude float64 `json:"altitude,omitempty"`

	HgmlcCallBackURI string `json:"hgmlcCallBackURI,omitempty"`

	LdrReference string `json:"ldrReference,omitempty"`

	ServingLMFIdentification string `json:"servingLMFIdentification,omitempty"`

	TerminationCause TerminationCause `json:"terminationCause,omitempty"`
}

// AssertNotifiedPosInfoRequired checks if the required fields are not zero-ed
func AssertNotifiedPosInfoRequired(obj NotifiedPosInfo) error {
	elements := map[string]interface{}{
		"locationEvent": obj.LocationEvent,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertLocationEventRequired(obj.LocationEvent); err != nil {
		return err
	}
	if err := AssertGeographicAreaRequired(obj.LocationEstimate); err != nil {
		return err
	}
	if err := AssertVelocityEstimateRequired(obj.VelocityEstimate); err != nil {
		return err
	}
	for _, el := range obj.PositioningDataList {
		if err := AssertPositioningMethodAndUsageRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.GnssPositioningDataList {
		if err := AssertGnssPositioningMethodAndUsageRequired(el); err != nil {
			return err
		}
	}
	if err := AssertEcgiRequired(obj.Ecgi); err != nil {
		return err
	}
	if err := AssertNcgiRequired(obj.Ncgi); err != nil {
		return err
	}
	if err := AssertCivicAddressRequired(obj.CivicAddress); err != nil {
		return err
	}
	if err := AssertTerminationCauseRequired(obj.TerminationCause); err != nil {
		return err
	}
	return nil
}

// AssertRecurseNotifiedPosInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of NotifiedPosInfo (e.g. [][]NotifiedPosInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseNotifiedPosInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNotifiedPosInfo, ok := obj.(NotifiedPosInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertNotifiedPosInfoRequired(aNotifiedPosInfo)
	})
}
