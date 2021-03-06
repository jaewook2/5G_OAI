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
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// IndividualUEContextDocumentApiController binds http requests to an api service and writes the service results to the http response
type IndividualUEContextDocumentApiController struct {
	service IndividualUEContextDocumentApiServicer
	errorHandler amfcommon.ErrorHandler
}

// IndividualUEContextDocumentApiOption for how the controller is set up.
type IndividualUEContextDocumentApiOption func(*IndividualUEContextDocumentApiController)

// WithIndividualUEContextDocumentApiErrorHandler inject amfcommon.ErrorHandler into controller
func WithIndividualUEContextDocumentApiErrorHandler(h amfcommon.ErrorHandler) IndividualUEContextDocumentApiOption {
	return func(c *IndividualUEContextDocumentApiController) {
		c.errorHandler = h
	}
}

// NewIndividualUEContextDocumentApiController creates a default api controller
func NewIndividualUEContextDocumentApiController(s IndividualUEContextDocumentApiServicer, opts ...IndividualUEContextDocumentApiOption) amfcommon.Router {
	controller := &IndividualUEContextDocumentApiController{
		service:      s,
		errorHandler: amfcommon.DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the IndividualUEContextDocumentApiController
func (c *IndividualUEContextDocumentApiController) Routes() amfcommon.Routes {
	return amfcommon.Routes { 
		{
			"CancelLocation",
			strings.ToUpper("Post"),
			"/namf-loc/v1/{ueContextId}/cancel-pos-info",
			c.CancelLocation,
		},
		{
			"ProvideLocationInfo",
			strings.ToUpper("Post"),
			"/namf-loc/v1/{ueContextId}/provide-loc-info",
			c.ProvideLocationInfo,
		},
		{
			"ProvidePositioningInfo",
			strings.ToUpper("Post"),
			"/namf-loc/v1/{ueContextId}/provide-pos-info",
			c.ProvidePositioningInfo,
		},
	}
}

// CancelLocation - Namf_Location CancelLocation service operation
func (c *IndividualUEContextDocumentApiController) CancelLocation(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
	cancelPosInfoParam := amfmodel.CancelPosInfo{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&cancelPosInfoParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertCancelPosInfoRequired(cancelPosInfoParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.CancelLocation(r.Context(), ueContextIdParam, cancelPosInfoParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// ProvideLocationInfo - Namf_Location ProvideLocationInfo service Operation
func (c *IndividualUEContextDocumentApiController) ProvideLocationInfo(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
	requestLocInfoParam := amfmodel.RequestLocInfo{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&requestLocInfoParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertRequestLocInfoRequired(requestLocInfoParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.ProvideLocationInfo(r.Context(), ueContextIdParam, requestLocInfoParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// ProvidePositioningInfo - Namf_Location ProvidePositioningInfo service Operation
func (c *IndividualUEContextDocumentApiController) ProvidePositioningInfo(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	ueContextIdParam := params["ueContextId"]
	
	requestPosInfoParam := amfmodel.RequestPosInfo{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&requestPosInfoParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertRequestPosInfoRequired(requestPosInfoParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.ProvidePositioningInfo(r.Context(), ueContextIdParam, requestPosInfoParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}
