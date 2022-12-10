/****************************************************************************
** Meta object code from reading C++ file 'screen_disc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../vinil_qt/screen_disc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screen_disc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_screen_disc_t {
    QByteArrayData data[16];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_screen_disc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_screen_disc_t qt_meta_stringdata_screen_disc = {
    {
QT_MOC_LITERAL(0, 0, 11), // "screen_disc"
QT_MOC_LITERAL(1, 12, 25), // "on_pb_perfil_disc_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_pb_cart_disc_clicked"
QT_MOC_LITERAL(4, 63, 38), // "on_tw_musics_disc_itemSelecti..."
QT_MOC_LITERAL(5, 102, 8), // "getMusic"
QT_MOC_LITERAL(6, 111, 5), // "Music"
QT_MOC_LITERAL(7, 117, 2), // "id"
QT_MOC_LITERAL(8, 120, 18), // "std::vector<Music>"
QT_MOC_LITERAL(9, 139, 6), // "musics"
QT_MOC_LITERAL(10, 146, 23), // "on_pb_cart_home_clicked"
QT_MOC_LITERAL(11, 170, 23), // "on_pb_home_home_clicked"
QT_MOC_LITERAL(12, 194, 16), // "downloadFinished"
QT_MOC_LITERAL(13, 211, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 226, 5), // "reply"
QT_MOC_LITERAL(15, 232, 31) // "on_pb_adicionarCarrinho_clicked"

    },
    "screen_disc\0on_pb_perfil_disc_clicked\0"
    "\0on_pb_cart_disc_clicked\0"
    "on_tw_musics_disc_itemSelectionChanged\0"
    "getMusic\0Music\0id\0std::vector<Music>\0"
    "musics\0on_pb_cart_home_clicked\0"
    "on_pb_home_home_clicked\0downloadFinished\0"
    "QNetworkReply*\0reply\0"
    "on_pb_adicionarCarrinho_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_screen_disc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    2,   57,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,
      12,    1,   64,    2, 0x08 /* Private */,
      15,    0,   67,    2, 0x08 /* Private */,

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

void screen_disc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<screen_disc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pb_perfil_disc_clicked(); break;
        case 1: _t->on_pb_cart_disc_clicked(); break;
        case 2: _t->on_tw_musics_disc_itemSelectionChanged(); break;
        case 3: { Music _r = _t->getMusic((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::vector<Music>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Music*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_pb_cart_home_clicked(); break;
        case 5: _t->on_pb_home_home_clicked(); break;
        case 6: _t->downloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->on_pb_adicionarCarrinho_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject screen_disc::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_screen_disc.data,
    qt_meta_data_screen_disc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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
