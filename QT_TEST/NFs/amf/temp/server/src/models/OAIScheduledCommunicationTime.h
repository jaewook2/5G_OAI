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
 * OAIScheduledCommunicationTime.h
 *
 * 
 */

#ifndef OAIScheduledCommunicationTime_H
#define OAIScheduledCommunicationTime_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIScheduledCommunicationTime : public OAIObject {
public:
    OAIScheduledCommunicationTime();
    OAIScheduledCommunicationTime(QString json);
    ~OAIScheduledCommunicationTime() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getDaysOfWeek() const;
    void setDaysOfWeek(const QList<qint32> &days_of_week);
    bool is_days_of_week_Set() const;
    bool is_days_of_week_Valid() const;

    QString getTimeOfDayStart() const;
    void setTimeOfDayStart(const QString &time_of_day_start);
    bool is_time_of_day_start_Set() const;
    bool is_time_of_day_start_Valid() const;

    QString getTimeOfDayEnd() const;
    void setTimeOfDayEnd(const QString &time_of_day_end);
    bool is_time_of_day_end_Set() const;
    bool is_time_of_day_end_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> days_of_week;
    bool m_days_of_week_isSet;
    bool m_days_of_week_isValid;

    QString time_of_day_start;
    bool m_time_of_day_start_isSet;
    bool m_time_of_day_start_isValid;

    QString time_of_day_end;
    bool m_time_of_day_end_isSet;
    bool m_time_of_day_end_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIScheduledCommunicationTime)

#endif // OAIScheduledCommunicationTime_H