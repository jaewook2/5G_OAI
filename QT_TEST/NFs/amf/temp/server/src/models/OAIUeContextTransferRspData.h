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
 * OAIUeContextTransferRspData.h
 *
 * 
 */

#ifndef OAIUeContextTransferRspData_H
#define OAIUeContextTransferRspData_H

#include <QJsonObject>

#include "OAIN2InfoContent.h"
#include "OAIUeContext.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUeContextTransferRspData : public OAIObject {
public:
    OAIUeContextTransferRspData();
    OAIUeContextTransferRspData(QString json);
    ~OAIUeContextTransferRspData() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUeContext getUeContext() const;
    void setUeContext(const OAIUeContext &ue_context);
    bool is_ue_context_Set() const;
    bool is_ue_context_Valid() const;

    OAIN2InfoContent getUeRadioCapability() const;
    void setUeRadioCapability(const OAIN2InfoContent &ue_radio_capability);
    bool is_ue_radio_capability_Set() const;
    bool is_ue_radio_capability_Valid() const;

    OAIN2InfoContent getUeNbiotRadioCapability() const;
    void setUeNbiotRadioCapability(const OAIN2InfoContent &ue_nbiot_radio_capability);
    bool is_ue_nbiot_radio_capability_Set() const;
    bool is_ue_nbiot_radio_capability_Valid() const;

    QString getSupportedFeatures() const;
    void setSupportedFeatures(const QString &supported_features);
    bool is_supported_features_Set() const;
    bool is_supported_features_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUeContext ue_context;
    bool m_ue_context_isSet;
    bool m_ue_context_isValid;

    OAIN2InfoContent ue_radio_capability;
    bool m_ue_radio_capability_isSet;
    bool m_ue_radio_capability_isValid;

    OAIN2InfoContent ue_nbiot_radio_capability;
    bool m_ue_nbiot_radio_capability_isSet;
    bool m_ue_nbiot_radio_capability_isValid;

    QString supported_features;
    bool m_supported_features_isSet;
    bool m_supported_features_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUeContextTransferRspData)

#endif // OAIUeContextTransferRspData_H
