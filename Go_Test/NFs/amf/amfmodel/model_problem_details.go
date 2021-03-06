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

type ProblemDetails struct {

	Type string `json:"type,omitempty"`

	Title string `json:"title,omitempty"`

	Status int32 `json:"status,omitempty"`

	Detail string `json:"detail,omitempty"`

	Instance string `json:"instance,omitempty"`

	Cause string `json:"cause,omitempty"`

	InvalidParams []InvalidParam `json:"invalidParams,omitempty"`

	SupportedFeatures string `json:"supportedFeatures,omitempty"`

	AccessTokenError AccessTokenErr `json:"accessTokenError,omitempty"`

	AccessTokenRequest AccessTokenReq `json:"accessTokenRequest,omitempty"`

	NrfId string `json:"nrfId,omitempty"`
}

// AssertProblemDetailsRequired checks if the required fields are not zero-ed
func AssertProblemDetailsRequired(obj ProblemDetails) error {
	for _, el := range obj.InvalidParams {
		if err := AssertInvalidParamRequired(el); err != nil {
			return err
		}
	}
	if err := AssertAccessTokenErrRequired(obj.AccessTokenError); err != nil {
		return err
	}
	if err := AssertAccessTokenReqRequired(obj.AccessTokenRequest); err != nil {
		return err
	}
	return nil
}

// AssertRecurseProblemDetailsRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ProblemDetails (e.g. [][]ProblemDetails), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseProblemDetailsRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aProblemDetails, ok := obj.(ProblemDetails)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertProblemDetailsRequired(aProblemDetails)
	})
}
