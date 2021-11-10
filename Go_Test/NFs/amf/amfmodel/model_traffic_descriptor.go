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

type TrafficDescriptor struct {

	Dnn string `json:"dnn,omitempty"`

	SNssai Snssai `json:"sNssai,omitempty"`

	DddTrafficDescriptorList []DddTrafficDescriptor `json:"dddTrafficDescriptorList,omitempty"`
}

// AssertTrafficDescriptorRequired checks if the required fields are not zero-ed
func AssertTrafficDescriptorRequired(obj TrafficDescriptor) error {
	if err := AssertSnssaiRequired(obj.SNssai); err != nil {
		return err
	}
	for _, el := range obj.DddTrafficDescriptorList {
		if err := AssertDddTrafficDescriptorRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecurseTrafficDescriptorRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of TrafficDescriptor (e.g. [][]TrafficDescriptor), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseTrafficDescriptorRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aTrafficDescriptor, ok := obj.(TrafficDescriptor)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertTrafficDescriptorRequired(aTrafficDescriptor)
	})
}