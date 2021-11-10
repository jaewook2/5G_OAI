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

type AmfEventSubscription struct {

	EventList []AmfEvent `json:"eventList"`

	EventNotifyUri string `json:"eventNotifyUri"`

	NotifyCorrelationId string `json:"notifyCorrelationId"`

	NfId string `json:"nfId"`

	SubsChangeNotifyUri string `json:"subsChangeNotifyUri,omitempty"`

	SubsChangeNotifyCorrelationId string `json:"subsChangeNotifyCorrelationId,omitempty"`

	Supi string `json:"supi,omitempty"`

	GroupId string `json:"groupId,omitempty"`

	Gpsi string `json:"gpsi,omitempty"`

	Pei string `json:"pei,omitempty"`

	AnyUE bool `json:"anyUE,omitempty"`

	Options AmfEventMode `json:"options,omitempty"`

	SourceNfType NfType `json:"sourceNfType,omitempty"`
}

// AssertAmfEventSubscriptionRequired checks if the required fields are not zero-ed
func AssertAmfEventSubscriptionRequired(obj AmfEventSubscription) error {
	elements := map[string]interface{}{
		"eventList": obj.EventList,
		"eventNotifyUri": obj.EventNotifyUri,
		"notifyCorrelationId": obj.NotifyCorrelationId,
		"nfId": obj.NfId,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	for _, el := range obj.EventList {
		if err := AssertAmfEventRequired(el); err != nil {
			return err
		}
	}
	if err := AssertAmfEventModeRequired(obj.Options); err != nil {
		return err
	}
	if err := AssertNfTypeRequired(obj.SourceNfType); err != nil {
		return err
	}
	return nil
}

// AssertRecurseAmfEventSubscriptionRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AmfEventSubscription (e.g. [][]AmfEventSubscription), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseAmfEventSubscriptionRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAmfEventSubscription, ok := obj.(AmfEventSubscription)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertAmfEventSubscriptionRequired(aAmfEventSubscription)
	})
}
