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

#include "OAIAllowedNssai.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAllowedNssai::OAIAllowedNssai(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAllowedNssai::OAIAllowedNssai() {
    this->initializeModel();
}

OAIAllowedNssai::~OAIAllowedNssai() {}

void OAIAllowedNssai::initializeModel() {

    m_allowed_snssai_list_isSet = false;
    m_allowed_snssai_list_isValid = false;

    m_access_type_isSet = false;
    m_access_type_isValid = false;
}

void OAIAllowedNssai::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAllowedNssai::fromJsonObject(QJsonObject json) {

    m_allowed_snssai_list_isValid = ::OpenAPI::fromJsonValue(allowed_snssai_list, json[QString("allowedSnssaiList")]);
    m_allowed_snssai_list_isSet = !json[QString("allowedSnssaiList")].isNull() && m_allowed_snssai_list_isValid;

    m_access_type_isValid = ::OpenAPI::fromJsonValue(access_type, json[QString("accessType")]);
    m_access_type_isSet = !json[QString("accessType")].isNull() && m_access_type_isValid;
}

QString OAIAllowedNssai::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAllowedNssai::asJsonObject() const {
    QJsonObject obj;
    if (allowed_snssai_list.size() > 0) {
        obj.insert(QString("allowedSnssaiList"), ::OpenAPI::toJsonValue(allowed_snssai_list));
    }
    if (access_type.isSet()) {
        obj.insert(QString("accessType"), ::OpenAPI::toJsonValue(access_type));
    }
    return obj;
}

QList<OAIAllowedSnssai> OAIAllowedNssai::getAllowedSnssaiList() const {
    return allowed_snssai_list;
}
void OAIAllowedNssai::setAllowedSnssaiList(const QList<OAIAllowedSnssai> &allowed_snssai_list) {
    this->allowed_snssai_list = allowed_snssai_list;
    this->m_allowed_snssai_list_isSet = true;
}

bool OAIAllowedNssai::is_allowed_snssai_list_Set() const{
    return m_allowed_snssai_list_isSet;
}

bool OAIAllowedNssai::is_allowed_snssai_list_Valid() const{
    return m_allowed_snssai_list_isValid;
}

OAIAccessType OAIAllowedNssai::getAccessType() const {
    return access_type;
}
void OAIAllowedNssai::setAccessType(const OAIAccessType &access_type) {
    this->access_type = access_type;
    this->m_access_type_isSet = true;
}

bool OAIAllowedNssai::is_access_type_Set() const{
    return m_access_type_isSet;
}

bool OAIAllowedNssai::is_access_type_Valid() const{
    return m_access_type_isValid;
}

bool OAIAllowedNssai::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (allowed_snssai_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (access_type.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAllowedNssai::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_allowed_snssai_list_isValid && m_access_type_isValid && true;
}

} // namespace OpenAPI