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

#include "OAICoreNetworkType_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICoreNetworkType_anyOf::OAICoreNetworkType_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICoreNetworkType_anyOf::OAICoreNetworkType_anyOf() {
    this->initializeModel();
}

OAICoreNetworkType_anyOf::~OAICoreNetworkType_anyOf() {}

void OAICoreNetworkType_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAICoreNetworkType_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAICoreNetworkType_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("5GC", Qt::CaseInsensitive) == 0) {
        m_value = eOAICoreNetworkType_anyOf::_5GC;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EPC", Qt::CaseInsensitive) == 0) {
        m_value = eOAICoreNetworkType_anyOf::EPC;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAICoreNetworkType_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAICoreNetworkType_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAICoreNetworkType_anyOf::_5GC:
            val = "5GC";
            break;
        case eOAICoreNetworkType_anyOf::EPC:
            val = "EPC";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAICoreNetworkType_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAICoreNetworkType_anyOf::eOAICoreNetworkType_anyOf OAICoreNetworkType_anyOf::getValue() const {
    return m_value;
}

void OAICoreNetworkType_anyOf::setValue(const OAICoreNetworkType_anyOf::eOAICoreNetworkType_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAICoreNetworkType_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAICoreNetworkType_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
