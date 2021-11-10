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

#include "OAINcgi.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAINcgi::OAINcgi(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAINcgi::OAINcgi() {
    this->initializeModel();
}

OAINcgi::~OAINcgi() {}

void OAINcgi::initializeModel() {

    m_plmn_id_isSet = false;
    m_plmn_id_isValid = false;

    m_nr_cell_id_isSet = false;
    m_nr_cell_id_isValid = false;

    m_nid_isSet = false;
    m_nid_isValid = false;
}

void OAINcgi::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAINcgi::fromJsonObject(QJsonObject json) {

    m_plmn_id_isValid = ::OpenAPI::fromJsonValue(plmn_id, json[QString("plmnId")]);
    m_plmn_id_isSet = !json[QString("plmnId")].isNull() && m_plmn_id_isValid;

    m_nr_cell_id_isValid = ::OpenAPI::fromJsonValue(nr_cell_id, json[QString("nrCellId")]);
    m_nr_cell_id_isSet = !json[QString("nrCellId")].isNull() && m_nr_cell_id_isValid;

    m_nid_isValid = ::OpenAPI::fromJsonValue(nid, json[QString("nid")]);
    m_nid_isSet = !json[QString("nid")].isNull() && m_nid_isValid;
}

QString OAINcgi::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAINcgi::asJsonObject() const {
    QJsonObject obj;
    if (plmn_id.isSet()) {
        obj.insert(QString("plmnId"), ::OpenAPI::toJsonValue(plmn_id));
    }
    if (m_nr_cell_id_isSet) {
        obj.insert(QString("nrCellId"), ::OpenAPI::toJsonValue(nr_cell_id));
    }
    if (m_nid_isSet) {
        obj.insert(QString("nid"), ::OpenAPI::toJsonValue(nid));
    }
    return obj;
}

OAIPlmnId OAINcgi::getPlmnId() const {
    return plmn_id;
}
void OAINcgi::setPlmnId(const OAIPlmnId &plmn_id) {
    this->plmn_id = plmn_id;
    this->m_plmn_id_isSet = true;
}

bool OAINcgi::is_plmn_id_Set() const{
    return m_plmn_id_isSet;
}

bool OAINcgi::is_plmn_id_Valid() const{
    return m_plmn_id_isValid;
}

QString OAINcgi::getNrCellId() const {
    return nr_cell_id;
}
void OAINcgi::setNrCellId(const QString &nr_cell_id) {
    this->nr_cell_id = nr_cell_id;
    this->m_nr_cell_id_isSet = true;
}

bool OAINcgi::is_nr_cell_id_Set() const{
    return m_nr_cell_id_isSet;
}

bool OAINcgi::is_nr_cell_id_Valid() const{
    return m_nr_cell_id_isValid;
}

QString OAINcgi::getNid() const {
    return nid;
}
void OAINcgi::setNid(const QString &nid) {
    this->nid = nid;
    this->m_nid_isSet = true;
}

bool OAINcgi::is_nid_Set() const{
    return m_nid_isSet;
}

bool OAINcgi::is_nid_Valid() const{
    return m_nid_isValid;
}

bool OAINcgi::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (plmn_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_nr_cell_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAINcgi::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_plmn_id_isValid && m_nr_cell_id_isValid && true;
}

} // namespace OpenAPI