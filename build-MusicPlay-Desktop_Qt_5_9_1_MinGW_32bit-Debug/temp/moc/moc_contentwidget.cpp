/****************************************************************************
** Meta object code from reading C++ file 'contentwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MusicPlay-master/src/ui/ContentWidget/contentwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contentwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Contentwidget_t {
    QByteArrayData data[15];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Contentwidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Contentwidget_t qt_meta_stringdata_Contentwidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Contentwidget"
QT_MOC_LITERAL(1, 14, 15), // "signalPlayMusic"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "music"
QT_MOC_LITERAL(4, 37, 18), // "signalSendPlayNext"
QT_MOC_LITERAL(5, 56, 23), // "signalSendPlayPreviouse"
QT_MOC_LITERAL(6, 80, 23), // "signalSendPlayNextMusic"
QT_MOC_LITERAL(7, 104, 28), // "signalSendPlayPreviouseMusic"
QT_MOC_LITERAL(8, 133, 27), // "signalRequestFirstPlayMusic"
QT_MOC_LITERAL(9, 161, 24), // "signalSendFirstPlayMusic"
QT_MOC_LITERAL(10, 186, 25), // "signalRequestPlayingMusic"
QT_MOC_LITERAL(11, 212, 24), // "signalRequestCurPlayTime"
QT_MOC_LITERAL(12, 237, 20), // "signalRequestPlayCmd"
QT_MOC_LITERAL(13, 258, 22), // "signalSendPlayCmdMusic"
QT_MOC_LITERAL(14, 281, 25) // "slotReceiveFirstPlayMusic"

    },
    "Contentwidget\0signalPlayMusic\0\0music\0"
    "signalSendPlayNext\0signalSendPlayPreviouse\0"
    "signalSendPlayNextMusic\0"
    "signalSendPlayPreviouseMusic\0"
    "signalRequestFirstPlayMusic\0"
    "signalSendFirstPlayMusic\0"
    "signalRequestPlayingMusic\0"
    "signalRequestCurPlayTime\0signalRequestPlayCmd\0"
    "signalSendPlayCmdMusic\0slotReceiveFirstPlayMusic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Contentwidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,
       7,    1,   82,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    1,   86,    2, 0x06 /* Public */,
      10,    1,   89,    2, 0x06 /* Public */,
      11,    1,   92,    2, 0x06 /* Public */,
      12,    1,   95,    2, 0x06 /* Public */,
      13,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Contentwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Contentwidget *_t = static_cast<Contentwidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPlayMusic((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signalSendPlayNext(); break;
        case 2: _t->signalSendPlayPreviouse(); break;
        case 3: _t->signalSendPlayNextMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->signalSendPlayPreviouseMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->signalRequestFirstPlayMusic(); break;
        case 6: _t->signalSendFirstPlayMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->signalRequestPlayingMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->signalRequestCurPlayTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->signalRequestPlayCmd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->signalSendPlayCmdMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->slotReceiveFirstPlayMusic((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Contentwidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalPlayMusic)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalSendPlayNext)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalSendPlayPreviouse)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalSendPlayNextMusic)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalSendPlayPreviouseMusic)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalRequestFirstPlayMusic)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalSendFirstPlayMusic)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalRequestPlayingMusic)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalRequestCurPlayTime)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalRequestPlayCmd)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Contentwidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contentwidget::signalSendPlayCmdMusic)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject Contentwidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Contentwidget.data,
      qt_meta_data_Contentwidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Contentwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Contentwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Contentwidget.stringdata0))
        return static_cast<void*>(const_cast< Contentwidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Contentwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Contentwidget::signalPlayMusic(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Contentwidget::signalSendPlayNext()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Contentwidget::signalSendPlayPreviouse()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Contentwidget::signalSendPlayNextMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Contentwidget::signalSendPlayPreviouseMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Contentwidget::signalRequestFirstPlayMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Contentwidget::signalSendFirstPlayMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Contentwidget::signalRequestPlayingMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Contentwidget::signalRequestCurPlayTime(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Contentwidget::signalRequestPlayCmd(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Contentwidget::signalSendPlayCmdMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
