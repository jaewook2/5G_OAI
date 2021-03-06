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
#include "OAIN1N2MessageCollectionDocumentApiRequest.h"

namespace OpenAPI {

OAIN1N2MessageCollectionDocumentApiRequest::OAIN1N2MessageCollectionDocumentApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIN1N2MessageCollectionDocumentApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIN1N2MessageCollectionDocumentApiRequest::~OAIN1N2MessageCollectionDocumentApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIN1N2MessageCollectionDocumentApiRequest::~OAIN1N2MessageCollectionDocumentApiRequest()";
}

QMap<QString, QString>
OAIN1N2MessageCollectionDocumentApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIN1N2MessageCollectionDocumentApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIN1N2MessageCollectionDocumentApiRequest::getRawSocket(){
    return socket;
}


void OAIN1N2MessageCollectionDocumentApiRequest::n1N2MessageTransferRequest(const QString& ue_context_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}/n1-n2-messages";
    connect(this, &OAIN1N2MessageCollectionDocumentApiRequest::n1N2MessageTransfer, handler.data(), &OAIN1N2MessageCollectionDocumentApiHandler::n1N2MessageTransfer);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIN1N2MessageTransferReqData oain1_n2_message_transfer_req_data;
    ::OpenAPI::fromJsonValue(oain1_n2_message_transfer_req_data, obj);
    

    emit n1N2MessageTransfer(ue_context_id, oain1_n2_message_transfer_req_data);
}



void OAIN1N2MessageCollectionDocumentApiRequest::n1N2MessageTransferResponse(const OAIN1N2MessageTransferRspData& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIN1N2MessageCollectionDocumentApiRequest::n1N2MessageTransferError(const OAIN1N2MessageTransferRspData& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIN1N2MessageCollectionDocumentApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIN1N2MessageCollectionDocumentApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
