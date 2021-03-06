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
#include <QDebug>

#include "OAIHelpers.h"
#include "OAIN1N2IndividualSubscriptionDocumentApiRequest.h"

namespace OpenAPI {

OAIN1N2IndividualSubscriptionDocumentApiRequest::OAIN1N2IndividualSubscriptionDocumentApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIN1N2IndividualSubscriptionDocumentApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIN1N2IndividualSubscriptionDocumentApiRequest::~OAIN1N2IndividualSubscriptionDocumentApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIN1N2IndividualSubscriptionDocumentApiRequest::~OAIN1N2IndividualSubscriptionDocumentApiRequest()";
}

QMap<QString, QString>
OAIN1N2IndividualSubscriptionDocumentApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIN1N2IndividualSubscriptionDocumentApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIN1N2IndividualSubscriptionDocumentApiRequest::getRawSocket(){
    return socket;
}


void OAIN1N2IndividualSubscriptionDocumentApiRequest::n1N2MessageUnSubscribeRequest(const QString& ue_context_idstr, const QString& subscription_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}/n1-n2-messages/subscriptions/{subscriptionId}";
    connect(this, &OAIN1N2IndividualSubscriptionDocumentApiRequest::n1N2MessageUnSubscribe, handler.data(), &OAIN1N2IndividualSubscriptionDocumentApiHandler::n1N2MessageUnSubscribe);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
        QString subscription_id;
    fromStringValue(subscription_idstr, subscription_id);
    

    emit n1N2MessageUnSubscribe(ue_context_id, subscription_id);
}



void OAIN1N2IndividualSubscriptionDocumentApiRequest::n1N2MessageUnSubscribeResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIN1N2IndividualSubscriptionDocumentApiRequest::n1N2MessageUnSubscribeError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIN1N2IndividualSubscriptionDocumentApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIN1N2IndividualSubscriptionDocumentApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
