/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
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
#include "OAIEEIndividualSubscriptionDocumentApiRequest.h"

namespace OpenAPI {

OAIEEIndividualSubscriptionDocumentApiRequest::OAIEEIndividualSubscriptionDocumentApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIEEIndividualSubscriptionDocumentApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIEEIndividualSubscriptionDocumentApiRequest::~OAIEEIndividualSubscriptionDocumentApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIEEIndividualSubscriptionDocumentApiRequest::~OAIEEIndividualSubscriptionDocumentApiRequest()";
}

QMap<QString, QString>
OAIEEIndividualSubscriptionDocumentApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIEEIndividualSubscriptionDocumentApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIEEIndividualSubscriptionDocumentApiRequest::getRawSocket(){
    return socket;
}


void OAIEEIndividualSubscriptionDocumentApiRequest::deleteSubscriptionRequest(const QString& subscription_idstr){
    qDebug() << "/namf-evts/v1/subscriptions/{subscriptionId}";
    connect(this, &OAIEEIndividualSubscriptionDocumentApiRequest::deleteSubscription, handler.data(), &OAIEEIndividualSubscriptionDocumentApiHandler::deleteSubscription);

    
    QString subscription_id;
    fromStringValue(subscription_idstr, subscription_id);
    

    emit deleteSubscription(subscription_id);
}




void OAIEEIndividualSubscriptionDocumentApiRequest::deleteSubscriptionResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}



void OAIEEIndividualSubscriptionDocumentApiRequest::deleteSubscriptionError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIEEIndividualSubscriptionDocumentApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}
}
