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

type NonUeN2InfoSubscriptionCreatedData struct {

	N2NotifySubscriptionId string `json:"n2NotifySubscriptionId"`

	SupportedFeatures string `json:"supportedFeatures,omitempty"`

	N2InformationClass N2InformationClass `json:"n2InformationClass,omitempty"`
}

// AssertNonUeN2InfoSubscriptionCreatedDataRequired checks if the required fields are not zero-ed
func AssertNonUeN2InfoSubscriptionCreatedDataRequired(obj NonUeN2InfoSubscriptionCreatedData) error {
	elements := map[string]interface{}{
		"n2NotifySubscriptionId": obj.N2NotifySubscriptionId,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertN2InformationClassRequired(obj.N2InformationClass); err != nil {
		return err
	}
	return nil
}

// AssertRecurseNonUeN2InfoSubscriptionCreatedDataRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of NonUeN2InfoSubscriptionCreatedData (e.g. [][]NonUeN2InfoSubscriptionCreatedData), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseNonUeN2InfoSubscriptionCreatedDataRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNonUeN2InfoSubscriptionCreatedData, ok := obj.(NonUeN2InfoSubscriptionCreatedData)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertNonUeN2InfoSubscriptionCreatedDataRequired(aNonUeN2InfoSubscriptionCreatedData)
	})
}
