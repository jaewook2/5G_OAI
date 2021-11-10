/*
 * Namf_Communication
 *
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfcommunication

import (
"amf.com/amfcommon"
"amf.com/amfmodel"
	"context"
	"net/http"
	"errors"
	"os"
)

// IndividualUeContextDocumentApiService is a service that implements the logic for the IndividualUeContextDocumentApiServicer
// This service should implement the business logic for every endpoint for the IndividualUeContextDocumentApi API.
// Include any external packages or services that will be required by this service.
type IndividualUeContextDocumentApiService struct {
}

// NewIndividualUeContextDocumentApiService creates a default api service
func NewIndividualUeContextDocumentApiService() IndividualUeContextDocumentApiServicer {
	return &IndividualUeContextDocumentApiService{}
}

// CancelRelocateUEContext - Namf_Communication CancelRelocateUEContext service Operation
func (s *IndividualUeContextDocumentApiService) CancelRelocateUEContext(ctx context.Context, ueContextId string, jsonData amfmodel.UeContextCancelRelocateData, binaryDataGtpcMessage *os.File) (amfcommon.ImplResponse, error) {
	// TODO - update CancelRelocateUEContext with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

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

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("CancelRelocateUEContext method not implemented")
}

// CreateUEContext - Namf_Communication CreateUEContext service Operation
func (s *IndividualUeContextDocumentApiService) CreateUEContext(ctx context.Context, ueContextId string, jsonData amfmodel.UeContextCreateData, binaryDataN2Information *os.File, binaryDataN2InformationExt1 *os.File, binaryDataN2InformationExt2 *os.File, binaryDataN2InformationExt3 *os.File, binaryDataN2InformationExt4 *os.File, binaryDataN2InformationExt5 *os.File, binaryDataN2InformationExt6 *os.File, binaryDataN2InformationExt7 *os.File, binaryDataN2InformationExt8 *os.File, binaryDataN2InformationExt9 *os.File, binaryDataN2InformationExt10 *os.File, binaryDataN2InformationExt11 *os.File, binaryDataN2InformationExt12 *os.File, binaryDataN2InformationExt13 *os.File, binaryDataN2InformationExt14 *os.File, binaryDataN2InformationExt15 *os.File, binaryDataN2InformationExt16 *os.File) (amfcommon.ImplResponse, error) {
	// TODO - update CreateUEContext with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(201, amfmodel.UeContextCreatedData{}) or use other options such as http.Ok ...
	//return amfcommon.Response(201, amfmodel.UeContextCreatedData{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(307, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(307, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(308, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(308, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(400, amfmodel.UeContextCreateError{}) or use other options such as http.Ok ...
	//return amfcommon.Response(400, amfmodel.UeContextCreateError{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(403, amfmodel.UeContextCreateError{}) or use other options such as http.Ok ...
	//return amfcommon.Response(403, amfmodel.UeContextCreateError{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(411, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(411, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(413, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(413, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(415, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(415, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(429, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(429, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(500, amfmodel.UeContextCreateError{}) or use other options such as http.Ok ...
	//return amfcommon.Response(500, amfmodel.UeContextCreateError{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(503, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(503, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(0, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(0, nil),nil

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("CreateUEContext method not implemented")
}

// EBIAssignment - Namf_Communication EBI Assignment service Operation
func (s *IndividualUeContextDocumentApiService) EBIAssignment(ctx context.Context, ueContextId string, assignEbiData amfmodel.AssignEbiData) (amfcommon.ImplResponse, error) {
	// TODO - update EBIAssignment with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(200, amfmodel.AssignedEbiData{}) or use other options such as http.Ok ...
	//return amfcommon.Response(200, amfmodel.AssignedEbiData{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(307, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(307, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(308, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(308, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(400, amfmodel.AssignEbiError{}) or use other options such as http.Ok ...
	//return amfcommon.Response(400, amfmodel.AssignEbiError{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(403, amfmodel.AssignEbiError{}) or use other options such as http.Ok ...
	//return amfcommon.Response(403, amfmodel.AssignEbiError{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(409, amfmodel.AssignEbiError{}) or use other options such as http.Ok ...
	//return amfcommon.Response(409, amfmodel.AssignEbiError{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(411, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(411, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(413, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(413, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(415, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(415, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(429, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(429, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(500, amfmodel.AssignEbiError{}) or use other options such as http.Ok ...
	//return amfcommon.Response(500, amfmodel.AssignEbiError{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(503, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(503, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(0, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(0, nil),nil

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("EBIAssignment method not implemented")
}

// RegistrationStatusUpdate - Namf_Communication RegistrationStatusUpdate service Operation
func (s *IndividualUeContextDocumentApiService) RegistrationStatusUpdate(ctx context.Context, ueContextId string, ueRegStatusUpdateReqData amfmodel.UeRegStatusUpdateReqData) (amfcommon.ImplResponse, error) {
	// TODO - update RegistrationStatusUpdate with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(200, amfmodel.UeRegStatusUpdateRspData{}) or use other options such as http.Ok ...
	//return amfcommon.Response(200, amfmodel.UeRegStatusUpdateRspData{}), nil

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

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("RegistrationStatusUpdate method not implemented")
}

// ReleaseUEContext - Namf_Communication ReleaseUEContext service Operation
func (s *IndividualUeContextDocumentApiService) ReleaseUEContext(ctx context.Context, ueContextId string, ueContextRelease amfmodel.UeContextRelease) (amfcommon.ImplResponse, error) {
	// TODO - update ReleaseUEContext with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

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

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("ReleaseUEContext method not implemented")
}

// RelocateUEContext - Namf_Communication RelocateUEContext service Operation
func (s *IndividualUeContextDocumentApiService) RelocateUEContext(ctx context.Context, ueContextId string, jsonData amfmodel.UeContextRelocateData, binaryDataGtpcMessage *os.File, binaryDataN2Information *os.File, binaryDataN2InformationExt1 *os.File, binaryDataN2InformationExt2 *os.File, binaryDataN2InformationExt3 *os.File, binaryDataN2InformationExt4 *os.File, binaryDataN2InformationExt5 *os.File, binaryDataN2InformationExt6 *os.File, binaryDataN2InformationExt7 *os.File, binaryDataN2InformationExt8 *os.File, binaryDataN2InformationExt9 *os.File, binaryDataN2InformationExt10 *os.File, binaryDataN2InformationExt11 *os.File, binaryDataN2InformationExt12 *os.File, binaryDataN2InformationExt13 *os.File, binaryDataN2InformationExt14 *os.File, binaryDataN2InformationExt15 *os.File, binaryDataN2InformationExt16 *os.File) (amfcommon.ImplResponse, error) {
	// TODO - update RelocateUEContext with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(201, amfmodel.UeContextRelocatedData{}) or use other options such as http.Ok ...
	//return amfcommon.Response(201, amfmodel.UeContextRelocatedData{}), nil

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

	//TODO: Uncomment the next line to return response amfcommon.Response(0, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(0, nil),nil

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("RelocateUEContext method not implemented")
}

// UEContextTransfer - Namf_Communication UEContextTransfer service Operation
func (s *IndividualUeContextDocumentApiService) UEContextTransfer(ctx context.Context, ueContextId string, ueContextTransferReqData amfmodel.UeContextTransferReqData) (amfcommon.ImplResponse, error) {
	// TODO - update UEContextTransfer with the required logic for this service method.
	// Add api_individual_ue_context_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(200, amfmodel.UeContextTransferRspData{}) or use other options such as http.Ok ...
	//return amfcommon.Response(200, amfmodel.UeContextTransferRspData{}), nil

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

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("UEContextTransfer method not implemented")
}