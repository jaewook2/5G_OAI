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

	"os"
)

type InlineObject4 struct {

	JsonData N2InformationNotification `json:"jsonData,omitempty"`

	BinaryDataN1Message *os.File `json:"binaryDataN1Message,omitempty"`

	BinaryDataN2Information *os.File `json:"binaryDataN2Information,omitempty"`
}

// AssertInlineObject4Required checks if the required fields are not zero-ed
func AssertInlineObject4Required(obj InlineObject4) error {
	if err := AssertN2InformationNotificationRequired(obj.JsonData); err != nil {
		return err
	}
	return nil
}

// AssertRecurseInlineObject4Required recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of InlineObject4 (e.g. [][]InlineObject4), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseInlineObject4Required(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aInlineObject4, ok := obj.(InlineObject4)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertInlineObject4Required(aInlineObject4)
	})
}
