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

type LdrType struct {
}

// AssertLdrTypeRequired checks if the required fields are not zero-ed
func AssertLdrTypeRequired(obj LdrType) error {
	return nil
}

// AssertRecurseLdrTypeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LdrType (e.g. [][]LdrType), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLdrTypeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLdrType, ok := obj.(LdrType)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLdrTypeRequired(aLdrType)
	})
}
