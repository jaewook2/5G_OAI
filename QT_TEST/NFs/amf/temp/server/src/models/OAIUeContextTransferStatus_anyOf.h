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
 * OAIUeContextTransferStatus_anyOf.h
 *
 * 
 */

#ifndef OAIUeContextTransferStatus_anyOf_H
#define OAIUeContextTransferStatus_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUeContextTransferStatus_anyOf : public OAIEnum {
public:
    OAIUeContextTransferStatus_anyOf();
    OAIUeContextTransferStatus_anyOf(QString json);
    ~OAIUeContextTransferStatus_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIUeContextTransferStatus_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TRANSFERRED, 
        NOT_TRANSFERRED
    };
    OAIUeContextTransferStatus_anyOf::eOAIUeContextTransferStatus_anyOf getValue() const;
    void setValue(const OAIUeContextTransferStatus_anyOf::eOAIUeContextTransferStatus_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIUeContextTransferStatus_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUeContextTransferStatus_anyOf)

#endif // OAIUeContextTransferStatus_anyOf_H
