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

#include "OAIUserLocation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUserLocation::OAIUserLocation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserLocation::OAIUserLocation() {
    this->initializeModel();
}

OAIUserLocation::~OAIUserLocation() {}

void OAIUserLocation::initializeModel() {

    m_eutra_location_isSet = false;
    m_eutra_location_isValid = false;

    m_nr_location_isSet = false;
    m_nr_location_isValid = false;

    m_n3ga_location_isSet = false;
    m_n3ga_location_isValid = false;

    m_utra_location_isSet = false;
    m_utra_location_isValid = false;

    m_gera_location_isSet = false;
    m_gera_location_isValid = false;
}

void OAIUserLocation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserLocation::fromJsonObject(QJsonObject json) {

    m_eutra_location_isValid = ::OpenAPI::fromJsonValue(eutra_location, json[QString("eutraLocation")]);
    m_eutra_location_isSet = !json[QString("eutraLocation")].isNull() && m_eutra_location_isValid;

    m_nr_location_isValid = ::OpenAPI::fromJsonValue(nr_location, json[QString("nrLocation")]);
    m_nr_location_isSet = !json[QString("nrLocation")].isNull() && m_nr_location_isValid;

    m_n3ga_location_isValid = ::OpenAPI::fromJsonValue(n3ga_location, json[QString("n3gaLocation")]);
    m_n3ga_location_isSet = !json[QString("n3gaLocation")].isNull() && m_n3ga_location_isValid;

    m_utra_location_isValid = ::OpenAPI::fromJsonValue(utra_location, json[QString("utraLocation")]);
    m_utra_location_isSet = !json[QString("utraLocation")].isNull() && m_utra_location_isValid;

    m_gera_location_isValid = ::OpenAPI::fromJsonValue(gera_location, json[QString("geraLocation")]);
    m_gera_location_isSet = !json[QString("geraLocation")].isNull() && m_gera_location_isValid;
}

QString OAIUserLocation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserLocation::asJsonObject() const {
    QJsonObject obj;
    if (eutra_location.isSet()) {
        obj.insert(QString("eutraLocation"), ::OpenAPI::toJsonValue(eutra_location));
    }
    if (nr_location.isSet()) {
        obj.insert(QString("nrLocation"), ::OpenAPI::toJsonValue(nr_location));
    }
    if (n3ga_location.isSet()) {
        obj.insert(QString("n3gaLocation"), ::OpenAPI::toJsonValue(n3ga_location));
    }
    if (utra_location.isSet()) {
        obj.insert(QString("utraLocation"), ::OpenAPI::toJsonValue(utra_location));
    }
    if (gera_location.isSet()) {
        obj.insert(QString("geraLocation"), ::OpenAPI::toJsonValue(gera_location));
    }
    return obj;
}

OAIEutraLocation OAIUserLocation::getEutraLocation() const {
    return eutra_location;
}
void OAIUserLocation::setEutraLocation(const OAIEutraLocation &eutra_location) {
    this->eutra_location = eutra_location;
    this->m_eutra_location_isSet = true;
}

bool OAIUserLocation::is_eutra_location_Set() const{
    return m_eutra_location_isSet;
}

bool OAIUserLocation::is_eutra_location_Valid() const{
    return m_eutra_location_isValid;
}

OAINrLocation OAIUserLocation::getNrLocation() const {
    return nr_location;
}
void OAIUserLocation::setNrLocation(const OAINrLocation &nr_location) {
    this->nr_location = nr_location;
    this->m_nr_location_isSet = true;
}

bool OAIUserLocation::is_nr_location_Set() const{
    return m_nr_location_isSet;
}

bool OAIUserLocation::is_nr_location_Valid() const{
    return m_nr_location_isValid;
}

OAIN3gaLocation OAIUserLocation::getN3gaLocation() const {
    return n3ga_location;
}
void OAIUserLocation::setN3gaLocation(const OAIN3gaLocation &n3ga_location) {
    this->n3ga_location = n3ga_location;
    this->m_n3ga_location_isSet = true;
}

bool OAIUserLocation::is_n3ga_location_Set() const{
    return m_n3ga_location_isSet;
}

bool OAIUserLocation::is_n3ga_location_Valid() const{
    return m_n3ga_location_isValid;
}

OAIUtraLocation OAIUserLocation::getUtraLocation() const {
    return utra_location;
}
void OAIUserLocation::setUtraLocation(const OAIUtraLocation &utra_location) {
    this->utra_location = utra_location;
    this->m_utra_location_isSet = true;
}

bool OAIUserLocation::is_utra_location_Set() const{
    return m_utra_location_isSet;
}

bool OAIUserLocation::is_utra_location_Valid() const{
    return m_utra_location_isValid;
}

OAIGeraLocation OAIUserLocation::getGeraLocation() const {
    return gera_location;
}
void OAIUserLocation::setGeraLocation(const OAIGeraLocation &gera_location) {
    this->gera_location = gera_location;
    this->m_gera_location_isSet = true;
}

bool OAIUserLocation::is_gera_location_Set() const{
    return m_gera_location_isSet;
}

bool OAIUserLocation::is_gera_location_Valid() const{
    return m_gera_location_isValid;
}

bool OAIUserLocation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (eutra_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (nr_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (n3ga_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (utra_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (gera_location.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserLocation::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
