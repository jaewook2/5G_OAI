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

	"time"
)

type SmallDataRateStatus struct {

	RemainPacketsUl int32 `json:"remainPacketsUl,omitempty"`

	RemainPacketsDl int32 `json:"remainPacketsDl,omitempty"`

	ValidityTime time.Time `json:"validityTime,omitempty"`

	RemainExReportsUl int32 `json:"remainExReportsUl,omitempty"`

	RemainExReportsDl int32 `json:"remainExReportsDl,omitempty"`
}

// AssertSmallDataRateStatusRequired checks if the required fields are not zero-ed
func AssertSmallDataRateStatusRequired(obj SmallDataRateStatus) error {
	return nil
}

// AssertRecurseSmallDataRateStatusRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of SmallDataRateStatus (e.g. [][]SmallDataRateStatus), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseSmallDataRateStatusRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aSmallDataRateStatus, ok := obj.(SmallDataRateStatus)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertSmallDataRateStatusRequired(aSmallDataRateStatus)
	})
}