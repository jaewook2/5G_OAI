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

#include "OAIUeContextCancelRelocateData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUeContextCancelRelocateData::OAIUeContextCancelRelocateData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUeContextCancelRelocateData::OAIUeContextCancelRelocateData() {
    this->initializeModel();
}

OAIUeContextCancelRelocateData::~OAIUeContextCancelRelocateData() {}

void OAIUeContextCancelRelocateData::initializeModel() {

    m_supi_isSet = false;
    m_supi_isValid = false;

    m_relocation_cancel_request_isSet = false;
    m_relocation_cancel_request_isValid = false;
}

void OAIUeContextCancelRelocateData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUeContextCancelRelocateData::fromJsonObject(QJsonObject json) {

    m_supi_isValid = ::OpenAPI::fromJsonValue(supi, json[QString("supi")]);
    m_supi_isSet = !json[QString("supi")].isNull() && m_supi_isValid;

    m_relocation_cancel_request_isValid = ::OpenAPI::fromJsonValue(relocation_cancel_request, json[QString("relocationCancelRequest")]);
    m_relocation_cancel_request_isSet = !json[QString("relocationCancelRequest")].isNull() && m_relocation_cancel_request_isValid;
}

QString OAIUeContextCancelRelocateData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUeContextCancelRelocateData::asJsonObject() const {
    QJsonObject obj;
    if (m_supi_isSet) {
        obj.insert(QString("supi"), ::OpenAPI::toJsonValue(supi));
    }
    if (relocation_cancel_request.isSet()) {
        obj.insert(QString("relocationCancelRequest"), ::OpenAPI::toJsonValue(relocation_cancel_request));
    }
    return obj;
}

QString OAIUeContextCancelRelocateData::getSupi() const {
    return supi;
}
void OAIUeContextCancelRelocateData::setSupi(const QString &supi) {
    this->supi = supi;
    this->m_supi_isSet = true;
}

bool OAIUeContextCancelRelocateData::is_supi_Set() const{
    return m_supi_isSet;
}

bool OAIUeContextCancelRelocateData::is_supi_Valid() const{
    return m_supi_isValid;
}

OAIRefToBinaryData OAIUeContextCancelRelocateData::getRelocationCancelRequest() const {
    return relocation_cancel_request;
}
void OAIUeContextCancelRelocateData::setRelocationCancelRequest(const OAIRefToBinaryData &relocation_cancel_request) {
    this->relocation_cancel_request = relocation_cancel_request;
    this->m_relocation_cancel_request_isSet = true;
}

bool OAIUeContextCancelRelocateData::is_relocation_cancel_request_Set() const{
    return m_relocation_cancel_request_isSet;
}

bool OAIUeContextCancelRelocateData::is_relocation_cancel_request_Valid() const{
    return m_relocation_cancel_request_isValid;
}

bool OAIUeContextCancelRelocateData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_supi_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (relocation_cancel_request.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUeContextCancelRelocateData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_relocation_cancel_request_isValid && true;
}

} // namespace OpenAPI