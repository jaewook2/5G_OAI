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

type PointAltitude struct {
	GadShape

	Point GeographicalCoordinates `json:"point"`

	Altitude float64 `json:"altitude"`
}

// AssertPointAltitudeRequired checks if the required fields are not zero-ed
func AssertPointAltitudeRequired(obj PointAltitude) error {
	elements := map[string]interface{}{
		"point": obj.Point,
		"altitude": obj.Altitude,
		"shape": obj.Shape,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertGadShapeRequired(obj.GadShape); err != nil {
		return err
	}

	if err := AssertGeographicalCoordinatesRequired(obj.Point); err != nil {
		return err
	}
	return nil
}

// AssertRecursePointAltitudeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PointAltitude (e.g. [][]PointAltitude), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePointAltitudeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPointAltitude, ok := obj.(PointAltitude)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPointAltitudeRequired(aPointAltitude)
	})
}