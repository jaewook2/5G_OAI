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
#include "OAIIndividualUeContextDocumentApiRequest.h"

namespace OpenAPI {

OAIIndividualUeContextDocumentApiRequest::OAIIndividualUeContextDocumentApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIIndividualUeContextDocumentApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIIndividualUeContextDocumentApiRequest::~OAIIndividualUeContextDocumentApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIIndividualUeContextDocumentApiRequest::~OAIIndividualUeContextDocumentApiRequest()";
}

QMap<QString, QString>
OAIIndividualUeContextDocumentApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIIndividualUeContextDocumentApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIIndividualUeContextDocumentApiRequest::getRawSocket(){
    return socket;
}


void OAIIndividualUeContextDocumentApiRequest::cancelRelocateUEContextRequest(const QString& ue_context_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}/cancel-relocate";
    connect(this, &OAIIndividualUeContextDocumentApiRequest::cancelRelocateUEContext, handler.data(), &OAIIndividualUeContextDocumentApiHandler::cancelRelocateUEContext);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
    
    OAIUeContextCancelRelocateData json_data;
    OAIHttpFileElement binary_data_gtpc_message;

    emit cancelRelocateUEContext(ue_context_id, json_data, binary_data_gtpc_message);
}


void OAIIndividualUeContextDocumentApiRequest::createUEContextRequest(const QString& ue_context_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}";
    connect(this, &OAIIndividualUeContextDocumentApiRequest::createUEContext, handler.data(), &OAIIndividualUeContextDocumentApiHandler::createUEContext);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
    
    OAIUeContextCreateData json_data;
    OAIHttpFileElement binary_data_n2_information;
    OAIHttpFileElement binary_data_n2_information_ext1;
    OAIHttpFileElement binary_data_n2_information_ext2;
    OAIHttpFileElement binary_data_n2_information_ext3;
    OAIHttpFileElement binary_data_n2_information_ext4;
    OAIHttpFileElement binary_data_n2_information_ext5;
    OAIHttpFileElement binary_data_n2_information_ext6;
    OAIHttpFileElement binary_data_n2_information_ext7;
    OAIHttpFileElement binary_data_n2_information_ext8;
    OAIHttpFileElement binary_data_n2_information_ext9;
    OAIHttpFileElement binary_data_n2_information_ext10;
    OAIHttpFileElement binary_data_n2_information_ext11;
    OAIHttpFileElement binary_data_n2_information_ext12;
    OAIHttpFileElement binary_data_n2_information_ext13;
    OAIHttpFileElement binary_data_n2_information_ext14;
    OAIHttpFileElement binary_data_n2_information_ext15;
    OAIHttpFileElement binary_data_n2_information_ext16;

    emit createUEContext(ue_context_id, json_data, binary_data_n2_information, binary_data_n2_information_ext1, binary_data_n2_information_ext2, binary_data_n2_information_ext3, binary_data_n2_information_ext4, binary_data_n2_information_ext5, binary_data_n2_information_ext6, binary_data_n2_information_ext7, binary_data_n2_information_ext8, binary_data_n2_information_ext9, binary_data_n2_information_ext10, binary_data_n2_information_ext11, binary_data_n2_information_ext12, binary_data_n2_information_ext13, binary_data_n2_information_ext14, binary_data_n2_information_ext15, binary_data_n2_information_ext16);
}


void OAIIndividualUeContextDocumentApiRequest::eBIAssignmentRequest(const QString& ue_context_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}/assign-ebi";
    connect(this, &OAIIndividualUeContextDocumentApiRequest::eBIAssignment, handler.data(), &OAIIndividualUeContextDocumentApiHandler::eBIAssignment);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIAssignEbiData oai_assign_ebi_data;
    ::OpenAPI::fromJsonValue(oai_assign_ebi_data, obj);
    

    emit eBIAssignment(ue_context_id, oai_assign_ebi_data);
}


void OAIIndividualUeContextDocumentApiRequest::registrationStatusUpdateRequest(const QString& ue_context_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}/transfer-update";
    connect(this, &OAIIndividualUeContextDocumentApiRequest::registrationStatusUpdate, handler.data(), &OAIIndividualUeContextDocumentApiHandler::registrationStatusUpdate);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIUeRegStatusUpdateReqData oaiue_reg_status_update_req_data;
    ::OpenAPI::fromJsonValue(oaiue_reg_status_update_req_data, obj);
    

    emit registrationStatusUpdate(ue_context_id, oaiue_reg_status_update_req_data);
}


void OAIIndividualUeContextDocumentApiRequest::releaseUEContextRequest(const QString& ue_context_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}/release";
    connect(this, &OAIIndividualUeContextDocumentApiRequest::releaseUEContext, handler.data(), &OAIIndividualUeContextDocumentApiHandler::releaseUEContext);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIUEContextRelease oaiue_context_release;
    ::OpenAPI::fromJsonValue(oaiue_context_release, obj);
    

    emit releaseUEContext(ue_context_id, oaiue_context_release);
}


void OAIIndividualUeContextDocumentApiRequest::relocateUEContextRequest(const QString& ue_context_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}/relocate";
    connect(this, &OAIIndividualUeContextDocumentApiRequest::relocateUEContext, handler.data(), &OAIIndividualUeContextDocumentApiHandler::relocateUEContext);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
    
    OAIUeContextRelocateData json_data;
    OAIHttpFileElement binary_data_gtpc_message;
    OAIHttpFileElement binary_data_n2_information;
    OAIHttpFileElement binary_data_n2_information_ext1;
    OAIHttpFileElement binary_data_n2_information_ext2;
    OAIHttpFileElement binary_data_n2_information_ext3;
    OAIHttpFileElement binary_data_n2_information_ext4;
    OAIHttpFileElement binary_data_n2_information_ext5;
    OAIHttpFileElement binary_data_n2_information_ext6;
    OAIHttpFileElement binary_data_n2_information_ext7;
    OAIHttpFileElement binary_data_n2_information_ext8;
    OAIHttpFileElement binary_data_n2_information_ext9;
    OAIHttpFileElement binary_data_n2_information_ext10;
    OAIHttpFileElement binary_data_n2_information_ext11;
    OAIHttpFileElement binary_data_n2_information_ext12;
    OAIHttpFileElement binary_data_n2_information_ext13;
    OAIHttpFileElement binary_data_n2_information_ext14;
    OAIHttpFileElement binary_data_n2_information_ext15;
    OAIHttpFileElement binary_data_n2_information_ext16;

    emit relocateUEContext(ue_context_id, json_data, binary_data_gtpc_message, binary_data_n2_information, binary_data_n2_information_ext1, binary_data_n2_information_ext2, binary_data_n2_information_ext3, binary_data_n2_information_ext4, binary_data_n2_information_ext5, binary_data_n2_information_ext6, binary_data_n2_information_ext7, binary_data_n2_information_ext8, binary_data_n2_information_ext9, binary_data_n2_information_ext10, binary_data_n2_information_ext11, binary_data_n2_information_ext12, binary_data_n2_information_ext13, binary_data_n2_information_ext14, binary_data_n2_information_ext15, binary_data_n2_information_ext16);
}


void OAIIndividualUeContextDocumentApiRequest::uEContextTransferRequest(const QString& ue_context_idstr){
    qDebug() << "/namf-comm/v1/ue-contexts/{ueContextId}/transfer";
    connect(this, &OAIIndividualUeContextDocumentApiRequest::uEContextTransfer, handler.data(), &OAIIndividualUeContextDocumentApiHandler::uEContextTransfer);

    
    QString ue_context_id;
    fromStringValue(ue_context_idstr, ue_context_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIUeContextTransferReqData oaiue_context_transfer_req_data;
    ::OpenAPI::fromJsonValue(oaiue_context_transfer_req_data, obj);
    

    emit uEContextTransfer(ue_context_id, oaiue_context_transfer_req_data);
}



void OAIIndividualUeContextDocumentApiRequest::cancelRelocateUEContextResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::createUEContextResponse(const OAIUeContextCreatedData& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::eBIAssignmentResponse(const OAIAssignedEbiData& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::registrationStatusUpdateResponse(const OAIUeRegStatusUpdateRspData& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::releaseUEContextResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::relocateUEContextResponse(const OAIUeContextRelocatedData& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::uEContextTransferResponse(const OAIUeContextTransferRspData& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIIndividualUeContextDocumentApiRequest::cancelRelocateUEContextError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::createUEContextError(const OAIUeContextCreatedData& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::eBIAssignmentError(const OAIAssignedEbiData& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::registrationStatusUpdateError(const OAIUeRegStatusUpdateRspData& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::releaseUEContextError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::relocateUEContextError(const OAIUeContextRelocatedData& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::uEContextTransferError(const OAIUeContextTransferRspData& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIIndividualUeContextDocumentApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIIndividualUeContextDocumentApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}