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

type TraceData struct {

	TraceRef string `json:"traceRef"`

	TraceDepth TraceDepth `json:"traceDepth"`

	NeTypeList string `json:"neTypeList"`

	EventList string `json:"eventList"`

	CollectionEntityIpv4Addr string `json:"collectionEntityIpv4Addr,omitempty"`

	CollectionEntityIpv6Addr Ipv6Addr `json:"collectionEntityIpv6Addr,omitempty"`

	InterfaceList string `json:"interfaceList,omitempty"`
}

// AssertTraceDataRequired checks if the required fields are not zero-ed
func AssertTraceDataRequired(obj TraceData) error {
	elements := map[string]interface{}{
		"traceRef": obj.TraceRef,
		"traceDepth": obj.TraceDepth,
		"neTypeList": obj.NeTypeList,
		"eventList": obj.EventList,
	}
	for name, el := range elements {
		if isZero := amfcommon.IsZeroValue(el); isZero {
			return &amfcommon.RequiredError{Field: name}
		}
	}

	if err := AssertTraceDepthRequired(obj.TraceDepth); err != nil {
		return err
	}
	if err := AssertIpv6AddrRequired(obj.CollectionEntityIpv6Addr); err != nil {
		return err
	}
	return nil
}

// AssertRecurseTraceDataRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of TraceData (e.g. [][]TraceData), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseTraceDataRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aTraceData, ok := obj.(TraceData)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertTraceDataRequired(aTraceData)
	})
}