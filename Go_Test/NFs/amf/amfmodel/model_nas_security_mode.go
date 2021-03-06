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

type NasSecurityMode struct {

	IntegrityAlgorithm IntegrityAlgorithm `json:"integrityAlgorithm"`

	CipheringAlgorithm CipheringAlgorithm `json:"cipheringAlgorithm"`
}

// AssertNasSecurityModeRequired checks if the required fields are not zero-ed
func AssertNasSecurityModeRequired(obj NasSecurityMode) error {
	elements := map[string]interface{}{
		"integrityAlgorithm": obj.IntegrityAlgorithm,
		"cipheringAlgorithm": obj.CipheringAlgorithm,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertIntegrityAlgorithmRequired(obj.IntegrityAlgorithm); err != nil {
		return err
	}
	if err := AssertCipheringAlgorithmRequired(obj.CipheringAlgorithm); err != nil {
		return err
	}
	return nil
}

// AssertRecurseNasSecurityModeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of NasSecurityMode (e.g. [][]NasSecurityMode), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseNasSecurityModeRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNasSecurityMode, ok := obj.(NasSecurityMode)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertNasSecurityModeRequired(aNasSecurityMode)
	})
}
