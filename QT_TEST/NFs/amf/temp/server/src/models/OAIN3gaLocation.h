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
 * OAIN3gaLocation.h
 *
 * 
 */

#ifndef OAIN3gaLocation_H
#define OAIN3gaLocation_H

#include <QJsonObject>

#include "OAIHfcNodeId.h"
#include "OAIIpv6Addr.h"
#include "OAILineType.h"
#include "OAITai.h"
#include "OAITnapId.h"
#include "OAITransportProtocol.h"
#include "OAITwapId.h"
#include <QByteArray>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIN3gaLocation : public OAIObject {
public:
    OAIN3gaLocation();
    OAIN3gaLocation(QString json);
    ~OAIN3gaLocation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAITai getN3gppTai() const;
    void setN3gppTai(const OAITai &n3gpp_tai);
    bool is_n3gpp_tai_Set() const;
    bool is_n3gpp_tai_Valid() const;

    QString getN3IwfId() const;
    void setN3IwfId(const QString &n3_iwf_id);
    bool is_n3_iwf_id_Set() const;
    bool is_n3_iwf_id_Valid() const;

    QString getUeIpv4Addr() const;
    void setUeIpv4Addr(const QString &ue_ipv4_addr);
    bool is_ue_ipv4_addr_Set() const;
    bool is_ue_ipv4_addr_Valid() const;

    OAIIpv6Addr getUeIpv6Addr() const;
    void setUeIpv6Addr(const OAIIpv6Addr &ue_ipv6_addr);
    bool is_ue_ipv6_addr_Set() const;
    bool is_ue_ipv6_addr_Valid() const;

    qint32 getPortNumber() const;
    void setPortNumber(const qint32 &port_number);
    bool is_port_number_Set() const;
    bool is_port_number_Valid() const;

    OAITnapId getTnapId() const;
    void setTnapId(const OAITnapId &tnap_id);
    bool is_tnap_id_Set() const;
    bool is_tnap_id_Valid() const;

    OAITransportProtocol getProtocol() const;
    void setProtocol(const OAITransportProtocol &protocol);
    bool is_protocol_Set() const;
    bool is_protocol_Valid() const;

    OAITwapId getTwapId() const;
    void setTwapId(const OAITwapId &twap_id);
    bool is_twap_id_Set() const;
    bool is_twap_id_Valid() const;

    OAIHfcNodeId getHfcNodeId() const;
    void setHfcNodeId(const OAIHfcNodeId &hfc_node_id);
    bool is_hfc_node_id_Set() const;
    bool is_hfc_node_id_Valid() const;

    QByteArray getGli() const;
    void setGli(const QByteArray &gli);
    bool is_gli_Set() const;
    bool is_gli_Valid() const;

    OAILineType getW5gbanLineType() const;
    void setW5gbanLineType(const OAILineType &w5gban_line_type);
    bool is_w5gban_line_type_Set() const;
    bool is_w5gban_line_type_Valid() const;

    QString getGci() const;
    void setGci(const QString &gci);
    bool is_gci_Set() const;
    bool is_gci_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAITai n3gpp_tai;
    bool m_n3gpp_tai_isSet;
    bool m_n3gpp_tai_isValid;

    QString n3_iwf_id;
    bool m_n3_iwf_id_isSet;
    bool m_n3_iwf_id_isValid;

    QString ue_ipv4_addr;
    bool m_ue_ipv4_addr_isSet;
    bool m_ue_ipv4_addr_isValid;

    OAIIpv6Addr ue_ipv6_addr;
    bool m_ue_ipv6_addr_isSet;
    bool m_ue_ipv6_addr_isValid;

    qint32 port_number;
    bool m_port_number_isSet;
    bool m_port_number_isValid;

    OAITnapId tnap_id;
    bool m_tnap_id_isSet;
    bool m_tnap_id_isValid;

    OAITransportProtocol protocol;
    bool m_protocol_isSet;
    bool m_protocol_isValid;

    OAITwapId twap_id;
    bool m_twap_id_isSet;
    bool m_twap_id_isValid;

    OAIHfcNodeId hfc_node_id;
    bool m_hfc_node_id_isSet;
    bool m_hfc_node_id_isValid;

    QByteArray gli;
    bool m_gli_isSet;
    bool m_gli_isValid;

    OAILineType w5gban_line_type;
    bool m_w5gban_line_type_isSet;
    bool m_w5gban_line_type_isValid;

    QString gci;
    bool m_gci_isSet;
    bool m_gci_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIN3gaLocation)

#endif // OAIN3gaLocation_H