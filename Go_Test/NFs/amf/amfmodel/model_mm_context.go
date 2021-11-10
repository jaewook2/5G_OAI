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

type MmContext struct {

	AccessType AccessType `json:"accessType"`

	NasSecurityMode NasSecurityMode `json:"nasSecurityMode,omitempty"`

	EpsNasSecurityMode EpsNasSecurityMode `json:"epsNasSecurityMode,omitempty"`

	NasDownlinkCount int32 `json:"nasDownlinkCount,omitempty"`

	NasUplinkCount int32 `json:"nasUplinkCount,omitempty"`

	UeSecurityCapability string `json:"ueSecurityCapability,omitempty"`

	S1UeNetworkCapability string `json:"s1UeNetworkCapability,omitempty"`

	AllowedNssai []Snssai `json:"allowedNssai,omitempty"`

	NssaiMappingList []NssaiMapping `json:"nssaiMappingList,omitempty"`

	AllowedHomeNssai []Snssai `json:"allowedHomeNssai,omitempty"`

	NsInstanceList []string `json:"nsInstanceList,omitempty"`

	ExpectedUEbehavior ExpectedUeBehavior `json:"expectedUEbehavior,omitempty"`

	UeDifferentiationInfo UeDifferentiationInfo `json:"ueDifferentiationInfo,omitempty"`

	PlmnAssiUeRadioCapId string `json:"plmnAssiUeRadioCapId,omitempty"`

	ManAssiUeRadioCapId string `json:"manAssiUeRadioCapId,omitempty"`

	UcmfDicEntryId string `json:"ucmfDicEntryId,omitempty"`

	N3IwfId GlobalRanNodeId `json:"n3IwfId,omitempty"`

	WagfId GlobalRanNodeId `json:"wagfId,omitempty"`

	TngfId GlobalRanNodeId `json:"tngfId,omitempty"`

	AnN2ApId int32 `json:"anN2ApId,omitempty"`

	NssaaStatusList []NssaaStatus `json:"nssaaStatusList,omitempty"`

	PendingNssaiMappingList []NssaiMapping `json:"pendingNssaiMappingList,omitempty"`
}

// AssertMmContextRequired checks if the required fields are not zero-ed
func AssertMmContextRequired(obj MmContext) error {
	elements := map[string]interface{}{
		"accessType": obj.AccessType,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertNasSecurityModeRequired(obj.NasSecurityMode); err != nil {
		return err
	}
	if err := AssertEpsNasSecurityModeRequired(obj.EpsNasSecurityMode); err != nil {
		return err
	}
	for _, el := range obj.AllowedNssai {
		if err := AssertSnssaiRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.NssaiMappingList {
		if err := AssertNssaiMappingRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.AllowedHomeNssai {
		if err := AssertSnssaiRequired(el); err != nil {
			return err
		}
	}
	if err := AssertExpectedUeBehaviorRequired(obj.ExpectedUEbehavior); err != nil {
		return err
	}
	if err := AssertUeDifferentiationInfoRequired(obj.UeDifferentiationInfo); err != nil {
		return err
	}
	if err := AssertGlobalRanNodeIdRequired(obj.N3IwfId); err != nil {
		return err
	}
	if err := AssertGlobalRanNodeIdRequired(obj.WagfId); err != nil {
		return err
	}
	if err := AssertGlobalRanNodeIdRequired(obj.TngfId); err != nil {
		return err
	}
	for _, el := range obj.NssaaStatusList {
		if err := AssertNssaaStatusRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.PendingNssaiMappingList {
		if err := AssertNssaiMappingRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecurseMmContextRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of MmContext (e.g. [][]MmContext), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseMmContextRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aMmContext, ok := obj.(MmContext)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertMmContextRequired(aMmContext)
	})
}