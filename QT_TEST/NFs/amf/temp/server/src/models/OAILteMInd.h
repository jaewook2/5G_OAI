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
 * OAILteMInd.h
 *
 * LTE-M Indication.
 */

#ifndef OAILteMInd_H
#define OAILteMInd_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAILteMInd : public OAIObject {
public:
    OAILteMInd();
    OAILteMInd(QString json);
    ~OAILteMInd() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isLteCatMInd() const;
    void setLteCatMInd(const bool &lte_cat_m_ind);
    bool is_lte_cat_m_ind_Set() const;
    bool is_lte_cat_m_ind_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool lte_cat_m_ind;
    bool m_lte_cat_m_ind_isSet;
    bool m_lte_cat_m_ind_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAILteMInd)

#endif // OAILteMInd_H
