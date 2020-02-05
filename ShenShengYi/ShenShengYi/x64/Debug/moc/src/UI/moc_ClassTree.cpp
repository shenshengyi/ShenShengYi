/****************************************************************************
** Meta object code from reading C++ file 'ClassTree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/stdafx.h"
#include "../../../../../src/UI/ClassTree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClassTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SSY__ClassTree_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SSY__ClassTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SSY__ClassTree_t qt_meta_stringdata_SSY__ClassTree = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SSY::ClassTree"
QT_MOC_LITERAL(1, 15, 10), // "ClickEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 44, 4), // "item"
QT_MOC_LITERAL(5, 49, 6) // "column"

    },
    "SSY::ClassTree\0ClickEvent\0\0QTreeWidgetItem*\0"
    "item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SSY__ClassTree[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

       0        // eod
};

void SSY::ClassTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClassTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ClickEvent((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SSY::ClassTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_SSY__ClassTree.data,
    qt_meta_data_SSY__ClassTree,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SSY::ClassTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SSY::ClassTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SSY__ClassTree.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int SSY::ClassTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SSY__ArtsClassTree_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SSY__ArtsClassTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SSY__ArtsClassTree_t qt_meta_stringdata_SSY__ArtsClassTree = {
    {
QT_MOC_LITERAL(0, 0, 18) // "SSY::ArtsClassTree"

    },
    "SSY::ArtsClassTree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SSY__ArtsClassTree[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SSY::ArtsClassTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SSY::ArtsClassTree::staticMetaObject = { {
    QMetaObject::SuperData::link<ClassTree::staticMetaObject>(),
    qt_meta_stringdata_SSY__ArtsClassTree.data,
    qt_meta_data_SSY__ArtsClassTree,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SSY::ArtsClassTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SSY::ArtsClassTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SSY__ArtsClassTree.stringdata0))
        return static_cast<void*>(this);
    return ClassTree::qt_metacast(_clname);
}

int SSY::ArtsClassTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ClassTree::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SSY__ScienceClassTree_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SSY__ScienceClassTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SSY__ScienceClassTree_t qt_meta_stringdata_SSY__ScienceClassTree = {
    {
QT_MOC_LITERAL(0, 0, 21) // "SSY::ScienceClassTree"

    },
    "SSY::ScienceClassTree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SSY__ScienceClassTree[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SSY::ScienceClassTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SSY::ScienceClassTree::staticMetaObject = { {
    QMetaObject::SuperData::link<ClassTree::staticMetaObject>(),
    qt_meta_stringdata_SSY__ScienceClassTree.data,
    qt_meta_data_SSY__ScienceClassTree,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SSY::ScienceClassTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SSY::ScienceClassTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SSY__ScienceClassTree.stringdata0))
        return static_cast<void*>(this);
    return ClassTree::qt_metacast(_clname);
}

int SSY::ScienceClassTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ClassTree::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
