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
 * OAIAuthStatus_anyOf.h
 *
 * 
 */

#ifndef OAIAuthStatus_anyOf_H
#define OAIAuthStatus_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAuthStatus_anyOf : public OAIEnum {
public:
    OAIAuthStatus_anyOf();
    OAIAuthStatus_anyOf(QString json);
    ~OAIAuthStatus_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIAuthStatus_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EAP_SUCCESS, 
        EAP_FAILURE, 
        PENDING
    };
    OAIAuthStatus_anyOf::eOAIAuthStatus_anyOf getValue() const;
    void setValue(const OAIAuthStatus_anyOf::eOAIAuthStatus_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIAuthStatus_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAuthStatus_anyOf)

#endif // OAIAuthStatus_anyOf_H
