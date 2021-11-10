/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.1.5
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler_H
#define OAI_OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler_H

#include <QObject>

#include "OAIProblemDetails.h"
#include "OAIRedirectResponse.h"
#include "OAIUeN1N2InfoSubscriptionCreateData.h"
#include "OAIUeN1N2InfoSubscriptionCreatedData.h"
#include <QString>

namespace OpenAPI {

class OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler();
    virtual ~OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler();


public slots:
    virtual void n1N2MessageSubscribe(QString ue_context_id, OAIUeN1N2InfoSubscriptionCreateData oaiue_n1_n2_info_subscription_create_data);
    

};

}

#endif // OAI_OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler_H