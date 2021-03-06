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
 * OAIN2InformationTransferResult_anyOf.h
 *
 * 
 */

#ifndef OAIN2InformationTransferResult_anyOf_H
#define OAIN2InformationTransferResult_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIN2InformationTransferResult_anyOf : public OAIEnum {
public:
    OAIN2InformationTransferResult_anyOf();
    OAIN2InformationTransferResult_anyOf(QString json);
    ~OAIN2InformationTransferResult_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIN2InformationTransferResult_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        N2_INFO_TRANSFER_INITIATED
    };
    OAIN2InformationTransferResult_anyOf::eOAIN2InformationTransferResult_anyOf getValue() const;
    void setValue(const OAIN2InformationTransferResult_anyOf::eOAIN2InformationTransferResult_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIN2InformationTransferResult_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIN2InformationTransferResult_anyOf)

#endif // OAIN2InformationTransferResult_anyOf_H
