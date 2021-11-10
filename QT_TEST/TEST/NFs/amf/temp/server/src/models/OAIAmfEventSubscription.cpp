/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.1.5
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIAmfEventSubscription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAmfEventSubscription::OAIAmfEventSubscription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAmfEventSubscription::OAIAmfEventSubscription() {
    this->initializeModel();
}

OAIAmfEventSubscription::~OAIAmfEventSubscription() {}

void OAIAmfEventSubscription::initializeModel() {

    m_event_list_isSet = false;
    m_event_list_isValid = false;

    m_event_notify_uri_isSet = false;
    m_event_notify_uri_isValid = false;

    m_notify_correlation_id_isSet = false;
    m_notify_correlation_id_isValid = false;

    m_nf_id_isSet = false;
    m_nf_id_isValid = false;

    m_subs_change_notify_uri_isSet = false;
    m_subs_change_notify_uri_isValid = false;

    m_subs_change_notify_correlation_id_isSet = false;
    m_subs_change_notify_correlation_id_isValid = false;

    m_supi_isSet = false;
    m_supi_isValid = false;

    m_group_id_isSet = false;
    m_group_id_isValid = false;

    m_gpsi_isSet = false;
    m_gpsi_isValid = false;

    m_pei_isSet = false;
    m_pei_isValid = false;

    m_any_ue_isSet = false;
    m_any_ue_isValid = false;

    m_options_isSet = false;
    m_options_isValid = false;

    m_source_nf_type_isSet = false;
    m_source_nf_type_isValid = false;
}

void OAIAmfEventSubscription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAmfEventSubscription::fromJsonObject(QJsonObject json) {

    m_event_list_isValid = ::OpenAPI::fromJsonValue(event_list, json[QString("eventList")]);
    m_event_list_isSet = !json[QString("eventList")].isNull() && m_event_list_isValid;

    m_event_notify_uri_isValid = ::OpenAPI::fromJsonValue(event_notify_uri, json[QString("eventNotifyUri")]);
    m_event_notify_uri_isSet = !json[QString("eventNotifyUri")].isNull() && m_event_notify_uri_isValid;

    m_notify_correlation_id_isValid = ::OpenAPI::fromJsonValue(notify_correlation_id, json[QString("notifyCorrelationId")]);
    m_notify_correlation_id_isSet = !json[QString("notifyCorrelationId")].isNull() && m_notify_correlation_id_isValid;

    m_nf_id_isValid = ::OpenAPI::fromJsonValue(nf_id, json[QString("nfId")]);
    m_nf_id_isSet = !json[QString("nfId")].isNull() && m_nf_id_isValid;

    m_subs_change_notify_uri_isValid = ::OpenAPI::fromJsonValue(subs_change_notify_uri, json[QString("subsChangeNotifyUri")]);
    m_subs_change_notify_uri_isSet = !json[QString("subsChangeNotifyUri")].isNull() && m_subs_change_notify_uri_isValid;

    m_subs_change_notify_correlation_id_isValid = ::OpenAPI::fromJsonValue(subs_change_notify_correlation_id, json[QString("subsChangeNotifyCorrelationId")]);
    m_subs_change_notify_correlation_id_isSet = !json[QString("subsChangeNotifyCorrelationId")].isNull() && m_subs_change_notify_correlation_id_isValid;

    m_supi_isValid = ::OpenAPI::fromJsonValue(supi, json[QString("supi")]);
    m_supi_isSet = !json[QString("supi")].isNull() && m_supi_isValid;

    m_group_id_isValid = ::OpenAPI::fromJsonValue(group_id, json[QString("groupId")]);
    m_group_id_isSet = !json[QString("groupId")].isNull() && m_group_id_isValid;

    m_gpsi_isValid = ::OpenAPI::fromJsonValue(gpsi, json[QString("gpsi")]);
    m_gpsi_isSet = !json[QString("gpsi")].isNull() && m_gpsi_isValid;

    m_pei_isValid = ::OpenAPI::fromJsonValue(pei, json[QString("pei")]);
    m_pei_isSet = !json[QString("pei")].isNull() && m_pei_isValid;

    m_any_ue_isValid = ::OpenAPI::fromJsonValue(any_ue, json[QString("anyUE")]);
    m_any_ue_isSet = !json[QString("anyUE")].isNull() && m_any_ue_isValid;

    m_options_isValid = ::OpenAPI::fromJsonValue(options, json[QString("options")]);
    m_options_isSet = !json[QString("options")].isNull() && m_options_isValid;

    m_source_nf_type_isValid = ::OpenAPI::fromJsonValue(source_nf_type, json[QString("sourceNfType")]);
    m_source_nf_type_isSet = !json[QString("sourceNfType")].isNull() && m_source_nf_type_isValid;
}

QString OAIAmfEventSubscription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAmfEventSubscription::asJsonObject() const {
    QJsonObject obj;
    if (event_list.size() > 0) {
        obj.insert(QString("eventList"), ::OpenAPI::toJsonValue(event_list));
    }
    if (m_event_notify_uri_isSet) {
        obj.insert(QString("eventNotifyUri"), ::OpenAPI::toJsonValue(event_notify_uri));
    }
    if (m_notify_correlation_id_isSet) {
        obj.insert(QString("notifyCorrelationId"), ::OpenAPI::toJsonValue(notify_correlation_id));
    }
    if (m_nf_id_isSet) {
        obj.insert(QString("nfId"), ::OpenAPI::toJsonValue(nf_id));
    }
    if (m_subs_change_notify_uri_isSet) {
        obj.insert(QString("subsChangeNotifyUri"), ::OpenAPI::toJsonValue(subs_change_notify_uri));
    }
    if (m_subs_change_notify_correlation_id_isSet) {
        obj.insert(QString("subsChangeNotifyCorrelationId"), ::OpenAPI::toJsonValue(subs_change_notify_correlation_id));
    }
    if (m_supi_isSet) {
        obj.insert(QString("supi"), ::OpenAPI::toJsonValue(supi));
    }
    if (m_group_id_isSet) {
        obj.insert(QString("groupId"), ::OpenAPI::toJsonValue(group_id));
    }
    if (m_gpsi_isSet) {
        obj.insert(QString("gpsi"), ::OpenAPI::toJsonValue(gpsi));
    }
    if (m_pei_isSet) {
        obj.insert(QString("pei"), ::OpenAPI::toJsonValue(pei));
    }
    if (m_any_ue_isSet) {
        obj.insert(QString("anyUE"), ::OpenAPI::toJsonValue(any_ue));
    }
    if (options.isSet()) {
        obj.insert(QString("options"), ::OpenAPI::toJsonValue(options));
    }
    if (source_nf_type.isSet()) {
        obj.insert(QString("sourceNfType"), ::OpenAPI::toJsonValue(source_nf_type));
    }
    return obj;
}

QList<OAIAmfEvent> OAIAmfEventSubscription::getEventList() const {
    return event_list;
}
void OAIAmfEventSubscription::setEventList(const QList<OAIAmfEvent> &event_list) {
    this->event_list = event_list;
    this->m_event_list_isSet = true;
}

bool OAIAmfEventSubscription::is_event_list_Set() const{
    return m_event_list_isSet;
}

bool OAIAmfEventSubscription::is_event_list_Valid() const{
    return m_event_list_isValid;
}

QString OAIAmfEventSubscription::getEventNotifyUri() const {
    return event_notify_uri;
}
void OAIAmfEventSubscription::setEventNotifyUri(const QString &event_notify_uri) {
    this->event_notify_uri = event_notify_uri;
    this->m_event_notify_uri_isSet = true;
}

bool OAIAmfEventSubscription::is_event_notify_uri_Set() const{
    return m_event_notify_uri_isSet;
}

bool OAIAmfEventSubscription::is_event_notify_uri_Valid() const{
    return m_event_notify_uri_isValid;
}

QString OAIAmfEventSubscription::getNotifyCorrelationId() const {
    return notify_correlation_id;
}
void OAIAmfEventSubscription::setNotifyCorrelationId(const QString &notify_correlation_id) {
    this->notify_correlation_id = notify_correlation_id;
    this->m_notify_correlation_id_isSet = true;
}

bool OAIAmfEventSubscription::is_notify_correlation_id_Set() const{
    return m_notify_correlation_id_isSet;
}

bool OAIAmfEventSubscription::is_notify_correlation_id_Valid() const{
    return m_notify_correlation_id_isValid;
}

QString OAIAmfEventSubscription::getNfId() const {
    return nf_id;
}
void OAIAmfEventSubscription::setNfId(const QString &nf_id) {
    this->nf_id = nf_id;
    this->m_nf_id_isSet = true;
}

bool OAIAmfEventSubscription::is_nf_id_Set() const{
    return m_nf_id_isSet;
}

bool OAIAmfEventSubscription::is_nf_id_Valid() const{
    return m_nf_id_isValid;
}

QString OAIAmfEventSubscription::getSubsChangeNotifyUri() const {
    return subs_change_notify_uri;
}
void OAIAmfEventSubscription::setSubsChangeNotifyUri(const QString &subs_change_notify_uri) {
    this->subs_change_notify_uri = subs_change_notify_uri;
    this->m_subs_change_notify_uri_isSet = true;
}

bool OAIAmfEventSubscription::is_subs_change_notify_uri_Set() const{
    return m_subs_change_notify_uri_isSet;
}

bool OAIAmfEventSubscription::is_subs_change_notify_uri_Valid() const{
    return m_subs_change_notify_uri_isValid;
}

QString OAIAmfEventSubscription::getSubsChangeNotifyCorrelationId() const {
    return subs_change_notify_correlation_id;
}
void OAIAmfEventSubscription::setSubsChangeNotifyCorrelationId(const QString &subs_change_notify_correlation_id) {
    this->subs_change_notify_correlation_id = subs_change_notify_correlation_id;
    this->m_subs_change_notify_correlation_id_isSet = true;
}

bool OAIAmfEventSubscription::is_subs_change_notify_correlation_id_Set() const{
    return m_subs_change_notify_correlation_id_isSet;
}

bool OAIAmfEventSubscription::is_subs_change_notify_correlation_id_Valid() const{
    return m_subs_change_notify_correlation_id_isValid;
}

QString OAIAmfEventSubscription::getSupi() const {
    return supi;
}
void OAIAmfEventSubscription::setSupi(const QString &supi) {
    this->supi = supi;
    this->m_supi_isSet = true;
}

bool OAIAmfEventSubscription::is_supi_Set() const{
    return m_supi_isSet;
}

bool OAIAmfEventSubscription::is_supi_Valid() const{
    return m_supi_isValid;
}

QString OAIAmfEventSubscription::getGroupId() const {
    return group_id;
}
void OAIAmfEventSubscription::setGroupId(const QString &group_id) {
    this->group_id = group_id;
    this->m_group_id_isSet = true;
}

bool OAIAmfEventSubscription::is_group_id_Set() const{
    return m_group_id_isSet;
}

bool OAIAmfEventSubscription::is_group_id_Valid() const{
    return m_group_id_isValid;
}

QString OAIAmfEventSubscription::getGpsi() const {
    return gpsi;
}
void OAIAmfEventSubscription::setGpsi(const QString &gpsi) {
    this->gpsi = gpsi;
    this->m_gpsi_isSet = true;
}

bool OAIAmfEventSubscription::is_gpsi_Set() const{
    return m_gpsi_isSet;
}

bool OAIAmfEventSubscription::is_gpsi_Valid() const{
    return m_gpsi_isValid;
}

QString OAIAmfEventSubscription::getPei() const {
    return pei;
}
void OAIAmfEventSubscription::setPei(const QString &pei) {
    this->pei = pei;
    this->m_pei_isSet = true;
}

bool OAIAmfEventSubscription::is_pei_Set() const{
    return m_pei_isSet;
}

bool OAIAmfEventSubscription::is_pei_Valid() const{
    return m_pei_isValid;
}

bool OAIAmfEventSubscription::isAnyUe() const {
    return any_ue;
}
void OAIAmfEventSubscription::setAnyUe(const bool &any_ue) {
    this->any_ue = any_ue;
    this->m_any_ue_isSet = true;
}

bool OAIAmfEventSubscription::is_any_ue_Set() const{
    return m_any_ue_isSet;
}

bool OAIAmfEventSubscription::is_any_ue_Valid() const{
    return m_any_ue_isValid;
}

OAIAmfEventMode OAIAmfEventSubscription::getOptions() const {
    return options;
}
void OAIAmfEventSubscription::setOptions(const OAIAmfEventMode &options) {
    this->options = options;
    this->m_options_isSet = true;
}

bool OAIAmfEventSubscription::is_options_Set() const{
    return m_options_isSet;
}

bool OAIAmfEventSubscription::is_options_Valid() const{
    return m_options_isValid;
}

OAINFType OAIAmfEventSubscription::getSourceNfType() const {
    return source_nf_type;
}
void OAIAmfEventSubscription::setSourceNfType(const OAINFType &source_nf_type) {
    this->source_nf_type = source_nf_type;
    this->m_source_nf_type_isSet = true;
}

bool OAIAmfEventSubscription::is_source_nf_type_Set() const{
    return m_source_nf_type_isSet;
}

bool OAIAmfEventSubscription::is_source_nf_type_Valid() const{
    return m_source_nf_type_isValid;
}

bool OAIAmfEventSubscription::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (event_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_event_notify_uri_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_notify_correlation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nf_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subs_change_notify_uri_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subs_change_notify_correlation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_supi_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gpsi_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pei_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_any_ue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (options.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (source_nf_type.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAmfEventSubscription::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_event_list_isValid && m_event_notify_uri_isValid && m_notify_correlation_id_isValid && m_nf_id_isValid && true;
}

} // namespace OpenAPI