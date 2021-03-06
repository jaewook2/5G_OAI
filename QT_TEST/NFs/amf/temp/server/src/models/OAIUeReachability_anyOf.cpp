/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.1.5
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUeReachability_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUeReachability_anyOf::OAIUeReachability_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUeReachability_anyOf::OAIUeReachability_anyOf() {
    this->initializeModel();
}

OAIUeReachability_anyOf::~OAIUeReachability_anyOf() {}

void OAIUeReachability_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIUeReachability_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIUeReachability_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("UNREACHABLE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUeReachability_anyOf::UNREACHABLE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("REACHABLE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUeReachability_anyOf::REACHABLE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("REGULATORY_ONLY", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUeReachability_anyOf::REGULATORY_ONLY;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIUeReachability_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIUeReachability_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIUeReachability_anyOf::UNREACHABLE:
            val = "UNREACHABLE";
            break;
        case eOAIUeReachability_anyOf::REACHABLE:
            val = "REACHABLE";
            break;
        case eOAIUeReachability_anyOf::REGULATORY_ONLY:
            val = "REGULATORY_ONLY";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIUeReachability_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIUeReachability_anyOf::eOAIUeReachability_anyOf OAIUeReachability_anyOf::getValue() const {
    return m_value;
}

void OAIUeReachability_anyOf::setValue(const OAIUeReachability_anyOf::eOAIUeReachability_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIUeReachability_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIUeReachability_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
