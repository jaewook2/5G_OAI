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

#include "OAICagData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICagData::OAICagData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICagData::OAICagData() {
    this->initializeModel();
}

OAICagData::~OAICagData() {}

void OAICagData::initializeModel() {

    m_cag_infos_isSet = false;
    m_cag_infos_isValid = false;

    m_provisioning_time_isSet = false;
    m_provisioning_time_isValid = false;
}

void OAICagData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICagData::fromJsonObject(QJsonObject json) {

    m_cag_infos_isValid = ::OpenAPI::fromJsonValue(cag_infos, json[QString("cagInfos")]);
    m_cag_infos_isSet = !json[QString("cagInfos")].isNull() && m_cag_infos_isValid;

    m_provisioning_time_isValid = ::OpenAPI::fromJsonValue(provisioning_time, json[QString("provisioningTime")]);
    m_provisioning_time_isSet = !json[QString("provisioningTime")].isNull() && m_provisioning_time_isValid;
}

QString OAICagData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICagData::asJsonObject() const {
    QJsonObject obj;
    if (cag_infos.size() > 0) {
        obj.insert(QString("cagInfos"), ::OpenAPI::toJsonValue(cag_infos));
    }
    if (m_provisioning_time_isSet) {
        obj.insert(QString("provisioningTime"), ::OpenAPI::toJsonValue(provisioning_time));
    }
    return obj;
}

QMap<QString, OAICagInfo> OAICagData::getCagInfos() const {
    return cag_infos;
}
void OAICagData::setCagInfos(const QMap<QString, OAICagInfo> &cag_infos) {
    this->cag_infos = cag_infos;
    this->m_cag_infos_isSet = true;
}

bool OAICagData::is_cag_infos_Set() const{
    return m_cag_infos_isSet;
}

bool OAICagData::is_cag_infos_Valid() const{
    return m_cag_infos_isValid;
}

QDateTime OAICagData::getProvisioningTime() const {
    return provisioning_time;
}
void OAICagData::setProvisioningTime(const QDateTime &provisioning_time) {
    this->provisioning_time = provisioning_time;
    this->m_provisioning_time_isSet = true;
}

bool OAICagData::is_provisioning_time_Set() const{
    return m_provisioning_time_isSet;
}

bool OAICagData::is_provisioning_time_Valid() const{
    return m_provisioning_time_isValid;
}

bool OAICagData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (cag_infos.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_provisioning_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICagData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_cag_infos_isValid && true;
}

} // namespace OpenAPI
