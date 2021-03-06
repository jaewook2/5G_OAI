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

type Area struct {

	Tacs []string `json:"tacs,omitempty"`

	AreaCode string `json:"areaCode,omitempty"`
}

// AssertAreaRequired checks if the required fields are not zero-ed
func AssertAreaRequired(obj Area) error {
	return nil
}

// AssertRecurseAreaRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of Area (e.g. [][]Area), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAreaRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aArea, ok := obj.(Area)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAreaRequired(aArea)
	})
}
