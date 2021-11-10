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

type N1MessageNotification struct {

	N1NotifySubscriptionId string `json:"n1NotifySubscriptionId,omitempty"`

	N1MessageContainer N1MessageContainer `json:"n1MessageContainer"`

	LcsCorrelationId string `json:"lcsCorrelationId,omitempty"`

	RegistrationCtxtContainer RegistrationContextContainer `json:"registrationCtxtContainer,omitempty"`

	NewLmfIdentification string `json:"newLmfIdentification,omitempty"`

	Guami Guami `json:"guami,omitempty"`

	CIoT5GSOptimisation bool `json:"cIoT5GSOptimisation,omitempty"`

	Ecgi Ecgi `json:"ecgi,omitempty"`

	Ncgi Ncgi `json:"ncgi,omitempty"`
}

// AssertN1MessageNotificationRequired checks if the required fields are not zero-ed
func AssertN1MessageNotificationRequired(obj N1MessageNotification) error {
	elements := map[string]interface{}{
		"n1MessageContainer": obj.N1MessageContainer,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertN1MessageContainerRequired(obj.N1MessageContainer); err != nil {
		return err
	}
	if err := AssertRegistrationContextContainerRequired(obj.RegistrationCtxtContainer); err != nil {
		return err
	}
	if err := AssertGuamiRequired(obj.Guami); err != nil {
		return err
	}
	if err := AssertEcgiRequired(obj.Ecgi); err != nil {
		return err
	}
	if err := AssertNcgiRequired(obj.Ncgi); err != nil {
		return err
	}
	return nil
}

// AssertRecurseN1MessageNotificationRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of N1MessageNotification (e.g. [][]N1MessageNotification), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseN1MessageNotificationRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aN1MessageNotification, ok := obj.(N1MessageNotification)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertN1MessageNotificationRequired(aN1MessageNotification)
	})
}
