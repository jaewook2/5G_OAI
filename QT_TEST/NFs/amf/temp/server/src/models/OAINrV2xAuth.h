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
 * OAINrV2xAuth.h
 *
 * 
 */

#ifndef OAINrV2xAuth_H
#define OAINrV2xAuth_H

#include <QJsonObject>

#include "OAIUeAuth.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAINrV2xAuth : public OAIObject {
public:
    OAINrV2xAuth();
    OAINrV2xAuth(QString json);
    ~OAINrV2xAuth() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUeAuth getVehicleUeAuth() const;
    void setVehicleUeAuth(const OAIUeAuth &vehicle_ue_auth);
    bool is_vehicle_ue_auth_Set() const;
    bool is_vehicle_ue_auth_Valid() const;

    OAIUeAuth getPedestrianUeAuth() const;
    void setPedestrianUeAuth(const OAIUeAuth &pedestrian_ue_auth);
    bool is_pedestrian_ue_auth_Set() const;
    bool is_pedestrian_ue_auth_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUeAuth vehicle_ue_auth;
    bool m_vehicle_ue_auth_isSet;
    bool m_vehicle_ue_auth_isValid;

    OAIUeAuth pedestrian_ue_auth;
    bool m_pedestrian_ue_auth_isSet;
    bool m_pedestrian_ue_auth_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINrV2xAuth)

#endif // OAINrV2xAuth_H
