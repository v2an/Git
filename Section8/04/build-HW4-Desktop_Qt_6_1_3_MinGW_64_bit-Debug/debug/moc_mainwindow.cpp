/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../untitled/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[26];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 21), // "on_SaveButton_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 21), // "on_OpenButton_clicked"
QT_MOC_LITERAL(56, 21), // "on_HelpButton_clicked"
QT_MOC_LITERAL(78, 23), // "on_ROOpenButton_clicked"
QT_MOC_LITERAL(102, 16), // "on_TrEng_clicked"
QT_MOC_LITERAL(119, 16), // "on_TrRus_clicked"
QT_MOC_LITERAL(136, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(152, 10), // "QKeyEvent*"
QT_MOC_LITERAL(163, 5), // "event"
QT_MOC_LITERAL(169, 21), // "on_SettButton_clicked"
QT_MOC_LITERAL(191, 16) // "on_Setts_clicked"

    },
    "MainWindow\0on_SaveButton_clicked\0\0"
    "on_OpenButton_clicked\0on_HelpButton_clicked\0"
    "on_ROOpenButton_clicked\0on_TrEng_clicked\0"
    "on_TrRus_clicked\0keyReleaseEvent\0"
    "QKeyEvent*\0event\0on_SettButton_clicked\0"
    "on_Setts_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    0 /* Private */,
       3,    0,   69,    2, 0x08,    1 /* Private */,
       4,    0,   70,    2, 0x08,    2 /* Private */,
       5,    0,   71,    2, 0x08,    3 /* Private */,
       6,    0,   72,    2, 0x08,    4 /* Private */,
       7,    0,   73,    2, 0x08,    5 /* Private */,
       8,    1,   74,    2, 0x08,    6 /* Private */,
      11,    0,   77,    2, 0x08,    8 /* Private */,
      12,    0,   78,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_SaveButton_clicked(); break;
        case 1: _t->on_OpenButton_clicked(); break;
        case 2: _t->on_HelpButton_clicked(); break;
        case 3: _t->on_ROOpenButton_clicked(); break;
        case 4: _t->on_TrEng_clicked(); break;
        case 5: _t->on_TrRus_clicked(); break;
        case 6: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
       // case 7: _t->on_SettButton_clicked(); break;
        case 8: _t->on_Setts_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
