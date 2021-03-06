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

#include "OAIAmfEventReport.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAmfEventReport::OAIAmfEventReport(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAmfEventReport::OAIAmfEventReport() {
    this->initializeModel();
}

OAIAmfEventReport::~OAIAmfEventReport() {}

void OAIAmfEventReport::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_state_isSet = false;
    m_state_isValid = false;

    m_time_stamp_isSet = false;
    m_time_stamp_isValid = false;

    m_subscription_id_isSet = false;
    m_subscription_id_isValid = false;

    m_any_ue_isSet = false;
    m_any_ue_isValid = false;

    m_supi_isSet = false;
    m_supi_isValid = false;

    m_area_list_isSet = false;
    m_area_list_isValid = false;

    m_ref_id_isSet = false;
    m_ref_id_isValid = false;

    m_gpsi_isSet = false;
    m_gpsi_isValid = false;

    m_pei_isSet = false;
    m_pei_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;

    m_additional_location_isSet = false;
    m_additional_location_isValid = false;

    m_timezone_isSet = false;
    m_timezone_isValid = false;

    m_access_type_list_isSet = false;
    m_access_type_list_isValid = false;

    m_rm_info_list_isSet = false;
    m_rm_info_list_isValid = false;

    m_cm_info_list_isSet = false;
    m_cm_info_list_isValid = false;

    m_reachability_isSet = false;
    m_reachability_isValid = false;

    m_comm_failure_isSet = false;
    m_comm_failure_isValid = false;

    m_loss_of_connect_reason_isSet = false;
    m_loss_of_connect_reason_isValid = false;

    m_number_of_ues_isSet = false;
    m_number_of_ues_isValid = false;

    m_r_5gs_user_state_list_isSet = false;
    m_r_5gs_user_state_list_isValid = false;

    m_type_code_isSet = false;
    m_type_code_isValid = false;

    m_registration_number_isSet = false;
    m_registration_number_isValid = false;

    m_max_availability_time_isSet = false;
    m_max_availability_time_isValid = false;

    m_ue_id_ext_isSet = false;
    m_ue_id_ext_isValid = false;
}

void OAIAmfEventReport::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAmfEventReport::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_state_isValid = ::OpenAPI::fromJsonValue(state, json[QString("state")]);
    m_state_isSet = !json[QString("state")].isNull() && m_state_isValid;

    m_time_stamp_isValid = ::OpenAPI::fromJsonValue(time_stamp, json[QString("timeStamp")]);
    m_time_stamp_isSet = !json[QString("timeStamp")].isNull() && m_time_stamp_isValid;

    m_subscription_id_isValid = ::OpenAPI::fromJsonValue(subscription_id, json[QString("subscriptionId")]);
    m_subscription_id_isSet = !json[QString("subscriptionId")].isNull() && m_subscription_id_isValid;

    m_any_ue_isValid = ::OpenAPI::fromJsonValue(any_ue, json[QString("anyUe")]);
    m_any_ue_isSet = !json[QString("anyUe")].isNull() && m_any_ue_isValid;

    m_supi_isValid = ::OpenAPI::fromJsonValue(supi, json[QString("supi")]);
    m_supi_isSet = !json[QString("supi")].isNull() && m_supi_isValid;

    m_area_list_isValid = ::OpenAPI::fromJsonValue(area_list, json[QString("areaList")]);
    m_area_list_isSet = !json[QString("areaList")].isNull() && m_area_list_isValid;

    m_ref_id_isValid = ::OpenAPI::fromJsonValue(ref_id, json[QString("refId")]);
    m_ref_id_isSet = !json[QString("refId")].isNull() && m_ref_id_isValid;

    m_gpsi_isValid = ::OpenAPI::fromJsonValue(gpsi, json[QString("gpsi")]);
    m_gpsi_isSet = !json[QString("gpsi")].isNull() && m_gpsi_isValid;

    m_pei_isValid = ::OpenAPI::fromJsonValue(pei, json[QString("pei")]);
    m_pei_isSet = !json[QString("pei")].isNull() && m_pei_isValid;

    m_location_isValid = ::OpenAPI::fromJsonValue(location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;

    m_additional_location_isValid = ::OpenAPI::fromJsonValue(additional_location, json[QString("additionalLocation")]);
    m_additional_location_isSet = !json[QString("additionalLocation")].isNull() && m_additional_location_isValid;

    m_timezone_isValid = ::OpenAPI::fromJsonValue(timezone, json[QString("timezone")]);
    m_timezone_isSet = !json[QString("timezone")].isNull() && m_timezone_isValid;

    m_access_type_list_isValid = ::OpenAPI::fromJsonValue(access_type_list, json[QString("accessTypeList")]);
    m_access_type_list_isSet = !json[QString("accessTypeList")].isNull() && m_access_type_list_isValid;

    m_rm_info_list_isValid = ::OpenAPI::fromJsonValue(rm_info_list, json[QString("rmInfoList")]);
    m_rm_info_list_isSet = !json[QString("rmInfoList")].isNull() && m_rm_info_list_isValid;

    m_cm_info_list_isValid = ::OpenAPI::fromJsonValue(cm_info_list, json[QString("cmInfoList")]);
    m_cm_info_list_isSet = !json[QString("cmInfoList")].isNull() && m_cm_info_list_isValid;

    m_reachability_isValid = ::OpenAPI::fromJsonValue(reachability, json[QString("reachability")]);
    m_reachability_isSet = !json[QString("reachability")].isNull() && m_reachability_isValid;

    m_comm_failure_isValid = ::OpenAPI::fromJsonValue(comm_failure, json[QString("commFailure")]);
    m_comm_failure_isSet = !json[QString("commFailure")].isNull() && m_comm_failure_isValid;

    m_loss_of_connect_reason_isValid = ::OpenAPI::fromJsonValue(loss_of_connect_reason, json[QString("lossOfConnectReason")]);
    m_loss_of_connect_reason_isSet = !json[QString("lossOfConnectReason")].isNull() && m_loss_of_connect_reason_isValid;

    m_number_of_ues_isValid = ::OpenAPI::fromJsonValue(number_of_ues, json[QString("numberOfUes")]);
    m_number_of_ues_isSet = !json[QString("numberOfUes")].isNull() && m_number_of_ues_isValid;

    m_r_5gs_user_state_list_isValid = ::OpenAPI::fromJsonValue(r_5gs_user_state_list, json[QString("5gsUserStateList")]);
    m_r_5gs_user_state_list_isSet = !json[QString("5gsUserStateList")].isNull() && m_r_5gs_user_state_list_isValid;

    m_type_code_isValid = ::OpenAPI::fromJsonValue(type_code, json[QString("typeCode")]);
    m_type_code_isSet = !json[QString("typeCode")].isNull() && m_type_code_isValid;

    m_registration_number_isValid = ::OpenAPI::fromJsonValue(registration_number, json[QString("registrationNumber")]);
    m_registration_number_isSet = !json[QString("registrationNumber")].isNull() && m_registration_number_isValid;

    m_max_availability_time_isValid = ::OpenAPI::fromJsonValue(max_availability_time, json[QString("maxAvailabilityTime")]);
    m_max_availability_time_isSet = !json[QString("maxAvailabilityTime")].isNull() && m_max_availability_time_isValid;

    m_ue_id_ext_isValid = ::OpenAPI::fromJsonValue(ue_id_ext, json[QString("ueIdExt")]);
    m_ue_id_ext_isSet = !json[QString("ueIdExt")].isNull() && m_ue_id_ext_isValid;
}

QString OAIAmfEventReport::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAmfEventReport::asJsonObject() const {
    QJsonObject obj;
    if (type.isSet()) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (state.isSet()) {
        obj.insert(QString("state"), ::OpenAPI::toJsonValue(state));
    }
    if (m_time_stamp_isSet) {
        obj.insert(QString("timeStamp"), ::OpenAPI::toJsonValue(time_stamp));
    }
    if (m_subscription_id_isSet) {
        obj.insert(QString("subscriptionId"), ::OpenAPI::toJsonValue(subscription_id));
    }
    if (m_any_ue_isSet) {
        obj.insert(QString("anyUe"), ::OpenAPI::toJsonValue(any_ue));
    }
    if (m_supi_isSet) {
        obj.insert(QString("supi"), ::OpenAPI::toJsonValue(supi));
    }
    if (area_list.size() > 0) {
        obj.insert(QString("areaList"), ::OpenAPI::toJsonValue(area_list));
    }
    if (m_ref_id_isSet) {
        obj.insert(QString("refId"), ::OpenAPI::toJsonValue(ref_id));
    }
    if (m_gpsi_isSet) {
        obj.insert(QString("gpsi"), ::OpenAPI::toJsonValue(gpsi));
    }
    if (m_pei_isSet) {
        obj.insert(QString("pei"), ::OpenAPI::toJsonValue(pei));
    }
    if (location.isSet()) {
        obj.insert(QString("location"), ::OpenAPI::toJsonValue(location));
    }
    if (additional_location.isSet()) {
        obj.insert(QString("additionalLocation"), ::OpenAPI::toJsonValue(additional_location));
    }
    if (m_timezone_isSet) {
        obj.insert(QString("timezone"), ::OpenAPI::toJsonValue(timezone));
    }
    if (access_type_list.size() > 0) {
        obj.insert(QString("accessTypeList"), ::OpenAPI::toJsonValue(access_type_list));
    }
    if (rm_info_list.size() > 0) {
        obj.insert(QString("rmInfoList"), ::OpenAPI::toJsonValue(rm_info_list));
    }
    if (cm_info_list.size() > 0) {
        obj.insert(QString("cmInfoList"), ::OpenAPI::toJsonValue(cm_info_list));
    }
    if (reachability.isSet()) {
        obj.insert(QString("reachability"), ::OpenAPI::toJsonValue(reachability));
    }
    if (comm_failure.isSet()) {
        obj.insert(QString("commFailure"), ::OpenAPI::toJsonValue(comm_failure));
    }
    if (loss_of_connect_reason.isSet()) {
        obj.insert(QString("lossOfConnectReason"), ::OpenAPI::toJsonValue(loss_of_connect_reason));
    }
    if (m_number_of_ues_isSet) {
        obj.insert(QString("numberOfUes"), ::OpenAPI::toJsonValue(number_of_ues));
    }
    if (r_5gs_user_state_list.size() > 0) {
        obj.insert(QString("5gsUserStateList"), ::OpenAPI::toJsonValue(r_5gs_user_state_list));
    }
    if (m_type_code_isSet) {
        obj.insert(QString("typeCode"), ::OpenAPI::toJsonValue(type_code));
    }
    if (m_registration_number_isSet) {
        obj.insert(QString("registrationNumber"), ::OpenAPI::toJsonValue(registration_number));
    }
    if (m_max_availability_time_isSet) {
        obj.insert(QString("maxAvailabilityTime"), ::OpenAPI::toJsonValue(max_availability_time));
    }
    if (ue_id_ext.size() > 0) {
        obj.insert(QString("ueIdExt"), ::OpenAPI::toJsonValue(ue_id_ext));
    }
    return obj;
}

OAIAmfEventType OAIAmfEventReport::getType() const {
    return type;
}
void OAIAmfEventReport::setType(const OAIAmfEventType &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAIAmfEventReport::is_type_Set() const{
    return m_type_isSet;
}

bool OAIAmfEventReport::is_type_Valid() const{
    return m_type_isValid;
}

OAIAmfEventState OAIAmfEventReport::getState() const {
    return state;
}
void OAIAmfEventReport::setState(const OAIAmfEventState &state) {
    this->state = state;
    this->m_state_isSet = true;
}

bool OAIAmfEventReport::is_state_Set() const{
    return m_state_isSet;
}

bool OAIAmfEventReport::is_state_Valid() const{
    return m_state_isValid;
}

QDateTime OAIAmfEventReport::getTimeStamp() const {
    return time_stamp;
}
void OAIAmfEventReport::setTimeStamp(const QDateTime &time_stamp) {
    this->time_stamp = time_stamp;
    this->m_time_stamp_isSet = true;
}

bool OAIAmfEventReport::is_time_stamp_Set() const{
    return m_time_stamp_isSet;
}

bool OAIAmfEventReport::is_time_stamp_Valid() const{
    return m_time_stamp_isValid;
}

QString OAIAmfEventReport::getSubscriptionId() const {
    return subscription_id;
}
void OAIAmfEventReport::setSubscriptionId(const QString &subscription_id) {
    this->subscription_id = subscription_id;
    this->m_subscription_id_isSet = true;
}

bool OAIAmfEventReport::is_subscription_id_Set() const{
    return m_subscription_id_isSet;
}

bool OAIAmfEventReport::is_subscription_id_Valid() const{
    return m_subscription_id_isValid;
}

bool OAIAmfEventReport::isAnyUe() const {
    return any_ue;
}
void OAIAmfEventReport::setAnyUe(const bool &any_ue) {
    this->any_ue = any_ue;
    this->m_any_ue_isSet = true;
}

bool OAIAmfEventReport::is_any_ue_Set() const{
    return m_any_ue_isSet;
}

bool OAIAmfEventReport::is_any_ue_Valid() const{
    return m_any_ue_isValid;
}

QString OAIAmfEventReport::getSupi() const {
    return supi;
}
void OAIAmfEventReport::setSupi(const QString &supi) {
    this->supi = supi;
    this->m_supi_isSet = true;
}

bool OAIAmfEventReport::is_supi_Set() const{
    return m_supi_isSet;
}

bool OAIAmfEventReport::is_supi_Valid() const{
    return m_supi_isValid;
}

QList<OAIAmfEventArea> OAIAmfEventReport::getAreaList() const {
    return area_list;
}
void OAIAmfEventReport::setAreaList(const QList<OAIAmfEventArea> &area_list) {
    this->area_list = area_list;
    this->m_area_list_isSet = true;
}

bool OAIAmfEventReport::is_area_list_Set() const{
    return m_area_list_isSet;
}

bool OAIAmfEventReport::is_area_list_Valid() const{
    return m_area_list_isValid;
}

qint32 OAIAmfEventReport::getRefId() const {
    return ref_id;
}
void OAIAmfEventReport::setRefId(const qint32 &ref_id) {
    this->ref_id = ref_id;
    this->m_ref_id_isSet = true;
}

bool OAIAmfEventReport::is_ref_id_Set() const{
    return m_ref_id_isSet;
}

bool OAIAmfEventReport::is_ref_id_Valid() const{
    return m_ref_id_isValid;
}

QString OAIAmfEventReport::getGpsi() const {
    return gpsi;
}
void OAIAmfEventReport::setGpsi(const QString &gpsi) {
    this->gpsi = gpsi;
    this->m_gpsi_isSet = true;
}

bool OAIAmfEventReport::is_gpsi_Set() const{
    return m_gpsi_isSet;
}

bool OAIAmfEventReport::is_gpsi_Valid() const{
    return m_gpsi_isValid;
}

QString OAIAmfEventReport::getPei() const {
    return pei;
}
void OAIAmfEventReport::setPei(const QString &pei) {
    this->pei = pei;
    this->m_pei_isSet = true;
}

bool OAIAmfEventReport::is_pei_Set() const{
    return m_pei_isSet;
}

bool OAIAmfEventReport::is_pei_Valid() const{
    return m_pei_isValid;
}

OAIUserLocation OAIAmfEventReport::getLocation() const {
    return location;
}
void OAIAmfEventReport::setLocation(const OAIUserLocation &location) {
    this->location = location;
    this->m_location_isSet = true;
}

bool OAIAmfEventReport::is_location_Set() const{
    return m_location_isSet;
}

bool OAIAmfEventReport::is_location_Valid() const{
    return m_location_isValid;
}

OAIUserLocation OAIAmfEventReport::getAdditionalLocation() const {
    return additional_location;
}
void OAIAmfEventReport::setAdditionalLocation(const OAIUserLocation &additional_location) {
    this->additional_location = additional_location;
    this->m_additional_location_isSet = true;
}

bool OAIAmfEventReport::is_additional_location_Set() const{
    return m_additional_location_isSet;
}

bool OAIAmfEventReport::is_additional_location_Valid() const{
    return m_additional_location_isValid;
}

QString OAIAmfEventReport::getTimezone() const {
    return timezone;
}
void OAIAmfEventReport::setTimezone(const QString &timezone) {
    this->timezone = timezone;
    this->m_timezone_isSet = true;
}

bool OAIAmfEventReport::is_timezone_Set() const{
    return m_timezone_isSet;
}

bool OAIAmfEventReport::is_timezone_Valid() const{
    return m_timezone_isValid;
}

QList<OAIAccessType> OAIAmfEventReport::getAccessTypeList() const {
    return access_type_list;
}
void OAIAmfEventReport::setAccessTypeList(const QList<OAIAccessType> &access_type_list) {
    this->access_type_list = access_type_list;
    this->m_access_type_list_isSet = true;
}

bool OAIAmfEventReport::is_access_type_list_Set() const{
    return m_access_type_list_isSet;
}

bool OAIAmfEventReport::is_access_type_list_Valid() const{
    return m_access_type_list_isValid;
}

QList<OAIRmInfo> OAIAmfEventReport::getRmInfoList() const {
    return rm_info_list;
}
void OAIAmfEventReport::setRmInfoList(const QList<OAIRmInfo> &rm_info_list) {
    this->rm_info_list = rm_info_list;
    this->m_rm_info_list_isSet = true;
}

bool OAIAmfEventReport::is_rm_info_list_Set() const{
    return m_rm_info_list_isSet;
}

bool OAIAmfEventReport::is_rm_info_list_Valid() const{
    return m_rm_info_list_isValid;
}

QList<OAICmInfo> OAIAmfEventReport::getCmInfoList() const {
    return cm_info_list;
}
void OAIAmfEventReport::setCmInfoList(const QList<OAICmInfo> &cm_info_list) {
    this->cm_info_list = cm_info_list;
    this->m_cm_info_list_isSet = true;
}

bool OAIAmfEventReport::is_cm_info_list_Set() const{
    return m_cm_info_list_isSet;
}

bool OAIAmfEventReport::is_cm_info_list_Valid() const{
    return m_cm_info_list_isValid;
}

OAIUeReachability OAIAmfEventReport::getReachability() const {
    return reachability;
}
void OAIAmfEventReport::setReachability(const OAIUeReachability &reachability) {
    this->reachability = reachability;
    this->m_reachability_isSet = true;
}

bool OAIAmfEventReport::is_reachability_Set() const{
    return m_reachability_isSet;
}

bool OAIAmfEventReport::is_reachability_Valid() const{
    return m_reachability_isValid;
}

OAICommunicationFailure OAIAmfEventReport::getCommFailure() const {
    return comm_failure;
}
void OAIAmfEventReport::setCommFailure(const OAICommunicationFailure &comm_failure) {
    this->comm_failure = comm_failure;
    this->m_comm_failure_isSet = true;
}

bool OAIAmfEventReport::is_comm_failure_Set() const{
    return m_comm_failure_isSet;
}

bool OAIAmfEventReport::is_comm_failure_Valid() const{
    return m_comm_failure_isValid;
}

OAILossOfConnectivityReason OAIAmfEventReport::getLossOfConnectReason() const {
    return loss_of_connect_reason;
}
void OAIAmfEventReport::setLossOfConnectReason(const OAILossOfConnectivityReason &loss_of_connect_reason) {
    this->loss_of_connect_reason = loss_of_connect_reason;
    this->m_loss_of_connect_reason_isSet = true;
}

bool OAIAmfEventReport::is_loss_of_connect_reason_Set() const{
    return m_loss_of_connect_reason_isSet;
}

bool OAIAmfEventReport::is_loss_of_connect_reason_Valid() const{
    return m_loss_of_connect_reason_isValid;
}

qint32 OAIAmfEventReport::getNumberOfUes() const {
    return number_of_ues;
}
void OAIAmfEventReport::setNumberOfUes(const qint32 &number_of_ues) {
    this->number_of_ues = number_of_ues;
    this->m_number_of_ues_isSet = true;
}

bool OAIAmfEventReport::is_number_of_ues_Set() const{
    return m_number_of_ues_isSet;
}

bool OAIAmfEventReport::is_number_of_ues_Valid() const{
    return m_number_of_ues_isValid;
}

QList<OAI5GsUserStateInfo> OAIAmfEventReport::getR5gsUserStateList() const {
    return r_5gs_user_state_list;
}
void OAIAmfEventReport::setR5gsUserStateList(const QList<OAI5GsUserStateInfo> &r_5gs_user_state_list) {
    this->r_5gs_user_state_list = r_5gs_user_state_list;
    this->m_r_5gs_user_state_list_isSet = true;
}

bool OAIAmfEventReport::is_r_5gs_user_state_list_Set() const{
    return m_r_5gs_user_state_list_isSet;
}

bool OAIAmfEventReport::is_r_5gs_user_state_list_Valid() const{
    return m_r_5gs_user_state_list_isValid;
}

QString OAIAmfEventReport::getTypeCode() const {
    return type_code;
}
void OAIAmfEventReport::setTypeCode(const QString &type_code) {
    this->type_code = type_code;
    this->m_type_code_isSet = true;
}

bool OAIAmfEventReport::is_type_code_Set() const{
    return m_type_code_isSet;
}

bool OAIAmfEventReport::is_type_code_Valid() const{
    return m_type_code_isValid;
}

qint32 OAIAmfEventReport::getRegistrationNumber() const {
    return registration_number;
}
void OAIAmfEventReport::setRegistrationNumber(const qint32 &registration_number) {
    this->registration_number = registration_number;
    this->m_registration_number_isSet = true;
}

bool OAIAmfEventReport::is_registration_number_Set() const{
    return m_registration_number_isSet;
}

bool OAIAmfEventReport::is_registration_number_Valid() const{
    return m_registration_number_isValid;
}

QDateTime OAIAmfEventReport::getMaxAvailabilityTime() const {
    return max_availability_time;
}
void OAIAmfEventReport::setMaxAvailabilityTime(const QDateTime &max_availability_time) {
    this->max_availability_time = max_availability_time;
    this->m_max_availability_time_isSet = true;
}

bool OAIAmfEventReport::is_max_availability_time_Set() const{
    return m_max_availability_time_isSet;
}

bool OAIAmfEventReport::is_max_availability_time_Valid() const{
    return m_max_availability_time_isValid;
}

QList<OAIUEIdExt> OAIAmfEventReport::getUeIdExt() const {
    return ue_id_ext;
}
void OAIAmfEventReport::setUeIdExt(const QList<OAIUEIdExt> &ue_id_ext) {
    this->ue_id_ext = ue_id_ext;
    this->m_ue_id_ext_isSet = true;
}

bool OAIAmfEventReport::is_ue_id_ext_Set() const{
    return m_ue_id_ext_isSet;
}

bool OAIAmfEventReport::is_ue_id_ext_Valid() const{
    return m_ue_id_ext_isValid;
}

bool OAIAmfEventReport::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (state.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_time_stamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscription_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_any_ue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_supi_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (area_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_ref_id_isSet) {
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

        if (location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (additional_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_timezone_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (access_type_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (rm_info_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (cm_info_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (reachability.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (comm_failure.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (loss_of_connect_reason.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_number_of_ues_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (r_5gs_user_state_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_registration_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_availability_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (ue_id_ext.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAmfEventReport::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_state_isValid && m_time_stamp_isValid && true;
}

} // namespace OpenAPI
