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

#include "OAIV2xInformation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV2xInformation::OAIV2xInformation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV2xInformation::OAIV2xInformation() {
    this->initializeModel();
}

OAIV2xInformation::~OAIV2xInformation() {}

void OAIV2xInformation::initializeModel() {

    m_n2_pc5_pol_isSet = false;
    m_n2_pc5_pol_isValid = false;
}

void OAIV2xInformation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV2xInformation::fromJsonObject(QJsonObject json) {

    m_n2_pc5_pol_isValid = ::OpenAPI::fromJsonValue(n2_pc5_pol, json[QString("n2Pc5Pol")]);
    m_n2_pc5_pol_isSet = !json[QString("n2Pc5Pol")].isNull() && m_n2_pc5_pol_isValid;
}

QString OAIV2xInformation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV2xInformation::asJsonObject() const {
    QJsonObject obj;
    if (n2_pc5_pol.isSet()) {
        obj.insert(QString("n2Pc5Pol"), ::OpenAPI::toJsonValue(n2_pc5_pol));
    }
    return obj;
}

OAIN2InfoContent OAIV2xInformation::getN2Pc5Pol() const {
    return n2_pc5_pol;
}
void OAIV2xInformation::setN2Pc5Pol(const OAIN2InfoContent &n2_pc5_pol) {
    this->n2_pc5_pol = n2_pc5_pol;
    this->m_n2_pc5_pol_isSet = true;
}

bool OAIV2xInformation::is_n2_pc5_pol_Set() const{
    return m_n2_pc5_pol_isSet;
}

bool OAIV2xInformation::is_n2_pc5_pol_Valid() const{
    return m_n2_pc5_pol_isValid;
}

bool OAIV2xInformation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (n2_pc5_pol.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV2xInformation::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
