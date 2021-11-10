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

type CollectionPeriodRmmLteMdtAnyOf string

// List of CollectionPeriodRmmLteMdtAnyOf
const (
	COLLECTIONPERIODRMMLTEMDTANYOF__1024 CollectionPeriodRmmLteMdtAnyOf = "1024"
	COLLECTIONPERIODRMMLTEMDTANYOF__1280 CollectionPeriodRmmLteMdtAnyOf = "1280"
	COLLECTIONPERIODRMMLTEMDTANYOF__2048 CollectionPeriodRmmLteMdtAnyOf = "2048"
	COLLECTIONPERIODRMMLTEMDTANYOF__2560 CollectionPeriodRmmLteMdtAnyOf = "2560"
	COLLECTIONPERIODRMMLTEMDTANYOF__5120 CollectionPeriodRmmLteMdtAnyOf = "5120"
	COLLECTIONPERIODRMMLTEMDTANYOF__10240 CollectionPeriodRmmLteMdtAnyOf = "10240"
	COLLECTIONPERIODRMMLTEMDTANYOF__60000 CollectionPeriodRmmLteMdtAnyOf = "60000"
)

// AssertCollectionPeriodRmmLteMdtAnyOfRequired checks if the required fields are not zero-ed
func AssertCollectionPeriodRmmLteMdtAnyOfRequired(obj CollectionPeriodRmmLteMdtAnyOf) error {
	return nil
}

// AssertRecurseCollectionPeriodRmmLteMdtAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CollectionPeriodRmmLteMdtAnyOf (e.g. [][]CollectionPeriodRmmLteMdtAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseCollectionPeriodRmmLteMdtAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCollectionPeriodRmmLteMdtAnyOf, ok := obj.(CollectionPeriodRmmLteMdtAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertCollectionPeriodRmmLteMdtAnyOfRequired(aCollectionPeriodRmmLteMdtAnyOf)
	})
}
