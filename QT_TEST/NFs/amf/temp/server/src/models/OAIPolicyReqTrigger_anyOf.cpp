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

#include "OAIPolicyReqTrigger_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPolicyReqTrigger_anyOf::OAIPolicyReqTrigger_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPolicyReqTrigger_anyOf::OAIPolicyReqTrigger_anyOf() {
    this->initializeModel();
}

OAIPolicyReqTrigger_anyOf::~OAIPolicyReqTrigger_anyOf() {}

void OAIPolicyReqTrigger_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIPolicyReqTrigger_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIPolicyReqTrigger_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("LOCATION_CHANGE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPolicyReqTrigger_anyOf::LOCATION_CHANGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PRA_CHANGE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPolicyReqTrigger_anyOf::PRA_CHANGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SARI_CHANGE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPolicyReqTrigger_anyOf::SARI_CHANGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RFSP_INDEX_CHANGE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPolicyReqTrigger_anyOf::RFSP_INDEX_CHANGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ALLOWED_NSSAI_CHANGE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPolicyReqTrigger_anyOf::ALLOWED_NSSAI_CHANGE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIPolicyReqTrigger_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIPolicyReqTrigger_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIPolicyReqTrigger_anyOf::LOCATION_CHANGE:
            val = "LOCATION_CHANGE";
            break;
        case eOAIPolicyReqTrigger_anyOf::PRA_CHANGE:
            val = "PRA_CHANGE";
            break;
        case eOAIPolicyReqTrigger_anyOf::SARI_CHANGE:
            val = "SARI_CHANGE";
            break;
        case eOAIPolicyReqTrigger_anyOf::RFSP_INDEX_CHANGE:
            val = "RFSP_INDEX_CHANGE";
            break;
        case eOAIPolicyReqTrigger_anyOf::ALLOWED_NSSAI_CHANGE:
            val = "ALLOWED_NSSAI_CHANGE";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIPolicyReqTrigger_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIPolicyReqTrigger_anyOf::eOAIPolicyReqTrigger_anyOf OAIPolicyReqTrigger_anyOf::getValue() const {
    return m_value;
}

void OAIPolicyReqTrigger_anyOf::setValue(const OAIPolicyReqTrigger_anyOf::eOAIPolicyReqTrigger_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIPolicyReqTrigger_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIPolicyReqTrigger_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI