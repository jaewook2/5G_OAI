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
 * OAINcgi.h
 *
 * 
 */

#ifndef OAINcgi_H
#define OAINcgi_H

#include <QJsonObject>

#include "OAIPlmnId.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAINcgi : public OAIObject {
public:
    OAINcgi();
    OAINcgi(QString json);
    ~OAINcgi() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIPlmnId getPlmnId() const;
    void setPlmnId(const OAIPlmnId &plmn_id);
    bool is_plmn_id_Set() const;
    bool is_plmn_id_Valid() const;

    QString getNrCellId() const;
    void setNrCellId(const QString &nr_cell_id);
    bool is_nr_cell_id_Set() const;
    bool is_nr_cell_id_Valid() const;

    QString getNid() const;
    void setNid(const QString &nid);
    bool is_nid_Set() const;
    bool is_nid_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIPlmnId plmn_id;
    bool m_plmn_id_isSet;
    bool m_plmn_id_isValid;

    QString nr_cell_id;
    bool m_nr_cell_id_isSet;
    bool m_nr_cell_id_isValid;

    QString nid;
    bool m_nid_isSet;
    bool m_nid_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINcgi)

#endif // OAINcgi_H