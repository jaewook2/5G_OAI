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
 * OAIAmfEventSubscriptionInfo.h
 *
 * 
 */

#ifndef OAIAmfEventSubscriptionInfo_H
#define OAIAmfEventSubscriptionInfo_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAmfEventSubscriptionInfo : public OAIObject {
public:
    OAIAmfEventSubscriptionInfo();
    OAIAmfEventSubscriptionInfo(QString json);
    ~OAIAmfEventSubscriptionInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSubId() const;
    void setSubId(const QString &sub_id);
    bool is_sub_id_Set() const;
    bool is_sub_id_Valid() const;

    QString getNotifyCorrelationId() const;
    void setNotifyCorrelationId(const QString &notify_correlation_id);
    bool is_notify_correlation_id_Set() const;
    bool is_notify_correlation_id_Valid() const;

    QList<qint32> getRefIdList() const;
    void setRefIdList(const QList<qint32> &ref_id_list);
    bool is_ref_id_list_Set() const;
    bool is_ref_id_list_Valid() const;

    QString getOldSubId() const;
    void setOldSubId(const QString &old_sub_id);
    bool is_old_sub_id_Set() const;
    bool is_old_sub_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString sub_id;
    bool m_sub_id_isSet;
    bool m_sub_id_isValid;

    QString notify_correlation_id;
    bool m_notify_correlation_id_isSet;
    bool m_notify_correlation_id_isValid;

    QList<qint32> ref_id_list;
    bool m_ref_id_list_isSet;
    bool m_ref_id_list_isValid;

    QString old_sub_id;
    bool m_old_sub_id_isSet;
    bool m_old_sub_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAmfEventSubscriptionInfo)

#endif // OAIAmfEventSubscriptionInfo_H