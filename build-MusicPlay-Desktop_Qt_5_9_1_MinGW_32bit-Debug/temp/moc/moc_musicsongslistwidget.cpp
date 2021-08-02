/****************************************************************************
** Meta object code from reading C++ file 'musicsongslistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MusicPlay-master/src/ui/ContentWidget/MusiSongList/musicsongslistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicsongslistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MusicSongsListWidget_t {
    QByteArrayData data[19];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MusicSongsListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MusicSongsListWidget_t qt_meta_stringdata_MusicSongsListWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MusicSongsListWidget"
QT_MOC_LITERAL(1, 21, 15), // "signalPlayMusic"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "signalAddMusic"
QT_MOC_LITERAL(4, 53, 20), // "signalAddMusicFolder"
QT_MOC_LITERAL(5, 74, 17), // "signalDeleteMusic"
QT_MOC_LITERAL(6, 92, 20), // "signalDeleteAllMusic"
QT_MOC_LITERAL(7, 113, 9), // "musicName"
QT_MOC_LITERAL(8, 123, 19), // "signalSendNextMusic"
QT_MOC_LITERAL(9, 143, 4), // "name"
QT_MOC_LITERAL(10, 148, 23), // "signalSendPreviousMusic"
QT_MOC_LITERAL(11, 172, 4), // "naem"
QT_MOC_LITERAL(12, 177, 24), // "signalSendFirstPlayMusic"
QT_MOC_LITERAL(13, 202, 26), // "signalSendPlayCmdMusicInfo"
QT_MOC_LITERAL(14, 229, 21), // "slotCellDoubleClicked"
QT_MOC_LITERAL(15, 251, 16), // "slotGetNextMusic"
QT_MOC_LITERAL(16, 268, 21), // "slotGetPreviouseMusic"
QT_MOC_LITERAL(17, 290, 21), // "slotGetFirstPlayMusic"
QT_MOC_LITERAL(18, 312, 15) // "slotSendPlayCmd"

    },
    "MusicSongsListWidget\0signalPlayMusic\0"
    "\0signalAddMusic\0signalAddMusicFolder\0"
    "signalDeleteMusic\0signalDeleteAllMusic\0"
    "musicName\0signalSendNextMusic\0name\0"
    "signalSendPreviousMusic\0naem\0"
    "signalSendFirstPlayMusic\0"
    "signalSendPlayCmdMusicInfo\0"
    "slotCellDoubleClicked\0slotGetNextMusic\0"
    "slotGetPreviouseMusic\0slotGetFirstPlayMusic\0"
    "slotSendPlayCmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MusicSongsListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       1,    1,   94,    2, 0x06 /* Public */,
       8,    1,   97,    2, 0x06 /* Public */,
      10,    1,  100,    2, 0x06 /* Public */,
      12,    1,  103,    2, 0x06 /* Public */,
      13,    1,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,  109,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    0,  115,    2, 0x0a /* Public */,
      17,    0,  116,    2, 0x0a /* Public */,
      18,    1,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MusicSongsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MusicSongsListWidget *_t = static_cast<MusicSongsListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPlayMusic(); break;
        case 1: _t->signalAddMusic(); break;
        case 2: _t->signalAddMusicFolder(); break;
        case 3: _t->signalDeleteMusic(); break;
        case 4: _t->signalDeleteAllMusic(); break;
        case 5: _t->signalPlayMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->signalSendNextMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->signalSendPreviousMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->signalSendFirstPlayMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->signalSendPlayCmdMusicInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->slotCellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->slotGetNextMusic(); break;
        case 12: _t->slotGetPreviouseMusic(); break;
        case 13: _t->slotGetFirstPlayMusic(); break;
        case 14: _t->slotSendPlayCmd((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MusicSongsListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalPlayMusic)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalAddMusic)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalAddMusicFolder)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalDeleteMusic)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalDeleteAllMusic)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalPlayMusic)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalSendNextMusic)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalSendPreviousMusic)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalSendFirstPlayMusic)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MusicSongsListWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicSongsListWidget::signalSendPlayCmdMusicInfo)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject MusicSongsListWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_MusicSongsListWidget.data,
      qt_meta_data_MusicSongsListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MusicSongsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicSongsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MusicSongsListWidget.stringdata0))
        return static_cast<void*>(const_cast< MusicSongsListWidget*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int MusicSongsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MusicSongsListWidget::signalPlayMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MusicSongsListWidget::signalAddMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MusicSongsListWidget::signalAddMusicFolder()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MusicSongsListWidget::signalDeleteMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MusicSongsListWidget::signalDeleteAllMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MusicSongsListWidget::signalPlayMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MusicSongsListWidget::signalSendNextMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MusicSongsListWidget::signalSendPreviousMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MusicSongsListWidget::signalSendFirstPlayMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MusicSongsListWidget::signalSendPlayCmdMusicInfo(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
