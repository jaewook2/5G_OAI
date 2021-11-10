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
 * OAIUEIdExt.h
 *
 * 
 */

#ifndef OAIUEIdExt_H
#define OAIUEIdExt_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUEIdExt : public OAIObject {
public:
    OAIUEIdExt();
    OAIUEIdExt(QString json);
    ~OAIUEIdExt() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSupi() const;
    void setSupi(const QString &supi);
    bool is_supi_Set() const;
    bool is_supi_Valid() const;

    QString getGpsi() const;
    void setGpsi(const QString &gpsi);
    bool is_gpsi_Set() const;
    bool is_gpsi_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString supi;
    bool m_supi_isSet;
    bool m_supi_isValid;

    QString gpsi;
    bool m_gpsi_isSet;
    bool m_gpsi_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUEIdExt)

#endif // OAIUEIdExt_H