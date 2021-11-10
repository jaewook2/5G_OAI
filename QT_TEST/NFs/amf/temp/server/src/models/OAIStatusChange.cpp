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

#include "OAIStatusChange.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIStatusChange::OAIStatusChange(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStatusChange::OAIStatusChange() {
    this->initializeModel();
}

OAIStatusChange::~OAIStatusChange() {}

void OAIStatusChange::initializeModel() {

}

void OAIStatusChange::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStatusChange::fromJsonObject(QJsonObject json) {

}

QString OAIStatusChange::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStatusChange::asJsonObject() const {
    QJsonObject obj;
    return obj;
}

bool OAIStatusChange::isSet() const {
    bool isObjectUpdated = false;
    do {

    } while (false);
    return isObjectUpdated;
}

bool OAIStatusChange::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI