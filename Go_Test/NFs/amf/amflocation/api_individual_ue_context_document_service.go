/*
 * Namf_Location
 *
 * AMF Location Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amflocation

import (
"amf.com/amfcommon"
"amf.com/amfmodel"
	"context"
	"net/http"
	"errors"
)

// IndividualUEContextDocumentApiService is a service that implements the logic for the IndividualUEContextDocumentApiServicer
// This service should implement the business logic for every endpoint for the IndividualUEContextDocumentApi API.
// Include any external packages or services that will be required by this service.
type IndividualUEContextDocumentApiService struct {
}

// NewIndividualUEContextDocumentApiService creates a default api service
func NewIndividualUEContextDocumentApiService() IndividualUEContextDocumentApiServicer {
	return &IndividualUEContextDocumentApiService{}
}

// CancelLocation - Namf_Location CancelLocation service operation
func (s *IndividualUEContextDocumentApiService) CancelLocation(ctx context.Context, ueContextId string, cancelPosInfo amfmodel.CancelPosInfo) (amfcommon.ImplResponse, error) {
	// TODO - update CancelLocation with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(204, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(204, nil),nil

	//TODO: Uncomment the next line to return response amfcommon.Response(307, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(307, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(308, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(308, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(400, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(400, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(401, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(401, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(403, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(403, amfmodel.ProblemDetails{}), nil

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

	//TODO: Uncomment the next line to return response amfcommon.Response(504, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(504, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(0, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(0, nil),nil

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("CancelLocation method not implemented")
}

// ProvideLocationInfo - Namf_Location ProvideLocationInfo service Operation
func (s *IndividualUEContextDocumentApiService) ProvideLocationInfo(ctx context.Context, ueContextId string, requestLocInfo amfmodel.RequestLocInfo) (amfcommon.ImplResponse, error) {
	// TODO - update ProvideLocationInfo with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(200, amfmodel.ProvideLocInfo{}) or use other options such as http.Ok ...
	//return amfcommon.Response(200, amfmodel.ProvideLocInfo{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(307, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(307, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(308, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(308, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(400, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(400, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(403, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(403, amfmodel.ProblemDetails{}), nil

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

	//TODO: Uncomment the next line to return response amfcommon.Response(0, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(0, nil),nil

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("ProvideLocationInfo method not implemented")
}

// ProvidePositioningInfo - Namf_Location ProvidePositioningInfo service Operation
func (s *IndividualUEContextDocumentApiService) ProvidePositioningInfo(ctx context.Context, ueContextId string, requestPosInfo amfmodel.RequestPosInfo) (amfcommon.ImplResponse, error) {
	// TODO - update ProvidePositioningInfo with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(200, amfmodel.ProvidePosInfo{}) or use other options such as http.Ok ...
	//return amfcommon.Response(200, amfmodel.ProvidePosInfo{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(204, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(204, nil),nil

	//TODO: Uncomment the next line to return response amfcommon.Response(307, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(307, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(308, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(308, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(400, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(400, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(403, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(403, amfmodel.ProblemDetails{}), nil

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

	//TODO: Uncomment the next line to return response amfcommon.Response(504, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(504, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(0, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(0, nil),nil

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("ProvidePositioningInfo method not implemented")
}