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
 * OAIIntegrityAlgorithm_anyOf.h
 *
 * 
 */

#ifndef OAIIntegrityAlgorithm_anyOf_H
#define OAIIntegrityAlgorithm_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIIntegrityAlgorithm_anyOf : public OAIEnum {
public:
    OAIIntegrityAlgorithm_anyOf();
    OAIIntegrityAlgorithm_anyOf(QString json);
    ~OAIIntegrityAlgorithm_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIIntegrityAlgorithm_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NIA0, 
        NIA1, 
        NIA2, 
        NIA3
    };
    OAIIntegrityAlgorithm_anyOf::eOAIIntegrityAlgorithm_anyOf getValue() const;
    void setValue(const OAIIntegrityAlgorithm_anyOf::eOAIIntegrityAlgorithm_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIIntegrityAlgorithm_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIIntegrityAlgorithm_anyOf)

#endif // OAIIntegrityAlgorithm_anyOf_H
