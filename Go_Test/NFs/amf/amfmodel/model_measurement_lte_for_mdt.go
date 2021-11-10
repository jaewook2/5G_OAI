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

type MeasurementLteForMdt struct {
}

// AssertMeasurementLteForMdtRequired checks if the required fields are not zero-ed
func AssertMeasurementLteForMdtRequired(obj MeasurementLteForMdt) error {
	return nil
}

// AssertRecurseMeasurementLteForMdtRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of MeasurementLteForMdt (e.g. [][]MeasurementLteForMdt), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseMeasurementLteForMdtRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aMeasurementLteForMdt, ok := obj.(MeasurementLteForMdt)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertMeasurementLteForMdtRequired(aMeasurementLteForMdt)
	})
}