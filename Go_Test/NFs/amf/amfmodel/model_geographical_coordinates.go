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

type GeographicalCoordinates struct {

	Lon float64 `json:"lon"`

	Lat float64 `json:"lat"`
}

// AssertGeographicalCoordinatesRequired checks if the required fields are not zero-ed
func AssertGeographicalCoordinatesRequired(obj GeographicalCoordinates) error {
	elements := map[string]interface{}{
		"lon": obj.Lon,
		"lat": obj.Lat,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseGeographicalCoordinatesRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of GeographicalCoordinates (e.g. [][]GeographicalCoordinates), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseGeographicalCoordinatesRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aGeographicalCoordinates, ok := obj.(GeographicalCoordinates)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertGeographicalCoordinatesRequired(aGeographicalCoordinates)
	})
}
