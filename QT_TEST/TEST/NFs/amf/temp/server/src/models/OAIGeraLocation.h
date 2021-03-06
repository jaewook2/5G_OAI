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
 * OAIGeraLocation.h
 *
 * 
 */

#ifndef OAIGeraLocation_H
#define OAIGeraLocation_H

#include <QJsonObject>

#include "OAICellGlobalId.h"
#include "OAILocationAreaId.h"
#include "OAIRoutingAreaId.h"
#include "OAIServiceAreaId.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGeraLocation : public OAIObject {
public:
    OAIGeraLocation();
    OAIGeraLocation(QString json);
    ~OAIGeraLocation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getLocationNumber() const;
    void setLocationNumber(const QString &location_number);
    bool is_location_number_Set() const;
    bool is_location_number_Valid() const;

    OAICellGlobalId getCgi() const;
    void setCgi(const OAICellGlobalId &cgi);
    bool is_cgi_Set() const;
    bool is_cgi_Valid() const;

    OAIRoutingAreaId getRai() const;
    void setRai(const OAIRoutingAreaId &rai);
    bool is_rai_Set() const;
    bool is_rai_Valid() const;

    OAIServiceAreaId getSai() const;
    void setSai(const OAIServiceAreaId &sai);
    bool is_sai_Set() const;
    bool is_sai_Valid() const;

    OAILocationAreaId getLai() const;
    void setLai(const OAILocationAreaId &lai);
    bool is_lai_Set() const;
    bool is_lai_Valid() const;

    QString getVlrNumber() const;
    void setVlrNumber(const QString &vlr_number);
    bool is_vlr_number_Set() const;
    bool is_vlr_number_Valid() const;

    QString getMscNumber() const;
    void setMscNumber(const QString &msc_number);
    bool is_msc_number_Set() const;
    bool is_msc_number_Valid() const;

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

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString location_number;
    bool m_location_number_isSet;
    bool m_location_number_isValid;

    OAICellGlobalId cgi;
    bool m_cgi_isSet;
    bool m_cgi_isValid;

    OAIRoutingAreaId rai;
    bool m_rai_isSet;
    bool m_rai_isValid;

    OAIServiceAreaId sai;
    bool m_sai_isSet;
    bool m_sai_isValid;

    OAILocationAreaId lai;
    bool m_lai_isSet;
    bool m_lai_isValid;

    QString vlr_number;
    bool m_vlr_number_isSet;
    bool m_vlr_number_isValid;

    QString msc_number;
    bool m_msc_number_isSet;
    bool m_msc_number_isValid;

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
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGeraLocation)

#endif // OAIGeraLocation_H
