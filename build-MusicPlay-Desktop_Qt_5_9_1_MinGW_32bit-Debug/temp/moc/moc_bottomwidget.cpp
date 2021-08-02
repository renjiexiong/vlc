/****************************************************************************
** Meta object code from reading C++ file 'bottomwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MusicPlay-master/src/ui/BottomBar/bottomwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bottomwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BottomWidget_t {
    QByteArrayData data[20];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BottomWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BottomWidget_t qt_meta_stringdata_BottomWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BottomWidget"
QT_MOC_LITERAL(1, 13, 19), // "signalPreviousMusic"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "signalPlayOrPause"
QT_MOC_LITERAL(4, 52, 15), // "signalNextMusic"
QT_MOC_LITERAL(5, 68, 24), // "signalPlayProgressChange"
QT_MOC_LITERAL(6, 93, 19), // "signalHidOrShowLyrc"
QT_MOC_LITERAL(7, 113, 20), // "signalSendPlayVolume"
QT_MOC_LITERAL(8, 134, 21), // "signalSendPlayPostion"
QT_MOC_LITERAL(9, 156, 13), // "signalPlayCmd"
QT_MOC_LITERAL(10, 170, 21), // "slotReceivePlayLength"
QT_MOC_LITERAL(11, 192, 17), // "slotSetPlayVolume"
QT_MOC_LITERAL(12, 210, 22), // "slotReceivePlayPostion"
QT_MOC_LITERAL(13, 233, 15), // "slotPlayOrPause"
QT_MOC_LITERAL(14, 249, 18), // "slotSetPlayOrPause"
QT_MOC_LITERAL(15, 268, 11), // "slotNoVoice"
QT_MOC_LITERAL(16, 280, 18), // "slotShowOrHideLyrc"
QT_MOC_LITERAL(17, 299, 14), // "slotVoiceValue"
QT_MOC_LITERAL(18, 314, 21), // "slotPlayPostionChange"
QT_MOC_LITERAL(19, 336, 22) // "slotChangePlayModeIcon"

    },
    "BottomWidget\0signalPreviousMusic\0\0"
    "signalPlayOrPause\0signalNextMusic\0"
    "signalPlayProgressChange\0signalHidOrShowLyrc\0"
    "signalSendPlayVolume\0signalSendPlayPostion\0"
    "signalPlayCmd\0slotReceivePlayLength\0"
    "slotSetPlayVolume\0slotReceivePlayPostion\0"
    "slotPlayOrPause\0slotSetPlayOrPause\0"
    "slotNoVoice\0slotShowOrHideLyrc\0"
    "slotVoiceValue\0slotPlayPostionChange\0"
    "slotChangePlayModeIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BottomWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       4,    0,  108,    2, 0x06 /* Public */,
       5,    1,  109,    2, 0x06 /* Public */,
       6,    1,  112,    2, 0x06 /* Public */,
       7,    1,  115,    2, 0x06 /* Public */,
       8,    1,  118,    2, 0x06 /* Public */,
       9,    1,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  124,    2, 0x0a /* Public */,
      11,    1,  127,    2, 0x0a /* Public */,
      12,    1,  130,    2, 0x0a /* Public */,
      13,    0,  133,    2, 0x08 /* Private */,
      14,    1,  134,    2, 0x08 /* Private */,
      15,    0,  137,    2, 0x08 /* Private */,
      16,    0,  138,    2, 0x08 /* Private */,
      17,    1,  139,    2, 0x08 /* Private */,
      18,    1,  142,    2, 0x08 /* Private */,
      19,    1,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void BottomWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BottomWidget *_t = static_cast<BottomWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPreviousMusic(); break;
        case 1: _t->signalPlayOrPause((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signalNextMusic(); break;
        case 3: _t->signalPlayProgressChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->signalHidOrShowLyrc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->signalSendPlayVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->signalSendPlayPostion((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->signalPlayCmd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotReceivePlayLength((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->slotSetPlayVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slotReceivePlayPostion((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->slotPlayOrPause(); break;
        case 12: _t->slotSetPlayOrPause((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->slotNoVoice(); break;
        case 14: _t->slotShowOrHideLyrc(); break;
        case 15: _t->slotVoiceValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->slotPlayPostionChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->slotChangePlayModeIcon((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BottomWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomWidget::signalPreviousMusic)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BottomWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomWidget::signalPlayOrPause)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BottomWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomWidget::signalNextMusic)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BottomWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomWidget::signalPlayProgressChange)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BottomWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomWidget::signalHidOrShowLyrc)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BottomWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomWidget::signalSendPlayVolume)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (BottomWidget::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomWidget::signalSendPlayPostion)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (BottomWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomWidget::signalPlayCmd)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject BottomWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BottomWidget.data,
      qt_meta_data_BottomWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BottomWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BottomWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BottomWidget.stringdata0))
        return static_cast<void*>(const_cast< BottomWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BottomWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void BottomWidget::signalPreviousMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BottomWidget::signalPlayOrPause(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BottomWidget::signalNextMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BottomWidget::signalPlayProgressChange(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BottomWidget::signalHidOrShowLyrc(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BottomWidget::signalSendPlayVolume(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BottomWidget::signalSendPlayPostion(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BottomWidget::signalPlayCmd(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
