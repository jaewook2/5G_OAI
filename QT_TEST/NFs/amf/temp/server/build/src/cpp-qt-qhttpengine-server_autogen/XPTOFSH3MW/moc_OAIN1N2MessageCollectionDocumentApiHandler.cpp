/****************************************************************************
** Meta object code from reading C++ file 'OAIN1N2MessageCollectionDocumentApiHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "handlers/OAIN1N2MessageCollectionDocumentApiHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIN1N2MessageCollectionDocumentApiHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIN1N2MessageCollectionDocumentApiHandler_t {
    QByteArrayData data[6];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIN1N2MessageCollectionDocumentApiHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIN1N2MessageCollectionDocumentApiHandler_t qt_meta_stringdata_OpenAPI__OAIN1N2MessageCollectionDocumentApiHandler = {
    {
QT_MOC_LITERAL(0, 0, 51), // "OpenAPI::OAIN1N2MessageCollec..."
QT_MOC_LITERAL(1, 52, 19), // "n1N2MessageTransfer"
QT_MOC_LITERAL(2, 72, 0), // ""
QT_MOC_LITERAL(3, 73, 13), // "ue_context_id"
QT_MOC_LITERAL(4, 87, 29), // "OAIN1N2MessageTransferReqData"
QT_MOC_LITERAL(5, 117, 34) // "oain1_n2_message_transfer_req..."

    },
    "OpenAPI::OAIN1N2MessageCollectionDocumentApiHandler\0"
    "n1N2MessageTransfer\0\0ue_context_id\0"
    "OAIN1N2MessageTransferReqData\0"
    "oain1_n2_message_transfer_req_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIN1N2MessageCollectionDocumentApiHandler[] = {

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

void OpenAPI::OAIN1N2MessageCollectionDocumentApiHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIN1N2MessageCollectionDocumentApiHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->n1N2MessageTransfer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< OAIN1N2MessageTransferReqData(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIN1N2MessageCollectionDocumentApiHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OpenAPI__OAIN1N2MessageCollectionDocumentApiHandler.data,
    qt_meta_data_OpenAPI__OAIN1N2MessageCollectionDocumentApiHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIN1N2MessageCollectionDocumentApiHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIN1N2MessageCollectionDocumentApiHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIN1N2MessageCollectionDocumentApiHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIN1N2MessageCollectionDocumentApiHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
