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
 * OAISmallDataRateStatusInfo.h
 *
 * 
 */

#ifndef OAISmallDataRateStatusInfo_H
#define OAISmallDataRateStatusInfo_H

#include <QJsonObject>

#include "OAISmallDataRateStatus.h"
#include "OAISnssai.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISmallDataRateStatusInfo : public OAIObject {
public:
    OAISmallDataRateStatusInfo();
    OAISmallDataRateStatusInfo(QString json);
    ~OAISmallDataRateStatusInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISnssai getSnssai() const;
    void setSnssai(const OAISnssai &snssai);
    bool is_snssai_Set() const;
    bool is_snssai_Valid() const;

    QString getDnn() const;
    void setDnn(const QString &dnn);
    bool is_dnn_Set() const;
    bool is_dnn_Valid() const;

    OAISmallDataRateStatus getSmallDataRateStatus() const;
    void setSmallDataRateStatus(const OAISmallDataRateStatus &small_data_rate_status);
    bool is_small_data_rate_status_Set() const;
    bool is_small_data_rate_status_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISnssai snssai;
    bool m_snssai_isSet;
    bool m_snssai_isValid;

    QString dnn;
    bool m_dnn_isSet;
    bool m_dnn_isValid;

    OAISmallDataRateStatus small_data_rate_status;
    bool m_small_data_rate_status_isSet;
    bool m_small_data_rate_status_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISmallDataRateStatusInfo)

#endif // OAISmallDataRateStatusInfo_H
