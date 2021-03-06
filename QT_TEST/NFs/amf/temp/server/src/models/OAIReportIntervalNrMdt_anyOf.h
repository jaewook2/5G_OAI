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
 * OAIReportIntervalNrMdt_anyOf.h
 *
 * 
 */

#ifndef OAIReportIntervalNrMdt_anyOf_H
#define OAIReportIntervalNrMdt_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIReportIntervalNrMdt_anyOf : public OAIEnum {
public:
    OAIReportIntervalNrMdt_anyOf();
    OAIReportIntervalNrMdt_anyOf(QString json);
    ~OAIReportIntervalNrMdt_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIReportIntervalNrMdt_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        _120, 
        _240, 
        _480, 
        _640, 
        _1024, 
        _2048, 
        _5120, 
        _10240, 
        _20480, 
        _40960, 
        _60000, 
        _360000, 
        _720000, 
        _1800000, 
        _3600000
    };
    OAIReportIntervalNrMdt_anyOf::eOAIReportIntervalNrMdt_anyOf getValue() const;
    void setValue(const OAIReportIntervalNrMdt_anyOf::eOAIReportIntervalNrMdt_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIReportIntervalNrMdt_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIReportIntervalNrMdt_anyOf)

#endif // OAIReportIntervalNrMdt_anyOf_H
