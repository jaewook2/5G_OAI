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

type AmfStatusInfo struct {

	GuamiList []Guami `json:"guamiList"`

	StatusChange StatusChange `json:"statusChange"`

	TargetAmfRemoval string `json:"targetAmfRemoval,omitempty"`

	TargetAmfFailure string `json:"targetAmfFailure,omitempty"`
}

// AssertAmfStatusInfoRequired checks if the required fields are not zero-ed
func AssertAmfStatusInfoRequired(obj AmfStatusInfo) error {
	elements := map[string]interface{}{
		"guamiList": obj.GuamiList,
		"statusChange": obj.StatusChange,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	for _, el := range obj.GuamiList {
		if err := AssertGuamiRequired(el); err != nil {
			return err
		}
	}
	if err := AssertStatusChangeRequired(obj.StatusChange); err != nil {
		return err
	}
	return nil
}

// AssertRecurseAmfStatusInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfStatusInfo (e.g. [][]AmfStatusInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfStatusInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfStatusInfo, ok := obj.(AmfStatusInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfStatusInfoRequired(aAmfStatusInfo)
	})
}
