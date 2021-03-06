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
 * OAIPresenceState_anyOf.h
 *
 * 
 */

#ifndef OAIPresenceState_anyOf_H
#define OAIPresenceState_anyOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPresenceState_anyOf : public OAIEnum {
public:
    OAIPresenceState_anyOf();
    OAIPresenceState_anyOf(QString json);
    ~OAIPresenceState_anyOf() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIPresenceState_anyOf {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        IN_AREA, 
        OUT_OF_AREA, 
        UNKNOWN, 
        INACTIVE
    };
    OAIPresenceState_anyOf::eOAIPresenceState_anyOf getValue() const;
    void setValue(const OAIPresenceState_anyOf::eOAIPresenceState_anyOf& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIPresenceState_anyOf m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPresenceState_anyOf)

#endif // OAIPresenceState_anyOf_H
