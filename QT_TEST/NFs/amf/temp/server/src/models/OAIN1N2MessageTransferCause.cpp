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

#include "OAIN1N2MessageTransferCause.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIN1N2MessageTransferCause::OAIN1N2MessageTransferCause(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIN1N2MessageTransferCause::OAIN1N2MessageTransferCause() {
    this->initializeModel();
}

OAIN1N2MessageTransferCause::~OAIN1N2MessageTransferCause() {}

void OAIN1N2MessageTransferCause::initializeModel() {

}

void OAIN1N2MessageTransferCause::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIN1N2MessageTransferCause::fromJsonObject(QJsonObject json) {

}

QString OAIN1N2MessageTransferCause::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIN1N2MessageTransferCause::asJsonObject() const {
    QJsonObject obj;
    return obj;
}

bool OAIN1N2MessageTransferCause::isSet() const {
    bool isObjectUpdated = false;
    do {

    } while (false);
    return isObjectUpdated;
}

bool OAIN1N2MessageTransferCause::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
