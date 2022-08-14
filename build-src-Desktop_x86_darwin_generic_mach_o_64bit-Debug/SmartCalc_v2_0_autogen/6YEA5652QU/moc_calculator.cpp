/****************************************************************************
** Meta object code from reading C++ file 'calculator.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/include/calculator.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_s21__Calculator_t {
    const uint offsetsAndSize[24];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__Calculator_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__Calculator_t qt_meta_stringdata_s21__Calculator = {
    {
QT_MOC_LITERAL(0, 15), // "s21::Calculator"
QT_MOC_LITERAL(16, 12), // "update_graph"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 5), // "x_min"
QT_MOC_LITERAL(36, 5), // "x_max"
QT_MOC_LITERAL(42, 4), // "step"
QT_MOC_LITERAL(47, 12), // "print_lexeme"
QT_MOC_LITERAL(60, 16), // "QAbstractButton*"
QT_MOC_LITERAL(77, 3), // "btn"
QT_MOC_LITERAL(81, 20), // "on_btn_clean_clicked"
QT_MOC_LITERAL(102, 20), // "on_btn_equal_clicked"
QT_MOC_LITERAL(123, 23) // "on_btn_function_clicked"

    },
    "s21::Calculator\0update_graph\0\0x_min\0"
    "x_max\0step\0print_lexeme\0QAbstractButton*\0"
    "btn\0on_btn_clean_clicked\0on_btn_equal_clicked\0"
    "on_btn_function_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__Calculator[] = {

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
       1,    3,   44,    2, 0x0a,    1 /* Public */,
       6,    1,   51,    2, 0x08,    5 /* Private */,
       9,    0,   54,    2, 0x08,    7 /* Private */,
      10,    0,   55,    2, 0x08,    8 /* Private */,
      11,    0,   56,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void s21::Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calculator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update_graph((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->print_lexeme((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->on_btn_clean_clicked(); break;
        case 3: _t->on_btn_equal_clicked(); break;
        case 4: _t->on_btn_function_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject s21::Calculator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_s21__Calculator.offsetsAndSize,
    qt_meta_data_s21__Calculator,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__Calculator_t
, QtPrivate::TypeAndForceComplete<Calculator, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *s21::Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__Calculator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int s21::Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
