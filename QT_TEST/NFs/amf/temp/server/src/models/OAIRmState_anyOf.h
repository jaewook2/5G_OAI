/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.1.5
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIRmState_anyOf.h
 *
 * 
 */

#ifndef OAIRmState_anyOf_H
#define OAIRmState_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRmState_anyOf : public OAIEnum {
public:
    OAIRmState_anyOf();
    OAIRmState_anyOf(QString json);
    ~OAIRmState_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIRmState_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        REGISTERED, 
        DEREGISTERED
    };
    OAIRmState_anyOf::eOAIRmState_anyOf getValue() const;
    void setValue(const OAIRmState_anyOf::eOAIRmState_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIRmState_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRmState_anyOf)

#endif // OAIRmState_anyOf_H