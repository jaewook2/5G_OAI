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
 * OAIN1N2MessageTransferReqData.h
 *
 * 
 */

#ifndef OAIN1N2MessageTransferReqData_H
#define OAIN1N2MessageTransferReqData_H

#include <QJsonObject>

#include "OAIAccessType.h"
#include "OAIAreaOfValidity.h"
#include "OAIArp.h"
#include "OAIGuami.h"
#include "OAIN1MessageContainer.h"
#include "OAIN2InfoContainer.h"
#include "OAIRefToBinaryData.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIN1N2MessageTransferReqData : public OAIObject {
public:
    OAIN1N2MessageTransferReqData();
    OAIN1N2MessageTransferReqData(QString json);
    ~OAIN1N2MessageTransferReqData() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIN1MessageContainer getN1MessageContainer() const;
    void setN1MessageContainer(const OAIN1MessageContainer &n1_message_container);
    bool is_n1_message_container_Set() const;
    bool is_n1_message_container_Valid() const;

    OAIN2InfoContainer getN2InfoContainer() const;
    void setN2InfoContainer(const OAIN2InfoContainer &n2_info_container);
    bool is_n2_info_container_Set() const;
    bool is_n2_info_container_Valid() const;

    OAIRefToBinaryData getMtData() const;
    void setMtData(const OAIRefToBinaryData &mt_data);
    bool is_mt_data_Set() const;
    bool is_mt_data_Valid() const;

    bool isSkipInd() const;
    void setSkipInd(const bool &skip_ind);
    bool is_skip_ind_Set() const;
    bool is_skip_ind_Valid() const;

    bool isLastMsgIndication() const;
    void setLastMsgIndication(const bool &last_msg_indication);
    bool is_last_msg_indication_Set() const;
    bool is_last_msg_indication_Valid() const;

    qint32 getPduSessionId() const;
    void setPduSessionId(const qint32 &pdu_session_id);
    bool is_pdu_session_id_Set() const;
    bool is_pdu_session_id_Valid() const;

    QString getLcsCorrelationId() const;
    void setLcsCorrelationId(const QString &lcs_correlation_id);
    bool is_lcs_correlation_id_Set() const;
    bool is_lcs_correlation_id_Valid() const;

    qint32 getPpi() const;
    void setPpi(const qint32 &ppi);
    bool is_ppi_Set() const;
    bool is_ppi_Valid() const;

    OAIArp getArp() const;
    void setArp(const OAIArp &arp);
    bool is_arp_Set() const;
    bool is_arp_Valid() const;

    qint32 getR5qi() const;
    void setR5qi(const qint32 &r_5qi);
    bool is_r_5qi_Set() const;
    bool is_r_5qi_Valid() const;

    QString getN1n2FailureTxfNotifUri() const;
    void setN1n2FailureTxfNotifUri(const QString &n1n2_failure_txf_notif_uri);
    bool is_n1n2_failure_txf_notif_uri_Set() const;
    bool is_n1n2_failure_txf_notif_uri_Valid() const;

    bool isSmfReallocationInd() const;
    void setSmfReallocationInd(const bool &smf_reallocation_ind);
    bool is_smf_reallocation_ind_Set() const;
    bool is_smf_reallocation_ind_Valid() const;

    OAIAreaOfValidity getAreaOfValidity() const;
    void setAreaOfValidity(const OAIAreaOfValidity &area_of_validity);
    bool is_area_of_validity_Set() const;
    bool is_area_of_validity_Valid() const;

    QString getSupportedFeatures() const;
    void setSupportedFeatures(const QString &supported_features);
    bool is_supported_features_Set() const;
    bool is_supported_features_Valid() const;

    OAIGuami getOldGuami() const;
    void setOldGuami(const OAIGuami &old_guami);
    bool is_old_guami_Set() const;
    bool is_old_guami_Valid() const;

    bool isMaAcceptedInd() const;
    void setMaAcceptedInd(const bool &ma_accepted_ind);
    bool is_ma_accepted_ind_Set() const;
    bool is_ma_accepted_ind_Valid() const;

    bool isExtBufSupport() const;
    void setExtBufSupport(const bool &ext_buf_support);
    bool is_ext_buf_support_Set() const;
    bool is_ext_buf_support_Valid() const;

    OAIAccessType getTargetAccess() const;
    void setTargetAccess(const OAIAccessType &target_access);
    bool is_target_access_Set() const;
    bool is_target_access_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIN1MessageContainer n1_message_container;
    bool m_n1_message_container_isSet;
    bool m_n1_message_container_isValid;

    OAIN2InfoContainer n2_info_container;
    bool m_n2_info_container_isSet;
    bool m_n2_info_container_isValid;

    OAIRefToBinaryData mt_data;
    bool m_mt_data_isSet;
    bool m_mt_data_isValid;

    bool skip_ind;
    bool m_skip_ind_isSet;
    bool m_skip_ind_isValid;

    bool last_msg_indication;
    bool m_last_msg_indication_isSet;
    bool m_last_msg_indication_isValid;

    qint32 pdu_session_id;
    bool m_pdu_session_id_isSet;
    bool m_pdu_session_id_isValid;

    QString lcs_correlation_id;
    bool m_lcs_correlation_id_isSet;
    bool m_lcs_correlation_id_isValid;

    qint32 ppi;
    bool m_ppi_isSet;
    bool m_ppi_isValid;

    OAIArp arp;
    bool m_arp_isSet;
    bool m_arp_isValid;

    qint32 r_5qi;
    bool m_r_5qi_isSet;
    bool m_r_5qi_isValid;

    QString n1n2_failure_txf_notif_uri;
    bool m_n1n2_failure_txf_notif_uri_isSet;
    bool m_n1n2_failure_txf_notif_uri_isValid;

    bool smf_reallocation_ind;
    bool m_smf_reallocation_ind_isSet;
    bool m_smf_reallocation_ind_isValid;

    OAIAreaOfValidity area_of_validity;
    bool m_area_of_validity_isSet;
    bool m_area_of_validity_isValid;

    QString supported_features;
    bool m_supported_features_isSet;
    bool m_supported_features_isValid;

    OAIGuami old_guami;
    bool m_old_guami_isSet;
    bool m_old_guami_isValid;

    bool ma_accepted_ind;
    bool m_ma_accepted_ind_isSet;
    bool m_ma_accepted_ind_isValid;

    bool ext_buf_support;
    bool m_ext_buf_support_isSet;
    bool m_ext_buf_support_isValid;

    OAIAccessType target_access;
    bool m_target_access_isSet;
    bool m_target_access_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIN1N2MessageTransferReqData)

#endif // OAIN1N2MessageTransferReqData_H