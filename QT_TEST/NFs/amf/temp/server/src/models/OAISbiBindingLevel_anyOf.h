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
 * OAISbiBindingLevel_anyOf.h
 *
 * 
 */

#ifndef OAISbiBindingLevel_anyOf_H
#define OAISbiBindingLevel_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISbiBindingLevel_anyOf : public OAIEnum {
public:
    OAISbiBindingLevel_anyOf();
    OAISbiBindingLevel_anyOf(QString json);
    ~OAISbiBindingLevel_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAISbiBindingLevel_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        INSTANCE_BINDING, 
        SET_BINDING, 
        SERVICE_SET_BINDING, 
        SERVICE_INSTANCE_BINDING
    };
    OAISbiBindingLevel_anyOf::eOAISbiBindingLevel_anyOf getValue() const;
    void setValue(const OAISbiBindingLevel_anyOf::eOAISbiBindingLevel_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAISbiBindingLevel_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISbiBindingLevel_anyOf)

#endif // OAISbiBindingLevel_anyOf_H