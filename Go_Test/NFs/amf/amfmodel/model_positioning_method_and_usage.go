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

type PositioningMethodAndUsage struct {

	Method PositioningMethod `json:"method"`

	Mode PositioningMode `json:"mode"`

	Usage Usage `json:"usage"`

	MethodCode int32 `json:"methodCode,omitempty"`
}

// AssertPositioningMethodAndUsageRequired checks if the required fields are not zero-ed
func AssertPositioningMethodAndUsageRequired(obj PositioningMethodAndUsage) error {
	elements := map[string]interface{}{
		"method": obj.Method,
		"mode": obj.Mode,
		"usage": obj.Usage,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertPositioningMethodRequired(obj.Method); err != nil {
		return err
	}
	if err := AssertPositioningModeRequired(obj.Mode); err != nil {
		return err
	}
	if err := AssertUsageRequired(obj.Usage); err != nil {
		return err
	}
	return nil
}

// AssertRecursePositioningMethodAndUsageRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PositioningMethodAndUsage (e.g. [][]PositioningMethodAndUsage), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePositioningMethodAndUsageRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPositioningMethodAndUsage, ok := obj.(PositioningMethodAndUsage)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPositioningMethodAndUsageRequired(aPositioningMethodAndUsage)
	})
}
