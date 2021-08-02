/****************************************************************************
** Meta object code from reading C++ file 'playmusic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MusicPlay-master/src/application/playmusic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playmusic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayMusic_t {
    QByteArrayData data[16];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayMusic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayMusic_t qt_meta_stringdata_PlayMusic = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PlayMusic"
QT_MOC_LITERAL(1, 10, 16), // "signalPlayStatue"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "signalSendPlayLength"
QT_MOC_LITERAL(4, 49, 20), // "signalSendPlayVolume"
QT_MOC_LITERAL(5, 70, 21), // "signalSendPlayPostion"
QT_MOC_LITERAL(6, 92, 22), // "signalSendPlayingMusic"
QT_MOC_LITERAL(7, 115, 21), // "signalSendCurPlayTime"
QT_MOC_LITERAL(8, 137, 23), // "signalSendPlayNextMusic"
QT_MOC_LITERAL(9, 161, 4), // "mode"
QT_MOC_LITERAL(10, 166, 13), // "slotOpenMusic"
QT_MOC_LITERAL(11, 180, 4), // "name"
QT_MOC_LITERAL(12, 185, 17), // "slotSetPlayVolume"
QT_MOC_LITERAL(13, 203, 18), // "slotSetPlayPostion"
QT_MOC_LITERAL(14, 222, 23), // "slotReceivePlayCmdMusic"
QT_MOC_LITERAL(15, 246, 19) // "slotUpdateInterface"

    },
    "PlayMusic\0signalPlayStatue\0\0"
    "signalSendPlayLength\0signalSendPlayVolume\0"
    "signalSendPlayPostion\0signalSendPlayingMusic\0"
    "signalSendCurPlayTime\0signalSendPlayNextMusic\0"
    "mode\0slotOpenMusic\0name\0slotSetPlayVolume\0"
    "slotSetPlayPostion\0slotReceivePlayCmdMusic\0"
    "slotUpdateInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayMusic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,
       7,    1,   89,    2, 0x06 /* Public */,
       8,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   95,    2, 0x0a /* Public */,
      12,    1,   98,    2, 0x0a /* Public */,
      13,    1,  101,    2, 0x0a /* Public */,
      14,    1,  104,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void PlayMusic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayMusic *_t = static_cast<PlayMusic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPlayStatue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signalSendPlayLength((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->signalSendPlayVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->signalSendPlayPostion((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->signalSendPlayingMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->signalSendCurPlayTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->signalSendPlayNextMusic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotOpenMusic((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->slotSetPlayVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slotSetPlayPostion((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->slotReceivePlayCmdMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->slotUpdateInterface(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlayMusic::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayMusic::signalPlayStatue)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlayMusic::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayMusic::signalSendPlayLength)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlayMusic::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayMusic::signalSendPlayVolume)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlayMusic::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayMusic::signalSendPlayPostion)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlayMusic::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayMusic::signalSendPlayingMusic)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PlayMusic::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayMusic::signalSendCurPlayTime)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PlayMusic::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayMusic::signalSendPlayNextMusic)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject PlayMusic::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlayMusic.data,
      qt_meta_data_PlayMusic,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayMusic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayMusic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayMusic.stringdata0))
        return static_cast<void*>(const_cast< PlayMusic*>(this));
    return QObject::qt_metacast(_clname);
}

int PlayMusic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PlayMusic::signalPlayStatue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayMusic::signalSendPlayLength(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlayMusic::signalSendPlayVolume(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlayMusic::signalSendPlayPostion(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlayMusic::signalSendPlayingMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlayMusic::signalSendCurPlayTime(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlayMusic::signalSendPlayNextMusic(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
