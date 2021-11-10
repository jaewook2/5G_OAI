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

#include "OAIUeContextCreateData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUeContextCreateData::OAIUeContextCreateData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUeContextCreateData::OAIUeContextCreateData() {
    this->initializeModel();
}

OAIUeContextCreateData::~OAIUeContextCreateData() {}

void OAIUeContextCreateData::initializeModel() {

    m_ue_context_isSet = false;
    m_ue_context_isValid = false;

    m_target_id_isSet = false;
    m_target_id_isValid = false;

    m_source_to_target_data_isSet = false;
    m_source_to_target_data_isValid = false;

    m_pdu_session_list_isSet = false;
    m_pdu_session_list_isValid = false;

    m_n2_notify_uri_isSet = false;
    m_n2_notify_uri_isValid = false;

    m_ue_radio_capability_isSet = false;
    m_ue_radio_capability_isValid = false;

    m_ngap_cause_isSet = false;
    m_ngap_cause_isValid = false;

    m_supported_features_isSet = false;
    m_supported_features_isValid = false;

    m_serving_network_isSet = false;
    m_serving_network_isValid = false;
}

void OAIUeContextCreateData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUeContextCreateData::fromJsonObject(QJsonObject json) {

    m_ue_context_isValid = ::OpenAPI::fromJsonValue(ue_context, json[QString("ueContext")]);
    m_ue_context_isSet = !json[QString("ueContext")].isNull() && m_ue_context_isValid;

    m_target_id_isValid = ::OpenAPI::fromJsonValue(target_id, json[QString("targetId")]);
    m_target_id_isSet = !json[QString("targetId")].isNull() && m_target_id_isValid;

    m_source_to_target_data_isValid = ::OpenAPI::fromJsonValue(source_to_target_data, json[QString("sourceToTargetData")]);
    m_source_to_target_data_isSet = !json[QString("sourceToTargetData")].isNull() && m_source_to_target_data_isValid;

    m_pdu_session_list_isValid = ::OpenAPI::fromJsonValue(pdu_session_list, json[QString("pduSessionList")]);
    m_pdu_session_list_isSet = !json[QString("pduSessionList")].isNull() && m_pdu_session_list_isValid;

    m_n2_notify_uri_isValid = ::OpenAPI::fromJsonValue(n2_notify_uri, json[QString("n2NotifyUri")]);
    m_n2_notify_uri_isSet = !json[QString("n2NotifyUri")].isNull() && m_n2_notify_uri_isValid;

    m_ue_radio_capability_isValid = ::OpenAPI::fromJsonValue(ue_radio_capability, json[QString("ueRadioCapability")]);
    m_ue_radio_capability_isSet = !json[QString("ueRadioCapability")].isNull() && m_ue_radio_capability_isValid;

    m_ngap_cause_isValid = ::OpenAPI::fromJsonValue(ngap_cause, json[QString("ngapCause")]);
    m_ngap_cause_isSet = !json[QString("ngapCause")].isNull() && m_ngap_cause_isValid;

    m_supported_features_isValid = ::OpenAPI::fromJsonValue(supported_features, json[QString("supportedFeatures")]);
    m_supported_features_isSet = !json[QString("supportedFeatures")].isNull() && m_supported_features_isValid;

    m_serving_network_isValid = ::OpenAPI::fromJsonValue(serving_network, json[QString("servingNetwork")]);
    m_serving_network_isSet = !json[QString("servingNetwork")].isNull() && m_serving_network_isValid;
}

QString OAIUeContextCreateData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUeContextCreateData::asJsonObject() const {
    QJsonObject obj;
    if (ue_context.isSet()) {
        obj.insert(QString("ueContext"), ::OpenAPI::toJsonValue(ue_context));
    }
    if (target_id.isSet()) {
        obj.insert(QString("targetId"), ::OpenAPI::toJsonValue(target_id));
    }
    if (source_to_target_data.isSet()) {
        obj.insert(QString("sourceToTargetData"), ::OpenAPI::toJsonValue(source_to_target_data));
    }
    if (pdu_session_list.size() > 0) {
        obj.insert(QString("pduSessionList"), ::OpenAPI::toJsonValue(pdu_session_list));
    }
    if (m_n2_notify_uri_isSet) {
        obj.insert(QString("n2NotifyUri"), ::OpenAPI::toJsonValue(n2_notify_uri));
    }
    if (ue_radio_capability.isSet()) {
        obj.insert(QString("ueRadioCapability"), ::OpenAPI::toJsonValue(ue_radio_capability));
    }
    if (ngap_cause.isSet()) {
        obj.insert(QString("ngapCause"), ::OpenAPI::toJsonValue(ngap_cause));
    }
    if (m_supported_features_isSet) {
        obj.insert(QString("supportedFeatures"), ::OpenAPI::toJsonValue(supported_features));
    }
    if (serving_network.isSet()) {
        obj.insert(QString("servingNetwork"), ::OpenAPI::toJsonValue(serving_network));
    }
    return obj;
}

OAIUeContext OAIUeContextCreateData::getUeContext() const {
    return ue_context;
}
void OAIUeContextCreateData::setUeContext(const OAIUeContext &ue_context) {
    this->ue_context = ue_context;
    this->m_ue_context_isSet = true;
}

bool OAIUeContextCreateData::is_ue_context_Set() const{
    return m_ue_context_isSet;
}

bool OAIUeContextCreateData::is_ue_context_Valid() const{
    return m_ue_context_isValid;
}

OAINgRanTargetId OAIUeContextCreateData::getTargetId() const {
    return target_id;
}
void OAIUeContextCreateData::setTargetId(const OAINgRanTargetId &target_id) {
    this->target_id = target_id;
    this->m_target_id_isSet = true;
}

bool OAIUeContextCreateData::is_target_id_Set() const{
    return m_target_id_isSet;
}

bool OAIUeContextCreateData::is_target_id_Valid() const{
    return m_target_id_isValid;
}

OAIN2InfoContent OAIUeContextCreateData::getSourceToTargetData() const {
    return source_to_target_data;
}
void OAIUeContextCreateData::setSourceToTargetData(const OAIN2InfoContent &source_to_target_data) {
    this->source_to_target_data = source_to_target_data;
    this->m_source_to_target_data_isSet = true;
}

bool OAIUeContextCreateData::is_source_to_target_data_Set() const{
    return m_source_to_target_data_isSet;
}

bool OAIUeContextCreateData::is_source_to_target_data_Valid() const{
    return m_source_to_target_data_isValid;
}

QList<OAIN2SmInformation> OAIUeContextCreateData::getPduSessionList() const {
    return pdu_session_list;
}
void OAIUeContextCreateData::setPduSessionList(const QList<OAIN2SmInformation> &pdu_session_list) {
    this->pdu_session_list = pdu_session_list;
    this->m_pdu_session_list_isSet = true;
}

bool OAIUeContextCreateData::is_pdu_session_list_Set() const{
    return m_pdu_session_list_isSet;
}

bool OAIUeContextCreateData::is_pdu_session_list_Valid() const{
    return m_pdu_session_list_isValid;
}

QString OAIUeContextCreateData::getN2NotifyUri() const {
    return n2_notify_uri;
}
void OAIUeContextCreateData::setN2NotifyUri(const QString &n2_notify_uri) {
    this->n2_notify_uri = n2_notify_uri;
    this->m_n2_notify_uri_isSet = true;
}

bool OAIUeContextCreateData::is_n2_notify_uri_Set() const{
    return m_n2_notify_uri_isSet;
}

bool OAIUeContextCreateData::is_n2_notify_uri_Valid() const{
    return m_n2_notify_uri_isValid;
}

OAIN2InfoContent OAIUeContextCreateData::getUeRadioCapability() const {
    return ue_radio_capability;
}
void OAIUeContextCreateData::setUeRadioCapability(const OAIN2InfoContent &ue_radio_capability) {
    this->ue_radio_capability = ue_radio_capability;
    this->m_ue_radio_capability_isSet = true;
}

bool OAIUeContextCreateData::is_ue_radio_capability_Set() const{
    return m_ue_radio_capability_isSet;
}

bool OAIUeContextCreateData::is_ue_radio_capability_Valid() const{
    return m_ue_radio_capability_isValid;
}

OAINgApCause OAIUeContextCreateData::getNgapCause() const {
    return ngap_cause;
}
void OAIUeContextCreateData::setNgapCause(const OAINgApCause &ngap_cause) {
    this->ngap_cause = ngap_cause;
    this->m_ngap_cause_isSet = true;
}

bool OAIUeContextCreateData::is_ngap_cause_Set() const{
    return m_ngap_cause_isSet;
}

bool OAIUeContextCreateData::is_ngap_cause_Valid() const{
    return m_ngap_cause_isValid;
}

QString OAIUeContextCreateData::getSupportedFeatures() const {
    return supported_features;
}
void OAIUeContextCreateData::setSupportedFeatures(const QString &supported_features) {
    this->supported_features = supported_features;
    this->m_supported_features_isSet = true;
}

bool OAIUeContextCreateData::is_supported_features_Set() const{
    return m_supported_features_isSet;
}

bool OAIUeContextCreateData::is_supported_features_Valid() const{
    return m_supported_features_isValid;
}

OAIPlmnIdNid OAIUeContextCreateData::getServingNetwork() const {
    return serving_network;
}
void OAIUeContextCreateData::setServingNetwork(const OAIPlmnIdNid &serving_network) {
    this->serving_network = serving_network;
    this->m_serving_network_isSet = true;
}

bool OAIUeContextCreateData::is_serving_network_Set() const{
    return m_serving_network_isSet;
}

bool OAIUeContextCreateData::is_serving_network_Valid() const{
    return m_serving_network_isValid;
}

bool OAIUeContextCreateData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (ue_context.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (target_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (source_to_target_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (pdu_session_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_n2_notify_uri_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (ue_radio_capability.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (ngap_cause.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_supported_features_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (serving_network.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUeContextCreateData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_ue_context_isValid && m_target_id_isValid && m_source_to_target_data_isValid && m_pdu_session_list_isValid && true;
}

} // namespace OpenAPI