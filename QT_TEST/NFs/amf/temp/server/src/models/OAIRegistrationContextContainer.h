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

/*
 * OAIRegistrationContextContainer.h
 *
 * 
 */

#ifndef OAIRegistrationContextContainer_H
#define OAIRegistrationContextContainer_H

#include <QJsonObject>

#include "OAIAccessType.h"
#include "OAIAllowedNssai.h"
#include "OAICeModeBInd.h"
#include "OAIConfiguredSnssai.h"
#include "OAIGlobalRanNodeId.h"
#include "OAIIpv6Addr.h"
#include "OAILteMInd.h"
#include "OAINpnAccessInfo.h"
#include "OAIPlmnId.h"
#include "OAISnssai.h"
#include "OAIUeContext.h"
#include "OAIUserLocation.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRegistrationContextContainer : public OAIObject {
public:
    OAIRegistrationContextContainer();
    OAIRegistrationContextContainer(QString json);
    ~OAIRegistrationContextContainer() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUeContext getUeContext() const;
    void setUeContext(const OAIUeContext &ue_context);
    bool is_ue_context_Set() const;
    bool is_ue_context_Valid() const;

    QString getLocalTimeZone() const;
    void setLocalTimeZone(const QString &local_time_zone);
    bool is_local_time_zone_Set() const;
    bool is_local_time_zone_Valid() const;

    OAIAccessType getAnType() const;
    void setAnType(const OAIAccessType &an_type);
    bool is_an_type_Set() const;
    bool is_an_type_Valid() const;

    qint32 getAnN2ApId() const;
    void setAnN2ApId(const qint32 &an_n2_ap_id);
    bool is_an_n2_ap_id_Set() const;
    bool is_an_n2_ap_id_Valid() const;

    OAIGlobalRanNodeId getRanNodeId() const;
    void setRanNodeId(const OAIGlobalRanNodeId &ran_node_id);
    bool is_ran_node_id_Set() const;
    bool is_ran_node_id_Valid() const;

    QString getInitialAmfName() const;
    void setInitialAmfName(const QString &initial_amf_name);
    bool is_initial_amf_name_Set() const;
    bool is_initial_amf_name_Valid() const;

    OAIUserLocation getUserLocation() const;
    void setUserLocation(const OAIUserLocation &user_location);
    bool is_user_location_Set() const;
    bool is_user_location_Valid() const;

    QString getRrcEstCause() const;
    void setRrcEstCause(const QString &rrc_est_cause);
    bool is_rrc_est_cause_Set() const;
    bool is_rrc_est_cause_Valid() const;

    bool isUeContextRequest() const;
    void setUeContextRequest(const bool &ue_context_request);
    bool is_ue_context_request_Set() const;
    bool is_ue_context_request_Valid() const;

    qint32 getInitialAmfN2ApId() const;
    void setInitialAmfN2ApId(const qint32 &initial_amf_n2_ap_id);
    bool is_initial_amf_n2_ap_id_Set() const;
    bool is_initial_amf_n2_ap_id_Valid() const;

    QString getAnN2Ipv4Addr() const;
    void setAnN2Ipv4Addr(const QString &an_n2_ipv4_addr);
    bool is_an_n2_ipv4_addr_Set() const;
    bool is_an_n2_ipv4_addr_Valid() const;

    OAIIpv6Addr getAnN2Ipv6Addr() const;
    void setAnN2Ipv6Addr(const OAIIpv6Addr &an_n2_ipv6_addr);
    bool is_an_n2_ipv6_addr_Set() const;
    bool is_an_n2_ipv6_addr_Valid() const;

    OAIAllowedNssai getAllowedNssai() const;
    void setAllowedNssai(const OAIAllowedNssai &allowed_nssai);
    bool is_allowed_nssai_Set() const;
    bool is_allowed_nssai_Valid() const;

    QList<OAIConfiguredSnssai> getConfiguredNssai() const;
    void setConfiguredNssai(const QList<OAIConfiguredSnssai> &configured_nssai);
    bool is_configured_nssai_Set() const;
    bool is_configured_nssai_Valid() const;

    QList<OAISnssai> getRejectedNssaiInPlmn() const;
    void setRejectedNssaiInPlmn(const QList<OAISnssai> &rejected_nssai_in_plmn);
    bool is_rejected_nssai_in_plmn_Set() const;
    bool is_rejected_nssai_in_plmn_Valid() const;

    QList<OAISnssai> getRejectedNssaiInTa() const;
    void setRejectedNssaiInTa(const QList<OAISnssai> &rejected_nssai_in_ta);
    bool is_rejected_nssai_in_ta_Set() const;
    bool is_rejected_nssai_in_ta_Valid() const;

    OAIPlmnId getSelectedPlmnId() const;
    void setSelectedPlmnId(const OAIPlmnId &selected_plmn_id);
    bool is_selected_plmn_id_Set() const;
    bool is_selected_plmn_id_Valid() const;

    bool isIabNodeInd() const;
    void setIabNodeInd(const bool &iab_node_ind);
    bool is_iab_node_ind_Set() const;
    bool is_iab_node_ind_Valid() const;

    OAICeModeBInd getCeModeBInd() const;
    void setCeModeBInd(const OAICeModeBInd &ce_mode_b_ind);
    bool is_ce_mode_b_ind_Set() const;
    bool is_ce_mode_b_ind_Valid() const;

    OAILteMInd getLteMInd() const;
    void setLteMInd(const OAILteMInd &lte_m_ind);
    bool is_lte_m_ind_Set() const;
    bool is_lte_m_ind_Valid() const;

    bool isAuthenticatedInd() const;
    void setAuthenticatedInd(const bool &authenticated_ind);
    bool is_authenticated_ind_Set() const;
    bool is_authenticated_ind_Valid() const;

    OAINpnAccessInfo getNpnAccessInfo() const;
    void setNpnAccessInfo(const OAINpnAccessInfo &npn_access_info);
    bool is_npn_access_info_Set() const;
    bool is_npn_access_info_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUeContext ue_context;
    bool m_ue_context_isSet;
    bool m_ue_context_isValid;

    QString local_time_zone;
    bool m_local_time_zone_isSet;
    bool m_local_time_zone_isValid;

    OAIAccessType an_type;
    bool m_an_type_isSet;
    bool m_an_type_isValid;

    qint32 an_n2_ap_id;
    bool m_an_n2_ap_id_isSet;
    bool m_an_n2_ap_id_isValid;

    OAIGlobalRanNodeId ran_node_id;
    bool m_ran_node_id_isSet;
    bool m_ran_node_id_isValid;

    QString initial_amf_name;
    bool m_initial_amf_name_isSet;
    bool m_initial_amf_name_isValid;

    OAIUserLocation user_location;
    bool m_user_location_isSet;
    bool m_user_location_isValid;

    QString rrc_est_cause;
    bool m_rrc_est_cause_isSet;
    bool m_rrc_est_cause_isValid;

    bool ue_context_request;
    bool m_ue_context_request_isSet;
    bool m_ue_context_request_isValid;

    qint32 initial_amf_n2_ap_id;
    bool m_initial_amf_n2_ap_id_isSet;
    bool m_initial_amf_n2_ap_id_isValid;

    QString an_n2_ipv4_addr;
    bool m_an_n2_ipv4_addr_isSet;
    bool m_an_n2_ipv4_addr_isValid;

    OAIIpv6Addr an_n2_ipv6_addr;
    bool m_an_n2_ipv6_addr_isSet;
    bool m_an_n2_ipv6_addr_isValid;

    OAIAllowedNssai allowed_nssai;
    bool m_allowed_nssai_isSet;
    bool m_allowed_nssai_isValid;

    QList<OAIConfiguredSnssai> configured_nssai;
    bool m_configured_nssai_isSet;
    bool m_configured_nssai_isValid;

    QList<OAISnssai> rejected_nssai_in_plmn;
    bool m_rejected_nssai_in_plmn_isSet;
    bool m_rejected_nssai_in_plmn_isValid;

    QList<OAISnssai> rejected_nssai_in_ta;
    bool m_rejected_nssai_in_ta_isSet;
    bool m_rejected_nssai_in_ta_isValid;

    OAIPlmnId selected_plmn_id;
    bool m_selected_plmn_id_isSet;
    bool m_selected_plmn_id_isValid;

    bool iab_node_ind;
    bool m_iab_node_ind_isSet;
    bool m_iab_node_ind_isValid;

    OAICeModeBInd ce_mode_b_ind;
    bool m_ce_mode_b_ind_isSet;
    bool m_ce_mode_b_ind_isValid;

    OAILteMInd lte_m_ind;
    bool m_lte_m_ind_isSet;
    bool m_lte_m_ind_isValid;

    bool authenticated_ind;
    bool m_authenticated_ind_isSet;
    bool m_authenticated_ind_isValid;

    OAINpnAccessInfo npn_access_info;
    bool m_npn_access_info_isSet;
    bool m_npn_access_info_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRegistrationContextContainer)

#endif // OAIRegistrationContextContainer_H
