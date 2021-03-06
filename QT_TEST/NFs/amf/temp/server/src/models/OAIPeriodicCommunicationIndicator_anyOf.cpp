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

#include "OAIPeriodicCommunicationIndicator_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPeriodicCommunicationIndicator_anyOf::OAIPeriodicCommunicationIndicator_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPeriodicCommunicationIndicator_anyOf::OAIPeriodicCommunicationIndicator_anyOf() {
    this->initializeModel();
}

OAIPeriodicCommunicationIndicator_anyOf::~OAIPeriodicCommunicationIndicator_anyOf() {}

void OAIPeriodicCommunicationIndicator_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIPeriodicCommunicationIndicator_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIPeriodicCommunicationIndicator_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("PIORIODICALLY", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPeriodicCommunicationIndicator_anyOf::PIORIODICALLY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ON_DEMAND", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPeriodicCommunicationIndicator_anyOf::ON_DEMAND;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIPeriodicCommunicationIndicator_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIPeriodicCommunicationIndicator_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIPeriodicCommunicationIndicator_anyOf::PIORIODICALLY:
            val = "PIORIODICALLY";
            break;
        case eOAIPeriodicCommunicationIndicator_anyOf::ON_DEMAND:
            val = "ON_DEMAND";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIPeriodicCommunicationIndicator_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIPeriodicCommunicationIndicator_anyOf::eOAIPeriodicCommunicationIndicator_anyOf OAIPeriodicCommunicationIndicator_anyOf::getValue() const {
    return m_value;
}

void OAIPeriodicCommunicationIndicator_anyOf::setValue(const OAIPeriodicCommunicationIndicator_anyOf::eOAIPeriodicCommunicationIndicator_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIPeriodicCommunicationIndicator_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIPeriodicCommunicationIndicator_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
