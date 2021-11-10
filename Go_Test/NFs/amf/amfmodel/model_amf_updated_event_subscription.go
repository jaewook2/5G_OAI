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

type AmfUpdatedEventSubscription struct {

	Subscription AmfEventSubscription `json:"subscription"`

	ReportList []AmfEventReport `json:"reportList,omitempty"`
}

// AssertAmfUpdatedEventSubscriptionRequired checks if the required fields are not zero-ed
func AssertAmfUpdatedEventSubscriptionRequired(obj AmfUpdatedEventSubscription) error {
	elements := map[string]interface{}{
		"subscription": obj.Subscription,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertAmfEventSubscriptionRequired(obj.Subscription); err != nil {
		return err
	}
	for _, el := range obj.ReportList {
		if err := AssertAmfEventReportRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecurseAmfUpdatedEventSubscriptionRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfUpdatedEventSubscription (e.g. [][]AmfUpdatedEventSubscription), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfUpdatedEventSubscriptionRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfUpdatedEventSubscription, ok := obj.(AmfUpdatedEventSubscription)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfUpdatedEventSubscriptionRequired(aAmfUpdatedEventSubscription)
	})
}