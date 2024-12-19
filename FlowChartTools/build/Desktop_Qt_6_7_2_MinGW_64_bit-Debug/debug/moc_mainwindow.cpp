/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "setFillStyle",
    "",
    "QPen&",
    "qp",
    "QBrush&",
    "qb",
    "setLineStyle",
    "LINE_HEAD_TYPE&",
    "startLineHeadType",
    "endLineHeadTypeb",
    "disableStylePanel",
    "sendSelChartLineColor",
    "sendSelChartFillColor",
    "changeWindowTitle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x0a,    1 /* Public */,
       7,    3,   55,    2, 0x0a,    4 /* Public */,
      11,    0,   62,    2, 0x0a,    8 /* Public */,
      12,    0,   63,    2, 0x0a,    9 /* Public */,
      13,    0,   64,    2, 0x0a,   10 /* Public */,
      14,    1,   65,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8, 0x80000000 | 8,    4,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'setFillStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPen &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QBrush &, std::false_type>,
        // method 'setLineStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPen &, std::false_type>,
        QtPrivate::TypeAndForceComplete<LINE_HEAD_TYPE &, std::false_type>,
        QtPrivate::TypeAndForceComplete<LINE_HEAD_TYPE &, std::false_type>,
        // method 'disableStylePanel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendSelChartLineColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendSelChartFillColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeWindowTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setFillStyle((*reinterpret_cast< std::add_pointer_t<QPen&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QBrush&>>(_a[2]))); break;
        case 1: _t->setLineStyle((*reinterpret_cast< std::add_pointer_t<QPen&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LINE_HEAD_TYPE&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<LINE_HEAD_TYPE&>>(_a[3]))); break;
        case 2: _t->disableStylePanel(); break;
        case 3: _t->sendSelChartLineColor(); break;
        case 4: _t->sendSelChartFillColor(); break;
        case 5: _t->changeWindowTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
