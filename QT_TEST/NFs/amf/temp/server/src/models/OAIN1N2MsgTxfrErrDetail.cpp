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

#include "OAIN1N2MsgTxfrErrDetail.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIN1N2MsgTxfrErrDetail::OAIN1N2MsgTxfrErrDetail(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIN1N2MsgTxfrErrDetail::OAIN1N2MsgTxfrErrDetail() {
    this->initializeModel();
}

OAIN1N2MsgTxfrErrDetail::~OAIN1N2MsgTxfrErrDetail() {}

void OAIN1N2MsgTxfrErrDetail::initializeModel() {

    m_retry_after_isSet = false;
    m_retry_after_isValid = false;

    m_highest_prio_arp_isSet = false;
    m_highest_prio_arp_isValid = false;

    m_max_waiting_time_isSet = false;
    m_max_waiting_time_isValid = false;
}

void OAIN1N2MsgTxfrErrDetail::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIN1N2MsgTxfrErrDetail::fromJsonObject(QJsonObject json) {

    m_retry_after_isValid = ::OpenAPI::fromJsonValue(retry_after, json[QString("retryAfter")]);
    m_retry_after_isSet = !json[QString("retryAfter")].isNull() && m_retry_after_isValid;

    m_highest_prio_arp_isValid = ::OpenAPI::fromJsonValue(highest_prio_arp, json[QString("highestPrioArp")]);
    m_highest_prio_arp_isSet = !json[QString("highestPrioArp")].isNull() && m_highest_prio_arp_isValid;

    m_max_waiting_time_isValid = ::OpenAPI::fromJsonValue(max_waiting_time, json[QString("maxWaitingTime")]);
    m_max_waiting_time_isSet = !json[QString("maxWaitingTime")].isNull() && m_max_waiting_time_isValid;
}

QString OAIN1N2MsgTxfrErrDetail::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIN1N2MsgTxfrErrDetail::asJsonObject() const {
    QJsonObject obj;
    if (m_retry_after_isSet) {
        obj.insert(QString("retryAfter"), ::OpenAPI::toJsonValue(retry_after));
    }
    if (highest_prio_arp.isSet()) {
        obj.insert(QString("highestPrioArp"), ::OpenAPI::toJsonValue(highest_prio_arp));
    }
    if (m_max_waiting_time_isSet) {
        obj.insert(QString("maxWaitingTime"), ::OpenAPI::toJsonValue(max_waiting_time));
    }
    return obj;
}

qint32 OAIN1N2MsgTxfrErrDetail::getRetryAfter() const {
    return retry_after;
}
void OAIN1N2MsgTxfrErrDetail::setRetryAfter(const qint32 &retry_after) {
    this->retry_after = retry_after;
    this->m_retry_after_isSet = true;
}

bool OAIN1N2MsgTxfrErrDetail::is_retry_after_Set() const{
    return m_retry_after_isSet;
}

bool OAIN1N2MsgTxfrErrDetail::is_retry_after_Valid() const{
    return m_retry_after_isValid;
}

OAIArp OAIN1N2MsgTxfrErrDetail::getHighestPrioArp() const {
    return highest_prio_arp;
}
void OAIN1N2MsgTxfrErrDetail::setHighestPrioArp(const OAIArp &highest_prio_arp) {
    this->highest_prio_arp = highest_prio_arp;
    this->m_highest_prio_arp_isSet = true;
}

bool OAIN1N2MsgTxfrErrDetail::is_highest_prio_arp_Set() const{
    return m_highest_prio_arp_isSet;
}

bool OAIN1N2MsgTxfrErrDetail::is_highest_prio_arp_Valid() const{
    return m_highest_prio_arp_isValid;
}

qint32 OAIN1N2MsgTxfrErrDetail::getMaxWaitingTime() const {
    return max_waiting_time;
}
void OAIN1N2MsgTxfrErrDetail::setMaxWaitingTime(const qint32 &max_waiting_time) {
    this->max_waiting_time = max_waiting_time;
    this->m_max_waiting_time_isSet = true;
}

bool OAIN1N2MsgTxfrErrDetail::is_max_waiting_time_Set() const{
    return m_max_waiting_time_isSet;
}

bool OAIN1N2MsgTxfrErrDetail::is_max_waiting_time_Valid() const{
    return m_max_waiting_time_isValid;
}

bool OAIN1N2MsgTxfrErrDetail::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_retry_after_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (highest_prio_arp.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_waiting_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIN1N2MsgTxfrErrDetail::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
