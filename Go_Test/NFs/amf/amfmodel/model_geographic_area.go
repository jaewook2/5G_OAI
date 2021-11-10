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

type GeographicArea struct {

	Shape SupportedGadShapes `json:"shape"`

	Point GeographicalCoordinates `json:"point"`

	Uncertainty float32 `json:"uncertainty"`

	UncertaintyEllipse UncertaintyEllipse `json:"uncertaintyEllipse"`

	Confidence int32 `json:"confidence"`

	PointList []GeographicalCoordinates `json:"pointList"`

	Altitude float64 `json:"altitude"`

	UncertaintyAltitude float32 `json:"uncertaintyAltitude"`

	InnerRadius int32 `json:"innerRadius"`

	UncertaintyRadius float32 `json:"uncertaintyRadius"`

	OffsetAngle int32 `json:"offsetAngle"`

	IncludedAngle int32 `json:"includedAngle"`
}

// AssertGeographicAreaRequired checks if the required fields are not zero-ed
func AssertGeographicAreaRequired(obj GeographicArea) error {
	elements := map[string]interface{}{
		"shape": obj.Shape,
		"point": obj.Point,
		"uncertainty": obj.Uncertainty,
		"uncertaintyEllipse": obj.UncertaintyEllipse,
		"confidence": obj.Confidence,
		"pointList": obj.PointList,
		"altitude": obj.Altitude,
		"uncertaintyAltitude": obj.UncertaintyAltitude,
		"innerRadius": obj.InnerRadius,
		"uncertaintyRadius": obj.UncertaintyRadius,
		"offsetAngle": obj.OffsetAngle,
		"includedAngle": obj.IncludedAngle,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertSupportedGadShapesRequired(obj.Shape); err != nil {
		return err
	}
	if err := AssertGeographicalCoordinatesRequired(obj.Point); err != nil {
		return err
	}
	if err := AssertUncertaintyEllipseRequired(obj.UncertaintyEllipse); err != nil {
		return err
	}
	for _, el := range obj.PointList {
		if err := AssertGeographicalCoordinatesRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecurseGeographicAreaRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of GeographicArea (e.g. [][]GeographicArea), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseGeographicAreaRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aGeographicArea, ok := obj.(GeographicArea)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertGeographicAreaRequired(aGeographicArea)
	})
}
