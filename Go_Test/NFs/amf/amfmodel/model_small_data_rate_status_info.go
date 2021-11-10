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

type SmallDataRateStatusInfo struct {

	Snssai Snssai `json:"Snssai"`

	Dnn string `json:"Dnn"`

	SmallDataRateStatus SmallDataRateStatus `json:"SmallDataRateStatus"`
}

// AssertSmallDataRateStatusInfoRequired checks if the required fields are not zero-ed
func AssertSmallDataRateStatusInfoRequired(obj SmallDataRateStatusInfo) error {
	elements := map[string]interface{}{
		"Snssai": obj.Snssai,
		"Dnn": obj.Dnn,
		"SmallDataRateStatus": obj.SmallDataRateStatus,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertSnssaiRequired(obj.Snssai); err != nil {
		return err
	}
	if err := AssertSmallDataRateStatusRequired(obj.SmallDataRateStatus); err != nil {
		return err
	}
	return nil
}

// AssertRecurseSmallDataRateStatusInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of SmallDataRateStatusInfo (e.g. [][]SmallDataRateStatusInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseSmallDataRateStatusInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aSmallDataRateStatusInfo, ok := obj.(SmallDataRateStatusInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertSmallDataRateStatusInfoRequired(aSmallDataRateStatusInfo)
	})
}