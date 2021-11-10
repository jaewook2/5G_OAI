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

type LcsQosClass struct {
}

// AssertLcsQosClassRequired checks if the required fields are not zero-ed
func AssertLcsQosClassRequired(obj LcsQosClass) error {
	return nil
}

// AssertRecurseLcsQosClassRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LcsQosClass (e.g. [][]LcsQosClass), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLcsQosClassRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLcsQosClass, ok := obj.(LcsQosClass)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLcsQosClassRequired(aLcsQosClass)
	})
}
