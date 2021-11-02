/****************************************************************************
** Meta object code from reading C++ file 'OAIEEIndividualSubscriptionDocumentApiHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "handlers/OAIEEIndividualSubscriptionDocumentApiHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIEEIndividualSubscriptionDocumentApiHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIEEIndividualSubscriptionDocumentApiHandler_t {
    QByteArrayData data[4];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIEEIndividualSubscriptionDocumentApiHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIEEIndividualSubscriptionDocumentApiHandler_t qt_meta_stringdata_OpenAPI__OAIEEIndividualSubscriptionDocumentApiHandler = {
    {
QT_MOC_LITERAL(0, 0, 54), // "OpenAPI::OAIEEIndividualSubsc..."
QT_MOC_LITERAL(1, 55, 18), // "deleteSubscription"
QT_MOC_LITERAL(2, 74, 0), // ""
QT_MOC_LITERAL(3, 75, 15) // "subscription_id"

    },
    "OpenAPI::OAIEEIndividualSubscriptionDocumentApiHandler\0"
    "deleteSubscription\0\0subscription_id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIEEIndividualSubscriptionDocumentApiHandler[] = {

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
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void OpenAPI::OAIEEIndividualSubscriptionDocumentApiHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIEEIndividualSubscriptionDocumentApiHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteSubscription((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIEEIndividualSubscriptionDocumentApiHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OpenAPI__OAIEEIndividualSubscriptionDocumentApiHandler.data,
    qt_meta_data_OpenAPI__OAIEEIndividualSubscriptionDocumentApiHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIEEIndividualSubscriptionDocumentApiHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIEEIndividualSubscriptionDocumentApiHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIEEIndividualSubscriptionDocumentApiHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIEEIndividualSubscriptionDocumentApiHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
