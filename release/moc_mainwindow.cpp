/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 58, 32), // "on_listWidget_currentItemChanged"
QT_MOC_LITERAL(5, 91, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 108, 7), // "current"
QT_MOC_LITERAL(7, 116, 8), // "previous"
QT_MOC_LITERAL(8, 125, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 149, 7), // "addItem"
QT_MOC_LITERAL(10, 157, 7), // "lastone"
QT_MOC_LITERAL(11, 165, 9), // "getnumber"
QT_MOC_LITERAL(12, 175, 23), // "on_actionO_Qt_triggered"
QT_MOC_LITERAL(13, 199, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(14, 223, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(15, 247, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(16, 271, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(17, 297, 19), // "on_action_triggered"
QT_MOC_LITERAL(18, 317, 16), // "onNewTextEntered"
QT_MOC_LITERAL(19, 334, 4), // "text"
QT_MOC_LITERAL(20, 339, 7), // "ammount"
QT_MOC_LITERAL(21, 347, 3), // "typ"
QT_MOC_LITERAL(22, 351, 5) // "mIcon"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0"
    "on_listWidget_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "on_pushButton_3_clicked\0addItem\0lastone\0"
    "getnumber\0on_actionO_Qt_triggered\0"
    "on_lineEdit_textChanged\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_lineEdit_returnPressed\0on_action_triggered\0"
    "onNewTextEntered\0text\0ammount\0typ\0"
    "mIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    2,   81,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    1,   87,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    4,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::QString, QMetaType::QIcon,   19,   20,   21,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_listWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->addItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { int _r = _t->getnumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->on_actionO_Qt_triggered(); break;
        case 7: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->on_pushButton_5_clicked(); break;
        case 10: _t->on_lineEdit_returnPressed(); break;
        case 11: _t->on_action_triggered(); break;
        case 12: _t->onNewTextEntered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QIcon(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
