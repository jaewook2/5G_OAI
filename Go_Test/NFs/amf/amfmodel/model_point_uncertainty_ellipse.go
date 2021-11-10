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

type PointUncertaintyEllipse struct {
	GadShape

	Point GeographicalCoordinates `json:"point"`

	UncertaintyEllipse UncertaintyEllipse `json:"uncertaintyEllipse"`

	Confidence int32 `json:"confidence"`
}

// AssertPointUncertaintyEllipseRequired checks if the required fields are not zero-ed
func AssertPointUncertaintyEllipseRequired(obj PointUncertaintyEllipse) error {
	elements := map[string]interface{}{
		"point": obj.Point,
		"uncertaintyEllipse": obj.UncertaintyEllipse,
		"confidence": obj.Confidence,
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
	if err := AssertUncertaintyEllipseRequired(obj.UncertaintyEllipse); err != nil {
		return err
	}
	return nil
}

// AssertRecursePointUncertaintyEllipseRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PointUncertaintyEllipse (e.g. [][]PointUncertaintyEllipse), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecursePointUncertaintyEllipseRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPointUncertaintyEllipse, ok := obj.(PointUncertaintyEllipse)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertPointUncertaintyEllipseRequired(aPointUncertaintyEllipse)
	})
}
