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

#include "OAIEpsNasIntegrityAlgorithm_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEpsNasIntegrityAlgorithm_anyOf::OAIEpsNasIntegrityAlgorithm_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEpsNasIntegrityAlgorithm_anyOf::OAIEpsNasIntegrityAlgorithm_anyOf() {
    this->initializeModel();
}

OAIEpsNasIntegrityAlgorithm_anyOf::~OAIEpsNasIntegrityAlgorithm_anyOf() {}

void OAIEpsNasIntegrityAlgorithm_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIEpsNasIntegrityAlgorithm_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIEpsNasIntegrityAlgorithm_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("EIA0", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEpsNasIntegrityAlgorithm_anyOf::EIA0;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EIA1", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEpsNasIntegrityAlgorithm_anyOf::EIA1;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EIA2", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEpsNasIntegrityAlgorithm_anyOf::EIA2;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EIA3", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEpsNasIntegrityAlgorithm_anyOf::EIA3;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIEpsNasIntegrityAlgorithm_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIEpsNasIntegrityAlgorithm_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIEpsNasIntegrityAlgorithm_anyOf::EIA0:
            val = "EIA0";
            break;
        case eOAIEpsNasIntegrityAlgorithm_anyOf::EIA1:
            val = "EIA1";
            break;
        case eOAIEpsNasIntegrityAlgorithm_anyOf::EIA2:
            val = "EIA2";
            break;
        case eOAIEpsNasIntegrityAlgorithm_anyOf::EIA3:
            val = "EIA3";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIEpsNasIntegrityAlgorithm_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIEpsNasIntegrityAlgorithm_anyOf::eOAIEpsNasIntegrityAlgorithm_anyOf OAIEpsNasIntegrityAlgorithm_anyOf::getValue() const {
    return m_value;
}

void OAIEpsNasIntegrityAlgorithm_anyOf::setValue(const OAIEpsNasIntegrityAlgorithm_anyOf::eOAIEpsNasIntegrityAlgorithm_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIEpsNasIntegrityAlgorithm_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIEpsNasIntegrityAlgorithm_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
