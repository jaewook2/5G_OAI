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

#include "OAIAmfEventType_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAmfEventType_anyOf::OAIAmfEventType_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAmfEventType_anyOf::OAIAmfEventType_anyOf() {
    this->initializeModel();
}

OAIAmfEventType_anyOf::~OAIAmfEventType_anyOf() {}

void OAIAmfEventType_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIAmfEventType_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIAmfEventType_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("LOCATION_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::LOCATION_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PRESENCE_IN_AOI_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::PRESENCE_IN_AOI_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TIMEZONE_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::TIMEZONE_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ACCESS_TYPE_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::ACCESS_TYPE_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("REGISTRATION_STATE_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::REGISTRATION_STATE_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CONNECTIVITY_STATE_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::CONNECTIVITY_STATE_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("REACHABILITY_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::REACHABILITY_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("COMMUNICATION_FAILURE_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::COMMUNICATION_FAILURE_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UES_IN_AREA_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::UES_IN_AREA_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SUBSCRIPTION_ID_CHANGE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::SUBSCRIPTION_ID_CHANGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SUBSCRIPTION_ID_ADDITION", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::SUBSCRIPTION_ID_ADDITION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("LOSS_OF_CONNECTIVITY", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::LOSS_OF_CONNECTIVITY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("5GS_USER_STATE_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::_5GS_USER_STATE_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AVAILABILITY_AFTER_DDN_FAILURE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::AVAILABILITY_AFTER_DDN_FAILURE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TYPE_ALLOCATION_CODE_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::TYPE_ALLOCATION_CODE_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FREQUENT_MOBILITY_REGISTRATION_REPORT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAmfEventType_anyOf::FREQUENT_MOBILITY_REGISTRATION_REPORT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIAmfEventType_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIAmfEventType_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIAmfEventType_anyOf::LOCATION_REPORT:
            val = "LOCATION_REPORT";
            break;
        case eOAIAmfEventType_anyOf::PRESENCE_IN_AOI_REPORT:
            val = "PRESENCE_IN_AOI_REPORT";
            break;
        case eOAIAmfEventType_anyOf::TIMEZONE_REPORT:
            val = "TIMEZONE_REPORT";
            break;
        case eOAIAmfEventType_anyOf::ACCESS_TYPE_REPORT:
            val = "ACCESS_TYPE_REPORT";
            break;
        case eOAIAmfEventType_anyOf::REGISTRATION_STATE_REPORT:
            val = "REGISTRATION_STATE_REPORT";
            break;
        case eOAIAmfEventType_anyOf::CONNECTIVITY_STATE_REPORT:
            val = "CONNECTIVITY_STATE_REPORT";
            break;
        case eOAIAmfEventType_anyOf::REACHABILITY_REPORT:
            val = "REACHABILITY_REPORT";
            break;
        case eOAIAmfEventType_anyOf::COMMUNICATION_FAILURE_REPORT:
            val = "COMMUNICATION_FAILURE_REPORT";
            break;
        case eOAIAmfEventType_anyOf::UES_IN_AREA_REPORT:
            val = "UES_IN_AREA_REPORT";
            break;
        case eOAIAmfEventType_anyOf::SUBSCRIPTION_ID_CHANGE:
            val = "SUBSCRIPTION_ID_CHANGE";
            break;
        case eOAIAmfEventType_anyOf::SUBSCRIPTION_ID_ADDITION:
            val = "SUBSCRIPTION_ID_ADDITION";
            break;
        case eOAIAmfEventType_anyOf::LOSS_OF_CONNECTIVITY:
            val = "LOSS_OF_CONNECTIVITY";
            break;
        case eOAIAmfEventType_anyOf::_5GS_USER_STATE_REPORT:
            val = "5GS_USER_STATE_REPORT";
            break;
        case eOAIAmfEventType_anyOf::AVAILABILITY_AFTER_DDN_FAILURE:
            val = "AVAILABILITY_AFTER_DDN_FAILURE";
            break;
        case eOAIAmfEventType_anyOf::TYPE_ALLOCATION_CODE_REPORT:
            val = "TYPE_ALLOCATION_CODE_REPORT";
            break;
        case eOAIAmfEventType_anyOf::FREQUENT_MOBILITY_REGISTRATION_REPORT:
            val = "FREQUENT_MOBILITY_REGISTRATION_REPORT";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIAmfEventType_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIAmfEventType_anyOf::eOAIAmfEventType_anyOf OAIAmfEventType_anyOf::getValue() const {
    return m_value;
}

void OAIAmfEventType_anyOf::setValue(const OAIAmfEventType_anyOf::eOAIAmfEventType_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIAmfEventType_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIAmfEventType_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
