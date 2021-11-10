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
 * OAIRatSelector_anyOf.h
 *
 * 
 */

#ifndef OAIRatSelector_anyOf_H
#define OAIRatSelector_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRatSelector_anyOf : public OAIEnum {
public:
    OAIRatSelector_anyOf();
    OAIRatSelector_anyOf(QString json);
    ~OAIRatSelector_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIRatSelector_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        E_UTRA, 
        NR
    };
    OAIRatSelector_anyOf::eOAIRatSelector_anyOf getValue() const;
    void setValue(const OAIRatSelector_anyOf::eOAIRatSelector_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIRatSelector_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRatSelector_anyOf)

#endif // OAIRatSelector_anyOf_H