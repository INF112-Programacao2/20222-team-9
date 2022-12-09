/****************************************************************************
** Meta object code from reading C++ file 'screen_disc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../vinil_qt/screen_disc.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screen_disc.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_screen_disc_t {
    uint offsetsAndSizes[32];
    char stringdata0[12];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[39];
    char stringdata5[9];
    char stringdata6[6];
    char stringdata7[3];
    char stringdata8[19];
    char stringdata9[7];
    char stringdata10[24];
    char stringdata11[24];
    char stringdata12[17];
    char stringdata13[15];
    char stringdata14[6];
    char stringdata15[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_screen_disc_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_screen_disc_t qt_meta_stringdata_screen_disc = {
    {
        QT_MOC_LITERAL(0, 11),  // "screen_disc"
        QT_MOC_LITERAL(12, 25),  // "on_pb_perfil_disc_clicked"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 23),  // "on_pb_cart_disc_clicked"
        QT_MOC_LITERAL(63, 38),  // "on_tw_musics_disc_itemSelecti..."
        QT_MOC_LITERAL(102, 8),  // "getMusic"
        QT_MOC_LITERAL(111, 5),  // "Music"
        QT_MOC_LITERAL(117, 2),  // "id"
        QT_MOC_LITERAL(120, 18),  // "std::vector<Music>"
        QT_MOC_LITERAL(139, 6),  // "musics"
        QT_MOC_LITERAL(146, 23),  // "on_pb_cart_home_clicked"
        QT_MOC_LITERAL(170, 23),  // "on_pb_home_home_clicked"
        QT_MOC_LITERAL(194, 16),  // "downloadFinished"
        QT_MOC_LITERAL(211, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(226, 5),  // "reply"
        QT_MOC_LITERAL(232, 31)   // "on_pb_adicionarCarrinho_clicked"
    },
    "screen_disc",
    "on_pb_perfil_disc_clicked",
    "",
    "on_pb_cart_disc_clicked",
    "on_tw_musics_disc_itemSelectionChanged",
    "getMusic",
    "Music",
    "id",
    "std::vector<Music>",
    "musics",
    "on_pb_cart_home_clicked",
    "on_pb_home_home_clicked",
    "downloadFinished",
    "QNetworkReply*",
    "reply",
    "on_pb_adicionarCarrinho_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_screen_disc[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    2,   65,    2, 0x08,    4 /* Private */,
      10,    0,   70,    2, 0x08,    7 /* Private */,
      11,    0,   71,    2, 0x08,    8 /* Private */,
      12,    1,   72,    2, 0x08,    9 /* Private */,
      15,    0,   75,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject screen_disc::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_screen_disc.offsetsAndSizes,
    qt_meta_data_screen_disc,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_screen_disc_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<screen_disc, std::true_type>,
        // method 'on_pb_perfil_disc_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_cart_disc_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tw_musics_disc_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getMusic'
        QtPrivate::TypeAndForceComplete<Music, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<Music>, std::false_type>,
        // method 'on_pb_cart_home_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_home_home_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'on_pb_adicionarCarrinho_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void screen_disc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<screen_disc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pb_perfil_disc_clicked(); break;
        case 1: _t->on_pb_cart_disc_clicked(); break;
        case 2: _t->on_tw_musics_disc_itemSelectionChanged(); break;
        case 3: { Music _r = _t->getMusic((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<Music>>>(_a[2])));
            if (_a[0]) *reinterpret_cast< Music*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_pb_cart_home_clicked(); break;
        case 5: _t->on_pb_home_home_clicked(); break;
        case 6: _t->downloadFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 7: _t->on_pb_adicionarCarrinho_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *screen_disc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *screen_disc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_screen_disc.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int screen_disc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
