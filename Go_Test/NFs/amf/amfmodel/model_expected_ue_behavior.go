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

type ExpectedUeBehavior struct {

	ExpMoveTrajectory []UserLocation `json:"expMoveTrajectory"`

	ValidityTime time.Time `json:"validityTime"`
}

// AssertExpectedUeBehaviorRequired checks if the required fields are not zero-ed
func AssertExpectedUeBehaviorRequired(obj ExpectedUeBehavior) error {
	elements := map[string]interface{}{
		"expMoveTrajectory": obj.ExpMoveTrajectory,
		"validityTime": obj.ValidityTime,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	for _, el := range obj.ExpMoveTrajectory {
		if err := AssertUserLocationRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecurseExpectedUeBehaviorRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ExpectedUeBehavior (e.g. [][]ExpectedUeBehavior), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseExpectedUeBehaviorRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aExpectedUeBehavior, ok := obj.(ExpectedUeBehavior)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertExpectedUeBehaviorRequired(aExpectedUeBehavior)
	})
}