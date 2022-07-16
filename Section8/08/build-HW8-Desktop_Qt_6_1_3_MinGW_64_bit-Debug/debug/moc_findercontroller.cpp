/****************************************************************************
** Meta object code from reading C++ file 'findercontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../untitled/findercontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findercontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FinderController_t {
    const uint offsetsAndSize[18];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FinderController_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FinderController_t qt_meta_stringdata_FinderController = {
    {
QT_MOC_LITERAL(0, 16), // "FinderController"
QT_MOC_LITERAL(17, 13), // "changFindPath"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 13), // "genPathOfFile"
QT_MOC_LITERAL(46, 7), // "newFind"
QT_MOC_LITERAL(54, 12), // "deleteThread"
QT_MOC_LITERAL(67, 16), // "printCurrentPath"
QT_MOC_LITERAL(84, 17), // "genStringPathFile"
QT_MOC_LITERAL(102, 12) // "finishThread"

    },
    "FinderController\0changFindPath\0\0"
    "genPathOfFile\0newFind\0deleteThread\0"
    "printCurrentPath\0genStringPathFile\0"
    "finishThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FinderController[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    0 /* Public */,
       3,    1,   59,    2, 0x06,    2 /* Public */,
       4,    0,   62,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   63,    2, 0x0a,    5 /* Public */,
       6,    1,   64,    2, 0x0a,    6 /* Public */,
       7,    1,   67,    2, 0x0a,    8 /* Public */,
       8,    0,   70,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void FinderController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FinderController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changFindPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->genPathOfFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->newFind(); break;
        case 3: _t->deleteThread(); break;
        case 4: _t->printCurrentPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->genStringPathFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->finishThread(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FinderController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FinderController::changFindPath)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FinderController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FinderController::genPathOfFile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FinderController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FinderController::newFind)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject FinderController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FinderController.offsetsAndSize,
    qt_meta_data_FinderController,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FinderController_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *FinderController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FinderController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FinderController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FinderController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FinderController::changFindPath(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FinderController::genPathOfFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FinderController::newFind()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
