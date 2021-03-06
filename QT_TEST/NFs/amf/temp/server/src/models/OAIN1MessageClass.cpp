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

#include "OAIN1MessageClass.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIN1MessageClass::OAIN1MessageClass(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIN1MessageClass::OAIN1MessageClass() {
    this->initializeModel();
}

OAIN1MessageClass::~OAIN1MessageClass() {}

void OAIN1MessageClass::initializeModel() {

}

void OAIN1MessageClass::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIN1MessageClass::fromJsonObject(QJsonObject json) {

}

QString OAIN1MessageClass::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIN1MessageClass::asJsonObject() const {
    QJsonObject obj;
    return obj;
}

bool OAIN1MessageClass::isSet() const {
    bool isObjectUpdated = false;
    do {

    } while (false);
    return isObjectUpdated;
}

bool OAIN1MessageClass::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
