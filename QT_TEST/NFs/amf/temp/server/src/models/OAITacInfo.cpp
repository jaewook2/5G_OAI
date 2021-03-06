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

#include "OAITacInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITacInfo::OAITacInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITacInfo::OAITacInfo() {
    this->initializeModel();
}

OAITacInfo::~OAITacInfo() {}

void OAITacInfo::initializeModel() {

    m_tac_list_isSet = false;
    m_tac_list_isValid = false;
}

void OAITacInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITacInfo::fromJsonObject(QJsonObject json) {

    m_tac_list_isValid = ::OpenAPI::fromJsonValue(tac_list, json[QString("tacList")]);
    m_tac_list_isSet = !json[QString("tacList")].isNull() && m_tac_list_isValid;
}

QString OAITacInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITacInfo::asJsonObject() const {
    QJsonObject obj;
    if (tac_list.size() > 0) {
        obj.insert(QString("tacList"), ::OpenAPI::toJsonValue(tac_list));
    }
    return obj;
}

QList<QString> OAITacInfo::getTacList() const {
    return tac_list;
}
void OAITacInfo::setTacList(const QList<QString> &tac_list) {
    this->tac_list = tac_list;
    this->m_tac_list_isSet = true;
}

bool OAITacInfo::is_tac_list_Set() const{
    return m_tac_list_isSet;
}

bool OAITacInfo::is_tac_list_Valid() const{
    return m_tac_list_isValid;
}

bool OAITacInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (tac_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITacInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_tac_list_isValid && true;
}

} // namespace OpenAPI
