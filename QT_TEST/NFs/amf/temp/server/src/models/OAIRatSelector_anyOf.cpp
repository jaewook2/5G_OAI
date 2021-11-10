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

#include "OAIRatSelector_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRatSelector_anyOf::OAIRatSelector_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRatSelector_anyOf::OAIRatSelector_anyOf() {
    this->initializeModel();
}

OAIRatSelector_anyOf::~OAIRatSelector_anyOf() {}

void OAIRatSelector_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIRatSelector_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIRatSelector_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("E-UTRA", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRatSelector_anyOf::E_UTRA;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NR", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRatSelector_anyOf::NR;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIRatSelector_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIRatSelector_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIRatSelector_anyOf::E_UTRA:
            val = "E-UTRA";
            break;
        case eOAIRatSelector_anyOf::NR:
            val = "NR";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIRatSelector_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIRatSelector_anyOf::eOAIRatSelector_anyOf OAIRatSelector_anyOf::getValue() const {
    return m_value;
}

void OAIRatSelector_anyOf::setValue(const OAIRatSelector_anyOf::eOAIRatSelector_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIRatSelector_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIRatSelector_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI