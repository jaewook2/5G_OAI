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

#include "OAIAreaOfValidity.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAreaOfValidity::OAIAreaOfValidity(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAreaOfValidity::OAIAreaOfValidity() {
    this->initializeModel();
}

OAIAreaOfValidity::~OAIAreaOfValidity() {}

void OAIAreaOfValidity::initializeModel() {

    m_tai_list_isSet = false;
    m_tai_list_isValid = false;
}

void OAIAreaOfValidity::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAreaOfValidity::fromJsonObject(QJsonObject json) {

    m_tai_list_isValid = ::OpenAPI::fromJsonValue(tai_list, json[QString("taiList")]);
    m_tai_list_isSet = !json[QString("taiList")].isNull() && m_tai_list_isValid;
}

QString OAIAreaOfValidity::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAreaOfValidity::asJsonObject() const {
    QJsonObject obj;
    if (tai_list.size() > 0) {
        obj.insert(QString("taiList"), ::OpenAPI::toJsonValue(tai_list));
    }
    return obj;
}

QList<OAITai> OAIAreaOfValidity::getTaiList() const {
    return tai_list;
}
void OAIAreaOfValidity::setTaiList(const QList<OAITai> &tai_list) {
    this->tai_list = tai_list;
    this->m_tai_list_isSet = true;
}

bool OAIAreaOfValidity::is_tai_list_Set() const{
    return m_tai_list_isSet;
}

bool OAIAreaOfValidity::is_tai_list_Valid() const{
    return m_tai_list_isValid;
}

bool OAIAreaOfValidity::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (tai_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAreaOfValidity::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_tai_list_isValid && true;
}

} // namespace OpenAPI