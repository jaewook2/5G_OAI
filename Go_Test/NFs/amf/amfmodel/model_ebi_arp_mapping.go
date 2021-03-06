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

type EbiArpMapping struct {

	EpsBearerId int32 `json:"epsBearerId"`

	Arp Arp `json:"arp"`
}

// AssertEbiArpMappingRequired checks if the required fields are not zero-ed
func AssertEbiArpMappingRequired(obj EbiArpMapping) error {
	elements := map[string]interface{}{
		"epsBearerId": obj.EpsBearerId,
		"arp": obj.Arp,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertArpRequired(obj.Arp); err != nil {
		return err
	}
	return nil
}

// AssertRecurseEbiArpMappingRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of EbiArpMapping (e.g. [][]EbiArpMapping), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseEbiArpMappingRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aEbiArpMapping, ok := obj.(EbiArpMapping)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertEbiArpMappingRequired(aEbiArpMapping)
	})
}
