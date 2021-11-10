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

type GnssId struct {
}

// AssertGnssIdRequired checks if the required fields are not zero-ed
func AssertGnssIdRequired(obj GnssId) error {
	return nil
}

// AssertRecurseGnssIdRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of GnssId (e.g. [][]GnssId), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseGnssIdRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aGnssId, ok := obj.(GnssId)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertGnssIdRequired(aGnssId)
	})
}
