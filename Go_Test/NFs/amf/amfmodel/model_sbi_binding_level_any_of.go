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

type SbiBindingLevelAnyOf string

// List of SbiBindingLevelAnyOf
const (
	SBIBINDINGLEVELANYOF_INSTANCE_BINDING SbiBindingLevelAnyOf = "NF_INSTANCE_BINDING"
	SBIBINDINGLEVELANYOF_SET_BINDING SbiBindingLevelAnyOf = "NF_SET_BINDING"
	SBIBINDINGLEVELANYOF_SERVICE_SET_BINDING SbiBindingLevelAnyOf = "NF_SERVICE_SET_BINDING"
	SBIBINDINGLEVELANYOF_SERVICE_INSTANCE_BINDING SbiBindingLevelAnyOf = "NF_SERVICE_INSTANCE_BINDING"
)

// AssertSbiBindingLevelAnyOfRequired checks if the required fields are not zero-ed
func AssertSbiBindingLevelAnyOfRequired(obj SbiBindingLevelAnyOf) error {
	return nil
}

// AssertRecurseSbiBindingLevelAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of SbiBindingLevelAnyOf (e.g. [][]SbiBindingLevelAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseSbiBindingLevelAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aSbiBindingLevelAnyOf, ok := obj.(SbiBindingLevelAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertSbiBindingLevelAnyOfRequired(aSbiBindingLevelAnyOf)
	})
}
