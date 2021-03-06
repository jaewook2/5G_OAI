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

#include "OAINsiInformation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAINsiInformation::OAINsiInformation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAINsiInformation::OAINsiInformation() {
    this->initializeModel();
}

OAINsiInformation::~OAINsiInformation() {}

void OAINsiInformation::initializeModel() {

    m_nrf_id_isSet = false;
    m_nrf_id_isValid = false;

    m_nsi_id_isSet = false;
    m_nsi_id_isValid = false;

    m_nrf_nf_mgt_uri_isSet = false;
    m_nrf_nf_mgt_uri_isValid = false;

    m_nrf_access_token_uri_isSet = false;
    m_nrf_access_token_uri_isValid = false;
}

void OAINsiInformation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAINsiInformation::fromJsonObject(QJsonObject json) {

    m_nrf_id_isValid = ::OpenAPI::fromJsonValue(nrf_id, json[QString("nrfId")]);
    m_nrf_id_isSet = !json[QString("nrfId")].isNull() && m_nrf_id_isValid;

    m_nsi_id_isValid = ::OpenAPI::fromJsonValue(nsi_id, json[QString("nsiId")]);
    m_nsi_id_isSet = !json[QString("nsiId")].isNull() && m_nsi_id_isValid;

    m_nrf_nf_mgt_uri_isValid = ::OpenAPI::fromJsonValue(nrf_nf_mgt_uri, json[QString("nrfNfMgtUri")]);
    m_nrf_nf_mgt_uri_isSet = !json[QString("nrfNfMgtUri")].isNull() && m_nrf_nf_mgt_uri_isValid;

    m_nrf_access_token_uri_isValid = ::OpenAPI::fromJsonValue(nrf_access_token_uri, json[QString("nrfAccessTokenUri")]);
    m_nrf_access_token_uri_isSet = !json[QString("nrfAccessTokenUri")].isNull() && m_nrf_access_token_uri_isValid;
}

QString OAINsiInformation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAINsiInformation::asJsonObject() const {
    QJsonObject obj;
    if (m_nrf_id_isSet) {
        obj.insert(QString("nrfId"), ::OpenAPI::toJsonValue(nrf_id));
    }
    if (m_nsi_id_isSet) {
        obj.insert(QString("nsiId"), ::OpenAPI::toJsonValue(nsi_id));
    }
    if (m_nrf_nf_mgt_uri_isSet) {
        obj.insert(QString("nrfNfMgtUri"), ::OpenAPI::toJsonValue(nrf_nf_mgt_uri));
    }
    if (m_nrf_access_token_uri_isSet) {
        obj.insert(QString("nrfAccessTokenUri"), ::OpenAPI::toJsonValue(nrf_access_token_uri));
    }
    return obj;
}

QString OAINsiInformation::getNrfId() const {
    return nrf_id;
}
void OAINsiInformation::setNrfId(const QString &nrf_id) {
    this->nrf_id = nrf_id;
    this->m_nrf_id_isSet = true;
}

bool OAINsiInformation::is_nrf_id_Set() const{
    return m_nrf_id_isSet;
}

bool OAINsiInformation::is_nrf_id_Valid() const{
    return m_nrf_id_isValid;
}

QString OAINsiInformation::getNsiId() const {
    return nsi_id;
}
void OAINsiInformation::setNsiId(const QString &nsi_id) {
    this->nsi_id = nsi_id;
    this->m_nsi_id_isSet = true;
}

bool OAINsiInformation::is_nsi_id_Set() const{
    return m_nsi_id_isSet;
}

bool OAINsiInformation::is_nsi_id_Valid() const{
    return m_nsi_id_isValid;
}

QString OAINsiInformation::getNrfNfMgtUri() const {
    return nrf_nf_mgt_uri;
}
void OAINsiInformation::setNrfNfMgtUri(const QString &nrf_nf_mgt_uri) {
    this->nrf_nf_mgt_uri = nrf_nf_mgt_uri;
    this->m_nrf_nf_mgt_uri_isSet = true;
}

bool OAINsiInformation::is_nrf_nf_mgt_uri_Set() const{
    return m_nrf_nf_mgt_uri_isSet;
}

bool OAINsiInformation::is_nrf_nf_mgt_uri_Valid() const{
    return m_nrf_nf_mgt_uri_isValid;
}

QString OAINsiInformation::getNrfAccessTokenUri() const {
    return nrf_access_token_uri;
}
void OAINsiInformation::setNrfAccessTokenUri(const QString &nrf_access_token_uri) {
    this->nrf_access_token_uri = nrf_access_token_uri;
    this->m_nrf_access_token_uri_isSet = true;
}

bool OAINsiInformation::is_nrf_access_token_uri_Set() const{
    return m_nrf_access_token_uri_isSet;
}

bool OAINsiInformation::is_nrf_access_token_uri_Valid() const{
    return m_nrf_access_token_uri_isValid;
}

bool OAINsiInformation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_nrf_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nsi_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nrf_nf_mgt_uri_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nrf_access_token_uri_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAINsiInformation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_nrf_id_isValid && true;
}

} // namespace OpenAPI
