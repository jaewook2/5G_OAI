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

#include "OAIUeContextCreatedData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUeContextCreatedData::OAIUeContextCreatedData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUeContextCreatedData::OAIUeContextCreatedData() {
    this->initializeModel();
}

OAIUeContextCreatedData::~OAIUeContextCreatedData() {}

void OAIUeContextCreatedData::initializeModel() {

    m_ue_context_isSet = false;
    m_ue_context_isValid = false;

    m_target_to_source_data_isSet = false;
    m_target_to_source_data_isValid = false;

    m_pdu_session_list_isSet = false;
    m_pdu_session_list_isValid = false;

    m_failed_session_list_isSet = false;
    m_failed_session_list_isValid = false;

    m_supported_features_isSet = false;
    m_supported_features_isValid = false;

    m_pcf_reselected_ind_isSet = false;
    m_pcf_reselected_ind_isValid = false;
}

void OAIUeContextCreatedData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUeContextCreatedData::fromJsonObject(QJsonObject json) {

    m_ue_context_isValid = ::OpenAPI::fromJsonValue(ue_context, json[QString("ueContext")]);
    m_ue_context_isSet = !json[QString("ueContext")].isNull() && m_ue_context_isValid;

    m_target_to_source_data_isValid = ::OpenAPI::fromJsonValue(target_to_source_data, json[QString("targetToSourceData")]);
    m_target_to_source_data_isSet = !json[QString("targetToSourceData")].isNull() && m_target_to_source_data_isValid;

    m_pdu_session_list_isValid = ::OpenAPI::fromJsonValue(pdu_session_list, json[QString("pduSessionList")]);
    m_pdu_session_list_isSet = !json[QString("pduSessionList")].isNull() && m_pdu_session_list_isValid;

    m_failed_session_list_isValid = ::OpenAPI::fromJsonValue(failed_session_list, json[QString("failedSessionList")]);
    m_failed_session_list_isSet = !json[QString("failedSessionList")].isNull() && m_failed_session_list_isValid;

    m_supported_features_isValid = ::OpenAPI::fromJsonValue(supported_features, json[QString("supportedFeatures")]);
    m_supported_features_isSet = !json[QString("supportedFeatures")].isNull() && m_supported_features_isValid;

    m_pcf_reselected_ind_isValid = ::OpenAPI::fromJsonValue(pcf_reselected_ind, json[QString("pcfReselectedInd")]);
    m_pcf_reselected_ind_isSet = !json[QString("pcfReselectedInd")].isNull() && m_pcf_reselected_ind_isValid;
}

QString OAIUeContextCreatedData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUeContextCreatedData::asJsonObject() const {
    QJsonObject obj;
    if (ue_context.isSet()) {
        obj.insert(QString("ueContext"), ::OpenAPI::toJsonValue(ue_context));
    }
    if (target_to_source_data.isSet()) {
        obj.insert(QString("targetToSourceData"), ::OpenAPI::toJsonValue(target_to_source_data));
    }
    if (pdu_session_list.size() > 0) {
        obj.insert(QString("pduSessionList"), ::OpenAPI::toJsonValue(pdu_session_list));
    }
    if (failed_session_list.size() > 0) {
        obj.insert(QString("failedSessionList"), ::OpenAPI::toJsonValue(failed_session_list));
    }
    if (m_supported_features_isSet) {
        obj.insert(QString("supportedFeatures"), ::OpenAPI::toJsonValue(supported_features));
    }
    if (m_pcf_reselected_ind_isSet) {
        obj.insert(QString("pcfReselectedInd"), ::OpenAPI::toJsonValue(pcf_reselected_ind));
    }
    return obj;
}

OAIUeContext OAIUeContextCreatedData::getUeContext() const {
    return ue_context;
}
void OAIUeContextCreatedData::setUeContext(const OAIUeContext &ue_context) {
    this->ue_context = ue_context;
    this->m_ue_context_isSet = true;
}

bool OAIUeContextCreatedData::is_ue_context_Set() const{
    return m_ue_context_isSet;
}

bool OAIUeContextCreatedData::is_ue_context_Valid() const{
    return m_ue_context_isValid;
}

OAIN2InfoContent OAIUeContextCreatedData::getTargetToSourceData() const {
    return target_to_source_data;
}
void OAIUeContextCreatedData::setTargetToSourceData(const OAIN2InfoContent &target_to_source_data) {
    this->target_to_source_data = target_to_source_data;
    this->m_target_to_source_data_isSet = true;
}

bool OAIUeContextCreatedData::is_target_to_source_data_Set() const{
    return m_target_to_source_data_isSet;
}

bool OAIUeContextCreatedData::is_target_to_source_data_Valid() const{
    return m_target_to_source_data_isValid;
}

QList<OAIN2SmInformation> OAIUeContextCreatedData::getPduSessionList() const {
    return pdu_session_list;
}
void OAIUeContextCreatedData::setPduSessionList(const QList<OAIN2SmInformation> &pdu_session_list) {
    this->pdu_session_list = pdu_session_list;
    this->m_pdu_session_list_isSet = true;
}

bool OAIUeContextCreatedData::is_pdu_session_list_Set() const{
    return m_pdu_session_list_isSet;
}

bool OAIUeContextCreatedData::is_pdu_session_list_Valid() const{
    return m_pdu_session_list_isValid;
}

QList<OAIN2SmInformation> OAIUeContextCreatedData::getFailedSessionList() const {
    return failed_session_list;
}
void OAIUeContextCreatedData::setFailedSessionList(const QList<OAIN2SmInformation> &failed_session_list) {
    this->failed_session_list = failed_session_list;
    this->m_failed_session_list_isSet = true;
}

bool OAIUeContextCreatedData::is_failed_session_list_Set() const{
    return m_failed_session_list_isSet;
}

bool OAIUeContextCreatedData::is_failed_session_list_Valid() const{
    return m_failed_session_list_isValid;
}

QString OAIUeContextCreatedData::getSupportedFeatures() const {
    return supported_features;
}
void OAIUeContextCreatedData::setSupportedFeatures(const QString &supported_features) {
    this->supported_features = supported_features;
    this->m_supported_features_isSet = true;
}

bool OAIUeContextCreatedData::is_supported_features_Set() const{
    return m_supported_features_isSet;
}

bool OAIUeContextCreatedData::is_supported_features_Valid() const{
    return m_supported_features_isValid;
}

bool OAIUeContextCreatedData::isPcfReselectedInd() const {
    return pcf_reselected_ind;
}
void OAIUeContextCreatedData::setPcfReselectedInd(const bool &pcf_reselected_ind) {
    this->pcf_reselected_ind = pcf_reselected_ind;
    this->m_pcf_reselected_ind_isSet = true;
}

bool OAIUeContextCreatedData::is_pcf_reselected_ind_Set() const{
    return m_pcf_reselected_ind_isSet;
}

bool OAIUeContextCreatedData::is_pcf_reselected_ind_Valid() const{
    return m_pcf_reselected_ind_isValid;
}

bool OAIUeContextCreatedData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (ue_context.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (target_to_source_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (pdu_session_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (failed_session_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_supported_features_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pcf_reselected_ind_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUeContextCreatedData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_ue_context_isValid && m_target_to_source_data_isValid && m_pdu_session_list_isValid && true;
}

} // namespace OpenAPI
