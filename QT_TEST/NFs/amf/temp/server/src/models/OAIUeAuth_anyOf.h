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
 * OAIUeAuth_anyOf.h
 *
 * 
 */

#ifndef OAIUeAuth_anyOf_H
#define OAIUeAuth_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUeAuth_anyOf : public OAIEnum {
public:
    OAIUeAuth_anyOf();
    OAIUeAuth_anyOf(QString json);
    ~OAIUeAuth_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIUeAuth_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AUTHORIZED, 
        NOT_AUTHORIZED
    };
    OAIUeAuth_anyOf::eOAIUeAuth_anyOf getValue() const;
    void setValue(const OAIUeAuth_anyOf::eOAIUeAuth_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIUeAuth_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUeAuth_anyOf)

#endif // OAIUeAuth_anyOf_H