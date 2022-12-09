/****************************************************************************
** Meta object code from reading C++ file 'screen_cart.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../vinil_qt/screen_cart.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screen_cart.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_screen_cart_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[36];
    char stringdata5[9];
    char stringdata6[6];
    char stringdata7[8];
    char stringdata8[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_screen_cart_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_screen_cart_t qt_meta_stringdata_screen_cart = {
    {
        QT_MOC_LITERAL(0, 11),  // "screen_cart"
        QT_MOC_LITERAL(12, 23),  // "on_pb_home_cart_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 26),  // "on_pb_profile_cart_clicked"
        QT_MOC_LITERAL(64, 35),  // "on_tableWidget_itemSelectionC..."
        QT_MOC_LITERAL(100, 8),  // "getVinyl"
        QT_MOC_LITERAL(109, 5),  // "Vinyl"
        QT_MOC_LITERAL(115, 7),  // "idVinyl"
        QT_MOC_LITERAL(123, 11)   // "getDiscount"
    },
    "screen_cart",
    "on_pb_home_cart_clicked",
    "",
    "on_pb_profile_cart_clicked",
    "on_tableWidget_itemSelectionChanged",
    "getVinyl",
    "Vinyl",
    "idVinyl",
    "getDiscount"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_screen_cart[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    1,   47,    2, 0x08,    4 /* Private */,
       8,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6, QMetaType::Int,    7,
    QMetaType::Double,

       0        // eod
};

Q_CONSTINIT const QMetaObject screen_cart::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_screen_cart.offsetsAndSizes,
    qt_meta_data_screen_cart,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_screen_cart_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<screen_cart, std::true_type>,
        // method 'on_pb_home_cart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_profile_cart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getVinyl'
        QtPrivate::TypeAndForceComplete<Vinyl, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getDiscount'
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void screen_cart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<screen_cart *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pb_home_cart_clicked(); break;
        case 1: _t->on_pb_profile_cart_clicked(); break;
        case 2: _t->on_tableWidget_itemSelectionChanged(); break;
        case 3: { Vinyl _r = _t->getVinyl((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Vinyl*>(_a[0]) = std::move(_r); }  break;
        case 4: { double _r = _t->getDiscount();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *screen_cart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *screen_cart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_screen_cart.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int screen_cart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
