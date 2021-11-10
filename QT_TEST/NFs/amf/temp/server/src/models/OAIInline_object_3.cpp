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

#include "OAIInline_object_3.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIInline_object_3::OAIInline_object_3(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInline_object_3::OAIInline_object_3() {
    this->initializeModel();
}

OAIInline_object_3::~OAIInline_object_3() {}

void OAIInline_object_3::initializeModel() {

    m_json_data_isSet = false;
    m_json_data_isValid = false;

    m_binary_data_n1_message_isSet = false;
    m_binary_data_n1_message_isValid = false;
}

void OAIInline_object_3::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInline_object_3::fromJsonObject(QJsonObject json) {

    m_json_data_isValid = ::OpenAPI::fromJsonValue(json_data, json[QString("jsonData")]);
    m_json_data_isSet = !json[QString("jsonData")].isNull() && m_json_data_isValid;

    m_binary_data_n1_message_isValid = ::OpenAPI::fromJsonValue(binary_data_n1_message, json[QString("binaryDataN1Message")]);
    m_binary_data_n1_message_isSet = !json[QString("binaryDataN1Message")].isNull() && m_binary_data_n1_message_isValid;
}

QString OAIInline_object_3::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInline_object_3::asJsonObject() const {
    QJsonObject obj;
    if (json_data.isSet()) {
        obj.insert(QString("jsonData"), ::OpenAPI::toJsonValue(json_data));
    }
    if (binary_data_n1_message.isSet()) {
        obj.insert(QString("binaryDataN1Message"), ::OpenAPI::toJsonValue(binary_data_n1_message));
    }
    return obj;
}

OAIN1MessageNotification OAIInline_object_3::getJsonData() const {
    return json_data;
}
void OAIInline_object_3::setJsonData(const OAIN1MessageNotification &json_data) {
    this->json_data = json_data;
    this->m_json_data_isSet = true;
}

bool OAIInline_object_3::is_json_data_Set() const{
    return m_json_data_isSet;
}

bool OAIInline_object_3::is_json_data_Valid() const{
    return m_json_data_isValid;
}

OAIHttpFileElement OAIInline_object_3::getBinaryDataN1Message() const {
    return binary_data_n1_message;
}
void OAIInline_object_3::setBinaryDataN1Message(const OAIHttpFileElement &binary_data_n1_message) {
    this->binary_data_n1_message = binary_data_n1_message;
    this->m_binary_data_n1_message_isSet = true;
}

bool OAIInline_object_3::is_binary_data_n1_message_Set() const{
    return m_binary_data_n1_message_isSet;
}

bool OAIInline_object_3::is_binary_data_n1_message_Valid() const{
    return m_binary_data_n1_message_isValid;
}

bool OAIInline_object_3::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (json_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n1_message.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInline_object_3::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI