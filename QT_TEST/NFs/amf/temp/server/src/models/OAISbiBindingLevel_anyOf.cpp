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

#include "OAISbiBindingLevel_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISbiBindingLevel_anyOf::OAISbiBindingLevel_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISbiBindingLevel_anyOf::OAISbiBindingLevel_anyOf() {
    this->initializeModel();
}

OAISbiBindingLevel_anyOf::~OAISbiBindingLevel_anyOf() {}

void OAISbiBindingLevel_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAISbiBindingLevel_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAISbiBindingLevel_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("NF_INSTANCE_BINDING", Qt::CaseInsensitive) == 0) {
        m_value = eOAISbiBindingLevel_anyOf::INSTANCE_BINDING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NF_SET_BINDING", Qt::CaseInsensitive) == 0) {
        m_value = eOAISbiBindingLevel_anyOf::SET_BINDING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NF_SERVICE_SET_BINDING", Qt::CaseInsensitive) == 0) {
        m_value = eOAISbiBindingLevel_anyOf::SERVICE_SET_BINDING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NF_SERVICE_INSTANCE_BINDING", Qt::CaseInsensitive) == 0) {
        m_value = eOAISbiBindingLevel_anyOf::SERVICE_INSTANCE_BINDING;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAISbiBindingLevel_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAISbiBindingLevel_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAISbiBindingLevel_anyOf::INSTANCE_BINDING:
            val = "NF_INSTANCE_BINDING";
            break;
        case eOAISbiBindingLevel_anyOf::SET_BINDING:
            val = "NF_SET_BINDING";
            break;
        case eOAISbiBindingLevel_anyOf::SERVICE_SET_BINDING:
            val = "NF_SERVICE_SET_BINDING";
            break;
        case eOAISbiBindingLevel_anyOf::SERVICE_INSTANCE_BINDING:
            val = "NF_SERVICE_INSTANCE_BINDING";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAISbiBindingLevel_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAISbiBindingLevel_anyOf::eOAISbiBindingLevel_anyOf OAISbiBindingLevel_anyOf::getValue() const {
    return m_value;
}

void OAISbiBindingLevel_anyOf::setValue(const OAISbiBindingLevel_anyOf::eOAISbiBindingLevel_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAISbiBindingLevel_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAISbiBindingLevel_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
