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

type AmfEventArea struct {

	PresenceInfo PresenceInfo `json:"presenceInfo,omitempty"`

	LadnInfo LadnInfo `json:"ladnInfo,omitempty"`

	SNssai Snssai `json:"sNssai,omitempty"`

	NsiId string `json:"nsiId,omitempty"`
}

// AssertAmfEventAreaRequired checks if the required fields are not zero-ed
func AssertAmfEventAreaRequired(obj AmfEventArea) error {
	if err := AssertPresenceInfoRequired(obj.PresenceInfo); err != nil {
		return err
	}
	if err := AssertLadnInfoRequired(obj.LadnInfo); err != nil {
		return err
	}
	if err := AssertSnssaiRequired(obj.SNssai); err != nil {
		return err
	}
	return nil
}

// AssertRecurseAmfEventAreaRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfEventArea (e.g. [][]AmfEventArea), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfEventAreaRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfEventArea, ok := obj.(AmfEventArea)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfEventAreaRequired(aAmfEventArea)
	})
}
