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
 * OAIAreaOfValidity.h
 *
 * 
 */

#ifndef OAIAreaOfValidity_H
#define OAIAreaOfValidity_H

#include <QJsonObject>

#include "OAITai.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAreaOfValidity : public OAIObject {
public:
    OAIAreaOfValidity();
    OAIAreaOfValidity(QString json);
    ~OAIAreaOfValidity() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAITai> getTaiList() const;
    void setTaiList(const QList<OAITai> &tai_list);
    bool is_tai_list_Set() const;
    bool is_tai_list_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAITai> tai_list;
    bool m_tai_list_isSet;
    bool m_tai_list_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAreaOfValidity)

#endif // OAIAreaOfValidity_H