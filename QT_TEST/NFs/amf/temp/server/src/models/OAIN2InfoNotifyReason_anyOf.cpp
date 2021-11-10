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

#include "OAIN2InfoNotifyReason_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIN2InfoNotifyReason_anyOf::OAIN2InfoNotifyReason_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIN2InfoNotifyReason_anyOf::OAIN2InfoNotifyReason_anyOf() {
    this->initializeModel();
}

OAIN2InfoNotifyReason_anyOf::~OAIN2InfoNotifyReason_anyOf() {}

void OAIN2InfoNotifyReason_anyOf::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIN2InfoNotifyReason_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIN2InfoNotifyReason_anyOf::fromJson(QString jsonString) {
    
    if ( jsonString.compare("HANDOVER_COMPLETED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIN2InfoNotifyReason_anyOf::HANDOVER_COMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIN2InfoNotifyReason_anyOf::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIN2InfoNotifyReason_anyOf::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIN2InfoNotifyReason_anyOf::HANDOVER_COMPLETED:
            val = "HANDOVER_COMPLETED";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIN2InfoNotifyReason_anyOf::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIN2InfoNotifyReason_anyOf::eOAIN2InfoNotifyReason_anyOf OAIN2InfoNotifyReason_anyOf::getValue() const {
    return m_value;
}

void OAIN2InfoNotifyReason_anyOf::setValue(const OAIN2InfoNotifyReason_anyOf::eOAIN2InfoNotifyReason_anyOf& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIN2InfoNotifyReason_anyOf::isSet() const {
    
    return m_value_isSet;
}

bool OAIN2InfoNotifyReason_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI