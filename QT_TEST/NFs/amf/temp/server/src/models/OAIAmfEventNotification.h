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
 * OAIAmfEventNotification.h
 *
 * 
 */

#ifndef OAIAmfEventNotification_H
#define OAIAmfEventNotification_H

#include <QJsonObject>

#include "OAIAmfEventReport.h"
#include "OAIAmfEventSubsSyncInfo.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAmfEventNotification : public OAIObject {
public:
    OAIAmfEventNotification();
    OAIAmfEventNotification(QString json);
    ~OAIAmfEventNotification() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getNotifyCorrelationId() const;
    void setNotifyCorrelationId(const QString &notify_correlation_id);
    bool is_notify_correlation_id_Set() const;
    bool is_notify_correlation_id_Valid() const;

    QString getSubsChangeNotifyCorrelationId() const;
    void setSubsChangeNotifyCorrelationId(const QString &subs_change_notify_correlation_id);
    bool is_subs_change_notify_correlation_id_Set() const;
    bool is_subs_change_notify_correlation_id_Valid() const;

    QList<OAIAmfEventReport> getReportList() const;
    void setReportList(const QList<OAIAmfEventReport> &report_list);
    bool is_report_list_Set() const;
    bool is_report_list_Valid() const;

    OAIAmfEventSubsSyncInfo getEventSubsSyncInfo() const;
    void setEventSubsSyncInfo(const OAIAmfEventSubsSyncInfo &event_subs_sync_info);
    bool is_event_subs_sync_info_Set() const;
    bool is_event_subs_sync_info_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString notify_correlation_id;
    bool m_notify_correlation_id_isSet;
    bool m_notify_correlation_id_isValid;

    QString subs_change_notify_correlation_id;
    bool m_subs_change_notify_correlation_id_isSet;
    bool m_subs_change_notify_correlation_id_isValid;

    QList<OAIAmfEventReport> report_list;
    bool m_report_list_isSet;
    bool m_report_list_isValid;

    OAIAmfEventSubsSyncInfo event_subs_sync_info;
    bool m_event_subs_sync_info_isSet;
    bool m_event_subs_sync_info_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAmfEventNotification)

#endif // OAIAmfEventNotification_H