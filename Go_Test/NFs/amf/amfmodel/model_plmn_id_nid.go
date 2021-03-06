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

type PlmnIdNid struct {

	Mcc string `json:"mcc"`

	Mnc string `json:"mnc"`

	Nid string `json:"nid,omitempty"`
}

// AssertPlmnIdNidRequired checks if the required fields are not zero-ed
func AssertPlmnIdNidRequired(obj PlmnIdNid) error {
	elements := map[string]interface{}{
		"mcc": obj.Mcc,
		"mnc": obj.Mnc,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecursePlmnIdNidRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PlmnIdNid (e.g. [][]PlmnIdNid), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePlmnIdNidRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPlmnIdNid, ok := obj.(PlmnIdNid)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPlmnIdNidRequired(aPlmnIdNid)
	})
}
