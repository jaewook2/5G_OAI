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

#include "OAIMeasurementPeriodLteMdt.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMeasurementPeriodLteMdt::OAIMeasurementPeriodLteMdt(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMeasurementPeriodLteMdt::OAIMeasurementPeriodLteMdt() {
    this->initializeModel();
}

OAIMeasurementPeriodLteMdt::~OAIMeasurementPeriodLteMdt() {}

void OAIMeasurementPeriodLteMdt::initializeModel() {

}

void OAIMeasurementPeriodLteMdt::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMeasurementPeriodLteMdt::fromJsonObject(QJsonObject json) {

}

QString OAIMeasurementPeriodLteMdt::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMeasurementPeriodLteMdt::asJsonObject() const {
    QJsonObject obj;
    return obj;
}

bool OAIMeasurementPeriodLteMdt::isSet() const {
    bool isObjectUpdated = false;
    do {

    } while (false);
    return isObjectUpdated;
}

bool OAIMeasurementPeriodLteMdt::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI