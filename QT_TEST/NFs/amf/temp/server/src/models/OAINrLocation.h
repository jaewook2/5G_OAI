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
 * OAINrLocation.h
 *
 * 
 */

#ifndef OAINrLocation_H
#define OAINrLocation_H

#include <QJsonObject>

#include "OAIGlobalRanNodeId.h"
#include "OAINcgi.h"
#include "OAITai.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAINrLocation : public OAIObject {
public:
    OAINrLocation();
    OAINrLocation(QString json);
    ~OAINrLocation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAITai getTai() const;
    void setTai(const OAITai &tai);
    bool is_tai_Set() const;
    bool is_tai_Valid() const;

    OAINcgi getNcgi() const;
    void setNcgi(const OAINcgi &ncgi);
    bool is_ncgi_Set() const;
    bool is_ncgi_Valid() const;

    qint32 getAgeOfLocationInformation() const;
    void setAgeOfLocationInformation(const qint32 &age_of_location_information);
    bool is_age_of_location_information_Set() const;
    bool is_age_of_location_information_Valid() const;

    QDateTime getUeLocationTimestamp() const;
    void setUeLocationTimestamp(const QDateTime &ue_location_timestamp);
    bool is_ue_location_timestamp_Set() const;
    bool is_ue_location_timestamp_Valid() const;

    QString getGeographicalInformation() const;
    void setGeographicalInformation(const QString &geographical_information);
    bool is_geographical_information_Set() const;
    bool is_geographical_information_Valid() const;

    QString getGeodeticInformation() const;
    void setGeodeticInformation(const QString &geodetic_information);
    bool is_geodetic_information_Set() const;
    bool is_geodetic_information_Valid() const;

    OAIGlobalRanNodeId getGlobalGnbId() const;
    void setGlobalGnbId(const OAIGlobalRanNodeId &global_gnb_id);
    bool is_global_gnb_id_Set() const;
    bool is_global_gnb_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAITai tai;
    bool m_tai_isSet;
    bool m_tai_isValid;

    OAINcgi ncgi;
    bool m_ncgi_isSet;
    bool m_ncgi_isValid;

    qint32 age_of_location_information;
    bool m_age_of_location_information_isSet;
    bool m_age_of_location_information_isValid;

    QDateTime ue_location_timestamp;
    bool m_ue_location_timestamp_isSet;
    bool m_ue_location_timestamp_isValid;

    QString geographical_information;
    bool m_geographical_information_isSet;
    bool m_geographical_information_isValid;

    QString geodetic_information;
    bool m_geodetic_information_isSet;
    bool m_geodetic_information_isValid;

    OAIGlobalRanNodeId global_gnb_id;
    bool m_global_gnb_id_isSet;
    bool m_global_gnb_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINrLocation)

#endif // OAINrLocation_H
