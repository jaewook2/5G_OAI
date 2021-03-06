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
 * OAICollectionPeriodRmmLteMdt_anyOf.h
 *
 * 
 */

#ifndef OAICollectionPeriodRmmLteMdt_anyOf_H
#define OAICollectionPeriodRmmLteMdt_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICollectionPeriodRmmLteMdt_anyOf : public OAIEnum {
public:
    OAICollectionPeriodRmmLteMdt_anyOf();
    OAICollectionPeriodRmmLteMdt_anyOf(QString json);
    ~OAICollectionPeriodRmmLteMdt_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAICollectionPeriodRmmLteMdt_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        _1024, 
        _1280, 
        _2048, 
        _2560, 
        _5120, 
        _10240, 
        _60000
    };
    OAICollectionPeriodRmmLteMdt_anyOf::eOAICollectionPeriodRmmLteMdt_anyOf getValue() const;
    void setValue(const OAICollectionPeriodRmmLteMdt_anyOf::eOAICollectionPeriodRmmLteMdt_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAICollectionPeriodRmmLteMdt_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollectionPeriodRmmLteMdt_anyOf)

#endif // OAICollectionPeriodRmmLteMdt_anyOf_H
