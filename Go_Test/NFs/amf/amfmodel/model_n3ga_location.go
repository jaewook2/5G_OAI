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

type N3gaLocation struct {

	N3gppTai Tai `json:"n3gppTai,omitempty"`

	N3IwfId string `json:"n3IwfId,omitempty"`

	UeIpv4Addr string `json:"ueIpv4Addr,omitempty"`

	UeIpv6Addr Ipv6Addr `json:"ueIpv6Addr,omitempty"`

	PortNumber int32 `json:"portNumber,omitempty"`

	TnapId TnapId `json:"tnapId,omitempty"`

	Protocol TransportProtocol `json:"protocol,omitempty"`

	TwapId TwapId `json:"twapId,omitempty"`

	HfcNodeId HfcNodeId `json:"hfcNodeId,omitempty"`

	Gli string `json:"gli,omitempty"`

	W5gbanLineType LineType `json:"w5gbanLineType,omitempty"`

	Gci string `json:"gci,omitempty"`
}

// AssertN3gaLocationRequired checks if the required fields are not zero-ed
func AssertN3gaLocationRequired(obj N3gaLocation) error {
	if err := AssertTaiRequired(obj.N3gppTai); err != nil {
		return err
	}
	if err := AssertIpv6AddrRequired(obj.UeIpv6Addr); err != nil {
		return err
	}
	if err := AssertTnapIdRequired(obj.TnapId); err != nil {
		return err
	}
	if err := AssertTransportProtocolRequired(obj.Protocol); err != nil {
		return err
	}
	if err := AssertTwapIdRequired(obj.TwapId); err != nil {
		return err
	}
	if err := AssertHfcNodeIdRequired(obj.HfcNodeId); err != nil {
		return err
	}
	if err := AssertLineTypeRequired(obj.W5gbanLineType); err != nil {
		return err
	}
	return nil
}

// AssertRecurseN3gaLocationRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of N3gaLocation (e.g. [][]N3gaLocation), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseN3gaLocationRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aN3gaLocation, ok := obj.(N3gaLocation)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertN3gaLocationRequired(aN3gaLocation)
	})
}