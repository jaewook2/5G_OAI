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
 * OAIUserLocation.h
 *
 * 
 */

#ifndef OAIUserLocation_H
#define OAIUserLocation_H

#include <QJsonObject>

#include "OAIEutraLocation.h"
#include "OAIGeraLocation.h"
#include "OAIN3gaLocation.h"
#include "OAINrLocation.h"
#include "OAIUtraLocation.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUserLocation : public OAIObject {
public:
    OAIUserLocation();
    OAIUserLocation(QString json);
    ~OAIUserLocation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEutraLocation getEutraLocation() const;
    void setEutraLocation(const OAIEutraLocation &eutra_location);
    bool is_eutra_location_Set() const;
    bool is_eutra_location_Valid() const;

    OAINrLocation getNrLocation() const;
    void setNrLocation(const OAINrLocation &nr_location);
    bool is_nr_location_Set() const;
    bool is_nr_location_Valid() const;

    OAIN3gaLocation getN3gaLocation() const;
    void setN3gaLocation(const OAIN3gaLocation &n3ga_location);
    bool is_n3ga_location_Set() const;
    bool is_n3ga_location_Valid() const;

    OAIUtraLocation getUtraLocation() const;
    void setUtraLocation(const OAIUtraLocation &utra_location);
    bool is_utra_location_Set() const;
    bool is_utra_location_Valid() const;

    OAIGeraLocation getGeraLocation() const;
    void setGeraLocation(const OAIGeraLocation &gera_location);
    bool is_gera_location_Set() const;
    bool is_gera_location_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEutraLocation eutra_location;
    bool m_eutra_location_isSet;
    bool m_eutra_location_isValid;

    OAINrLocation nr_location;
    bool m_nr_location_isSet;
    bool m_nr_location_isValid;

    OAIN3gaLocation n3ga_location;
    bool m_n3ga_location_isSet;
    bool m_n3ga_location_isValid;

    OAIUtraLocation utra_location;
    bool m_utra_location_isSet;
    bool m_utra_location_isValid;

    OAIGeraLocation gera_location;
    bool m_gera_location_isSet;
    bool m_gera_location_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUserLocation)

#endif // OAIUserLocation_H
