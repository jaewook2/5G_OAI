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
 * OAIRatSelector.h
 *
 * 
 */

#ifndef OAIRatSelector_H
#define OAIRatSelector_H

#include <QJsonObject>

#include "OAIRatSelector_anyOf.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRatSelector : public OAIObject {
public:
    OAIRatSelector();
    OAIRatSelector(QString json);
    ~OAIRatSelector() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRatSelector)

#endif // OAIRatSelector_H
