/****************************************************************************
** Meta object code from reading C++ file 'OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "handlers/OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler_t {
    QByteArrayData data[5];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler_t qt_meta_stringdata_OpenAPI__OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler = {
    {
QT_MOC_LITERAL(0, 0, 68), // "OpenAPI::OAINonUEN2MessagesSu..."
QT_MOC_LITERAL(1, 69, 20), // "nonUeN2InfoSubscribe"
QT_MOC_LITERAL(2, 90, 0), // ""
QT_MOC_LITERAL(3, 91, 36), // "OAINonUeN2InfoSubscriptionCre..."
QT_MOC_LITERAL(4, 128, 43) // "oai_non_ue_n2_info_subscripti..."

    },
    "OpenAPI::OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler\0"
    "nonUeN2InfoSubscribe\0\0"
    "OAINonUeN2InfoSubscriptionCreateData\0"
    "oai_non_ue_n2_info_subscription_create_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void OpenAPI::OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nonUeN2InfoSubscribe((*reinterpret_cast< OAINonUeN2InfoSubscriptionCreateData(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OpenAPI__OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler.data,
    qt_meta_data_OpenAPI__OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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