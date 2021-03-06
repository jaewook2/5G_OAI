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

#include "OAIIpv6Addr.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIIpv6Addr::OAIIpv6Addr(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIIpv6Addr::OAIIpv6Addr() {
    this->initializeModel();
}

OAIIpv6Addr::~OAIIpv6Addr() {}

void OAIIpv6Addr::initializeModel() {

}

void OAIIpv6Addr::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIpv6Addr::fromJsonObject(QJsonObject json) {

}

QString OAIIpv6Addr::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIpv6Addr::asJsonObject() const {
    QJsonObject obj;
    return obj;
}

bool OAIIpv6Addr::isSet() const {
    bool isObjectUpdated = false;
    do {

    } while (false);
    return isObjectUpdated;
}

bool OAIIpv6Addr::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
