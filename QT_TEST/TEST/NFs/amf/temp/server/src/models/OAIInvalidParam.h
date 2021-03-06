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
 * OAIInvalidParam.h
 *
 * 
 */

#ifndef OAIInvalidParam_H
#define OAIInvalidParam_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIInvalidParam : public OAIObject {
public:
    OAIInvalidParam();
    OAIInvalidParam(QString json);
    ~OAIInvalidParam() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getParam() const;
    void setParam(const QString &param);
    bool is_param_Set() const;
    bool is_param_Valid() const;

    QString getReason() const;
    void setReason(const QString &reason);
    bool is_reason_Set() const;
    bool is_reason_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString param;
    bool m_param_isSet;
    bool m_param_isValid;

    QString reason;
    bool m_reason_isSet;
    bool m_reason_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIInvalidParam)

#endif // OAIInvalidParam_H
