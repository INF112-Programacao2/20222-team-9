/****************************************************************************
** Meta object code from reading C++ file 'screen_home.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../vinil_qt/screen_home.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screen_home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_screen_home_t {
    uint offsetsAndSizes[12];
    char stringdata0[12];
    char stringdata1[36];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[27];
    char stringdata5[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_screen_home_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_screen_home_t qt_meta_stringdata_screen_home = {
    {
        QT_MOC_LITERAL(0, 11),  // "screen_home"
        QT_MOC_LITERAL(12, 35),  // "on_tableWidget_itemSelectionC..."
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 23),  // "on_pb_ver_album_clicked"
        QT_MOC_LITERAL(73, 26),  // "on_pb_profile_home_clicked"
        QT_MOC_LITERAL(100, 23)   // "on_pb_cart_home_clicked"
    },
    "screen_home",
    "on_tableWidget_itemSelectionChanged",
    "",
    "on_pb_ver_album_clicked",
    "on_pb_profile_home_clicked",
    "on_pb_cart_home_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_screen_home[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject screen_home::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_screen_home.offsetsAndSizes,
    qt_meta_data_screen_home,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_screen_home_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<screen_home, std::true_type>,
        // method 'on_tableWidget_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_ver_album_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_profile_home_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_cart_home_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void screen_home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<screen_home *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tableWidget_itemSelectionChanged(); break;
        case 1: _t->on_pb_ver_album_clicked(); break;
        case 2: _t->on_pb_profile_home_clicked(); break;
        case 3: _t->on_pb_cart_home_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *screen_home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *screen_home::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_screen_home.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int screen_home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
