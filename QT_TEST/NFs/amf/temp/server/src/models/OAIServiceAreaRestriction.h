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
 * OAIServiceAreaRestriction.h
 *
 * 
 */

#ifndef OAIServiceAreaRestriction_H
#define OAIServiceAreaRestriction_H

#include <QJsonObject>

#include "OAIArea.h"
#include "OAIRestrictionType.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIServiceAreaRestriction : public OAIObject {
public:
    OAIServiceAreaRestriction();
    OAIServiceAreaRestriction(QString json);
    ~OAIServiceAreaRestriction() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIRestrictionType getRestrictionType() const;
    void setRestrictionType(const OAIRestrictionType &restriction_type);
    bool is_restriction_type_Set() const;
    bool is_restriction_type_Valid() const;

    QList<OAIArea> getAreas() const;
    void setAreas(const QList<OAIArea> &areas);
    bool is_areas_Set() const;
    bool is_areas_Valid() const;

    qint32 getMaxNumOfTas() const;
    void setMaxNumOfTas(const qint32 &max_num_of_tas);
    bool is_max_num_of_tas_Set() const;
    bool is_max_num_of_tas_Valid() const;

    qint32 getMaxNumOfTasForNotAllowedAreas() const;
    void setMaxNumOfTasForNotAllowedAreas(const qint32 &max_num_of_tas_for_not_allowed_areas);
    bool is_max_num_of_tas_for_not_allowed_areas_Set() const;
    bool is_max_num_of_tas_for_not_allowed_areas_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIRestrictionType restriction_type;
    bool m_restriction_type_isSet;
    bool m_restriction_type_isValid;

    QList<OAIArea> areas;
    bool m_areas_isSet;
    bool m_areas_isValid;

    qint32 max_num_of_tas;
    bool m_max_num_of_tas_isSet;
    bool m_max_num_of_tas_isValid;

    qint32 max_num_of_tas_for_not_allowed_areas;
    bool m_max_num_of_tas_for_not_allowed_areas_isSet;
    bool m_max_num_of_tas_for_not_allowed_areas_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIServiceAreaRestriction)

#endif // OAIServiceAreaRestriction_H
