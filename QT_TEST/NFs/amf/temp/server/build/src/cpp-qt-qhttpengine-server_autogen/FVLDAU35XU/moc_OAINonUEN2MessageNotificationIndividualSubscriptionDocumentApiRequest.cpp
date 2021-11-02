/****************************************************************************
** Meta object code from reading C++ file 'OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "requests/OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest_t {
    QByteArrayData data[4];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest_t qt_meta_stringdata_OpenAPI__OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest = {
    {
QT_MOC_LITERAL(0, 0, 78), // "OpenAPI::OAINonUEN2MessageNot..."
QT_MOC_LITERAL(1, 79, 22), // "nonUeN2InfoUnSubscribe"
QT_MOC_LITERAL(2, 102, 0), // ""
QT_MOC_LITERAL(3, 103, 25) // "n2_notify_subscription_id"

    },
    "OpenAPI::OAINonUEN2MessageNotificationIndividualSubscriptionDocumentAp"
    "iRequest\0"
    "nonUeN2InfoUnSubscribe\0\0"
    "n2_notify_subscription_id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void OpenAPI::OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nonUeN2InfoUnSubscribe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest::nonUeN2InfoUnSubscribe)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OpenAPI__OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest.data,
    qt_meta_data_OpenAPI__OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void OpenAPI::OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiRequest::nonUeN2InfoUnSubscribe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
