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

type N1N2MsgTxfrErrDetail struct {

	RetryAfter int32 `json:"retryAfter,omitempty"`

	HighestPrioArp Arp `json:"highestPrioArp,omitempty"`

	MaxWaitingTime int32 `json:"maxWaitingTime,omitempty"`
}

// AssertN1N2MsgTxfrErrDetailRequired checks if the required fields are not zero-ed
func AssertN1N2MsgTxfrErrDetailRequired(obj N1N2MsgTxfrErrDetail) error {
	if err := AssertArpRequired(obj.HighestPrioArp); err != nil {
		return err
	}
	return nil
}

// AssertRecurseN1N2MsgTxfrErrDetailRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of N1N2MsgTxfrErrDetail (e.g. [][]N1N2MsgTxfrErrDetail), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseN1N2MsgTxfrErrDetailRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aN1N2MsgTxfrErrDetail, ok := obj.(N1N2MsgTxfrErrDetail)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertN1N2MsgTxfrErrDetailRequired(aN1N2MsgTxfrErrDetail)
	})
}
