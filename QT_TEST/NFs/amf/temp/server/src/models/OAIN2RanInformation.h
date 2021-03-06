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
 * OAIN2RanInformation.h
 *
 * 
 */

#ifndef OAIN2RanInformation_H
#define OAIN2RanInformation_H

#include <QJsonObject>

#include "OAIN2InfoContent.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIN2RanInformation : public OAIObject {
public:
    OAIN2RanInformation();
    OAIN2RanInformation(QString json);
    ~OAIN2RanInformation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIN2InfoContent getN2InfoContent() const;
    void setN2InfoContent(const OAIN2InfoContent &n2_info_content);
    bool is_n2_info_content_Set() const;
    bool is_n2_info_content_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIN2InfoContent n2_info_content;
    bool m_n2_info_content_isSet;
    bool m_n2_info_content_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIN2RanInformation)

#endif // OAIN2RanInformation_H
