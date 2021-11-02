/****************************************************************************
** Meta object code from reading C++ file 'OAIIndividualSubscriptionDocumentApiHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "handlers/OAIIndividualSubscriptionDocumentApiHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIIndividualSubscriptionDocumentApiHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIIndividualSubscriptionDocumentApiHandler_t {
    QByteArrayData data[7];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIIndividualSubscriptionDocumentApiHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIIndividualSubscriptionDocumentApiHandler_t qt_meta_stringdata_OpenAPI__OAIIndividualSubscriptionDocumentApiHandler = {
    {
QT_MOC_LITERAL(0, 0, 52), // "OpenAPI::OAIIndividualSubscri..."
QT_MOC_LITERAL(1, 53, 18), // "deleteSubscription"
QT_MOC_LITERAL(2, 72, 0), // ""
QT_MOC_LITERAL(3, 73, 15), // "subscription_id"
QT_MOC_LITERAL(4, 89, 18), // "modifySubscription"
QT_MOC_LITERAL(5, 108, 17), // "UNKNOWN_BASE_TYPE"
QT_MOC_LITERAL(6, 126, 17) // "unknown_base_type"

    },
    "OpenAPI::OAIIndividualSubscriptionDocumentApiHandler\0"
    "deleteSubscription\0\0subscription_id\0"
    "modifySubscription\0UNKNOWN_BASE_TYPE\0"
    "unknown_base_type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIIndividualSubscriptionDocumentApiHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    2,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    3,    6,

       0        // eod
};

void OpenAPI::OAIIndividualSubscriptionDocumentApiHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIIndividualSubscriptionDocumentApiHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteSubscription((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->modifySubscription((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< UNKNOWN_BASE_TYPE(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIIndividualSubscriptionDocumentApiHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OpenAPI__OAIIndividualSubscriptionDocumentApiHandler.data,
    qt_meta_data_OpenAPI__OAIIndividualSubscriptionDocumentApiHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIIndividualSubscriptionDocumentApiHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIIndividualSubscriptionDocumentApiHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIIndividualSubscriptionDocumentApiHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIIndividualSubscriptionDocumentApiHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
