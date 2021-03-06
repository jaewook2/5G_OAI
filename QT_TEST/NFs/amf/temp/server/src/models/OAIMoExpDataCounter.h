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
 * OAIMoExpDataCounter.h
 *
 * 
 */

#ifndef OAIMoExpDataCounter_H
#define OAIMoExpDataCounter_H

#include <QJsonObject>

#include <QDateTime>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMoExpDataCounter : public OAIObject {
public:
    OAIMoExpDataCounter();
    OAIMoExpDataCounter(QString json);
    ~OAIMoExpDataCounter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCounter() const;
    void setCounter(const qint32 &counter);
    bool is_counter_Set() const;
    bool is_counter_Valid() const;

    QDateTime getTimeStamp() const;
    void setTimeStamp(const QDateTime &time_stamp);
    bool is_time_stamp_Set() const;
    bool is_time_stamp_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 counter;
    bool m_counter_isSet;
    bool m_counter_isValid;

    QDateTime time_stamp;
    bool m_time_stamp_isSet;
    bool m_time_stamp_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMoExpDataCounter)

#endif // OAIMoExpDataCounter_H
