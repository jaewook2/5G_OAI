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

// NonUEN2MessagesSubscriptionsCollectionDocumentApiController binds http requests to an api service and writes the service results to the http response
type NonUEN2MessagesSubscriptionsCollectionDocumentApiController struct {
	service NonUEN2MessagesSubscriptionsCollectionDocumentApiServicer
	errorHandler amfcommon.ErrorHandler
}

// NonUEN2MessagesSubscriptionsCollectionDocumentApiOption for how the controller is set up.
type NonUEN2MessagesSubscriptionsCollectionDocumentApiOption func(*NonUEN2MessagesSubscriptionsCollectionDocumentApiController)

// WithNonUEN2MessagesSubscriptionsCollectionDocumentApiErrorHandler inject amfcommon.ErrorHandler into controller
func WithNonUEN2MessagesSubscriptionsCollectionDocumentApiErrorHandler(h amfcommon.ErrorHandler) NonUEN2MessagesSubscriptionsCollectionDocumentApiOption {
	return func(c *NonUEN2MessagesSubscriptionsCollectionDocumentApiController) {
		c.errorHandler = h
	}
}

// NewNonUEN2MessagesSubscriptionsCollectionDocumentApiController creates a default api controller
func NewNonUEN2MessagesSubscriptionsCollectionDocumentApiController(s NonUEN2MessagesSubscriptionsCollectionDocumentApiServicer, opts ...NonUEN2MessagesSubscriptionsCollectionDocumentApiOption) amfcommon.Router {
	controller := &NonUEN2MessagesSubscriptionsCollectionDocumentApiController{
		service:      s,
		errorHandler: amfcommon.DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the NonUEN2MessagesSubscriptionsCollectionDocumentApiController
func (c *NonUEN2MessagesSubscriptionsCollectionDocumentApiController) Routes() amfcommon.Routes {
	return amfcommon.Routes { 
		{
			"NonUeN2InfoSubscribe",
			strings.ToUpper("Post"),
			"/namf-comm/v1/non-ue-n2-messages/subscriptions",
			c.NonUeN2InfoSubscribe,
		},
	}
}

// NonUeN2InfoSubscribe - Namf_Communication Non UE N2 Info Subscribe service Operation
func (c *NonUEN2MessagesSubscriptionsCollectionDocumentApiController) NonUeN2InfoSubscribe(w http.ResponseWriter, r *http.Request) {
	nonUeN2InfoSubscriptionCreateDataParam := amfmodel.NonUeN2InfoSubscriptionCreateData{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&nonUeN2InfoSubscriptionCreateDataParam); err != nil {
		c.errorHandler(w, r, & amfcommon.ParsingError{Err: err}, nil)
		return
	}
	if err :=  amfmodel.AssertNonUeN2InfoSubscriptionCreateDataRequired(nonUeN2InfoSubscriptionCreateDataParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.NonUeN2InfoSubscribe(r.Context(), nonUeN2InfoSubscriptionCreateDataParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}
