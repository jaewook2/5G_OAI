/*
 * Namf_EventExposure
 *
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfeventexposure

import (
"amf.com/amfcommon"
"amf.com/amfmodel"
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// IndividualSubscriptionDocumentApiController binds http requests to an api service and writes the service results to the http response
type IndividualSubscriptionDocumentApiController struct {
	service IndividualSubscriptionDocumentApiServicer
	errorHandler amfcommon.ErrorHandler
}

// IndividualSubscriptionDocumentApiOption for how the controller is set up.
type IndividualSubscriptionDocumentApiOption func(*IndividualSubscriptionDocumentApiController)

// WithIndividualSubscriptionDocumentApiErrorHandler inject amfcommon.ErrorHandler into controller
func WithIndividualSubscriptionDocumentApiErrorHandler(h amfcommon.ErrorHandler) IndividualSubscriptionDocumentApiOption {
	return func(c *IndividualSubscriptionDocumentApiController) {
		c.errorHandler = h
	}
}

// NewIndividualSubscriptionDocumentApiController creates a default api controller
func NewIndividualSubscriptionDocumentApiController(s IndividualSubscriptionDocumentApiServicer, opts ...IndividualSubscriptionDocumentApiOption) amfcommon.Router {
	controller := &IndividualSubscriptionDocumentApiController{
		service:      s,
		errorHandler: amfcommon.DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the IndividualSubscriptionDocumentApiController
func (c *IndividualSubscriptionDocumentApiController) Routes() amfcommon.Routes {
	return amfcommon.Routes { 
		{
			"DeleteSubscription",
			strings.ToUpper("Delete"),
			"/namf-evts/v1/subscriptions/{subscriptionId}",
			c.DeleteSubscription,
		},
		{
			"ModifySubscription",
			strings.ToUpper("Patch"),
			"/namf-evts/v1/subscriptions/{subscriptionId}",
			c.ModifySubscription,
		},
	}
}

// DeleteSubscription - Namf_EventExposure Unsubscribe service Operation
func (c *IndividualSubscriptionDocumentApiController) DeleteSubscription(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	subscriptionIdParam := params["subscriptionId"]
	
	result, err := c.service.DeleteSubscription(r.Context(), subscriptionIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}

// ModifySubscription - Namf_EventExposure Subscribe Modify service Operation
func (c *IndividualSubscriptionDocumentApiController) ModifySubscription(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	subscriptionIdParam := params["subscriptionId"]
	
	uNKNOWNBASETYPEParam := amfmodel.UNKNOWN_BASE_TYPE{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&uNKNOWNBASETYPEParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.ModifySubscription(r.Context(), subscriptionIdParam, uNKNOWNBASETYPEParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}
