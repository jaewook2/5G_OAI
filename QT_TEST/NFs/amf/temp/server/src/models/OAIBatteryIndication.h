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
 * OAIBatteryIndication.h
 *
 * 
 */

#ifndef OAIBatteryIndication_H
#define OAIBatteryIndication_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBatteryIndication : public OAIObject {
public:
    OAIBatteryIndication();
    OAIBatteryIndication(QString json);
    ~OAIBatteryIndication() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBatteryInd() const;
    void setBatteryInd(const bool &battery_ind);
    bool is_battery_ind_Set() const;
    bool is_battery_ind_Valid() const;

    bool isReplaceableInd() const;
    void setReplaceableInd(const bool &replaceable_ind);
    bool is_replaceable_ind_Set() const;
    bool is_replaceable_ind_Valid() const;

    bool isRechargeableInd() const;
    void setRechargeableInd(const bool &rechargeable_ind);
    bool is_rechargeable_ind_Set() const;
    bool is_rechargeable_ind_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool battery_ind;
    bool m_battery_ind_isSet;
    bool m_battery_ind_isValid;

    bool replaceable_ind;
    bool m_replaceable_ind_isSet;
    bool m_replaceable_ind_isValid;

    bool rechargeable_ind;
    bool m_rechargeable_ind_isSet;
    bool m_rechargeable_ind_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBatteryIndication)

#endif // OAIBatteryIndication_H
