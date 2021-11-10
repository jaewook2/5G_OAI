/*
 * Namf_MT
 *
 * AMF Mobile Terminated Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.2
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmodel

import (
"amf.com/amfcommon"
)

type EnableUeReachabilityRspData struct {

	Reachability UeReachability `json:"reachability"`

	SupportedFeatures string `json:"supportedFeatures,omitempty"`
}

// AssertEnableUeReachabilityRspDataRequired checks if the required fields are not zero-ed
func AssertEnableUeReachabilityRspDataRequired(obj EnableUeReachabilityRspData) error {
	elements := map[string]interface{}{
		"reachability": obj.Reachability,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertUeReachabilityRequired(obj.Reachability); err != nil {
		return err
	}
	return nil
}

// AssertRecurseEnableUeReachabilityRspDataRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of EnableUeReachabilityRspData (e.g. [][]EnableUeReachabilityRspData), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseEnableUeReachabilityRspDataRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aEnableUeReachabilityRspData, ok := obj.(EnableUeReachabilityRspData)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertEnableUeReachabilityRspDataRequired(aEnableUeReachabilityRspData)
	})
}
