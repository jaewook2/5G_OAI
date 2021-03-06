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

#include "OAIMeasurementLteForMdt.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMeasurementLteForMdt::OAIMeasurementLteForMdt(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMeasurementLteForMdt::OAIMeasurementLteForMdt() {
    this->initializeModel();
}

OAIMeasurementLteForMdt::~OAIMeasurementLteForMdt() {}

void OAIMeasurementLteForMdt::initializeModel() {

}

void OAIMeasurementLteForMdt::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMeasurementLteForMdt::fromJsonObject(QJsonObject json) {

}

QString OAIMeasurementLteForMdt::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMeasurementLteForMdt::asJsonObject() const {
    QJsonObject obj;
    return obj;
}

bool OAIMeasurementLteForMdt::isSet() const {
    bool isObjectUpdated = false;
    do {

    } while (false);
    return isObjectUpdated;
}

bool OAIMeasurementLteForMdt::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
