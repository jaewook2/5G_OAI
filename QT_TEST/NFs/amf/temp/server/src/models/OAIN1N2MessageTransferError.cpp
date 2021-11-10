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

#include "OAIN1N2MessageTransferError.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIN1N2MessageTransferError::OAIN1N2MessageTransferError(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIN1N2MessageTransferError::OAIN1N2MessageTransferError() {
    this->initializeModel();
}

OAIN1N2MessageTransferError::~OAIN1N2MessageTransferError() {}

void OAIN1N2MessageTransferError::initializeModel() {

    m_error_isSet = false;
    m_error_isValid = false;

    m_err_info_isSet = false;
    m_err_info_isValid = false;
}

void OAIN1N2MessageTransferError::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIN1N2MessageTransferError::fromJsonObject(QJsonObject json) {

    m_error_isValid = ::OpenAPI::fromJsonValue(error, json[QString("error")]);
    m_error_isSet = !json[QString("error")].isNull() && m_error_isValid;

    m_err_info_isValid = ::OpenAPI::fromJsonValue(err_info, json[QString("errInfo")]);
    m_err_info_isSet = !json[QString("errInfo")].isNull() && m_err_info_isValid;
}

QString OAIN1N2MessageTransferError::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIN1N2MessageTransferError::asJsonObject() const {
    QJsonObject obj;
    if (error.isSet()) {
        obj.insert(QString("error"), ::OpenAPI::toJsonValue(error));
    }
    if (err_info.isSet()) {
        obj.insert(QString("errInfo"), ::OpenAPI::toJsonValue(err_info));
    }
    return obj;
}

OAIProblemDetails OAIN1N2MessageTransferError::getError() const {
    return error;
}
void OAIN1N2MessageTransferError::setError(const OAIProblemDetails &error) {
    this->error = error;
    this->m_error_isSet = true;
}

bool OAIN1N2MessageTransferError::is_error_Set() const{
    return m_error_isSet;
}

bool OAIN1N2MessageTransferError::is_error_Valid() const{
    return m_error_isValid;
}

OAIN1N2MsgTxfrErrDetail OAIN1N2MessageTransferError::getErrInfo() const {
    return err_info;
}
void OAIN1N2MessageTransferError::setErrInfo(const OAIN1N2MsgTxfrErrDetail &err_info) {
    this->err_info = err_info;
    this->m_err_info_isSet = true;
}

bool OAIN1N2MessageTransferError::is_err_info_Set() const{
    return m_err_info_isSet;
}

bool OAIN1N2MessageTransferError::is_err_info_Valid() const{
    return m_err_info_isValid;
}

bool OAIN1N2MessageTransferError::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (error.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (err_info.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIN1N2MessageTransferError::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_error_isValid && true;
}

} // namespace OpenAPI