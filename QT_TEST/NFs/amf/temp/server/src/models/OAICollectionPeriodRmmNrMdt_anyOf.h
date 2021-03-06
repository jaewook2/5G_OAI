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
 * OAICollectionPeriodRmmNrMdt_anyOf.h
 *
 * 
 */

#ifndef OAICollectionPeriodRmmNrMdt_anyOf_H
#define OAICollectionPeriodRmmNrMdt_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICollectionPeriodRmmNrMdt_anyOf : public OAIEnum {
public:
    OAICollectionPeriodRmmNrMdt_anyOf();
    OAICollectionPeriodRmmNrMdt_anyOf(QString json);
    ~OAICollectionPeriodRmmNrMdt_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAICollectionPeriodRmmNrMdt_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        _1024, 
        _2048, 
        _5120, 
        _10240, 
        _60000
    };
    OAICollectionPeriodRmmNrMdt_anyOf::eOAICollectionPeriodRmmNrMdt_anyOf getValue() const;
    void setValue(const OAICollectionPeriodRmmNrMdt_anyOf::eOAICollectionPeriodRmmNrMdt_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAICollectionPeriodRmmNrMdt_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollectionPeriodRmmNrMdt_anyOf)

#endif // OAICollectionPeriodRmmNrMdt_anyOf_H
