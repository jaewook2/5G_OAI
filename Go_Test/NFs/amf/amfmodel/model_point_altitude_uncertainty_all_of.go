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

type PointAltitudeUncertaintyAllOf struct {

	Point GeographicalCoordinates `json:"point"`

	Altitude float64 `json:"altitude"`

	UncertaintyEllipse UncertaintyEllipse `json:"uncertaintyEllipse"`

	UncertaintyAltitude float32 `json:"uncertaintyAltitude"`

	Confidence int32 `json:"confidence"`
}

// AssertPointAltitudeUncertaintyAllOfRequired checks if the required fields are not zero-ed
func AssertPointAltitudeUncertaintyAllOfRequired(obj PointAltitudeUncertaintyAllOf) error {
	elements := map[string]interface{}{
		"point": obj.Point,
		"altitude": obj.Altitude,
		"uncertaintyEllipse": obj.UncertaintyEllipse,
		"uncertaintyAltitude": obj.UncertaintyAltitude,
		"confidence": obj.Confidence,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertGeographicalCoordinatesRequired(obj.Point); err != nil {
		return err
	}
	if err := AssertUncertaintyEllipseRequired(obj.UncertaintyEllipse); err != nil {
		return err
	}
	return nil
}

// AssertRecursePointAltitudeUncertaintyAllOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PointAltitudeUncertaintyAllOf (e.g. [][]PointAltitudeUncertaintyAllOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePointAltitudeUncertaintyAllOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPointAltitudeUncertaintyAllOf, ok := obj.(PointAltitudeUncertaintyAllOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPointAltitudeUncertaintyAllOfRequired(aPointAltitudeUncertaintyAllOf)
	})
}
