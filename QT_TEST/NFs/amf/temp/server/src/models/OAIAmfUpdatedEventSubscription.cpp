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

#include "OAIAmfUpdatedEventSubscription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAmfUpdatedEventSubscription::OAIAmfUpdatedEventSubscription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAmfUpdatedEventSubscription::OAIAmfUpdatedEventSubscription() {
    this->initializeModel();
}

OAIAmfUpdatedEventSubscription::~OAIAmfUpdatedEventSubscription() {}

void OAIAmfUpdatedEventSubscription::initializeModel() {

    m_subscription_isSet = false;
    m_subscription_isValid = false;

    m_report_list_isSet = false;
    m_report_list_isValid = false;
}

void OAIAmfUpdatedEventSubscription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAmfUpdatedEventSubscription::fromJsonObject(QJsonObject json) {

    m_subscription_isValid = ::OpenAPI::fromJsonValue(subscription, json[QString("subscription")]);
    m_subscription_isSet = !json[QString("subscription")].isNull() && m_subscription_isValid;

    m_report_list_isValid = ::OpenAPI::fromJsonValue(report_list, json[QString("reportList")]);
    m_report_list_isSet = !json[QString("reportList")].isNull() && m_report_list_isValid;
}

QString OAIAmfUpdatedEventSubscription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAmfUpdatedEventSubscription::asJsonObject() const {
    QJsonObject obj;
    if (subscription.isSet()) {
        obj.insert(QString("subscription"), ::OpenAPI::toJsonValue(subscription));
    }
    if (report_list.size() > 0) {
        obj.insert(QString("reportList"), ::OpenAPI::toJsonValue(report_list));
    }
    return obj;
}

OAIAmfEventSubscription OAIAmfUpdatedEventSubscription::getSubscription() const {
    return subscription;
}
void OAIAmfUpdatedEventSubscription::setSubscription(const OAIAmfEventSubscription &subscription) {
    this->subscription = subscription;
    this->m_subscription_isSet = true;
}

bool OAIAmfUpdatedEventSubscription::is_subscription_Set() const{
    return m_subscription_isSet;
}

bool OAIAmfUpdatedEventSubscription::is_subscription_Valid() const{
    return m_subscription_isValid;
}

QList<OAIAmfEventReport> OAIAmfUpdatedEventSubscription::getReportList() const {
    return report_list;
}
void OAIAmfUpdatedEventSubscription::setReportList(const QList<OAIAmfEventReport> &report_list) {
    this->report_list = report_list;
    this->m_report_list_isSet = true;
}

bool OAIAmfUpdatedEventSubscription::is_report_list_Set() const{
    return m_report_list_isSet;
}

bool OAIAmfUpdatedEventSubscription::is_report_list_Valid() const{
    return m_report_list_isValid;
}

bool OAIAmfUpdatedEventSubscription::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (subscription.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (report_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAmfUpdatedEventSubscription::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_subscription_isValid && true;
}

} // namespace OpenAPI
