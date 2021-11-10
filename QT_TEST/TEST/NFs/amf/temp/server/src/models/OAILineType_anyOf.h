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
 * OAILineType_anyOf.h
 *
 * 
 */

#ifndef OAILineType_anyOf_H
#define OAILineType_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAILineType_anyOf : public OAIEnum {
public:
    OAILineType_anyOf();
    OAILineType_anyOf(QString json);
    ~OAILineType_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAILineType_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DSL, 
        PON
    };
    OAILineType_anyOf::eOAILineType_anyOf getValue() const;
    void setValue(const OAILineType_anyOf::eOAILineType_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAILineType_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAILineType_anyOf)

#endif // OAILineType_anyOf_H