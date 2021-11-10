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

#include "OAILocationFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILocationFilter::OAILocationFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILocationFilter::OAILocationFilter() {
    this->initializeModel();
}

OAILocationFilter::~OAILocationFilter() {}

void OAILocationFilter::initializeModel() {

}

void OAILocationFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILocationFilter::fromJsonObject(QJsonObject json) {

}

QString OAILocationFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILocationFilter::asJsonObject() const {
    QJsonObject obj;
    return obj;
}

bool OAILocationFilter::isSet() const {
    bool isObjectUpdated = false;
    do {

    } while (false);
    return isObjectUpdated;
}

bool OAILocationFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI