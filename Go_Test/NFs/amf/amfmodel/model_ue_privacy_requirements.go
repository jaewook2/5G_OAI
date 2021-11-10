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

type UePrivacyRequirements struct {

	LcsServiceAuthInfo LcsServiceAuth `json:"lcsServiceAuthInfo,omitempty"`

	CodeWordCheck bool `json:"codeWordCheck,omitempty"`
}

// AssertUePrivacyRequirementsRequired checks if the required fields are not zero-ed
func AssertUePrivacyRequirementsRequired(obj UePrivacyRequirements) error {
	if err := AssertLcsServiceAuthRequired(obj.LcsServiceAuthInfo); err != nil {
		return err
	}
	return nil
}

// AssertRecurseUePrivacyRequirementsRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of UePrivacyRequirements (e.g. [][]UePrivacyRequirements), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseUePrivacyRequirementsRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aUePrivacyRequirements, ok := obj.(UePrivacyRequirements)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertUePrivacyRequirementsRequired(aUePrivacyRequirements)
	})
}
