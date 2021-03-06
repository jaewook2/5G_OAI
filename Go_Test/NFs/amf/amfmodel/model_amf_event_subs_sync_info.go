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

type AmfEventSubsSyncInfo struct {

	SubscriptionList []AmfEventSubscriptionInfo `json:"subscriptionList"`
}

// AssertAmfEventSubsSyncInfoRequired checks if the required fields are not zero-ed
func AssertAmfEventSubsSyncInfoRequired(obj AmfEventSubsSyncInfo) error {
	elements := map[string]interface{}{
		"subscriptionList": obj.SubscriptionList,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	for _, el := range obj.SubscriptionList {
		if err := AssertAmfEventSubscriptionInfoRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecurseAmfEventSubsSyncInfoRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfEventSubsSyncInfo (e.g. [][]AmfEventSubsSyncInfo), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfEventSubsSyncInfoRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfEventSubsSyncInfo, ok := obj.(AmfEventSubsSyncInfo)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfEventSubsSyncInfoRequired(aAmfEventSubsSyncInfo)
	})
}
