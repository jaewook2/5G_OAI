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

type CollectionPeriodRmmLteMdt struct {
}

// AssertCollectionPeriodRmmLteMdtRequired checks if the required fields are not zero-ed
func AssertCollectionPeriodRmmLteMdtRequired(obj CollectionPeriodRmmLteMdt) error {
	return nil
}

// AssertRecurseCollectionPeriodRmmLteMdtRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CollectionPeriodRmmLteMdt (e.g. [][]CollectionPeriodRmmLteMdt), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseCollectionPeriodRmmLteMdtRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCollectionPeriodRmmLteMdt, ok := obj.(CollectionPeriodRmmLteMdt)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertCollectionPeriodRmmLteMdtRequired(aCollectionPeriodRmmLteMdt)
	})
}