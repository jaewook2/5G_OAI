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

// SubscriptionsCollectionDocumentApiController binds http requests to an api service and writes the service results to the http response
type SubscriptionsCollectionDocumentApiController struct {
	service SubscriptionsCollectionDocumentApiServicer
	errorHandler amfcommon.ErrorHandler
}

// SubscriptionsCollectionDocumentApiOption for how the controller is set up.
type SubscriptionsCollectionDocumentApiOption func(*SubscriptionsCollectionDocumentApiController)

// WithSubscriptionsCollectionDocumentApiErrorHandler inject amfcommon.ErrorHandler into controller
func WithSubscriptionsCollectionDocumentApiErrorHandler(h amfcommon.ErrorHandler) SubscriptionsCollectionDocumentApiOption {
	return func(c *SubscriptionsCollectionDocumentApiController) {
		c.errorHandler = h
	}
}

// NewSubscriptionsCollectionDocumentApiController creates a default api controller
func NewSubscriptionsCollectionDocumentApiController(s SubscriptionsCollectionDocumentApiServicer, opts ...SubscriptionsCollectionDocumentApiOption) amfcommon.Router {
	controller := &SubscriptionsCollectionDocumentApiController{
		service:      s,
		errorHandler: amfcommon.DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the SubscriptionsCollectionDocumentApiController
func (c *SubscriptionsCollectionDocumentApiController) Routes() amfcommon.Routes {
	return amfcommon.Routes { 
		{
			"AMFStatusChangeSubscribe",
			strings.ToUpper("Post"),
			"/namf-comm/v1/subscriptions",
			c.AMFStatusChangeSubscribe,
		},
	}
}

// AMFStatusChangeSubscribe - Namf_Communication AMF Status Change Subscribe service Operation
func (c *SubscriptionsCollectionDocumentApiController) AMFStatusChangeSubscribe(w http.ResponseWriter, r *http.Request) {
	subscriptionDataParam := amfmodel.SubscriptionData{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&subscriptionDataParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertSubscriptionDataRequired(subscriptionDataParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.AMFStatusChangeSubscribe(r.Context(), subscriptionDataParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}