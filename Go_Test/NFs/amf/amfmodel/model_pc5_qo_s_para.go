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

type Pc5QoSPara struct {

	Pc5QosFlowList []Pc5QosFlowItem `json:"pc5QosFlowList"`

	Pc5LinkAmbr string `json:"pc5LinkAmbr,omitempty"`
}

// AssertPc5QoSParaRequired checks if the required fields are not zero-ed
func AssertPc5QoSParaRequired(obj Pc5QoSPara) error {
	elements := map[string]interface{}{
		"pc5QosFlowList": obj.Pc5QosFlowList,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	for _, el := range obj.Pc5QosFlowList {
		if err := AssertPc5QosFlowItemRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecursePc5QoSParaRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of Pc5QoSPara (e.g. [][]Pc5QoSPara), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePc5QoSParaRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPc5QoSPara, ok := obj.(Pc5QoSPara)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPc5QoSParaRequired(aPc5QoSPara)
	})
}
