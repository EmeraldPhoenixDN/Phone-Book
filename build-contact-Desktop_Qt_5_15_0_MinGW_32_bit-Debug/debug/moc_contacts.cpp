/****************************************************************************
** Meta object code from reading C++ file 'contacts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../phonebook-Master/contacts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contacts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Contacts_t {
    QByteArrayData data[26];
    char stringdata0[465];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Contacts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Contacts_t qt_meta_stringdata_Contacts = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Contacts"
QT_MOC_LITERAL(1, 9, 15), // "current_contact"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "name"
QT_MOC_LITERAL(4, 31, 9), // "save_data"
QT_MOC_LITERAL(5, 41, 5), // "phone"
QT_MOC_LITERAL(6, 47, 5), // "email"
QT_MOC_LITERAL(7, 53, 3), // "job"
QT_MOC_LITERAL(8, 57, 7), // "meeting"
QT_MOC_LITERAL(9, 65, 8), // "remember"
QT_MOC_LITERAL(10, 74, 9), // "edit_data"
QT_MOC_LITERAL(11, 84, 7), // "show_me"
QT_MOC_LITERAL(12, 92, 22), // "on_new_contact_clicked"
QT_MOC_LITERAL(13, 115, 19), // "on_exit_app_clicked"
QT_MOC_LITERAL(14, 135, 25), // "on_delete_contact_clicked"
QT_MOC_LITERAL(15, 161, 23), // "on_edit_contact_clicked"
QT_MOC_LITERAL(16, 185, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(17, 220, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(18, 242, 24), // "on_save_remember_clicked"
QT_MOC_LITERAL(19, 267, 37), // "on_actionEmail_All_Contacts_t..."
QT_MOC_LITERAL(20, 305, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(21, 330, 30), // "on_actionNew_Contact_triggered"
QT_MOC_LITERAL(22, 361, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(23, 385, 32), // "on_actionSMTP_Settings_triggered"
QT_MOC_LITERAL(24, 418, 22), // "on_call_button_clicked"
QT_MOC_LITERAL(25, 441, 23) // "on_email_button_clicked"

    },
    "Contacts\0current_contact\0\0name\0save_data\0"
    "phone\0email\0job\0meeting\0remember\0"
    "edit_data\0show_me\0on_new_contact_clicked\0"
    "on_exit_app_clicked\0on_delete_contact_clicked\0"
    "on_edit_contact_clicked\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_pushButton_clicked\0on_save_remember_clicked\0"
    "on_actionEmail_All_Contacts_triggered\0"
    "on_actionClose_triggered\0"
    "on_actionNew_Contact_triggered\0"
    "on_pushButton_3_clicked\0"
    "on_actionSMTP_Settings_triggered\0"
    "on_call_button_clicked\0on_email_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Contacts[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    6,  107,    2, 0x0a /* Public */,
      10,    5,  120,    2, 0x0a /* Public */,
      11,    0,  131,    2, 0x0a /* Public */,
      12,    0,  132,    2, 0x08 /* Private */,
      13,    0,  133,    2, 0x08 /* Private */,
      14,    0,  134,    2, 0x08 /* Private */,
      15,    0,  135,    2, 0x08 /* Private */,
      16,    0,  136,    2, 0x08 /* Private */,
      17,    0,  137,    2, 0x08 /* Private */,
      18,    0,  138,    2, 0x08 /* Private */,
      19,    0,  139,    2, 0x08 /* Private */,
      20,    0,  140,    2, 0x08 /* Private */,
      21,    0,  141,    2, 0x08 /* Private */,
      22,    0,  142,    2, 0x08 /* Private */,
      23,    0,  143,    2, 0x08 /* Private */,
      24,    0,  144,    2, 0x08 /* Private */,
      25,    0,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    5,    6,    7,    8,
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Contacts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Contacts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->current_contact((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->save_data((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 2: _t->edit_data((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 3: _t->show_me(); break;
        case 4: _t->on_new_contact_clicked(); break;
        case 5: _t->on_exit_app_clicked(); break;
        case 6: _t->on_delete_contact_clicked(); break;
        case 7: _t->on_edit_contact_clicked(); break;
        case 8: _t->on_listWidget_itemSelectionChanged(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_save_remember_clicked(); break;
        case 11: _t->on_actionEmail_All_Contacts_triggered(); break;
        case 12: _t->on_actionClose_triggered(); break;
        case 13: _t->on_actionNew_Contact_triggered(); break;
        case 14: _t->on_pushButton_3_clicked(); break;
        case 15: _t->on_actionSMTP_Settings_triggered(); break;
        case 16: _t->on_call_button_clicked(); break;
        case 17: _t->on_email_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Contacts::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contacts::current_contact)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Contacts::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Contacts.data,
    qt_meta_data_Contacts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Contacts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Contacts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Contacts.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Contacts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void Contacts::current_contact(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
