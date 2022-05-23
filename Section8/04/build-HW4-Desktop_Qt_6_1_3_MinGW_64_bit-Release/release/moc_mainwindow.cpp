/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../05/untitled/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
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
    const uint offsetsAndSize[54];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 8), // "SendData"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 20), // "QList<QKeySequence>&"
QT_MOC_LITERAL(42, 8), // "KeyBinds"
QT_MOC_LITERAL(51, 21), // "Qt::KeyboardModifier&"
QT_MOC_LITERAL(73, 12), // "ModifierBind"
QT_MOC_LITERAL(86, 4), // "lang"
QT_MOC_LITERAL(91, 8), // "SendLang"
QT_MOC_LITERAL(100, 10), // "SendFolder"
QT_MOC_LITERAL(111, 8), // "QString&"
QT_MOC_LITERAL(120, 6), // "folder"
QT_MOC_LITERAL(127, 21), // "on_SaveButton_clicked"
QT_MOC_LITERAL(149, 21), // "on_OpenButton_clicked"
QT_MOC_LITERAL(171, 21), // "on_HelpButton_clicked"
QT_MOC_LITERAL(193, 23), // "on_ROOpenButton_clicked"
QT_MOC_LITERAL(217, 16), // "on_TrEng_clicked"
QT_MOC_LITERAL(234, 16), // "on_TrRus_clicked"
QT_MOC_LITERAL(251, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(267, 10), // "QKeyEvent*"
QT_MOC_LITERAL(278, 5), // "event"
QT_MOC_LITERAL(284, 12), // "onButtonSend"
QT_MOC_LITERAL(297, 22), // "on_ThemeChange_clicked"
QT_MOC_LITERAL(320, 27), // "on_CurrFolderButton_clicked"
QT_MOC_LITERAL(348, 10), // "ReciveBack"
QT_MOC_LITERAL(359, 9), // "RKeyBinds"
QT_MOC_LITERAL(369, 13) // "RModifierBind"

    },
    "MainWindow\0SendData\0\0QList<QKeySequence>&\0"
    "KeyBinds\0Qt::KeyboardModifier&\0"
    "ModifierBind\0lang\0SendLang\0SendFolder\0"
    "QString&\0folder\0on_SaveButton_clicked\0"
    "on_OpenButton_clicked\0on_HelpButton_clicked\0"
    "on_ROOpenButton_clicked\0on_TrEng_clicked\0"
    "on_TrRus_clicked\0keyReleaseEvent\0"
    "QKeyEvent*\0event\0onButtonSend\0"
    "on_ThemeChange_clicked\0"
    "on_CurrFolderButton_clicked\0ReciveBack\0"
    "RKeyBinds\0RModifierBind"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   98,    2, 0x06,    0 /* Public */,
       8,    1,  105,    2, 0x06,    4 /* Public */,
       9,    1,  108,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  111,    2, 0x08,    8 /* Private */,
      13,    0,  112,    2, 0x08,    9 /* Private */,
      14,    0,  113,    2, 0x08,   10 /* Private */,
      15,    0,  114,    2, 0x08,   11 /* Private */,
      16,    0,  115,    2, 0x08,   12 /* Private */,
      17,    0,  116,    2, 0x08,   13 /* Private */,
      18,    1,  117,    2, 0x08,   14 /* Private */,
      21,    0,  120,    2, 0x08,   16 /* Private */,
      22,    0,  121,    2, 0x08,   17 /* Private */,
      23,    0,  122,    2, 0x08,   18 /* Private */,
      24,    2,  123,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int,    4,    6,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,   25,   26,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SendData((*reinterpret_cast< QList<QKeySequence>(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifier(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->SendLang((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SendFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_SaveButton_clicked(); break;
        case 4: _t->on_OpenButton_clicked(); break;
        case 5: _t->on_HelpButton_clicked(); break;
        case 6: _t->on_ROOpenButton_clicked(); break;
        case 7: _t->on_TrEng_clicked(); break;
        case 8: _t->on_TrRus_clicked(); break;
        case 9: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 10: _t->onButtonSend(); break;
        case 11: _t->on_ThemeChange_clicked(); break;
        case 12: _t->on_CurrFolderButton_clicked(); break;
        case 13: _t->ReciveBack((*reinterpret_cast< QList<QKeySequence>(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifier(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QList<QKeySequence> & , Qt::KeyboardModifier & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SendData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SendLang)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SendFolder)) {
                *result = 2;
                return;
            }
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QKeySequence> &, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::KeyboardModifier &, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QKeySequence> &, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::KeyboardModifier &, std::false_type>


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

// SIGNAL 0
void MainWindow::SendData(QList<QKeySequence> & _t1, Qt::KeyboardModifier & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::SendLang(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::SendFolder(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
