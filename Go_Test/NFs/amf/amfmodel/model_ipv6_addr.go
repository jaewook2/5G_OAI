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

type Ipv6Addr struct {
}

// AssertIpv6AddrRequired checks if the required fields are not zero-ed
func AssertIpv6AddrRequired(obj Ipv6Addr) error {
	return nil
}

// AssertRecurseIpv6AddrRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of Ipv6Addr (e.g. [][]Ipv6Addr), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseIpv6AddrRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aIpv6Addr, ok := obj.(Ipv6Addr)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertIpv6AddrRequired(aIpv6Addr)
	})
}
