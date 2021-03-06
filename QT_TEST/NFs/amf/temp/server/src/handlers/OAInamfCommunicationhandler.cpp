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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>


#include "OAInamfCommunicationhandler.h"
#include "OAIIndividualSubscriptionDocumentApiRequest.h"
#include "OAIIndividualUeContextDocumentApiRequest.h"
#include "OAIN1N2IndividualSubscriptionDocumentApiRequest.h"
#include "OAIN1N2MessageCollectionDocumentApiRequest.h"
#include "OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiRequest.h"
#include "OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest.h"
#include "OAINonUEN2MessagesCollectionDocumentApiRequest.h"
#include "OAINonUEN2MessagesSubscriptionsCollectionDocumentApiRequest.h"
#include "OAISubscriptionsCollectionDocumentApiRequest.h"


namespace OpenAPI {

OAInamfCommunicationhandler::OAInamfCommunicationhandler() {
    createApiHandlers();
}

OAInamfCommunicationhandler::~OAInamfCommunicationhandler(){

}

void OAInamfCommunicationhandler::createApiHandlers() { 
    mOAIIndividualSubscriptionDocumentApiHandler = QSharedPointer<OAIIndividualSubscriptionDocumentApiHandler>::create();
    mOAIIndividualUeContextDocumentApiHandler = QSharedPointer<OAIIndividualUeContextDocumentApiHandler>::create();
    mOAIN1N2IndividualSubscriptionDocumentApiHandler = QSharedPointer<OAIN1N2IndividualSubscriptionDocumentApiHandler>::create();
    mOAIN1N2MessageCollectionDocumentApiHandler = QSharedPointer<OAIN1N2MessageCollectionDocumentApiHandler>::create();
    mOAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler = QSharedPointer<OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler>::create();
    mOAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler = QSharedPointer<OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler>::create();
    mOAINonUEN2MessagesCollectionDocumentApiHandler = QSharedPointer<OAINonUEN2MessagesCollectionDocumentApiHandler>::create();
    mOAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler = QSharedPointer<OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler>::create();
    mOAISubscriptionsCollectionDocumentApiHandler = QSharedPointer<OAISubscriptionsCollectionDocumentApiHandler>::create();
}


void OAInamfCommunicationhandler::setOAIIndividualSubscriptionDocumentApiHandler(QSharedPointer<OAIIndividualSubscriptionDocumentApiHandler> handler){
    mOAIIndividualSubscriptionDocumentApiHandler = handler;
}
void OAInamfCommunicationhandler::setOAIIndividualUeContextDocumentApiHandler(QSharedPointer<OAIIndividualUeContextDocumentApiHandler> handler){
    mOAIIndividualUeContextDocumentApiHandler = handler;
}
void OAInamfCommunicationhandler::setOAIN1N2IndividualSubscriptionDocumentApiHandler(QSharedPointer<OAIN1N2IndividualSubscriptionDocumentApiHandler> handler){
    mOAIN1N2IndividualSubscriptionDocumentApiHandler = handler;
}
void OAInamfCommunicationhandler::setOAIN1N2MessageCollectionDocumentApiHandler(QSharedPointer<OAIN1N2MessageCollectionDocumentApiHandler> handler){
    mOAIN1N2MessageCollectionDocumentApiHandler = handler;
}
void OAInamfCommunicationhandler::setOAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler(QSharedPointer<OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler> handler){
    mOAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler = handler;
}
void OAInamfCommunicationhandler::setOAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler(QSharedPointer<OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler> handler){
    mOAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler = handler;
}
void OAInamfCommunicationhandler::setOAINonUEN2MessagesCollectionDocumentApiHandler(QSharedPointer<OAINonUEN2MessagesCollectionDocumentApiHandler> handler){
    mOAINonUEN2MessagesCollectionDocumentApiHandler = handler;
}
void OAInamfCommunicationhandler::setOAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler(QSharedPointer<OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler> handler){
    mOAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler = handler;
}
void OAInamfCommunicationhandler::setOAISubscriptionsCollectionDocumentApiHandler(QSharedPointer<OAISubscriptionsCollectionDocumentApiHandler> handler){
    mOAISubscriptionsCollectionDocumentApiHandler = handler;
}

void OAInamfCommunicationhandler::setUpRoutes() {
    
    Routes.insert(QString("%1 %2").arg("POST").arg("/namf-comm/v1/non-ue-n2-messages/transfer").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAINonUEN2MessagesCollectionDocumentApiRequest(socket, mOAINonUEN2MessagesCollectionDocumentApiHandler);
            reqObj->nonUeN2MessageTransferRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/namf-comm/v1/non-ue-n2-messages/subscriptions").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAINonUEN2MessagesSubscriptionsCollectionDocumentApiRequest(socket, mOAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler);
            reqObj->nonUeN2InfoSubscribeRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/namf-comm/v1/subscriptions").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAISubscriptionsCollectionDocumentApiRequest(socket, mOAISubscriptionsCollectionDocumentApiHandler);
            reqObj->aMFStatusChangeSubscribeRequest();
    });
}

bool OAInamfCommunicationhandler::processRequest(QHttpEngine::Socket *socket){
    if( handleRequest(socket) ){
        return true;
    }
    if( handleRequestAndExtractPathParam(socket) ){
        return true;
    }
    return false;

}

bool OAInamfCommunicationhandler::handleRequest(QHttpEngine::Socket *socket){
    auto reqPath = QString("%1 %2").arg(fromQHttpEngineMethod(socket->method())).arg(socket->path()).toLower();
    if ( Routes.contains(reqPath) ) {
        Routes.value(reqPath).operator()(socket);
        return true;
    }
    return false;
}

bool OAInamfCommunicationhandler::handleRequestAndExtractPathParam(QHttpEngine::Socket *socket){
    auto reqPath = QString("%1 %2").arg(fromQHttpEngineMethod(socket->method())).arg(socket->path()).toLower();
    {
        auto completePath = QString("%1 %2").arg("PUT").arg("/namf-comm/v1/subscriptions/{subscriptionId}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString subscriptionId = match.captured(QString("subscriptionId").toLower());
                auto reqObj = new OAIIndividualSubscriptionDocumentApiRequest(socket, mOAIIndividualSubscriptionDocumentApiHandler);
                reqObj->aMFStatusChangeSubscribeModfyRequest(subscriptionId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("DELETE").arg("/namf-comm/v1/subscriptions/{subscriptionId}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString subscriptionId = match.captured(QString("subscriptionId").toLower());
                auto reqObj = new OAIIndividualSubscriptionDocumentApiRequest(socket, mOAIIndividualSubscriptionDocumentApiHandler);
                reqObj->aMFStatusChangeUnSubscribeRequest(subscriptionId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/namf-comm/v1/ue-contexts/{ueContextId}/cancel-relocate").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIIndividualUeContextDocumentApiRequest(socket, mOAIIndividualUeContextDocumentApiHandler);
                reqObj->cancelRelocateUEContextRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("PUT").arg("/namf-comm/v1/ue-contexts/{ueContextId}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIIndividualUeContextDocumentApiRequest(socket, mOAIIndividualUeContextDocumentApiHandler);
                reqObj->createUEContextRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/namf-comm/v1/ue-contexts/{ueContextId}/assign-ebi").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIIndividualUeContextDocumentApiRequest(socket, mOAIIndividualUeContextDocumentApiHandler);
                reqObj->eBIAssignmentRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/namf-comm/v1/ue-contexts/{ueContextId}/transfer-update").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIIndividualUeContextDocumentApiRequest(socket, mOAIIndividualUeContextDocumentApiHandler);
                reqObj->registrationStatusUpdateRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/namf-comm/v1/ue-contexts/{ueContextId}/release").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIIndividualUeContextDocumentApiRequest(socket, mOAIIndividualUeContextDocumentApiHandler);
                reqObj->releaseUEContextRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/namf-comm/v1/ue-contexts/{ueContextId}/relocate").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIIndividualUeContextDocumentApiRequest(socket, mOAIIndividualUeContextDocumentApiHandler);
                reqObj->relocateUEContextRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/namf-comm/v1/ue-contexts/{ueContextId}/transfer").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIIndividualUeContextDocumentApiRequest(socket, mOAIIndividualUeContextDocumentApiHandler);
                reqObj->uEContextTransferRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("DELETE").arg("/namf-comm/v1/ue-contexts/{ueContextId}/n1-n2-messages/subscriptions/{subscriptionId}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                QString subscriptionId = match.captured(QString("subscriptionId").toLower());
                auto reqObj = new OAIN1N2IndividualSubscriptionDocumentApiRequest(socket, mOAIN1N2IndividualSubscriptionDocumentApiHandler);
                reqObj->n1N2MessageUnSubscribeRequest(ueContextId, subscriptionId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/namf-comm/v1/ue-contexts/{ueContextId}/n1-n2-messages").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIN1N2MessageCollectionDocumentApiRequest(socket, mOAIN1N2MessageCollectionDocumentApiHandler);
                reqObj->n1N2MessageTransferRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/namf-comm/v1/ue-contexts/{ueContextId}/n1-n2-messages/subscriptions").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ueContextId = match.captured(QString("ueContextId").toLower());
                auto reqObj = new OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiRequest(socket, mOAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler);
                reqObj->n1N2MessageSubscribeRequest(ueContextId);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("DELETE").arg("/namf-comm/v1/non-ue-n2-messages/subscriptions/{n2NotifySubscriptionId}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString n2NotifySubscriptionId = match.captured(QString("n2NotifySubscriptionId").toLower());
                auto reqObj = new OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest(socket, mOAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler);
                reqObj->nonUeN2InfoUnSubscribeRequest(n2NotifySubscriptionId);
                return true;
            }
        }
    }
    return false;
}

}
