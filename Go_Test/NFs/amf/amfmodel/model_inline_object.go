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

type InlineObject struct {

	JsonData UeContextCreateData `json:"jsonData,omitempty"`

	BinaryDataN2Information *os.File `json:"binaryDataN2Information,omitempty"`

	BinaryDataN2InformationExt1 *os.File `json:"binaryDataN2InformationExt1,omitempty"`

	BinaryDataN2InformationExt2 *os.File `json:"binaryDataN2InformationExt2,omitempty"`

	BinaryDataN2InformationExt3 *os.File `json:"binaryDataN2InformationExt3,omitempty"`

	BinaryDataN2InformationExt4 *os.File `json:"binaryDataN2InformationExt4,omitempty"`

	BinaryDataN2InformationExt5 *os.File `json:"binaryDataN2InformationExt5,omitempty"`

	BinaryDataN2InformationExt6 *os.File `json:"binaryDataN2InformationExt6,omitempty"`

	BinaryDataN2InformationExt7 *os.File `json:"binaryDataN2InformationExt7,omitempty"`

	BinaryDataN2InformationExt8 *os.File `json:"binaryDataN2InformationExt8,omitempty"`

	BinaryDataN2InformationExt9 *os.File `json:"binaryDataN2InformationExt9,omitempty"`

	BinaryDataN2InformationExt10 *os.File `json:"binaryDataN2InformationExt10,omitempty"`

	BinaryDataN2InformationExt11 *os.File `json:"binaryDataN2InformationExt11,omitempty"`

	BinaryDataN2InformationExt12 *os.File `json:"binaryDataN2InformationExt12,omitempty"`

	BinaryDataN2InformationExt13 *os.File `json:"binaryDataN2InformationExt13,omitempty"`

	BinaryDataN2InformationExt14 *os.File `json:"binaryDataN2InformationExt14,omitempty"`

	BinaryDataN2InformationExt15 *os.File `json:"binaryDataN2InformationExt15,omitempty"`

	BinaryDataN2InformationExt16 *os.File `json:"binaryDataN2InformationExt16,omitempty"`
}

// AssertInlineObjectRequired checks if the required fields are not zero-ed
func AssertInlineObjectRequired(obj InlineObject) error {
	if err := AssertUeContextCreateDataRequired(obj.JsonData); err != nil {
		return err
	}
	return nil
}

// AssertRecurseInlineObjectRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of InlineObject (e.g. [][]InlineObject), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseInlineObjectRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aInlineObject, ok := obj.(InlineObject)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertInlineObjectRequired(aInlineObject)
	})
}
