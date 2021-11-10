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

// NonUEN2MessageNotificationIndividualSubscriptionDocumentApiController binds http requests to an api service and writes the service results to the http response
type NonUEN2MessageNotificationIndividualSubscriptionDocumentApiController struct {
	service NonUEN2MessageNotificationIndividualSubscriptionDocumentApiServicer
	errorHandler amfcommon.ErrorHandler
}

// NonUEN2MessageNotificationIndividualSubscriptionDocumentApiOption for how the controller is set up.
type NonUEN2MessageNotificationIndividualSubscriptionDocumentApiOption func(*NonUEN2MessageNotificationIndividualSubscriptionDocumentApiController)

// WithNonUEN2MessageNotificationIndividualSubscriptionDocumentApiErrorHandler inject amfcommon.ErrorHandler into controller
func WithNonUEN2MessageNotificationIndividualSubscriptionDocumentApiErrorHandler(h amfcommon.ErrorHandler) NonUEN2MessageNotificationIndividualSubscriptionDocumentApiOption {
	return func(c *NonUEN2MessageNotificationIndividualSubscriptionDocumentApiController) {
		c.errorHandler = h
	}
}

// NewNonUEN2MessageNotificationIndividualSubscriptionDocumentApiController creates a default api controller
func NewNonUEN2MessageNotificationIndividualSubscriptionDocumentApiController(s NonUEN2MessageNotificationIndividualSubscriptionDocumentApiServicer, opts ...NonUEN2MessageNotificationIndividualSubscriptionDocumentApiOption) amfcommon.Router {
	controller := &NonUEN2MessageNotificationIndividualSubscriptionDocumentApiController{
		service:      s,
		errorHandler: amfcommon.DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the NonUEN2MessageNotificationIndividualSubscriptionDocumentApiController
func (c *NonUEN2MessageNotificationIndividualSubscriptionDocumentApiController) Routes() amfcommon.Routes {
	return amfcommon.Routes { 
		{
			"NonUeN2InfoUnSubscribe",
			strings.ToUpper("Delete"),
			"/namf-comm/v1/non-ue-n2-messages/subscriptions/{n2NotifySubscriptionId}",
			c.NonUeN2InfoUnSubscribe,
		},
	}
}

// NonUeN2InfoUnSubscribe - Namf_Communication Non UE N2 Info UnSubscribe service Operation
func (c *NonUEN2MessageNotificationIndividualSubscriptionDocumentApiController) NonUeN2InfoUnSubscribe(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	n2NotifySubscriptionIdParam := params["n2NotifySubscriptionId"]
	
	result, err := c.service.NonUeN2InfoUnSubscribe(r.Context(), n2NotifySubscriptionIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}