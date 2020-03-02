/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../testing/window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Window_t {
    QByteArrayData data[18];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window_t qt_meta_stringdata_Window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Window"
QT_MOC_LITERAL(1, 7, 10), // "changetext"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 1), // "t"
QT_MOC_LITERAL(4, 21, 11), // "changetext2"
QT_MOC_LITERAL(5, 33, 9), // "readFileW"
QT_MOC_LITERAL(6, 43, 11), // "insertWordW"
QT_MOC_LITERAL(7, 55, 11), // "searchFileW"
QT_MOC_LITERAL(8, 67, 9), // "editWordW"
QT_MOC_LITERAL(9, 77, 11), // "deleteWordW"
QT_MOC_LITERAL(10, 89, 10), // "writeFileW"
QT_MOC_LITERAL(11, 100, 9), // "inserting"
QT_MOC_LITERAL(12, 110, 7), // "reading"
QT_MOC_LITERAL(13, 118, 9), // "searching"
QT_MOC_LITERAL(14, 128, 7), // "editing"
QT_MOC_LITERAL(15, 136, 8), // "deleting"
QT_MOC_LITERAL(16, 145, 6), // "saving"
QT_MOC_LITERAL(17, 152, 7) // "writing"

    },
    "Window\0changetext\0\0t\0changetext2\0"
    "readFileW\0insertWordW\0searchFileW\0"
    "editWordW\0deleteWordW\0writeFileW\0"
    "inserting\0reading\0searching\0editing\0"
    "deleting\0saving\0writing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       4,    1,   92,    2, 0x0a /* Public */,
       5,    0,   95,    2, 0x0a /* Public */,
       6,    0,   96,    2, 0x0a /* Public */,
       7,    0,   97,    2, 0x0a /* Public */,
       8,    0,   98,    2, 0x0a /* Public */,
       9,    0,   99,    2, 0x0a /* Public */,
      10,    0,  100,    2, 0x0a /* Public */,
      11,    0,  101,    2, 0x0a /* Public */,
      12,    0,  102,    2, 0x0a /* Public */,
      13,    0,  103,    2, 0x0a /* Public */,
      14,    0,  104,    2, 0x0a /* Public */,
      15,    0,  105,    2, 0x0a /* Public */,
      16,    0,  106,    2, 0x0a /* Public */,
      17,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Window *_t = static_cast<Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changetext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->changetext2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->readFileW(); break;
        case 3: _t->insertWordW(); break;
        case 4: _t->searchFileW(); break;
        case 5: _t->editWordW(); break;
        case 6: _t->deleteWordW(); break;
        case 7: _t->writeFileW(); break;
        case 8: _t->inserting(); break;
        case 9: _t->reading(); break;
        case 10: _t->searching(); break;
        case 11: _t->editing(); break;
        case 12: _t->deleting(); break;
        case 13: _t->saving(); break;
        case 14: _t->writing(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Window::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Window.data,
      qt_meta_data_Window,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Window.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
