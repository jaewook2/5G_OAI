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

#include "OAIInline_object.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIInline_object::OAIInline_object(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInline_object::OAIInline_object() {
    this->initializeModel();
}

OAIInline_object::~OAIInline_object() {}

void OAIInline_object::initializeModel() {

    m_json_data_isSet = false;
    m_json_data_isValid = false;

    m_binary_data_n2_information_isSet = false;
    m_binary_data_n2_information_isValid = false;

    m_binary_data_n2_information_ext1_isSet = false;
    m_binary_data_n2_information_ext1_isValid = false;

    m_binary_data_n2_information_ext2_isSet = false;
    m_binary_data_n2_information_ext2_isValid = false;

    m_binary_data_n2_information_ext3_isSet = false;
    m_binary_data_n2_information_ext3_isValid = false;

    m_binary_data_n2_information_ext4_isSet = false;
    m_binary_data_n2_information_ext4_isValid = false;

    m_binary_data_n2_information_ext5_isSet = false;
    m_binary_data_n2_information_ext5_isValid = false;

    m_binary_data_n2_information_ext6_isSet = false;
    m_binary_data_n2_information_ext6_isValid = false;

    m_binary_data_n2_information_ext7_isSet = false;
    m_binary_data_n2_information_ext7_isValid = false;

    m_binary_data_n2_information_ext8_isSet = false;
    m_binary_data_n2_information_ext8_isValid = false;

    m_binary_data_n2_information_ext9_isSet = false;
    m_binary_data_n2_information_ext9_isValid = false;

    m_binary_data_n2_information_ext10_isSet = false;
    m_binary_data_n2_information_ext10_isValid = false;

    m_binary_data_n2_information_ext11_isSet = false;
    m_binary_data_n2_information_ext11_isValid = false;

    m_binary_data_n2_information_ext12_isSet = false;
    m_binary_data_n2_information_ext12_isValid = false;

    m_binary_data_n2_information_ext13_isSet = false;
    m_binary_data_n2_information_ext13_isValid = false;

    m_binary_data_n2_information_ext14_isSet = false;
    m_binary_data_n2_information_ext14_isValid = false;

    m_binary_data_n2_information_ext15_isSet = false;
    m_binary_data_n2_information_ext15_isValid = false;

    m_binary_data_n2_information_ext16_isSet = false;
    m_binary_data_n2_information_ext16_isValid = false;
}

void OAIInline_object::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInline_object::fromJsonObject(QJsonObject json) {

    m_json_data_isValid = ::OpenAPI::fromJsonValue(json_data, json[QString("jsonData")]);
    m_json_data_isSet = !json[QString("jsonData")].isNull() && m_json_data_isValid;

    m_binary_data_n2_information_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information, json[QString("binaryDataN2Information")]);
    m_binary_data_n2_information_isSet = !json[QString("binaryDataN2Information")].isNull() && m_binary_data_n2_information_isValid;

    m_binary_data_n2_information_ext1_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext1, json[QString("binaryDataN2InformationExt1")]);
    m_binary_data_n2_information_ext1_isSet = !json[QString("binaryDataN2InformationExt1")].isNull() && m_binary_data_n2_information_ext1_isValid;

    m_binary_data_n2_information_ext2_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext2, json[QString("binaryDataN2InformationExt2")]);
    m_binary_data_n2_information_ext2_isSet = !json[QString("binaryDataN2InformationExt2")].isNull() && m_binary_data_n2_information_ext2_isValid;

    m_binary_data_n2_information_ext3_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext3, json[QString("binaryDataN2InformationExt3")]);
    m_binary_data_n2_information_ext3_isSet = !json[QString("binaryDataN2InformationExt3")].isNull() && m_binary_data_n2_information_ext3_isValid;

    m_binary_data_n2_information_ext4_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext4, json[QString("binaryDataN2InformationExt4")]);
    m_binary_data_n2_information_ext4_isSet = !json[QString("binaryDataN2InformationExt4")].isNull() && m_binary_data_n2_information_ext4_isValid;

    m_binary_data_n2_information_ext5_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext5, json[QString("binaryDataN2InformationExt5")]);
    m_binary_data_n2_information_ext5_isSet = !json[QString("binaryDataN2InformationExt5")].isNull() && m_binary_data_n2_information_ext5_isValid;

    m_binary_data_n2_information_ext6_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext6, json[QString("binaryDataN2InformationExt6")]);
    m_binary_data_n2_information_ext6_isSet = !json[QString("binaryDataN2InformationExt6")].isNull() && m_binary_data_n2_information_ext6_isValid;

    m_binary_data_n2_information_ext7_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext7, json[QString("binaryDataN2InformationExt7")]);
    m_binary_data_n2_information_ext7_isSet = !json[QString("binaryDataN2InformationExt7")].isNull() && m_binary_data_n2_information_ext7_isValid;

    m_binary_data_n2_information_ext8_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext8, json[QString("binaryDataN2InformationExt8")]);
    m_binary_data_n2_information_ext8_isSet = !json[QString("binaryDataN2InformationExt8")].isNull() && m_binary_data_n2_information_ext8_isValid;

    m_binary_data_n2_information_ext9_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext9, json[QString("binaryDataN2InformationExt9")]);
    m_binary_data_n2_information_ext9_isSet = !json[QString("binaryDataN2InformationExt9")].isNull() && m_binary_data_n2_information_ext9_isValid;

    m_binary_data_n2_information_ext10_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext10, json[QString("binaryDataN2InformationExt10")]);
    m_binary_data_n2_information_ext10_isSet = !json[QString("binaryDataN2InformationExt10")].isNull() && m_binary_data_n2_information_ext10_isValid;

    m_binary_data_n2_information_ext11_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext11, json[QString("binaryDataN2InformationExt11")]);
    m_binary_data_n2_information_ext11_isSet = !json[QString("binaryDataN2InformationExt11")].isNull() && m_binary_data_n2_information_ext11_isValid;

    m_binary_data_n2_information_ext12_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext12, json[QString("binaryDataN2InformationExt12")]);
    m_binary_data_n2_information_ext12_isSet = !json[QString("binaryDataN2InformationExt12")].isNull() && m_binary_data_n2_information_ext12_isValid;

    m_binary_data_n2_information_ext13_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext13, json[QString("binaryDataN2InformationExt13")]);
    m_binary_data_n2_information_ext13_isSet = !json[QString("binaryDataN2InformationExt13")].isNull() && m_binary_data_n2_information_ext13_isValid;

    m_binary_data_n2_information_ext14_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext14, json[QString("binaryDataN2InformationExt14")]);
    m_binary_data_n2_information_ext14_isSet = !json[QString("binaryDataN2InformationExt14")].isNull() && m_binary_data_n2_information_ext14_isValid;

    m_binary_data_n2_information_ext15_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext15, json[QString("binaryDataN2InformationExt15")]);
    m_binary_data_n2_information_ext15_isSet = !json[QString("binaryDataN2InformationExt15")].isNull() && m_binary_data_n2_information_ext15_isValid;

    m_binary_data_n2_information_ext16_isValid = ::OpenAPI::fromJsonValue(binary_data_n2_information_ext16, json[QString("binaryDataN2InformationExt16")]);
    m_binary_data_n2_information_ext16_isSet = !json[QString("binaryDataN2InformationExt16")].isNull() && m_binary_data_n2_information_ext16_isValid;
}

QString OAIInline_object::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInline_object::asJsonObject() const {
    QJsonObject obj;
    if (json_data.isSet()) {
        obj.insert(QString("jsonData"), ::OpenAPI::toJsonValue(json_data));
    }
    if (binary_data_n2_information.isSet()) {
        obj.insert(QString("binaryDataN2Information"), ::OpenAPI::toJsonValue(binary_data_n2_information));
    }
    if (binary_data_n2_information_ext1.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt1"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext1));
    }
    if (binary_data_n2_information_ext2.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt2"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext2));
    }
    if (binary_data_n2_information_ext3.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt3"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext3));
    }
    if (binary_data_n2_information_ext4.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt4"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext4));
    }
    if (binary_data_n2_information_ext5.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt5"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext5));
    }
    if (binary_data_n2_information_ext6.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt6"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext6));
    }
    if (binary_data_n2_information_ext7.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt7"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext7));
    }
    if (binary_data_n2_information_ext8.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt8"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext8));
    }
    if (binary_data_n2_information_ext9.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt9"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext9));
    }
    if (binary_data_n2_information_ext10.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt10"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext10));
    }
    if (binary_data_n2_information_ext11.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt11"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext11));
    }
    if (binary_data_n2_information_ext12.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt12"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext12));
    }
    if (binary_data_n2_information_ext13.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt13"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext13));
    }
    if (binary_data_n2_information_ext14.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt14"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext14));
    }
    if (binary_data_n2_information_ext15.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt15"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext15));
    }
    if (binary_data_n2_information_ext16.isSet()) {
        obj.insert(QString("binaryDataN2InformationExt16"), ::OpenAPI::toJsonValue(binary_data_n2_information_ext16));
    }
    return obj;
}

OAIUeContextCreateData OAIInline_object::getJsonData() const {
    return json_data;
}
void OAIInline_object::setJsonData(const OAIUeContextCreateData &json_data) {
    this->json_data = json_data;
    this->m_json_data_isSet = true;
}

bool OAIInline_object::is_json_data_Set() const{
    return m_json_data_isSet;
}

bool OAIInline_object::is_json_data_Valid() const{
    return m_json_data_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2Information() const {
    return binary_data_n2_information;
}
void OAIInline_object::setBinaryDataN2Information(const OAIHttpFileElement &binary_data_n2_information) {
    this->binary_data_n2_information = binary_data_n2_information;
    this->m_binary_data_n2_information_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_Set() const{
    return m_binary_data_n2_information_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_Valid() const{
    return m_binary_data_n2_information_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt1() const {
    return binary_data_n2_information_ext1;
}
void OAIInline_object::setBinaryDataN2InformationExt1(const OAIHttpFileElement &binary_data_n2_information_ext1) {
    this->binary_data_n2_information_ext1 = binary_data_n2_information_ext1;
    this->m_binary_data_n2_information_ext1_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext1_Set() const{
    return m_binary_data_n2_information_ext1_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext1_Valid() const{
    return m_binary_data_n2_information_ext1_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt2() const {
    return binary_data_n2_information_ext2;
}
void OAIInline_object::setBinaryDataN2InformationExt2(const OAIHttpFileElement &binary_data_n2_information_ext2) {
    this->binary_data_n2_information_ext2 = binary_data_n2_information_ext2;
    this->m_binary_data_n2_information_ext2_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext2_Set() const{
    return m_binary_data_n2_information_ext2_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext2_Valid() const{
    return m_binary_data_n2_information_ext2_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt3() const {
    return binary_data_n2_information_ext3;
}
void OAIInline_object::setBinaryDataN2InformationExt3(const OAIHttpFileElement &binary_data_n2_information_ext3) {
    this->binary_data_n2_information_ext3 = binary_data_n2_information_ext3;
    this->m_binary_data_n2_information_ext3_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext3_Set() const{
    return m_binary_data_n2_information_ext3_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext3_Valid() const{
    return m_binary_data_n2_information_ext3_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt4() const {
    return binary_data_n2_information_ext4;
}
void OAIInline_object::setBinaryDataN2InformationExt4(const OAIHttpFileElement &binary_data_n2_information_ext4) {
    this->binary_data_n2_information_ext4 = binary_data_n2_information_ext4;
    this->m_binary_data_n2_information_ext4_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext4_Set() const{
    return m_binary_data_n2_information_ext4_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext4_Valid() const{
    return m_binary_data_n2_information_ext4_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt5() const {
    return binary_data_n2_information_ext5;
}
void OAIInline_object::setBinaryDataN2InformationExt5(const OAIHttpFileElement &binary_data_n2_information_ext5) {
    this->binary_data_n2_information_ext5 = binary_data_n2_information_ext5;
    this->m_binary_data_n2_information_ext5_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext5_Set() const{
    return m_binary_data_n2_information_ext5_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext5_Valid() const{
    return m_binary_data_n2_information_ext5_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt6() const {
    return binary_data_n2_information_ext6;
}
void OAIInline_object::setBinaryDataN2InformationExt6(const OAIHttpFileElement &binary_data_n2_information_ext6) {
    this->binary_data_n2_information_ext6 = binary_data_n2_information_ext6;
    this->m_binary_data_n2_information_ext6_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext6_Set() const{
    return m_binary_data_n2_information_ext6_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext6_Valid() const{
    return m_binary_data_n2_information_ext6_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt7() const {
    return binary_data_n2_information_ext7;
}
void OAIInline_object::setBinaryDataN2InformationExt7(const OAIHttpFileElement &binary_data_n2_information_ext7) {
    this->binary_data_n2_information_ext7 = binary_data_n2_information_ext7;
    this->m_binary_data_n2_information_ext7_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext7_Set() const{
    return m_binary_data_n2_information_ext7_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext7_Valid() const{
    return m_binary_data_n2_information_ext7_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt8() const {
    return binary_data_n2_information_ext8;
}
void OAIInline_object::setBinaryDataN2InformationExt8(const OAIHttpFileElement &binary_data_n2_information_ext8) {
    this->binary_data_n2_information_ext8 = binary_data_n2_information_ext8;
    this->m_binary_data_n2_information_ext8_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext8_Set() const{
    return m_binary_data_n2_information_ext8_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext8_Valid() const{
    return m_binary_data_n2_information_ext8_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt9() const {
    return binary_data_n2_information_ext9;
}
void OAIInline_object::setBinaryDataN2InformationExt9(const OAIHttpFileElement &binary_data_n2_information_ext9) {
    this->binary_data_n2_information_ext9 = binary_data_n2_information_ext9;
    this->m_binary_data_n2_information_ext9_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext9_Set() const{
    return m_binary_data_n2_information_ext9_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext9_Valid() const{
    return m_binary_data_n2_information_ext9_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt10() const {
    return binary_data_n2_information_ext10;
}
void OAIInline_object::setBinaryDataN2InformationExt10(const OAIHttpFileElement &binary_data_n2_information_ext10) {
    this->binary_data_n2_information_ext10 = binary_data_n2_information_ext10;
    this->m_binary_data_n2_information_ext10_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext10_Set() const{
    return m_binary_data_n2_information_ext10_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext10_Valid() const{
    return m_binary_data_n2_information_ext10_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt11() const {
    return binary_data_n2_information_ext11;
}
void OAIInline_object::setBinaryDataN2InformationExt11(const OAIHttpFileElement &binary_data_n2_information_ext11) {
    this->binary_data_n2_information_ext11 = binary_data_n2_information_ext11;
    this->m_binary_data_n2_information_ext11_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext11_Set() const{
    return m_binary_data_n2_information_ext11_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext11_Valid() const{
    return m_binary_data_n2_information_ext11_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt12() const {
    return binary_data_n2_information_ext12;
}
void OAIInline_object::setBinaryDataN2InformationExt12(const OAIHttpFileElement &binary_data_n2_information_ext12) {
    this->binary_data_n2_information_ext12 = binary_data_n2_information_ext12;
    this->m_binary_data_n2_information_ext12_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext12_Set() const{
    return m_binary_data_n2_information_ext12_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext12_Valid() const{
    return m_binary_data_n2_information_ext12_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt13() const {
    return binary_data_n2_information_ext13;
}
void OAIInline_object::setBinaryDataN2InformationExt13(const OAIHttpFileElement &binary_data_n2_information_ext13) {
    this->binary_data_n2_information_ext13 = binary_data_n2_information_ext13;
    this->m_binary_data_n2_information_ext13_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext13_Set() const{
    return m_binary_data_n2_information_ext13_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext13_Valid() const{
    return m_binary_data_n2_information_ext13_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt14() const {
    return binary_data_n2_information_ext14;
}
void OAIInline_object::setBinaryDataN2InformationExt14(const OAIHttpFileElement &binary_data_n2_information_ext14) {
    this->binary_data_n2_information_ext14 = binary_data_n2_information_ext14;
    this->m_binary_data_n2_information_ext14_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext14_Set() const{
    return m_binary_data_n2_information_ext14_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext14_Valid() const{
    return m_binary_data_n2_information_ext14_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt15() const {
    return binary_data_n2_information_ext15;
}
void OAIInline_object::setBinaryDataN2InformationExt15(const OAIHttpFileElement &binary_data_n2_information_ext15) {
    this->binary_data_n2_information_ext15 = binary_data_n2_information_ext15;
    this->m_binary_data_n2_information_ext15_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext15_Set() const{
    return m_binary_data_n2_information_ext15_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext15_Valid() const{
    return m_binary_data_n2_information_ext15_isValid;
}

OAIHttpFileElement OAIInline_object::getBinaryDataN2InformationExt16() const {
    return binary_data_n2_information_ext16;
}
void OAIInline_object::setBinaryDataN2InformationExt16(const OAIHttpFileElement &binary_data_n2_information_ext16) {
    this->binary_data_n2_information_ext16 = binary_data_n2_information_ext16;
    this->m_binary_data_n2_information_ext16_isSet = true;
}

bool OAIInline_object::is_binary_data_n2_information_ext16_Set() const{
    return m_binary_data_n2_information_ext16_isSet;
}

bool OAIInline_object::is_binary_data_n2_information_ext16_Valid() const{
    return m_binary_data_n2_information_ext16_isValid;
}

bool OAIInline_object::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (json_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext1.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext2.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext3.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext4.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext5.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext6.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext7.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext8.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext9.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext10.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext11.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext12.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext13.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext14.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext15.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (binary_data_n2_information_ext16.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInline_object::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
