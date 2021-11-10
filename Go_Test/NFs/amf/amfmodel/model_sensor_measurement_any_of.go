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

type SensorMeasurementAnyOf string

// List of SensorMeasurementAnyOf
const (
	SENSORMEASUREMENTANYOF_BAROMETRIC_PRESSURE SensorMeasurementAnyOf = "BAROMETRIC_PRESSURE"
	SENSORMEASUREMENTANYOF_UE_SPEED SensorMeasurementAnyOf = "UE_SPEED"
	SENSORMEASUREMENTANYOF_UE_ORIENTATION SensorMeasurementAnyOf = "UE_ORIENTATION"
)

// AssertSensorMeasurementAnyOfRequired checks if the required fields are not zero-ed
func AssertSensorMeasurementAnyOfRequired(obj SensorMeasurementAnyOf) error {
	return nil
}

// AssertRecurseSensorMeasurementAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of SensorMeasurementAnyOf (e.g. [][]SensorMeasurementAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseSensorMeasurementAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aSensorMeasurementAnyOf, ok := obj.(SensorMeasurementAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertSensorMeasurementAnyOfRequired(aSensorMeasurementAnyOf)
	})
}
