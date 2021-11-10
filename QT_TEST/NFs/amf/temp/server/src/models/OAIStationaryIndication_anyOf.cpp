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

#include "OAIStationaryIndication_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIStationaryIndication_anyOf::OAIStationaryIndication_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStationaryIndication_anyOf::OAIStationaryIndication_anyOf() {
    this->initializeModel();
}

OAIStationaryIndication_anyOf::~OAIStationaryIndication_anyOf() {}

void OAIStationaryIndication_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIStationaryIndication_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIStationaryIndication_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("STATIONARY", Qt::CaseInsensitive) == 0) {
        m_value = eOAIStationaryIndication_anyOf::STATIONARY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MOBILE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIStationaryIndication_anyOf::MOBILE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIStationaryIndication_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIStationaryIndication_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIStationaryIndication_anyOf::STATIONARY:
            val = "STATIONARY";
            break;
        case eOAIStationaryIndication_anyOf::MOBILE:
            val = "MOBILE";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIStationaryIndication_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIStationaryIndication_anyOf::eOAIStationaryIndication_anyOf OAIStationaryIndication_anyOf::getValue() const {
    return m_value;
}

void OAIStationaryIndication_anyOf::setValue(const OAIStationaryIndication_anyOf::eOAIStationaryIndication_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIStationaryIndication_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIStationaryIndication_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI