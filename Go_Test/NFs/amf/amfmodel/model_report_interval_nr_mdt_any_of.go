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

type ReportIntervalNrMdtAnyOf string

// List of ReportIntervalNrMdtAnyOf
const (
	REPORTINTERVALNRMDTANYOF__120 ReportIntervalNrMdtAnyOf = "120"
	REPORTINTERVALNRMDTANYOF__240 ReportIntervalNrMdtAnyOf = "240"
	REPORTINTERVALNRMDTANYOF__480 ReportIntervalNrMdtAnyOf = "480"
	REPORTINTERVALNRMDTANYOF__640 ReportIntervalNrMdtAnyOf = "640"
	REPORTINTERVALNRMDTANYOF__1024 ReportIntervalNrMdtAnyOf = "1024"
	REPORTINTERVALNRMDTANYOF__2048 ReportIntervalNrMdtAnyOf = "2048"
	REPORTINTERVALNRMDTANYOF__5120 ReportIntervalNrMdtAnyOf = "5120"
	REPORTINTERVALNRMDTANYOF__10240 ReportIntervalNrMdtAnyOf = "10240"
	REPORTINTERVALNRMDTANYOF__20480 ReportIntervalNrMdtAnyOf = "20480"
	REPORTINTERVALNRMDTANYOF__40960 ReportIntervalNrMdtAnyOf = "40960"
	REPORTINTERVALNRMDTANYOF__60000 ReportIntervalNrMdtAnyOf = "60000"
	REPORTINTERVALNRMDTANYOF__360000 ReportIntervalNrMdtAnyOf = "360000"
	REPORTINTERVALNRMDTANYOF__720000 ReportIntervalNrMdtAnyOf = "720000"
	REPORTINTERVALNRMDTANYOF__1800000 ReportIntervalNrMdtAnyOf = "1800000"
	REPORTINTERVALNRMDTANYOF__3600000 ReportIntervalNrMdtAnyOf = "3600000"
)

// AssertReportIntervalNrMdtAnyOfRequired checks if the required fields are not zero-ed
func AssertReportIntervalNrMdtAnyOfRequired(obj ReportIntervalNrMdtAnyOf) error {
	return nil
}

// AssertRecurseReportIntervalNrMdtAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ReportIntervalNrMdtAnyOf (e.g. [][]ReportIntervalNrMdtAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseReportIntervalNrMdtAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aReportIntervalNrMdtAnyOf, ok := obj.(ReportIntervalNrMdtAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertReportIntervalNrMdtAnyOfRequired(aReportIntervalNrMdtAnyOf)
	})
}
