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

#include "OAILocationFilter_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILocationFilter_anyOf::OAILocationFilter_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILocationFilter_anyOf::OAILocationFilter_anyOf() {
    this->initializeModel();
}

OAILocationFilter_anyOf::~OAILocationFilter_anyOf() {}

void OAILocationFilter_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAILocationFilter_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAILocationFilter_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TAI", Qt::CaseInsensitive) == 0) {
        m_value = eOAILocationFilter_anyOf::TAI;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CELL_ID", Qt::CaseInsensitive) == 0) {
        m_value = eOAILocationFilter_anyOf::CELL_ID;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("N3IWF", Qt::CaseInsensitive) == 0) {
        m_value = eOAILocationFilter_anyOf::N3IWF;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UE_IP", Qt::CaseInsensitive) == 0) {
        m_value = eOAILocationFilter_anyOf::UE_IP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UDP_PORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAILocationFilter_anyOf::UDP_PORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TNAP_ID", Qt::CaseInsensitive) == 0) {
        m_value = eOAILocationFilter_anyOf::TNAP_ID;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("GLI", Qt::CaseInsensitive) == 0) {
        m_value = eOAILocationFilter_anyOf::GLI;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TWAP_ID", Qt::CaseInsensitive) == 0) {
        m_value = eOAILocationFilter_anyOf::TWAP_ID;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAILocationFilter_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAILocationFilter_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAILocationFilter_anyOf::TAI:
            val = "TAI";
            break;
        case eOAILocationFilter_anyOf::CELL_ID:
            val = "CELL_ID";
            break;
        case eOAILocationFilter_anyOf::N3IWF:
            val = "N3IWF";
            break;
        case eOAILocationFilter_anyOf::UE_IP:
            val = "UE_IP";
            break;
        case eOAILocationFilter_anyOf::UDP_PORT:
            val = "UDP_PORT";
            break;
        case eOAILocationFilter_anyOf::TNAP_ID:
            val = "TNAP_ID";
            break;
        case eOAILocationFilter_anyOf::GLI:
            val = "GLI";
            break;
        case eOAILocationFilter_anyOf::TWAP_ID:
            val = "TWAP_ID";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAILocationFilter_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAILocationFilter_anyOf::eOAILocationFilter_anyOf OAILocationFilter_anyOf::getValue() const {
    return m_value;
}

void OAILocationFilter_anyOf::setValue(const OAILocationFilter_anyOf::eOAILocationFilter_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAILocationFilter_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAILocationFilter_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI