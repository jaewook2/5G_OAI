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

#include "OAIScType_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIScType_anyOf::OAIScType_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScType_anyOf::OAIScType_anyOf() {
    this->initializeModel();
}

OAIScType_anyOf::~OAIScType_anyOf() {}

void OAIScType_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIScType_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIScType_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("NATIVE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIScType_anyOf::NATIVE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MAPPED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIScType_anyOf::MAPPED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIScType_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIScType_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIScType_anyOf::NATIVE:
            val = "NATIVE";
            break;
        case eOAIScType_anyOf::MAPPED:
            val = "MAPPED";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIScType_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIScType_anyOf::eOAIScType_anyOf OAIScType_anyOf::getValue() const {
    return m_value;
}

void OAIScType_anyOf::setValue(const OAIScType_anyOf::eOAIScType_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIScType_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIScType_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI