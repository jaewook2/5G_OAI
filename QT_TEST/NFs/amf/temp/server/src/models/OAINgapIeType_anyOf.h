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
 * OAINgapIeType_anyOf.h
 *
 * 
 */

#ifndef OAINgapIeType_anyOf_H
#define OAINgapIeType_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAINgapIeType_anyOf : public OAIEnum {
public:
    OAINgapIeType_anyOf();
    OAINgapIeType_anyOf(QString json);
    ~OAINgapIeType_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAINgapIeType_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        PDU_RES_SETUP_REQ, 
        PDU_RES_REL_CMD, 
        PDU_RES_MOD_REQ, 
        HANDOVER_CMD, 
        HANDOVER_REQUIRED, 
        HANDOVER_PREP_FAIL, 
        SRC_TO_TAR_CONTAINER, 
        TAR_TO_SRC_CONTAINER, 
        TAR_TO_SRC_FAIL_CONTAINER, 
        RAN_STATUS_TRANS_CONTAINER, 
        SON_CONFIG_TRANSFER, 
        NRPPA_PDU, 
        UE_RADIO_CAPABILITY, 
        RIM_INFO_TRANSFER, 
        SECONDARY_RAT_USAGE, 
        PC5_QOS_PARA, 
        EARLY_STATUS_TRANS_CONTAINER
    };
    OAINgapIeType_anyOf::eOAINgapIeType_anyOf getValue() const;
    void setValue(const OAINgapIeType_anyOf::eOAINgapIeType_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAINgapIeType_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINgapIeType_anyOf)

#endif // OAINgapIeType_anyOf_H
