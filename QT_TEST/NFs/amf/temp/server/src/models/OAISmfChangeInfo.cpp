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

#include "OAISmfChangeInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISmfChangeInfo::OAISmfChangeInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISmfChangeInfo::OAISmfChangeInfo() {
    this->initializeModel();
}

OAISmfChangeInfo::~OAISmfChangeInfo() {}

void OAISmfChangeInfo::initializeModel() {

    m_pdu_session_id_list_isSet = false;
    m_pdu_session_id_list_isValid = false;

    m_smf_change_ind_isSet = false;
    m_smf_change_ind_isValid = false;
}

void OAISmfChangeInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISmfChangeInfo::fromJsonObject(QJsonObject json) {

    m_pdu_session_id_list_isValid = ::OpenAPI::fromJsonValue(pdu_session_id_list, json[QString("pduSessionIdList")]);
    m_pdu_session_id_list_isSet = !json[QString("pduSessionIdList")].isNull() && m_pdu_session_id_list_isValid;

    m_smf_change_ind_isValid = ::OpenAPI::fromJsonValue(smf_change_ind, json[QString("smfChangeInd")]);
    m_smf_change_ind_isSet = !json[QString("smfChangeInd")].isNull() && m_smf_change_ind_isValid;
}

QString OAISmfChangeInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISmfChangeInfo::asJsonObject() const {
    QJsonObject obj;
    if (pdu_session_id_list.size() > 0) {
        obj.insert(QString("pduSessionIdList"), ::OpenAPI::toJsonValue(pdu_session_id_list));
    }
    if (smf_change_ind.isSet()) {
        obj.insert(QString("smfChangeInd"), ::OpenAPI::toJsonValue(smf_change_ind));
    }
    return obj;
}

QList<qint32> OAISmfChangeInfo::getPduSessionIdList() const {
    return pdu_session_id_list;
}
void OAISmfChangeInfo::setPduSessionIdList(const QList<qint32> &pdu_session_id_list) {
    this->pdu_session_id_list = pdu_session_id_list;
    this->m_pdu_session_id_list_isSet = true;
}

bool OAISmfChangeInfo::is_pdu_session_id_list_Set() const{
    return m_pdu_session_id_list_isSet;
}

bool OAISmfChangeInfo::is_pdu_session_id_list_Valid() const{
    return m_pdu_session_id_list_isValid;
}

OAISmfChangeIndication OAISmfChangeInfo::getSmfChangeInd() const {
    return smf_change_ind;
}
void OAISmfChangeInfo::setSmfChangeInd(const OAISmfChangeIndication &smf_change_ind) {
    this->smf_change_ind = smf_change_ind;
    this->m_smf_change_ind_isSet = true;
}

bool OAISmfChangeInfo::is_smf_change_ind_Set() const{
    return m_smf_change_ind_isSet;
}

bool OAISmfChangeInfo::is_smf_change_ind_Valid() const{
    return m_smf_change_ind_isValid;
}

bool OAISmfChangeInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (pdu_session_id_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (smf_change_ind.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISmfChangeInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pdu_session_id_list_isValid && m_smf_change_ind_isValid && true;
}

} // namespace OpenAPI