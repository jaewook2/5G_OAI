/*
 * Namf_MT
 *
 * AMF Mobile Terminated Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.2
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmt

import (
"amf.com/amfcommon"
"amf.com/amfmodel"
	"context"
	"net/http"
	"errors"
)

// UeReachIndDocumentApiService is a service that implements the logic for the UeReachIndDocumentApiServicer
// This service should implement the business logic for every endpoint for the UeReachIndDocumentApi API.
// Include any external packages or services that will be required by this service.
type UeReachIndDocumentApiService struct {
}

// NewUeReachIndDocumentApiService creates a default api service
func NewUeReachIndDocumentApiService() UeReachIndDocumentApiServicer {
	return &UeReachIndDocumentApiService{}
}

// EnableUeReachability - Namf_MT EnableUEReachability service Operation
func (s *UeReachIndDocumentApiService) EnableUeReachability(ctx context.Context, ueContextId string, enableUeReachabilityReqData amfmodel.EnableUeReachabilityReqData) (amfcommon.ImplResponse, error) {
	// TODO - update EnableUeReachability with the required logic for this service method.
	// Add api_ue_reach_ind_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(200, amfmodel.EnableUeReachabilityRspData{}) or use other options such as http.Ok ...
	//return amfcommon.Response(200, amfmodel.EnableUeReachabilityRspData{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(307, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(307, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(308, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(308, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(400, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(400, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(403, amfmodel.ProblemDetailsEnableUeReachability{}) or use other options such as http.Ok ...
	//return amfcommon.Response(403, amfmodel.ProblemDetailsEnableUeReachability{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(404, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(404, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(411, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(411, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(413, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(413, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(415, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(415, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(429, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(429, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(500, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(500, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(503, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(503, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(504, amfmodel.ProblemDetailsEnableUeReachability{}) or use other options such as http.Ok ...
	//return amfcommon.Response(504, amfmodel.ProblemDetailsEnableUeReachability{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(0, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(0, nil),nil

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("EnableUeReachability method not implemented")
}
