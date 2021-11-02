/****************************************************************************
** Meta object code from reading C++ file 'OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "handlers/OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler_t {
    QByteArrayData data[6];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler_t qt_meta_stringdata_OpenAPI__OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler = {
    {
QT_MOC_LITERAL(0, 0, 80), // "OpenAPI::OAIN1N2Subscriptions..."
QT_MOC_LITERAL(1, 81, 20), // "n1N2MessageSubscribe"
QT_MOC_LITERAL(2, 102, 0), // ""
QT_MOC_LITERAL(3, 103, 13), // "ue_context_id"
QT_MOC_LITERAL(4, 117, 35), // "OAIUeN1N2InfoSubscriptionCrea..."
QT_MOC_LITERAL(5, 153, 41) // "oaiue_n1_n2_info_subscription..."

    },
    "OpenAPI::OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocument"
    "ApiHandler\0"
    "n1N2MessageSubscribe\0\0ue_context_id\0"
    "OAIUeN1N2InfoSubscriptionCreateData\0"
    "oaiue_n1_n2_info_subscription_create_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void OpenAPI::OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->n1N2MessageSubscribe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< OAIUeN1N2InfoSubscriptionCreateData(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OpenAPI__OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler.data,
    qt_meta_data_OpenAPI__OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
