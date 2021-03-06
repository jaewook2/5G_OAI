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

#include "OAIMmContext.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMmContext::OAIMmContext(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMmContext::OAIMmContext() {
    this->initializeModel();
}

OAIMmContext::~OAIMmContext() {}

void OAIMmContext::initializeModel() {

    m_access_type_isSet = false;
    m_access_type_isValid = false;

    m_nas_security_mode_isSet = false;
    m_nas_security_mode_isValid = false;

    m_eps_nas_security_mode_isSet = false;
    m_eps_nas_security_mode_isValid = false;

    m_nas_downlink_count_isSet = false;
    m_nas_downlink_count_isValid = false;

    m_nas_uplink_count_isSet = false;
    m_nas_uplink_count_isValid = false;

    m_ue_security_capability_isSet = false;
    m_ue_security_capability_isValid = false;

    m_s1_ue_network_capability_isSet = false;
    m_s1_ue_network_capability_isValid = false;

    m_allowed_nssai_isSet = false;
    m_allowed_nssai_isValid = false;

    m_nssai_mapping_list_isSet = false;
    m_nssai_mapping_list_isValid = false;

    m_allowed_home_nssai_isSet = false;
    m_allowed_home_nssai_isValid = false;

    m_ns_instance_list_isSet = false;
    m_ns_instance_list_isValid = false;

    m_expected_u_ebehavior_isSet = false;
    m_expected_u_ebehavior_isValid = false;

    m_ue_differentiation_info_isSet = false;
    m_ue_differentiation_info_isValid = false;

    m_plmn_assi_ue_radio_cap_id_isSet = false;
    m_plmn_assi_ue_radio_cap_id_isValid = false;

    m_man_assi_ue_radio_cap_id_isSet = false;
    m_man_assi_ue_radio_cap_id_isValid = false;

    m_ucmf_dic_entry_id_isSet = false;
    m_ucmf_dic_entry_id_isValid = false;

    m_n3_iwf_id_isSet = false;
    m_n3_iwf_id_isValid = false;

    m_wagf_id_isSet = false;
    m_wagf_id_isValid = false;

    m_tngf_id_isSet = false;
    m_tngf_id_isValid = false;

    m_an_n2_ap_id_isSet = false;
    m_an_n2_ap_id_isValid = false;

    m_nssaa_status_list_isSet = false;
    m_nssaa_status_list_isValid = false;

    m_pending_nssai_mapping_list_isSet = false;
    m_pending_nssai_mapping_list_isValid = false;
}

void OAIMmContext::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMmContext::fromJsonObject(QJsonObject json) {

    m_access_type_isValid = ::OpenAPI::fromJsonValue(access_type, json[QString("accessType")]);
    m_access_type_isSet = !json[QString("accessType")].isNull() && m_access_type_isValid;

    m_nas_security_mode_isValid = ::OpenAPI::fromJsonValue(nas_security_mode, json[QString("nasSecurityMode")]);
    m_nas_security_mode_isSet = !json[QString("nasSecurityMode")].isNull() && m_nas_security_mode_isValid;

    m_eps_nas_security_mode_isValid = ::OpenAPI::fromJsonValue(eps_nas_security_mode, json[QString("epsNasSecurityMode")]);
    m_eps_nas_security_mode_isSet = !json[QString("epsNasSecurityMode")].isNull() && m_eps_nas_security_mode_isValid;

    m_nas_downlink_count_isValid = ::OpenAPI::fromJsonValue(nas_downlink_count, json[QString("nasDownlinkCount")]);
    m_nas_downlink_count_isSet = !json[QString("nasDownlinkCount")].isNull() && m_nas_downlink_count_isValid;

    m_nas_uplink_count_isValid = ::OpenAPI::fromJsonValue(nas_uplink_count, json[QString("nasUplinkCount")]);
    m_nas_uplink_count_isSet = !json[QString("nasUplinkCount")].isNull() && m_nas_uplink_count_isValid;

    m_ue_security_capability_isValid = ::OpenAPI::fromJsonValue(ue_security_capability, json[QString("ueSecurityCapability")]);
    m_ue_security_capability_isSet = !json[QString("ueSecurityCapability")].isNull() && m_ue_security_capability_isValid;

    m_s1_ue_network_capability_isValid = ::OpenAPI::fromJsonValue(s1_ue_network_capability, json[QString("s1UeNetworkCapability")]);
    m_s1_ue_network_capability_isSet = !json[QString("s1UeNetworkCapability")].isNull() && m_s1_ue_network_capability_isValid;

    m_allowed_nssai_isValid = ::OpenAPI::fromJsonValue(allowed_nssai, json[QString("allowedNssai")]);
    m_allowed_nssai_isSet = !json[QString("allowedNssai")].isNull() && m_allowed_nssai_isValid;

    m_nssai_mapping_list_isValid = ::OpenAPI::fromJsonValue(nssai_mapping_list, json[QString("nssaiMappingList")]);
    m_nssai_mapping_list_isSet = !json[QString("nssaiMappingList")].isNull() && m_nssai_mapping_list_isValid;

    m_allowed_home_nssai_isValid = ::OpenAPI::fromJsonValue(allowed_home_nssai, json[QString("allowedHomeNssai")]);
    m_allowed_home_nssai_isSet = !json[QString("allowedHomeNssai")].isNull() && m_allowed_home_nssai_isValid;

    m_ns_instance_list_isValid = ::OpenAPI::fromJsonValue(ns_instance_list, json[QString("nsInstanceList")]);
    m_ns_instance_list_isSet = !json[QString("nsInstanceList")].isNull() && m_ns_instance_list_isValid;

    m_expected_u_ebehavior_isValid = ::OpenAPI::fromJsonValue(expected_u_ebehavior, json[QString("expectedUEbehavior")]);
    m_expected_u_ebehavior_isSet = !json[QString("expectedUEbehavior")].isNull() && m_expected_u_ebehavior_isValid;

    m_ue_differentiation_info_isValid = ::OpenAPI::fromJsonValue(ue_differentiation_info, json[QString("ueDifferentiationInfo")]);
    m_ue_differentiation_info_isSet = !json[QString("ueDifferentiationInfo")].isNull() && m_ue_differentiation_info_isValid;

    m_plmn_assi_ue_radio_cap_id_isValid = ::OpenAPI::fromJsonValue(plmn_assi_ue_radio_cap_id, json[QString("plmnAssiUeRadioCapId")]);
    m_plmn_assi_ue_radio_cap_id_isSet = !json[QString("plmnAssiUeRadioCapId")].isNull() && m_plmn_assi_ue_radio_cap_id_isValid;

    m_man_assi_ue_radio_cap_id_isValid = ::OpenAPI::fromJsonValue(man_assi_ue_radio_cap_id, json[QString("manAssiUeRadioCapId")]);
    m_man_assi_ue_radio_cap_id_isSet = !json[QString("manAssiUeRadioCapId")].isNull() && m_man_assi_ue_radio_cap_id_isValid;

    m_ucmf_dic_entry_id_isValid = ::OpenAPI::fromJsonValue(ucmf_dic_entry_id, json[QString("ucmfDicEntryId")]);
    m_ucmf_dic_entry_id_isSet = !json[QString("ucmfDicEntryId")].isNull() && m_ucmf_dic_entry_id_isValid;

    m_n3_iwf_id_isValid = ::OpenAPI::fromJsonValue(n3_iwf_id, json[QString("n3IwfId")]);
    m_n3_iwf_id_isSet = !json[QString("n3IwfId")].isNull() && m_n3_iwf_id_isValid;

    m_wagf_id_isValid = ::OpenAPI::fromJsonValue(wagf_id, json[QString("wagfId")]);
    m_wagf_id_isSet = !json[QString("wagfId")].isNull() && m_wagf_id_isValid;

    m_tngf_id_isValid = ::OpenAPI::fromJsonValue(tngf_id, json[QString("tngfId")]);
    m_tngf_id_isSet = !json[QString("tngfId")].isNull() && m_tngf_id_isValid;

    m_an_n2_ap_id_isValid = ::OpenAPI::fromJsonValue(an_n2_ap_id, json[QString("anN2ApId")]);
    m_an_n2_ap_id_isSet = !json[QString("anN2ApId")].isNull() && m_an_n2_ap_id_isValid;

    m_nssaa_status_list_isValid = ::OpenAPI::fromJsonValue(nssaa_status_list, json[QString("nssaaStatusList")]);
    m_nssaa_status_list_isSet = !json[QString("nssaaStatusList")].isNull() && m_nssaa_status_list_isValid;

    m_pending_nssai_mapping_list_isValid = ::OpenAPI::fromJsonValue(pending_nssai_mapping_list, json[QString("pendingNssaiMappingList")]);
    m_pending_nssai_mapping_list_isSet = !json[QString("pendingNssaiMappingList")].isNull() && m_pending_nssai_mapping_list_isValid;
}

QString OAIMmContext::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMmContext::asJsonObject() const {
    QJsonObject obj;
    if (access_type.isSet()) {
        obj.insert(QString("accessType"), ::OpenAPI::toJsonValue(access_type));
    }
    if (nas_security_mode.isSet()) {
        obj.insert(QString("nasSecurityMode"), ::OpenAPI::toJsonValue(nas_security_mode));
    }
    if (eps_nas_security_mode.isSet()) {
        obj.insert(QString("epsNasSecurityMode"), ::OpenAPI::toJsonValue(eps_nas_security_mode));
    }
    if (m_nas_downlink_count_isSet) {
        obj.insert(QString("nasDownlinkCount"), ::OpenAPI::toJsonValue(nas_downlink_count));
    }
    if (m_nas_uplink_count_isSet) {
        obj.insert(QString("nasUplinkCount"), ::OpenAPI::toJsonValue(nas_uplink_count));
    }
    if (m_ue_security_capability_isSet) {
        obj.insert(QString("ueSecurityCapability"), ::OpenAPI::toJsonValue(ue_security_capability));
    }
    if (m_s1_ue_network_capability_isSet) {
        obj.insert(QString("s1UeNetworkCapability"), ::OpenAPI::toJsonValue(s1_ue_network_capability));
    }
    if (allowed_nssai.size() > 0) {
        obj.insert(QString("allowedNssai"), ::OpenAPI::toJsonValue(allowed_nssai));
    }
    if (nssai_mapping_list.size() > 0) {
        obj.insert(QString("nssaiMappingList"), ::OpenAPI::toJsonValue(nssai_mapping_list));
    }
    if (allowed_home_nssai.size() > 0) {
        obj.insert(QString("allowedHomeNssai"), ::OpenAPI::toJsonValue(allowed_home_nssai));
    }
    if (ns_instance_list.size() > 0) {
        obj.insert(QString("nsInstanceList"), ::OpenAPI::toJsonValue(ns_instance_list));
    }
    if (expected_u_ebehavior.isSet()) {
        obj.insert(QString("expectedUEbehavior"), ::OpenAPI::toJsonValue(expected_u_ebehavior));
    }
    if (ue_differentiation_info.isSet()) {
        obj.insert(QString("ueDifferentiationInfo"), ::OpenAPI::toJsonValue(ue_differentiation_info));
    }
    if (m_plmn_assi_ue_radio_cap_id_isSet) {
        obj.insert(QString("plmnAssiUeRadioCapId"), ::OpenAPI::toJsonValue(plmn_assi_ue_radio_cap_id));
    }
    if (m_man_assi_ue_radio_cap_id_isSet) {
        obj.insert(QString("manAssiUeRadioCapId"), ::OpenAPI::toJsonValue(man_assi_ue_radio_cap_id));
    }
    if (m_ucmf_dic_entry_id_isSet) {
        obj.insert(QString("ucmfDicEntryId"), ::OpenAPI::toJsonValue(ucmf_dic_entry_id));
    }
    if (n3_iwf_id.isSet()) {
        obj.insert(QString("n3IwfId"), ::OpenAPI::toJsonValue(n3_iwf_id));
    }
    if (wagf_id.isSet()) {
        obj.insert(QString("wagfId"), ::OpenAPI::toJsonValue(wagf_id));
    }
    if (tngf_id.isSet()) {
        obj.insert(QString("tngfId"), ::OpenAPI::toJsonValue(tngf_id));
    }
    if (m_an_n2_ap_id_isSet) {
        obj.insert(QString("anN2ApId"), ::OpenAPI::toJsonValue(an_n2_ap_id));
    }
    if (nssaa_status_list.size() > 0) {
        obj.insert(QString("nssaaStatusList"), ::OpenAPI::toJsonValue(nssaa_status_list));
    }
    if (pending_nssai_mapping_list.size() > 0) {
        obj.insert(QString("pendingNssaiMappingList"), ::OpenAPI::toJsonValue(pending_nssai_mapping_list));
    }
    return obj;
}

OAIAccessType OAIMmContext::getAccessType() const {
    return access_type;
}
void OAIMmContext::setAccessType(const OAIAccessType &access_type) {
    this->access_type = access_type;
    this->m_access_type_isSet = true;
}

bool OAIMmContext::is_access_type_Set() const{
    return m_access_type_isSet;
}

bool OAIMmContext::is_access_type_Valid() const{
    return m_access_type_isValid;
}

OAINasSecurityMode OAIMmContext::getNasSecurityMode() const {
    return nas_security_mode;
}
void OAIMmContext::setNasSecurityMode(const OAINasSecurityMode &nas_security_mode) {
    this->nas_security_mode = nas_security_mode;
    this->m_nas_security_mode_isSet = true;
}

bool OAIMmContext::is_nas_security_mode_Set() const{
    return m_nas_security_mode_isSet;
}

bool OAIMmContext::is_nas_security_mode_Valid() const{
    return m_nas_security_mode_isValid;
}

OAIEpsNasSecurityMode OAIMmContext::getEpsNasSecurityMode() const {
    return eps_nas_security_mode;
}
void OAIMmContext::setEpsNasSecurityMode(const OAIEpsNasSecurityMode &eps_nas_security_mode) {
    this->eps_nas_security_mode = eps_nas_security_mode;
    this->m_eps_nas_security_mode_isSet = true;
}

bool OAIMmContext::is_eps_nas_security_mode_Set() const{
    return m_eps_nas_security_mode_isSet;
}

bool OAIMmContext::is_eps_nas_security_mode_Valid() const{
    return m_eps_nas_security_mode_isValid;
}

qint32 OAIMmContext::getNasDownlinkCount() const {
    return nas_downlink_count;
}
void OAIMmContext::setNasDownlinkCount(const qint32 &nas_downlink_count) {
    this->nas_downlink_count = nas_downlink_count;
    this->m_nas_downlink_count_isSet = true;
}

bool OAIMmContext::is_nas_downlink_count_Set() const{
    return m_nas_downlink_count_isSet;
}

bool OAIMmContext::is_nas_downlink_count_Valid() const{
    return m_nas_downlink_count_isValid;
}

qint32 OAIMmContext::getNasUplinkCount() const {
    return nas_uplink_count;
}
void OAIMmContext::setNasUplinkCount(const qint32 &nas_uplink_count) {
    this->nas_uplink_count = nas_uplink_count;
    this->m_nas_uplink_count_isSet = true;
}

bool OAIMmContext::is_nas_uplink_count_Set() const{
    return m_nas_uplink_count_isSet;
}

bool OAIMmContext::is_nas_uplink_count_Valid() const{
    return m_nas_uplink_count_isValid;
}

QByteArray OAIMmContext::getUeSecurityCapability() const {
    return ue_security_capability;
}
void OAIMmContext::setUeSecurityCapability(const QByteArray &ue_security_capability) {
    this->ue_security_capability = ue_security_capability;
    this->m_ue_security_capability_isSet = true;
}

bool OAIMmContext::is_ue_security_capability_Set() const{
    return m_ue_security_capability_isSet;
}

bool OAIMmContext::is_ue_security_capability_Valid() const{
    return m_ue_security_capability_isValid;
}

QByteArray OAIMmContext::getS1UeNetworkCapability() const {
    return s1_ue_network_capability;
}
void OAIMmContext::setS1UeNetworkCapability(const QByteArray &s1_ue_network_capability) {
    this->s1_ue_network_capability = s1_ue_network_capability;
    this->m_s1_ue_network_capability_isSet = true;
}

bool OAIMmContext::is_s1_ue_network_capability_Set() const{
    return m_s1_ue_network_capability_isSet;
}

bool OAIMmContext::is_s1_ue_network_capability_Valid() const{
    return m_s1_ue_network_capability_isValid;
}

QList<OAISnssai> OAIMmContext::getAllowedNssai() const {
    return allowed_nssai;
}
void OAIMmContext::setAllowedNssai(const QList<OAISnssai> &allowed_nssai) {
    this->allowed_nssai = allowed_nssai;
    this->m_allowed_nssai_isSet = true;
}

bool OAIMmContext::is_allowed_nssai_Set() const{
    return m_allowed_nssai_isSet;
}

bool OAIMmContext::is_allowed_nssai_Valid() const{
    return m_allowed_nssai_isValid;
}

QList<OAINssaiMapping> OAIMmContext::getNssaiMappingList() const {
    return nssai_mapping_list;
}
void OAIMmContext::setNssaiMappingList(const QList<OAINssaiMapping> &nssai_mapping_list) {
    this->nssai_mapping_list = nssai_mapping_list;
    this->m_nssai_mapping_list_isSet = true;
}

bool OAIMmContext::is_nssai_mapping_list_Set() const{
    return m_nssai_mapping_list_isSet;
}

bool OAIMmContext::is_nssai_mapping_list_Valid() const{
    return m_nssai_mapping_list_isValid;
}

QList<OAISnssai> OAIMmContext::getAllowedHomeNssai() const {
    return allowed_home_nssai;
}
void OAIMmContext::setAllowedHomeNssai(const QList<OAISnssai> &allowed_home_nssai) {
    this->allowed_home_nssai = allowed_home_nssai;
    this->m_allowed_home_nssai_isSet = true;
}

bool OAIMmContext::is_allowed_home_nssai_Set() const{
    return m_allowed_home_nssai_isSet;
}

bool OAIMmContext::is_allowed_home_nssai_Valid() const{
    return m_allowed_home_nssai_isValid;
}

QList<QString> OAIMmContext::getNsInstanceList() const {
    return ns_instance_list;
}
void OAIMmContext::setNsInstanceList(const QList<QString> &ns_instance_list) {
    this->ns_instance_list = ns_instance_list;
    this->m_ns_instance_list_isSet = true;
}

bool OAIMmContext::is_ns_instance_list_Set() const{
    return m_ns_instance_list_isSet;
}

bool OAIMmContext::is_ns_instance_list_Valid() const{
    return m_ns_instance_list_isValid;
}

OAIExpectedUeBehavior OAIMmContext::getExpectedUEbehavior() const {
    return expected_u_ebehavior;
}
void OAIMmContext::setExpectedUEbehavior(const OAIExpectedUeBehavior &expected_u_ebehavior) {
    this->expected_u_ebehavior = expected_u_ebehavior;
    this->m_expected_u_ebehavior_isSet = true;
}

bool OAIMmContext::is_expected_u_ebehavior_Set() const{
    return m_expected_u_ebehavior_isSet;
}

bool OAIMmContext::is_expected_u_ebehavior_Valid() const{
    return m_expected_u_ebehavior_isValid;
}

OAIUeDifferentiationInfo OAIMmContext::getUeDifferentiationInfo() const {
    return ue_differentiation_info;
}
void OAIMmContext::setUeDifferentiationInfo(const OAIUeDifferentiationInfo &ue_differentiation_info) {
    this->ue_differentiation_info = ue_differentiation_info;
    this->m_ue_differentiation_info_isSet = true;
}

bool OAIMmContext::is_ue_differentiation_info_Set() const{
    return m_ue_differentiation_info_isSet;
}

bool OAIMmContext::is_ue_differentiation_info_Valid() const{
    return m_ue_differentiation_info_isValid;
}

QByteArray OAIMmContext::getPlmnAssiUeRadioCapId() const {
    return plmn_assi_ue_radio_cap_id;
}
void OAIMmContext::setPlmnAssiUeRadioCapId(const QByteArray &plmn_assi_ue_radio_cap_id) {
    this->plmn_assi_ue_radio_cap_id = plmn_assi_ue_radio_cap_id;
    this->m_plmn_assi_ue_radio_cap_id_isSet = true;
}

bool OAIMmContext::is_plmn_assi_ue_radio_cap_id_Set() const{
    return m_plmn_assi_ue_radio_cap_id_isSet;
}

bool OAIMmContext::is_plmn_assi_ue_radio_cap_id_Valid() const{
    return m_plmn_assi_ue_radio_cap_id_isValid;
}

QByteArray OAIMmContext::getManAssiUeRadioCapId() const {
    return man_assi_ue_radio_cap_id;
}
void OAIMmContext::setManAssiUeRadioCapId(const QByteArray &man_assi_ue_radio_cap_id) {
    this->man_assi_ue_radio_cap_id = man_assi_ue_radio_cap_id;
    this->m_man_assi_ue_radio_cap_id_isSet = true;
}

bool OAIMmContext::is_man_assi_ue_radio_cap_id_Set() const{
    return m_man_assi_ue_radio_cap_id_isSet;
}

bool OAIMmContext::is_man_assi_ue_radio_cap_id_Valid() const{
    return m_man_assi_ue_radio_cap_id_isValid;
}

QString OAIMmContext::getUcmfDicEntryId() const {
    return ucmf_dic_entry_id;
}
void OAIMmContext::setUcmfDicEntryId(const QString &ucmf_dic_entry_id) {
    this->ucmf_dic_entry_id = ucmf_dic_entry_id;
    this->m_ucmf_dic_entry_id_isSet = true;
}

bool OAIMmContext::is_ucmf_dic_entry_id_Set() const{
    return m_ucmf_dic_entry_id_isSet;
}

bool OAIMmContext::is_ucmf_dic_entry_id_Valid() const{
    return m_ucmf_dic_entry_id_isValid;
}

OAIGlobalRanNodeId OAIMmContext::getN3IwfId() const {
    return n3_iwf_id;
}
void OAIMmContext::setN3IwfId(const OAIGlobalRanNodeId &n3_iwf_id) {
    this->n3_iwf_id = n3_iwf_id;
    this->m_n3_iwf_id_isSet = true;
}

bool OAIMmContext::is_n3_iwf_id_Set() const{
    return m_n3_iwf_id_isSet;
}

bool OAIMmContext::is_n3_iwf_id_Valid() const{
    return m_n3_iwf_id_isValid;
}

OAIGlobalRanNodeId OAIMmContext::getWagfId() const {
    return wagf_id;
}
void OAIMmContext::setWagfId(const OAIGlobalRanNodeId &wagf_id) {
    this->wagf_id = wagf_id;
    this->m_wagf_id_isSet = true;
}

bool OAIMmContext::is_wagf_id_Set() const{
    return m_wagf_id_isSet;
}

bool OAIMmContext::is_wagf_id_Valid() const{
    return m_wagf_id_isValid;
}

OAIGlobalRanNodeId OAIMmContext::getTngfId() const {
    return tngf_id;
}
void OAIMmContext::setTngfId(const OAIGlobalRanNodeId &tngf_id) {
    this->tngf_id = tngf_id;
    this->m_tngf_id_isSet = true;
}

bool OAIMmContext::is_tngf_id_Set() const{
    return m_tngf_id_isSet;
}

bool OAIMmContext::is_tngf_id_Valid() const{
    return m_tngf_id_isValid;
}

qint32 OAIMmContext::getAnN2ApId() const {
    return an_n2_ap_id;
}
void OAIMmContext::setAnN2ApId(const qint32 &an_n2_ap_id) {
    this->an_n2_ap_id = an_n2_ap_id;
    this->m_an_n2_ap_id_isSet = true;
}

bool OAIMmContext::is_an_n2_ap_id_Set() const{
    return m_an_n2_ap_id_isSet;
}

bool OAIMmContext::is_an_n2_ap_id_Valid() const{
    return m_an_n2_ap_id_isValid;
}

QList<OAINssaaStatus> OAIMmContext::getNssaaStatusList() const {
    return nssaa_status_list;
}
void OAIMmContext::setNssaaStatusList(const QList<OAINssaaStatus> &nssaa_status_list) {
    this->nssaa_status_list = nssaa_status_list;
    this->m_nssaa_status_list_isSet = true;
}

bool OAIMmContext::is_nssaa_status_list_Set() const{
    return m_nssaa_status_list_isSet;
}

bool OAIMmContext::is_nssaa_status_list_Valid() const{
    return m_nssaa_status_list_isValid;
}

QList<OAINssaiMapping> OAIMmContext::getPendingNssaiMappingList() const {
    return pending_nssai_mapping_list;
}
void OAIMmContext::setPendingNssaiMappingList(const QList<OAINssaiMapping> &pending_nssai_mapping_list) {
    this->pending_nssai_mapping_list = pending_nssai_mapping_list;
    this->m_pending_nssai_mapping_list_isSet = true;
}

bool OAIMmContext::is_pending_nssai_mapping_list_Set() const{
    return m_pending_nssai_mapping_list_isSet;
}

bool OAIMmContext::is_pending_nssai_mapping_list_Valid() const{
    return m_pending_nssai_mapping_list_isValid;
}

bool OAIMmContext::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (access_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (nas_security_mode.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (eps_nas_security_mode.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_nas_downlink_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nas_uplink_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ue_security_capability_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s1_ue_network_capability_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (allowed_nssai.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (nssai_mapping_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (allowed_home_nssai.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (ns_instance_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (expected_u_ebehavior.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (ue_differentiation_info.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_plmn_assi_ue_radio_cap_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_man_assi_ue_radio_cap_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ucmf_dic_entry_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (n3_iwf_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (wagf_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (tngf_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_an_n2_ap_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (nssaa_status_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (pending_nssai_mapping_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMmContext::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_access_type_isValid && true;
}

} // namespace OpenAPI
