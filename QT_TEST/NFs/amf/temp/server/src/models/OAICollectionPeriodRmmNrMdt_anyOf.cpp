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

#include "OAICollectionPeriodRmmNrMdt_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICollectionPeriodRmmNrMdt_anyOf::OAICollectionPeriodRmmNrMdt_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICollectionPeriodRmmNrMdt_anyOf::OAICollectionPeriodRmmNrMdt_anyOf() {
    this->initializeModel();
}

OAICollectionPeriodRmmNrMdt_anyOf::~OAICollectionPeriodRmmNrMdt_anyOf() {}

void OAICollectionPeriodRmmNrMdt_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAICollectionPeriodRmmNrMdt_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAICollectionPeriodRmmNrMdt_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("1024", Qt::CaseInsensitive) == 0) {
        m_value = eOAICollectionPeriodRmmNrMdt_anyOf::_1024;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2048", Qt::CaseInsensitive) == 0) {
        m_value = eOAICollectionPeriodRmmNrMdt_anyOf::_2048;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("5120", Qt::CaseInsensitive) == 0) {
        m_value = eOAICollectionPeriodRmmNrMdt_anyOf::_5120;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("10240", Qt::CaseInsensitive) == 0) {
        m_value = eOAICollectionPeriodRmmNrMdt_anyOf::_10240;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("60000", Qt::CaseInsensitive) == 0) {
        m_value = eOAICollectionPeriodRmmNrMdt_anyOf::_60000;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAICollectionPeriodRmmNrMdt_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAICollectionPeriodRmmNrMdt_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAICollectionPeriodRmmNrMdt_anyOf::_1024:
            val = "1024";
            break;
        case eOAICollectionPeriodRmmNrMdt_anyOf::_2048:
            val = "2048";
            break;
        case eOAICollectionPeriodRmmNrMdt_anyOf::_5120:
            val = "5120";
            break;
        case eOAICollectionPeriodRmmNrMdt_anyOf::_10240:
            val = "10240";
            break;
        case eOAICollectionPeriodRmmNrMdt_anyOf::_60000:
            val = "60000";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAICollectionPeriodRmmNrMdt_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAICollectionPeriodRmmNrMdt_anyOf::eOAICollectionPeriodRmmNrMdt_anyOf OAICollectionPeriodRmmNrMdt_anyOf::getValue() const {
    return m_value;
}

void OAICollectionPeriodRmmNrMdt_anyOf::setValue(const OAICollectionPeriodRmmNrMdt_anyOf::eOAICollectionPeriodRmmNrMdt_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAICollectionPeriodRmmNrMdt_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAICollectionPeriodRmmNrMdt_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI