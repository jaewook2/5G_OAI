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

#include "OAIN2InfoContainer.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIN2InfoContainer::OAIN2InfoContainer(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIN2InfoContainer::OAIN2InfoContainer() {
    this->initializeModel();
}

OAIN2InfoContainer::~OAIN2InfoContainer() {}

void OAIN2InfoContainer::initializeModel() {

    m_n2_information_class_isSet = false;
    m_n2_information_class_isValid = false;

    m_sm_info_isSet = false;
    m_sm_info_isValid = false;

    m_ran_info_isSet = false;
    m_ran_info_isValid = false;

    m_nrppa_info_isSet = false;
    m_nrppa_info_isValid = false;

    m_pws_info_isSet = false;
    m_pws_info_isValid = false;

    m_v2x_info_isSet = false;
    m_v2x_info_isValid = false;
}

void OAIN2InfoContainer::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIN2InfoContainer::fromJsonObject(QJsonObject json) {

    m_n2_information_class_isValid = ::OpenAPI::fromJsonValue(n2_information_class, json[QString("n2InformationClass")]);
    m_n2_information_class_isSet = !json[QString("n2InformationClass")].isNull() && m_n2_information_class_isValid;

    m_sm_info_isValid = ::OpenAPI::fromJsonValue(sm_info, json[QString("smInfo")]);
    m_sm_info_isSet = !json[QString("smInfo")].isNull() && m_sm_info_isValid;

    m_ran_info_isValid = ::OpenAPI::fromJsonValue(ran_info, json[QString("ranInfo")]);
    m_ran_info_isSet = !json[QString("ranInfo")].isNull() && m_ran_info_isValid;

    m_nrppa_info_isValid = ::OpenAPI::fromJsonValue(nrppa_info, json[QString("nrppaInfo")]);
    m_nrppa_info_isSet = !json[QString("nrppaInfo")].isNull() && m_nrppa_info_isValid;

    m_pws_info_isValid = ::OpenAPI::fromJsonValue(pws_info, json[QString("pwsInfo")]);
    m_pws_info_isSet = !json[QString("pwsInfo")].isNull() && m_pws_info_isValid;

    m_v2x_info_isValid = ::OpenAPI::fromJsonValue(v2x_info, json[QString("v2xInfo")]);
    m_v2x_info_isSet = !json[QString("v2xInfo")].isNull() && m_v2x_info_isValid;
}

QString OAIN2InfoContainer::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIN2InfoContainer::asJsonObject() const {
    QJsonObject obj;
    if (n2_information_class.isSet()) {
        obj.insert(QString("n2InformationClass"), ::OpenAPI::toJsonValue(n2_information_class));
    }
    if (sm_info.isSet()) {
        obj.insert(QString("smInfo"), ::OpenAPI::toJsonValue(sm_info));
    }
    if (ran_info.isSet()) {
        obj.insert(QString("ranInfo"), ::OpenAPI::toJsonValue(ran_info));
    }
    if (nrppa_info.isSet()) {
        obj.insert(QString("nrppaInfo"), ::OpenAPI::toJsonValue(nrppa_info));
    }
    if (pws_info.isSet()) {
        obj.insert(QString("pwsInfo"), ::OpenAPI::toJsonValue(pws_info));
    }
    if (v2x_info.isSet()) {
        obj.insert(QString("v2xInfo"), ::OpenAPI::toJsonValue(v2x_info));
    }
    return obj;
}

OAIN2InformationClass OAIN2InfoContainer::getN2InformationClass() const {
    return n2_information_class;
}
void OAIN2InfoContainer::setN2InformationClass(const OAIN2InformationClass &n2_information_class) {
    this->n2_information_class = n2_information_class;
    this->m_n2_information_class_isSet = true;
}

bool OAIN2InfoContainer::is_n2_information_class_Set() const{
    return m_n2_information_class_isSet;
}

bool OAIN2InfoContainer::is_n2_information_class_Valid() const{
    return m_n2_information_class_isValid;
}

OAIN2SmInformation OAIN2InfoContainer::getSmInfo() const {
    return sm_info;
}
void OAIN2InfoContainer::setSmInfo(const OAIN2SmInformation &sm_info) {
    this->sm_info = sm_info;
    this->m_sm_info_isSet = true;
}

bool OAIN2InfoContainer::is_sm_info_Set() const{
    return m_sm_info_isSet;
}

bool OAIN2InfoContainer::is_sm_info_Valid() const{
    return m_sm_info_isValid;
}

OAIN2RanInformation OAIN2InfoContainer::getRanInfo() const {
    return ran_info;
}
void OAIN2InfoContainer::setRanInfo(const OAIN2RanInformation &ran_info) {
    this->ran_info = ran_info;
    this->m_ran_info_isSet = true;
}

bool OAIN2InfoContainer::is_ran_info_Set() const{
    return m_ran_info_isSet;
}

bool OAIN2InfoContainer::is_ran_info_Valid() const{
    return m_ran_info_isValid;
}

OAINrppaInformation OAIN2InfoContainer::getNrppaInfo() const {
    return nrppa_info;
}
void OAIN2InfoContainer::setNrppaInfo(const OAINrppaInformation &nrppa_info) {
    this->nrppa_info = nrppa_info;
    this->m_nrppa_info_isSet = true;
}

bool OAIN2InfoContainer::is_nrppa_info_Set() const{
    return m_nrppa_info_isSet;
}

bool OAIN2InfoContainer::is_nrppa_info_Valid() const{
    return m_nrppa_info_isValid;
}

OAIPwsInformation OAIN2InfoContainer::getPwsInfo() const {
    return pws_info;
}
void OAIN2InfoContainer::setPwsInfo(const OAIPwsInformation &pws_info) {
    this->pws_info = pws_info;
    this->m_pws_info_isSet = true;
}

bool OAIN2InfoContainer::is_pws_info_Set() const{
    return m_pws_info_isSet;
}

bool OAIN2InfoContainer::is_pws_info_Valid() const{
    return m_pws_info_isValid;
}

OAIV2xInformation OAIN2InfoContainer::getV2xInfo() const {
    return v2x_info;
}
void OAIN2InfoContainer::setV2xInfo(const OAIV2xInformation &v2x_info) {
    this->v2x_info = v2x_info;
    this->m_v2x_info_isSet = true;
}

bool OAIN2InfoContainer::is_v2x_info_Set() const{
    return m_v2x_info_isSet;
}

bool OAIN2InfoContainer::is_v2x_info_Valid() const{
    return m_v2x_info_isValid;
}

bool OAIN2InfoContainer::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (n2_information_class.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (sm_info.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (ran_info.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (nrppa_info.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (pws_info.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (v2x_info.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIN2InfoContainer::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_n2_information_class_isValid && true;
}

} // namespace OpenAPI
