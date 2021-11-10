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

type LteV2xAuth struct {

	VehicleUeAuth UeAuth `json:"vehicleUeAuth,omitempty"`

	PedestrianUeAuth UeAuth `json:"pedestrianUeAuth,omitempty"`
}

// AssertLteV2xAuthRequired checks if the required fields are not zero-ed
func AssertLteV2xAuthRequired(obj LteV2xAuth) error {
	if err := AssertUeAuthRequired(obj.VehicleUeAuth); err != nil {
		return err
	}
	if err := AssertUeAuthRequired(obj.PedestrianUeAuth); err != nil {
		return err
	}
	return nil
}

// AssertRecurseLteV2xAuthRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of LteV2xAuth (e.g. [][]LteV2xAuth), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseLteV2xAuthRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aLteV2xAuth, ok := obj.(LteV2xAuth)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertLteV2xAuthRequired(aLteV2xAuth)
	})
}