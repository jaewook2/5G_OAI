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
 * OAIV2xContext.h
 *
 * 
 */

#ifndef OAIV2xContext_H
#define OAIV2xContext_H

#include <QJsonObject>

#include "OAILteV2xAuth.h"
#include "OAINrV2xAuth.h"
#include "OAIPc5QoSPara.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV2xContext : public OAIObject {
public:
    OAIV2xContext();
    OAIV2xContext(QString json);
    ~OAIV2xContext() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAINrV2xAuth getNrV2xServicesAuth() const;
    void setNrV2xServicesAuth(const OAINrV2xAuth &nr_v2x_services_auth);
    bool is_nr_v2x_services_auth_Set() const;
    bool is_nr_v2x_services_auth_Valid() const;

    OAILteV2xAuth getLteV2xServicesAuth() const;
    void setLteV2xServicesAuth(const OAILteV2xAuth &lte_v2x_services_auth);
    bool is_lte_v2x_services_auth_Set() const;
    bool is_lte_v2x_services_auth_Valid() const;

    QString getNrUeSidelinkAmbr() const;
    void setNrUeSidelinkAmbr(const QString &nr_ue_sidelink_ambr);
    bool is_nr_ue_sidelink_ambr_Set() const;
    bool is_nr_ue_sidelink_ambr_Valid() const;

    QString getLteUeSidelinkAmbr() const;
    void setLteUeSidelinkAmbr(const QString &lte_ue_sidelink_ambr);
    bool is_lte_ue_sidelink_ambr_Set() const;
    bool is_lte_ue_sidelink_ambr_Valid() const;

    OAIPc5QoSPara getPc5QoSPara() const;
    void setPc5QoSPara(const OAIPc5QoSPara &pc5_qo_s_para);
    bool is_pc5_qo_s_para_Set() const;
    bool is_pc5_qo_s_para_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAINrV2xAuth nr_v2x_services_auth;
    bool m_nr_v2x_services_auth_isSet;
    bool m_nr_v2x_services_auth_isValid;

    OAILteV2xAuth lte_v2x_services_auth;
    bool m_lte_v2x_services_auth_isSet;
    bool m_lte_v2x_services_auth_isValid;

    QString nr_ue_sidelink_ambr;
    bool m_nr_ue_sidelink_ambr_isSet;
    bool m_nr_ue_sidelink_ambr_isValid;

    QString lte_ue_sidelink_ambr;
    bool m_lte_ue_sidelink_ambr_isSet;
    bool m_lte_ue_sidelink_ambr_isValid;

    OAIPc5QoSPara pc5_qo_s_para;
    bool m_pc5_qo_s_para_isSet;
    bool m_pc5_qo_s_para_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV2xContext)

#endif // OAIV2xContext_H
