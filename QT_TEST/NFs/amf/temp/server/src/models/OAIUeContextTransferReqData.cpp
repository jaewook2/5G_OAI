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

#include "OAIUeContextTransferReqData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUeContextTransferReqData::OAIUeContextTransferReqData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUeContextTransferReqData::OAIUeContextTransferReqData() {
    this->initializeModel();
}

OAIUeContextTransferReqData::~OAIUeContextTransferReqData() {}

void OAIUeContextTransferReqData::initializeModel() {

    m_reason_isSet = false;
    m_reason_isValid = false;

    m_access_type_isSet = false;
    m_access_type_isValid = false;

    m_plmn_id_isSet = false;
    m_plmn_id_isValid = false;

    m_reg_request_isSet = false;
    m_reg_request_isValid = false;

    m_supported_features_isSet = false;
    m_supported_features_isValid = false;
}

void OAIUeContextTransferReqData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUeContextTransferReqData::fromJsonObject(QJsonObject json) {

    m_reason_isValid = ::OpenAPI::fromJsonValue(reason, json[QString("reason")]);
    m_reason_isSet = !json[QString("reason")].isNull() && m_reason_isValid;

    m_access_type_isValid = ::OpenAPI::fromJsonValue(access_type, json[QString("accessType")]);
    m_access_type_isSet = !json[QString("accessType")].isNull() && m_access_type_isValid;

    m_plmn_id_isValid = ::OpenAPI::fromJsonValue(plmn_id, json[QString("plmnId")]);
    m_plmn_id_isSet = !json[QString("plmnId")].isNull() && m_plmn_id_isValid;

    m_reg_request_isValid = ::OpenAPI::fromJsonValue(reg_request, json[QString("regRequest")]);
    m_reg_request_isSet = !json[QString("regRequest")].isNull() && m_reg_request_isValid;

    m_supported_features_isValid = ::OpenAPI::fromJsonValue(supported_features, json[QString("supportedFeatures")]);
    m_supported_features_isSet = !json[QString("supportedFeatures")].isNull() && m_supported_features_isValid;
}

QString OAIUeContextTransferReqData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUeContextTransferReqData::asJsonObject() const {
    QJsonObject obj;
    if (reason.isSet()) {
        obj.insert(QString("reason"), ::OpenAPI::toJsonValue(reason));
    }
    if (access_type.isSet()) {
        obj.insert(QString("accessType"), ::OpenAPI::toJsonValue(access_type));
    }
    if (plmn_id.isSet()) {
        obj.insert(QString("plmnId"), ::OpenAPI::toJsonValue(plmn_id));
    }
    if (reg_request.isSet()) {
        obj.insert(QString("regRequest"), ::OpenAPI::toJsonValue(reg_request));
    }
    if (m_supported_features_isSet) {
        obj.insert(QString("supportedFeatures"), ::OpenAPI::toJsonValue(supported_features));
    }
    return obj;
}

OAITransferReason OAIUeContextTransferReqData::getReason() const {
    return reason;
}
void OAIUeContextTransferReqData::setReason(const OAITransferReason &reason) {
    this->reason = reason;
    this->m_reason_isSet = true;
}

bool OAIUeContextTransferReqData::is_reason_Set() const{
    return m_reason_isSet;
}

bool OAIUeContextTransferReqData::is_reason_Valid() const{
    return m_reason_isValid;
}

OAIAccessType OAIUeContextTransferReqData::getAccessType() const {
    return access_type;
}
void OAIUeContextTransferReqData::setAccessType(const OAIAccessType &access_type) {
    this->access_type = access_type;
    this->m_access_type_isSet = true;
}

bool OAIUeContextTransferReqData::is_access_type_Set() const{
    return m_access_type_isSet;
}

bool OAIUeContextTransferReqData::is_access_type_Valid() const{
    return m_access_type_isValid;
}

OAIPlmnId OAIUeContextTransferReqData::getPlmnId() const {
    return plmn_id;
}
void OAIUeContextTransferReqData::setPlmnId(const OAIPlmnId &plmn_id) {
    this->plmn_id = plmn_id;
    this->m_plmn_id_isSet = true;
}

bool OAIUeContextTransferReqData::is_plmn_id_Set() const{
    return m_plmn_id_isSet;
}

bool OAIUeContextTransferReqData::is_plmn_id_Valid() const{
    return m_plmn_id_isValid;
}

OAIN1MessageContainer OAIUeContextTransferReqData::getRegRequest() const {
    return reg_request;
}
void OAIUeContextTransferReqData::setRegRequest(const OAIN1MessageContainer &reg_request) {
    this->reg_request = reg_request;
    this->m_reg_request_isSet = true;
}

bool OAIUeContextTransferReqData::is_reg_request_Set() const{
    return m_reg_request_isSet;
}

bool OAIUeContextTransferReqData::is_reg_request_Valid() const{
    return m_reg_request_isValid;
}

QString OAIUeContextTransferReqData::getSupportedFeatures() const {
    return supported_features;
}
void OAIUeContextTransferReqData::setSupportedFeatures(const QString &supported_features) {
    this->supported_features = supported_features;
    this->m_supported_features_isSet = true;
}

bool OAIUeContextTransferReqData::is_supported_features_Set() const{
    return m_supported_features_isSet;
}

bool OAIUeContextTransferReqData::is_supported_features_Valid() const{
    return m_supported_features_isValid;
}

bool OAIUeContextTransferReqData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (reason.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (access_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (plmn_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (reg_request.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_supported_features_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUeContextTransferReqData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_reason_isValid && m_access_type_isValid && true;
}

} // namespace OpenAPI