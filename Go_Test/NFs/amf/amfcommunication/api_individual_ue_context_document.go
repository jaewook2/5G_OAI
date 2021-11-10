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
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// IndividualUeContextDocumentApiController binds http requests to an api service and writes the service results to the http response
type IndividualUeContextDocumentApiController struct {
	service IndividualUeContextDocumentApiServicer
	errorHandler amfcommon.ErrorHandler
}

// IndividualUeContextDocumentApiOption for how the controller is set up.
type IndividualUeContextDocumentApiOption func(*IndividualUeContextDocumentApiController)

// WithIndividualUeContextDocumentApiErrorHandler inject amfcommon.ErrorHandler into controller
func WithIndividualUeContextDocumentApiErrorHandler(h amfcommon.ErrorHandler) IndividualUeContextDocumentApiOption {
	return func(c *IndividualUeContextDocumentApiController) {
		c.errorHandler = h
	}
}

// NewIndividualUeContextDocumentApiController creates a default api controller
func NewIndividualUeContextDocumentApiController(s IndividualUeContextDocumentApiServicer, opts ...IndividualUeContextDocumentApiOption) amfcommon.Router {
	controller := &IndividualUeContextDocumentApiController{
		service:      s,
		errorHandler: amfcommon.DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the IndividualUeContextDocumentApiController
func (c *IndividualUeContextDocumentApiController) Routes() amfcommon.Routes {
	return amfcommon.Routes { 
		{
			"CancelRelocateUEContext",
			strings.ToUpper("Post"),
			"/namf-comm/v1/ue-contexts/{ueContextId}/cancel-relocate",
			c.CancelRelocateUEContext,
		},
		{
			"CreateUEContext",
			strings.ToUpper("Put"),
			"/namf-comm/v1/ue-contexts/{ueContextId}",
			c.CreateUEContext,
		},
		{
			"EBIAssignment",
			strings.ToUpper("Post"),
			"/namf-comm/v1/ue-contexts/{ueContextId}/assign-ebi",
			c.EBIAssignment,
		},
		{
			"RegistrationStatusUpdate",
			strings.ToUpper("Post"),
			"/namf-comm/v1/ue-contexts/{ueContextId}/transfer-update",
			c.RegistrationStatusUpdate,
		},
		{
			"ReleaseUEContext",
			strings.ToUpper("Post"),
			"/namf-comm/v1/ue-contexts/{ueContextId}/release",
			c.ReleaseUEContext,
		},
		{
			"RelocateUEContext",
			strings.ToUpper("Post"),
			"/namf-comm/v1/ue-contexts/{ueContextId}/relocate",
			c.RelocateUEContext,
		},
		{
			"UEContextTransfer",
			strings.ToUpper("Post"),
			"/namf-comm/v1/ue-contexts/{ueContextId}/transfer",
			c.UEContextTransfer,
		},
	}
}

// CancelRelocateUEContext - Namf_Communication CancelRelocateUEContext service Operation
func (c *IndividualUeContextDocumentApiController) CancelRelocateUEContext(w http.ResponseWriter, r *http.Request) {
	if err := r.ParseMultipartForm(32 << 20); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
				UeContextCancelRelocateDataParam := amfmodel.UeContextCancelRelocateData{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&UeContextCancelRelocateDataParam); err != nil { 
		 c.errorHandler(w, r,&amfcommon.ParsingError{Err: err}, nil)
		 return 
	}
		if err := amfmodel.AssertUeContextCancelRelocateDataRequired(UeContextCancelRelocateDataParam); err != nil {
		c.errorHandler(w, r, err, nil) 
		return 
	}
	
	binaryDataGtpcMessageParam, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataGtpcMessage")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			result, err := c.service.CancelRelocateUEContext(r.Context(), ueContextIdParam, UeContextCancelRelocateDataParam, binaryDataGtpcMessageParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// CreateUEContext - Namf_Communication CreateUEContext service Operation
func (c *IndividualUeContextDocumentApiController) CreateUEContext(w http.ResponseWriter, r *http.Request) {
	if err := r.ParseMultipartForm(32 << 20); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
				UeContextCreateDataParam := amfmodel.UeContextCreateData{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&UeContextCreateDataParam); err != nil { 
		 c.errorHandler(w, r,&amfcommon.ParsingError{Err: err}, nil)
		 return 
	}
		if err := amfmodel.AssertUeContextCreateDataRequired(UeContextCreateDataParam); err != nil {
		c.errorHandler(w, r, err, nil) 
		return 
	}
	
	binaryDataN2InformationParam, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2Information")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt1Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt1")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt2Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt2")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt3Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt3")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt4Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt4")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt5Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt5")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt6Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt6")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt7Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt7")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt8Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt8")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt9Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt9")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt10Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt10")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt11Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt11")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt12Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt12")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt13Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt13")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt14Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt14")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt15Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt15")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt16Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt16")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			result, err := c.service.CreateUEContext(r.Context(), ueContextIdParam, UeContextCreateDataParam, binaryDataN2InformationParam, binaryDataN2InformationExt1Param, binaryDataN2InformationExt2Param, binaryDataN2InformationExt3Param, binaryDataN2InformationExt4Param, binaryDataN2InformationExt5Param, binaryDataN2InformationExt6Param, binaryDataN2InformationExt7Param, binaryDataN2InformationExt8Param, binaryDataN2InformationExt9Param, binaryDataN2InformationExt10Param, binaryDataN2InformationExt11Param, binaryDataN2InformationExt12Param, binaryDataN2InformationExt13Param, binaryDataN2InformationExt14Param, binaryDataN2InformationExt15Param, binaryDataN2InformationExt16Param)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// EBIAssignment - Namf_Communication EBI Assignment service Operation
func (c *IndividualUeContextDocumentApiController) EBIAssignment(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
	assignEbiDataParam := amfmodel.AssignEbiData{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&assignEbiDataParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertAssignEbiDataRequired(assignEbiDataParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.EBIAssignment(r.Context(), ueContextIdParam, assignEbiDataParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// RegistrationStatusUpdate - Namf_Communication RegistrationStatusUpdate service Operation
func (c *IndividualUeContextDocumentApiController) RegistrationStatusUpdate(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
	ueRegStatusUpdateReqDataParam := amfmodel.UeRegStatusUpdateReqData{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&ueRegStatusUpdateReqDataParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertUeRegStatusUpdateReqDataRequired(ueRegStatusUpdateReqDataParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.RegistrationStatusUpdate(r.Context(), ueContextIdParam, ueRegStatusUpdateReqDataParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// ReleaseUEContext - Namf_Communication ReleaseUEContext service Operation
func (c *IndividualUeContextDocumentApiController) ReleaseUEContext(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
	ueContextReleaseParam := amfmodel.UeContextRelease{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&ueContextReleaseParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertUeContextReleaseRequired(ueContextReleaseParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.ReleaseUEContext(r.Context(), ueContextIdParam, ueContextReleaseParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// RelocateUEContext - Namf_Communication RelocateUEContext service Operation
func (c *IndividualUeContextDocumentApiController) RelocateUEContext(w http.ResponseWriter, r *http.Request) {
	if err := r.ParseMultipartForm(32 << 20); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
				UeContextRelocateDataParam := amfmodel.UeContextRelocateData{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&UeContextRelocateDataParam); err != nil { 
		 c.errorHandler(w, r,&amfcommon.ParsingError{Err: err}, nil)
		 return 
	}
		if err := amfmodel.AssertUeContextRelocateDataRequired(UeContextRelocateDataParam); err != nil {
		c.errorHandler(w, r, err, nil) 
		return 
	}
	
	binaryDataGtpcMessageParam, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataGtpcMessage")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationParam, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2Information")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt1Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt1")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt2Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt2")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt3Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt3")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt4Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt4")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt5Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt5")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt6Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt6")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt7Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt7")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt8Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt8")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt9Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt9")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt10Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt10")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt11Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt11")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt12Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt12")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt13Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt13")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt14Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt14")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt15Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt15")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			
	binaryDataN2InformationExt16Param, err := amfcommon.ReadFormFileToTempFile(r, "binaryDataN2InformationExt16")
	if err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
			result, err := c.service.RelocateUEContext(r.Context(), ueContextIdParam, UeContextRelocateDataParam, binaryDataGtpcMessageParam, binaryDataN2InformationParam, binaryDataN2InformationExt1Param, binaryDataN2InformationExt2Param, binaryDataN2InformationExt3Param, binaryDataN2InformationExt4Param, binaryDataN2InformationExt5Param, binaryDataN2InformationExt6Param, binaryDataN2InformationExt7Param, binaryDataN2InformationExt8Param, binaryDataN2InformationExt9Param, binaryDataN2InformationExt10Param, binaryDataN2InformationExt11Param, binaryDataN2InformationExt12Param, binaryDataN2InformationExt13Param, binaryDataN2InformationExt14Param, binaryDataN2InformationExt15Param, binaryDataN2InformationExt16Param)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// UEContextTransfer - Namf_Communication UEContextTransfer service Operation
func (c *IndividualUeContextDocumentApiController) UEContextTransfer(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
	ueContextTransferReqDataParam := amfmodel.UeContextTransferReqData{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&ueContextTransferReqDataParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertUeContextTransferReqDataRequired(ueContextTransferReqDataParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.UEContextTransfer(r.Context(), ueContextIdParam, ueContextTransferReqDataParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}
