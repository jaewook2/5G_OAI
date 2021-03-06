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

#include "OAITransportProtocol_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITransportProtocol_anyOf::OAITransportProtocol_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITransportProtocol_anyOf::OAITransportProtocol_anyOf() {
    this->initializeModel();
}

OAITransportProtocol_anyOf::~OAITransportProtocol_anyOf() {}

void OAITransportProtocol_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAITransportProtocol_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAITransportProtocol_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("UDP", Qt::CaseInsensitive) == 0) {
        m_value = eOAITransportProtocol_anyOf::UDP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TCP", Qt::CaseInsensitive) == 0) {
        m_value = eOAITransportProtocol_anyOf::TCP;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAITransportProtocol_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAITransportProtocol_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAITransportProtocol_anyOf::UDP:
            val = "UDP";
            break;
        case eOAITransportProtocol_anyOf::TCP:
            val = "TCP";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAITransportProtocol_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAITransportProtocol_anyOf::eOAITransportProtocol_anyOf OAITransportProtocol_anyOf::getValue() const {
    return m_value;
}

void OAITransportProtocol_anyOf::setValue(const OAITransportProtocol_anyOf::eOAITransportProtocol_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAITransportProtocol_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAITransportProtocol_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
