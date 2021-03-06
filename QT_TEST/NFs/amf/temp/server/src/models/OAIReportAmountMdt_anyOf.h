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
 * OAIReportAmountMdt_anyOf.h
 *
 * 
 */

#ifndef OAIReportAmountMdt_anyOf_H
#define OAIReportAmountMdt_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIReportAmountMdt_anyOf : public OAIEnum {
public:
    OAIReportAmountMdt_anyOf();
    OAIReportAmountMdt_anyOf(QString json);
    ~OAIReportAmountMdt_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIReportAmountMdt_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        _1, 
        _2, 
        _4, 
        _8, 
        _16, 
        _32, 
        _64, 
        INFINITY
    };
    OAIReportAmountMdt_anyOf::eOAIReportAmountMdt_anyOf getValue() const;
    void setValue(const OAIReportAmountMdt_anyOf::eOAIReportAmountMdt_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIReportAmountMdt_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIReportAmountMdt_anyOf)

#endif // OAIReportAmountMdt_anyOf_H
