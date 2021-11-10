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

#include "OAINrV2xAuth.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAINrV2xAuth::OAINrV2xAuth(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAINrV2xAuth::OAINrV2xAuth() {
    this->initializeModel();
}

OAINrV2xAuth::~OAINrV2xAuth() {}

void OAINrV2xAuth::initializeModel() {

    m_vehicle_ue_auth_isSet = false;
    m_vehicle_ue_auth_isValid = false;

    m_pedestrian_ue_auth_isSet = false;
    m_pedestrian_ue_auth_isValid = false;
}

void OAINrV2xAuth::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAINrV2xAuth::fromJsonObject(QJsonObject json) {

    m_vehicle_ue_auth_isValid = ::OpenAPI::fromJsonValue(vehicle_ue_auth, json[QString("vehicleUeAuth")]);
    m_vehicle_ue_auth_isSet = !json[QString("vehicleUeAuth")].isNull() && m_vehicle_ue_auth_isValid;

    m_pedestrian_ue_auth_isValid = ::OpenAPI::fromJsonValue(pedestrian_ue_auth, json[QString("pedestrianUeAuth")]);
    m_pedestrian_ue_auth_isSet = !json[QString("pedestrianUeAuth")].isNull() && m_pedestrian_ue_auth_isValid;
}

QString OAINrV2xAuth::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAINrV2xAuth::asJsonObject() const {
    QJsonObject obj;
    if (vehicle_ue_auth.isSet()) {
        obj.insert(QString("vehicleUeAuth"), ::OpenAPI::toJsonValue(vehicle_ue_auth));
    }
    if (pedestrian_ue_auth.isSet()) {
        obj.insert(QString("pedestrianUeAuth"), ::OpenAPI::toJsonValue(pedestrian_ue_auth));
    }
    return obj;
}

OAIUeAuth OAINrV2xAuth::getVehicleUeAuth() const {
    return vehicle_ue_auth;
}
void OAINrV2xAuth::setVehicleUeAuth(const OAIUeAuth &vehicle_ue_auth) {
    this->vehicle_ue_auth = vehicle_ue_auth;
    this->m_vehicle_ue_auth_isSet = true;
}

bool OAINrV2xAuth::is_vehicle_ue_auth_Set() const{
    return m_vehicle_ue_auth_isSet;
}

bool OAINrV2xAuth::is_vehicle_ue_auth_Valid() const{
    return m_vehicle_ue_auth_isValid;
}

OAIUeAuth OAINrV2xAuth::getPedestrianUeAuth() const {
    return pedestrian_ue_auth;
}
void OAINrV2xAuth::setPedestrianUeAuth(const OAIUeAuth &pedestrian_ue_auth) {
    this->pedestrian_ue_auth = pedestrian_ue_auth;
    this->m_pedestrian_ue_auth_isSet = true;
}

bool OAINrV2xAuth::is_pedestrian_ue_auth_Set() const{
    return m_pedestrian_ue_auth_isSet;
}

bool OAINrV2xAuth::is_pedestrian_ue_auth_Valid() const{
    return m_pedestrian_ue_auth_isValid;
}

bool OAINrV2xAuth::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (vehicle_ue_auth.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (pedestrian_ue_auth.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAINrV2xAuth::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI