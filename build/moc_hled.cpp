/****************************************************************************
** Meta object code from reading C++ file 'hled.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GATEWAY/hled.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HLed[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,   22,   28,   28, 0x0a,
      29,   28,   28,   28, 0x0a,
      38,   51,   28,   28, 0x0a,
      54,   28,   28,   28, 0x2a,
      63,   77,   28,   28, 0x0a,
      81,   28,   28,   28, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_HLed[] = {
    "HLed\0setColor(QColor)\0color\0\0toggle()\0"
    "turnOn(bool)\0on\0turnOn()\0turnOff(bool)\0"
    "off\0turnOff()\0"
};

void HLed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HLed *_t = static_cast<HLed *>(_o);
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->toggle(); break;
        case 2: _t->turnOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->turnOn(); break;
        case 4: _t->turnOff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->turnOff(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HLed::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HLed::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HLed,
      qt_meta_data_HLed, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HLed::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HLed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HLed::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HLed))
        return static_cast<void*>(const_cast< HLed*>(this));
    return QWidget::qt_metacast(_clname);
}

int HLed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
