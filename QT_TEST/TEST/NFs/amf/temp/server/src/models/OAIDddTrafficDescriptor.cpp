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

#include "OAIDddTrafficDescriptor.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDddTrafficDescriptor::OAIDddTrafficDescriptor(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDddTrafficDescriptor::OAIDddTrafficDescriptor() {
    this->initializeModel();
}

OAIDddTrafficDescriptor::~OAIDddTrafficDescriptor() {}

void OAIDddTrafficDescriptor::initializeModel() {

    m_ipv4_addr_isSet = false;
    m_ipv4_addr_isValid = false;

    m_ipv6_addr_isSet = false;
    m_ipv6_addr_isValid = false;

    m_port_number_isSet = false;
    m_port_number_isValid = false;

    m_mac_addr_isSet = false;
    m_mac_addr_isValid = false;
}

void OAIDddTrafficDescriptor::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDddTrafficDescriptor::fromJsonObject(QJsonObject json) {

    m_ipv4_addr_isValid = ::OpenAPI::fromJsonValue(ipv4_addr, json[QString("ipv4Addr")]);
    m_ipv4_addr_isSet = !json[QString("ipv4Addr")].isNull() && m_ipv4_addr_isValid;

    m_ipv6_addr_isValid = ::OpenAPI::fromJsonValue(ipv6_addr, json[QString("ipv6Addr")]);
    m_ipv6_addr_isSet = !json[QString("ipv6Addr")].isNull() && m_ipv6_addr_isValid;

    m_port_number_isValid = ::OpenAPI::fromJsonValue(port_number, json[QString("portNumber")]);
    m_port_number_isSet = !json[QString("portNumber")].isNull() && m_port_number_isValid;

    m_mac_addr_isValid = ::OpenAPI::fromJsonValue(mac_addr, json[QString("macAddr")]);
    m_mac_addr_isSet = !json[QString("macAddr")].isNull() && m_mac_addr_isValid;
}

QString OAIDddTrafficDescriptor::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDddTrafficDescriptor::asJsonObject() const {
    QJsonObject obj;
    if (m_ipv4_addr_isSet) {
        obj.insert(QString("ipv4Addr"), ::OpenAPI::toJsonValue(ipv4_addr));
    }
    if (ipv6_addr.isSet()) {
        obj.insert(QString("ipv6Addr"), ::OpenAPI::toJsonValue(ipv6_addr));
    }
    if (m_port_number_isSet) {
        obj.insert(QString("portNumber"), ::OpenAPI::toJsonValue(port_number));
    }
    if (m_mac_addr_isSet) {
        obj.insert(QString("macAddr"), ::OpenAPI::toJsonValue(mac_addr));
    }
    return obj;
}

QString OAIDddTrafficDescriptor::getIpv4Addr() const {
    return ipv4_addr;
}
void OAIDddTrafficDescriptor::setIpv4Addr(const QString &ipv4_addr) {
    this->ipv4_addr = ipv4_addr;
    this->m_ipv4_addr_isSet = true;
}

bool OAIDddTrafficDescriptor::is_ipv4_addr_Set() const{
    return m_ipv4_addr_isSet;
}

bool OAIDddTrafficDescriptor::is_ipv4_addr_Valid() const{
    return m_ipv4_addr_isValid;
}

OAIIpv6Addr OAIDddTrafficDescriptor::getIpv6Addr() const {
    return ipv6_addr;
}
void OAIDddTrafficDescriptor::setIpv6Addr(const OAIIpv6Addr &ipv6_addr) {
    this->ipv6_addr = ipv6_addr;
    this->m_ipv6_addr_isSet = true;
}

bool OAIDddTrafficDescriptor::is_ipv6_addr_Set() const{
    return m_ipv6_addr_isSet;
}

bool OAIDddTrafficDescriptor::is_ipv6_addr_Valid() const{
    return m_ipv6_addr_isValid;
}

qint32 OAIDddTrafficDescriptor::getPortNumber() const {
    return port_number;
}
void OAIDddTrafficDescriptor::setPortNumber(const qint32 &port_number) {
    this->port_number = port_number;
    this->m_port_number_isSet = true;
}

bool OAIDddTrafficDescriptor::is_port_number_Set() const{
    return m_port_number_isSet;
}

bool OAIDddTrafficDescriptor::is_port_number_Valid() const{
    return m_port_number_isValid;
}

QString OAIDddTrafficDescriptor::getMacAddr() const {
    return mac_addr;
}
void OAIDddTrafficDescriptor::setMacAddr(const QString &mac_addr) {
    this->mac_addr = mac_addr;
    this->m_mac_addr_isSet = true;
}

bool OAIDddTrafficDescriptor::is_mac_addr_Set() const{
    return m_mac_addr_isSet;
}

bool OAIDddTrafficDescriptor::is_mac_addr_Valid() const{
    return m_mac_addr_isValid;
}

bool OAIDddTrafficDescriptor::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ipv4_addr_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (ipv6_addr.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_port_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mac_addr_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDddTrafficDescriptor::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
