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

	"time"
)

type NrLocation struct {

	Tai Tai `json:"tai"`

	Ncgi Ncgi `json:"ncgi"`

	AgeOfLocationInformation int32 `json:"ageOfLocationInformation,omitempty"`

	UeLocationTimestamp time.Time `json:"ueLocationTimestamp,omitempty"`

	GeographicalInformation string `json:"geographicalInformation,omitempty"`

	GeodeticInformation string `json:"geodeticInformation,omitempty"`

	GlobalGnbId GlobalRanNodeId `json:"globalGnbId,omitempty"`
}

// AssertNrLocationRequired checks if the required fields are not zero-ed
func AssertNrLocationRequired(obj NrLocation) error {
	elements := map[string]interface{}{
		"tai": obj.Tai,
		"ncgi": obj.Ncgi,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertTaiRequired(obj.Tai); err != nil {
		return err
	}
	if err := AssertNcgiRequired(obj.Ncgi); err != nil {
		return err
	}
	if err := AssertGlobalRanNodeIdRequired(obj.GlobalGnbId); err != nil {
		return err
	}
	return nil
}

// AssertRecurseNrLocationRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of NrLocation (e.g. [][]NrLocation), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseNrLocationRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNrLocation, ok := obj.(NrLocation)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertNrLocationRequired(aNrLocation)
	})
}