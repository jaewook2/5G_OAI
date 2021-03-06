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
 * OAIEbiArpMapping.h
 *
 * 
 */

#ifndef OAIEbiArpMapping_H
#define OAIEbiArpMapping_H

#include <QJsonObject>

#include "OAIArp.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEbiArpMapping : public OAIObject {
public:
    OAIEbiArpMapping();
    OAIEbiArpMapping(QString json);
    ~OAIEbiArpMapping() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getEpsBearerId() const;
    void setEpsBearerId(const qint32 &eps_bearer_id);
    bool is_eps_bearer_id_Set() const;
    bool is_eps_bearer_id_Valid() const;

    OAIArp getArp() const;
    void setArp(const OAIArp &arp);
    bool is_arp_Set() const;
    bool is_arp_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 eps_bearer_id;
    bool m_eps_bearer_id_isSet;
    bool m_eps_bearer_id_isValid;

    OAIArp arp;
    bool m_arp_isSet;
    bool m_arp_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEbiArpMapping)

#endif // OAIEbiArpMapping_H
