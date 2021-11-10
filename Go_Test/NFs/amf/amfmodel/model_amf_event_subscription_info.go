/*
 * Namf_EventExposure
 *
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmodel

import (
"amf.com/amfcommon"
)

type AmfEventSubscriptionInfo struct {

	SubId string `json:"subId"`

	NotifyCorrelationId string `json:"notifyCorrelationId,omitempty"`

	RefIdList []int32 `json:"refIdList"`

	OldSubId string `json:"oldSubId,omitempty"`
}

// AssertAmfEventSubscriptionInfoRequired checks if the required fields are not zero-ed
func AssertAmfEventSubscriptionInfoRequired(obj AmfEventSubscriptionInfo) error {
	elements := map[string]interface{}{
		"subId": obj.SubId,
		"refIdList": obj.RefIdList,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseAmfEventSubscriptionInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfEventSubscriptionInfo (e.g. [][]AmfEventSubscriptionInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfEventSubscriptionInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfEventSubscriptionInfo, ok := obj.(AmfEventSubscriptionInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfEventSubscriptionInfoRequired(aAmfEventSubscriptionInfo)
	})
}