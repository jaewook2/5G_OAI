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
)

// NonUEN2MessageNotificationIndividualSubscriptionDocumentApiService is a service that implements the logic for the NonUEN2MessageNotificationIndividualSubscriptionDocumentApiServicer
// This service should implement the business logic for every endpoint for the NonUEN2MessageNotificationIndividualSubscriptionDocumentApi API.
// Include any external packages or services that will be required by this service.
type NonUEN2MessageNotificationIndividualSubscriptionDocumentApiService struct {
}

// NewNonUEN2MessageNotificationIndividualSubscriptionDocumentApiService creates a default api service
func NewNonUEN2MessageNotificationIndividualSubscriptionDocumentApiService() NonUEN2MessageNotificationIndividualSubscriptionDocumentApiServicer {
	return &NonUEN2MessageNotificationIndividualSubscriptionDocumentApiService{}
}

// NonUeN2InfoUnSubscribe - Namf_Communication Non UE N2 Info UnSubscribe service Operation
func (s *NonUEN2MessageNotificationIndividualSubscriptionDocumentApiService) NonUeN2InfoUnSubscribe(ctx context.Context, n2NotifySubscriptionId string) (amfcommon.ImplResponse, error) {
	// TODO - update NonUeN2InfoUnSubscribe with the required logic for this service method.
	// Add api_non_uen2_message_notification_individual_subscription_document_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response amfcommon.Response(204, amfmodel.{}) or use other options such as http.Ok ...
	//return amfcommon.Response(204, nil),nil

	//TODO: Uncomment the next line to return response amfcommon.Response(307, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(307, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(308, amfmodel.RedirectResponse{}) or use other options such as http.Ok ...
	//return amfcommon.Response(308, amfmodel.RedirectResponse{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(400, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(400, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(429, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(429, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(500, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(500, amfmodel.ProblemDetails{}), nil

	//TODO: Uncomment the next line to return response amfcommon.Response(503, amfmodel.ProblemDetails{}) or use other options such as http.Ok ...
	//return amfcommon.Response(503, amfmodel.ProblemDetails{}), nil

	return amfcommon.Response(http.StatusNotImplemented, nil), errors.New("NonUeN2InfoUnSubscribe method not implemented")
}
