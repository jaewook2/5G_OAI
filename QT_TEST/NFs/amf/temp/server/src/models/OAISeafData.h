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
 * OAISeafData.h
 *
 * 
 */

#ifndef OAISeafData_H
#define OAISeafData_H

#include <QJsonObject>

#include "OAIKeyAmf.h"
#include "OAINgKsi.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISeafData : public OAIObject {
public:
    OAISeafData();
    OAISeafData(QString json);
    ~OAISeafData() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAINgKsi getNgKsi() const;
    void setNgKsi(const OAINgKsi &ng_ksi);
    bool is_ng_ksi_Set() const;
    bool is_ng_ksi_Valid() const;

    OAIKeyAmf getKeyAmf() const;
    void setKeyAmf(const OAIKeyAmf &key_amf);
    bool is_key_amf_Set() const;
    bool is_key_amf_Valid() const;

    QString getNh() const;
    void setNh(const QString &nh);
    bool is_nh_Set() const;
    bool is_nh_Valid() const;

    qint32 getNcc() const;
    void setNcc(const qint32 &ncc);
    bool is_ncc_Set() const;
    bool is_ncc_Valid() const;

    bool isKeyAmfChangeInd() const;
    void setKeyAmfChangeInd(const bool &key_amf_change_ind);
    bool is_key_amf_change_ind_Set() const;
    bool is_key_amf_change_ind_Valid() const;

    bool isKeyAmfHDerivationInd() const;
    void setKeyAmfHDerivationInd(const bool &key_amf_h_derivation_ind);
    bool is_key_amf_h_derivation_ind_Set() const;
    bool is_key_amf_h_derivation_ind_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAINgKsi ng_ksi;
    bool m_ng_ksi_isSet;
    bool m_ng_ksi_isValid;

    OAIKeyAmf key_amf;
    bool m_key_amf_isSet;
    bool m_key_amf_isValid;

    QString nh;
    bool m_nh_isSet;
    bool m_nh_isValid;

    qint32 ncc;
    bool m_ncc_isSet;
    bool m_ncc_isValid;

    bool key_amf_change_ind;
    bool m_key_amf_change_ind_isSet;
    bool m_key_amf_change_ind_isValid;

    bool key_amf_h_derivation_ind;
    bool m_key_amf_h_derivation_ind_isSet;
    bool m_key_amf_h_derivation_ind_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISeafData)

#endif // OAISeafData_H
