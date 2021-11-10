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
	"context"
	"net/http"
)



// IndividualSubscriptionDocumentApiRouter defines the required methods for binding the api requests to a responses for the IndividualSubscriptionDocumentApi
// The IndividualSubscriptionDocumentApiRouter implementation should parse necessary information from the http request,
// pass the data to a IndividualSubscriptionDocumentApiServicer to perform the required actions, then write the service results to the http response.
type IndividualSubscriptionDocumentApiRouter interface { 
	DeleteSubscription(http.ResponseWriter, *http.Request)
	ModifySubscription(http.ResponseWriter, *http.Request)
}
// SubscriptionsCollectionDocumentApiRouter defines the required methods for binding the api requests to a responses for the SubscriptionsCollectionDocumentApi
// The SubscriptionsCollectionDocumentApiRouter implementation should parse necessary information from the http request,
// pass the data to a SubscriptionsCollectionDocumentApiServicer to perform the required actions, then write the service results to the http response.
type SubscriptionsCollectionDocumentApiRouter interface { 
	CreateSubscription(http.ResponseWriter, *http.Request)
}


// IndividualSubscriptionDocumentApiServicer defines the api actions for the IndividualSubscriptionDocumentApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type IndividualSubscriptionDocumentApiServicer interface { 
	DeleteSubscription(context.Context, string) (amfcommon.ImplResponse, error)
	ModifySubscription(context.Context, string, amfmodel.UNKNOWN_BASE_TYPE) (amfcommon.ImplResponse, error)
}


// SubscriptionsCollectionDocumentApiServicer defines the api actions for the SubscriptionsCollectionDocumentApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type SubscriptionsCollectionDocumentApiServicer interface { 
	CreateSubscription(context.Context, amfmodel.AmfCreateEventSubscription) (amfcommon.ImplResponse, error)
}
