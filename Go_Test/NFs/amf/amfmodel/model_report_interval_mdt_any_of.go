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

type ReportIntervalMdtAnyOf string

// List of ReportIntervalMdtAnyOf
const (
	REPORTINTERVALMDTANYOF__120 ReportIntervalMdtAnyOf = "120"
	REPORTINTERVALMDTANYOF__240 ReportIntervalMdtAnyOf = "240"
	REPORTINTERVALMDTANYOF__480 ReportIntervalMdtAnyOf = "480"
	REPORTINTERVALMDTANYOF__640 ReportIntervalMdtAnyOf = "640"
	REPORTINTERVALMDTANYOF__1024 ReportIntervalMdtAnyOf = "1024"
	REPORTINTERVALMDTANYOF__2048 ReportIntervalMdtAnyOf = "2048"
	REPORTINTERVALMDTANYOF__5120 ReportIntervalMdtAnyOf = "5120"
	REPORTINTERVALMDTANYOF__10240 ReportIntervalMdtAnyOf = "10240"
	REPORTINTERVALMDTANYOF__60000 ReportIntervalMdtAnyOf = "60000"
	REPORTINTERVALMDTANYOF__360000 ReportIntervalMdtAnyOf = "360000"
	REPORTINTERVALMDTANYOF__720000 ReportIntervalMdtAnyOf = "720000"
	REPORTINTERVALMDTANYOF__1800000 ReportIntervalMdtAnyOf = "1800000"
	REPORTINTERVALMDTANYOF__3600000 ReportIntervalMdtAnyOf = "3600000"
)

// AssertReportIntervalMdtAnyOfRequired checks if the required fields are not zero-ed
func AssertReportIntervalMdtAnyOfRequired(obj ReportIntervalMdtAnyOf) error {
	return nil
}

// AssertRecurseReportIntervalMdtAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ReportIntervalMdtAnyOf (e.g. [][]ReportIntervalMdtAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseReportIntervalMdtAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aReportIntervalMdtAnyOf, ok := obj.(ReportIntervalMdtAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertReportIntervalMdtAnyOfRequired(aReportIntervalMdtAnyOf)
	})
}