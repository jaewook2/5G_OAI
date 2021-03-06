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

#include "OAITrafficProfile_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITrafficProfile_anyOf::OAITrafficProfile_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITrafficProfile_anyOf::OAITrafficProfile_anyOf() {
    this->initializeModel();
}

OAITrafficProfile_anyOf::~OAITrafficProfile_anyOf() {}

void OAITrafficProfile_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAITrafficProfile_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAITrafficProfile_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("SINGLE_TRANS_UL", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrafficProfile_anyOf::SINGLE_TRANS_UL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SINGLE_TRANS_DL", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrafficProfile_anyOf::SINGLE_TRANS_DL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DUAL_TRANS_UL_FIRST", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrafficProfile_anyOf::DUAL_TRANS_UL_FIRST;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DUAL_TRANS_DL_FIRST", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrafficProfile_anyOf::DUAL_TRANS_DL_FIRST;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MULTI_TRANS", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrafficProfile_anyOf::MULTI_TRANS;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAITrafficProfile_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAITrafficProfile_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAITrafficProfile_anyOf::SINGLE_TRANS_UL:
            val = "SINGLE_TRANS_UL";
            break;
        case eOAITrafficProfile_anyOf::SINGLE_TRANS_DL:
            val = "SINGLE_TRANS_DL";
            break;
        case eOAITrafficProfile_anyOf::DUAL_TRANS_UL_FIRST:
            val = "DUAL_TRANS_UL_FIRST";
            break;
        case eOAITrafficProfile_anyOf::DUAL_TRANS_DL_FIRST:
            val = "DUAL_TRANS_DL_FIRST";
            break;
        case eOAITrafficProfile_anyOf::MULTI_TRANS:
            val = "MULTI_TRANS";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAITrafficProfile_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAITrafficProfile_anyOf::eOAITrafficProfile_anyOf OAITrafficProfile_anyOf::getValue() const {
    return m_value;
}

void OAITrafficProfile_anyOf::setValue(const OAITrafficProfile_anyOf::eOAITrafficProfile_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAITrafficProfile_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAITrafficProfile_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
