/****************************************************************************
** Meta object code from reading C++ file 'depozit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Calc/depozit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'depozit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Depozit_t {
    const uint offsetsAndSize[34];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Depozit_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Depozit_t qt_meta_stringdata_Depozit = {
    {
QT_MOC_LITERAL(0, 7), // "Depozit"
QT_MOC_LITERAL(8, 16), // "on_count_clicked"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 21), // "on_pdays_stateChanged"
QT_MOC_LITERAL(48, 4), // "arg1"
QT_MOC_LITERAL(53, 22), // "on_pmonth_stateChanged"
QT_MOC_LITERAL(76, 24), // "on_pkvartal_stateChanged"
QT_MOC_LITERAL(101, 20), // "on_pend_stateChanged"
QT_MOC_LITERAL(122, 21), // "on_kapit_stateChanged"
QT_MOC_LITERAL(144, 25), // "on_plusmonth_stateChanged"
QT_MOC_LITERAL(170, 27), // "on_pluskvartal_stateChanged"
QT_MOC_LITERAL(198, 27), // "on_pluspolyear_stateChanged"
QT_MOC_LITERAL(226, 24), // "on_plusyear_stateChanged"
QT_MOC_LITERAL(251, 21), // "on_snday_stateChanged"
QT_MOC_LITERAL(273, 20), // "on_snkv_stateChanged"
QT_MOC_LITERAL(294, 25), // "on_snpolyear_stateChanged"
QT_MOC_LITERAL(320, 22) // "on_snyear_stateChanged"

    },
    "Depozit\0on_count_clicked\0\0"
    "on_pdays_stateChanged\0arg1\0"
    "on_pmonth_stateChanged\0on_pkvartal_stateChanged\0"
    "on_pend_stateChanged\0on_kapit_stateChanged\0"
    "on_plusmonth_stateChanged\0"
    "on_pluskvartal_stateChanged\0"
    "on_pluspolyear_stateChanged\0"
    "on_plusyear_stateChanged\0on_snday_stateChanged\0"
    "on_snkv_stateChanged\0on_snpolyear_stateChanged\0"
    "on_snyear_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Depozit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    1,   99,    2, 0x08,    2 /* Private */,
       5,    1,  102,    2, 0x08,    4 /* Private */,
       6,    1,  105,    2, 0x08,    6 /* Private */,
       7,    1,  108,    2, 0x08,    8 /* Private */,
       8,    1,  111,    2, 0x08,   10 /* Private */,
       9,    1,  114,    2, 0x08,   12 /* Private */,
      10,    1,  117,    2, 0x08,   14 /* Private */,
      11,    1,  120,    2, 0x08,   16 /* Private */,
      12,    1,  123,    2, 0x08,   18 /* Private */,
      13,    1,  126,    2, 0x08,   20 /* Private */,
      14,    1,  129,    2, 0x08,   22 /* Private */,
      15,    1,  132,    2, 0x08,   24 /* Private */,
      16,    1,  135,    2, 0x08,   26 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void Depozit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Depozit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_count_clicked(); break;
        case 1: _t->on_pdays_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pmonth_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pkvartal_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pend_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_kapit_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_plusmonth_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pluskvartal_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pluspolyear_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_plusyear_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_snday_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_snkv_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_snpolyear_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_snyear_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Depozit::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Depozit.offsetsAndSize,
    qt_meta_data_Depozit,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Depozit_t
, QtPrivate::TypeAndForceComplete<Depozit, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Depozit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Depozit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Depozit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Depozit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
