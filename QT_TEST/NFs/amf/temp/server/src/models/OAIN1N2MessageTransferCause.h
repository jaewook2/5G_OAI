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
 * OAIN1N2MessageTransferCause.h
 *
 * 
 */

#ifndef OAIN1N2MessageTransferCause_H
#define OAIN1N2MessageTransferCause_H

#include <QJsonObject>

#include "OAIN1N2MessageTransferCause_anyOf.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIN1N2MessageTransferCause : public OAIObject {
public:
    OAIN1N2MessageTransferCause();
    OAIN1N2MessageTransferCause(QString json);
    ~OAIN1N2MessageTransferCause() override;

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

Q_DECLARE_METATYPE(OpenAPI::OAIN1N2MessageTransferCause)

#endif // OAIN1N2MessageTransferCause_H
