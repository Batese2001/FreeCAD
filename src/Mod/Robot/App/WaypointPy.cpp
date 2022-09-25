
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in WaypointPyImp.cpp! It's not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

#if defined(__clang__)
# pragma clang diagnostic push
# pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif

using Base::streq;
using namespace Robot;

/// Type structure of WaypointPy
PyTypeObject WaypointPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Robot.Waypoint",     /*tp_name*/
    sizeof(WaypointPy),                       /*tp_basicsize*/
    0,                                                /*tp_itemsize*/
    /* methods */
    PyDestructor,                                     /*tp_dealloc*/
#if PY_VERSION_HEX >= 0x03080000
    0,                                                /*tp_vectorcall_offset*/
#else
    nullptr,                                          /*tp_print*/
#endif
    nullptr,                                          /*tp_getattr*/
    nullptr,                                          /*tp_setattr*/
    nullptr,                                          /*tp_compare*/
    __repr,                                           /*tp_repr*/
    nullptr,                                          /*tp_as_number*/
    nullptr,                                          /*tp_as_sequence*/
    nullptr,                                          /*tp_as_mapping*/
    nullptr,                                          /*tp_hash*/
    nullptr,                                          /*tp_call */
    nullptr,                                          /*tp_str  */
    __getattro,                                       /*tp_getattro*/
    __setattro,                                       /*tp_setattro*/
    /* --- Functions to access object as input/output buffer ---------*/
    nullptr,                                          /* tp_as_buffer */
    /* --- Flags to define presence of optional/expanded features */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT,        /*tp_flags */
    "Waypoint class",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Robot::WaypointPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Robot::WaypointPy::GetterSetter,                     /*tp_getset */
    &Base::PersistencePy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Robot::WaypointPy::PyMake,/*tp_new */
    nullptr,                                          /*tp_free   Low-level free-memory routine */
    nullptr,                                          /*tp_is_gc  For PyObject_IS_GC */
    nullptr,                                          /*tp_bases */
    nullptr,                                          /*tp_mro    method resolution order */
    nullptr,                                          /*tp_cache */
    nullptr,                                          /*tp_subclasses */
    nullptr,                                          /*tp_weaklist */
    nullptr,                                          /*tp_del */
    0,                                                /*tp_version_tag */
    nullptr                                           /*tp_finalize */
#if PY_VERSION_HEX >= 0x03090000
    ,nullptr                                          /*tp_vectorcall */
#elif PY_VERSION_HEX >= 0x03080000
    ,nullptr                                          /*tp_vectorcall */
    /* bpo-37250: kept for backwards compatibility in CPython 3.8 only */
    ,nullptr                                          /*tp_print */
#endif
};

/// Methods structure of WaypointPy
PyMethodDef WaypointPy::Methods[] = {
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of WaypointPy
PyGetSetDef WaypointPy::GetterSetter[] = {
    {"Name",
        (getter) staticCallback_getName,
        (setter) staticCallback_setName, 
        "Name of the waypoint",
        nullptr
    },
    {"Type",
        (getter) staticCallback_getType,
        (setter) staticCallback_setType, 
        "Type of the waypoint[PTP|LIN|CIRC|WAIT]",
        nullptr
    },
    {"Pos",
        (getter) staticCallback_getPos,
        (setter) staticCallback_setPos, 
        "End position (destination) of the waypoint",
        nullptr
    },
    {"Cont",
        (getter) staticCallback_getCont,
        (setter) staticCallback_setCont, 
        "Control the continuity to the next waypoint in the trajectory",
        nullptr
    },
    {"Velocity",
        (getter) staticCallback_getVelocity,
        (setter) staticCallback_setVelocity, 
        "Control the velocity to the next waypoint in the trajectory\nIn Case of PTP 0-100% Axis speed\nIn Case of LIN m/s\nIn Case of WAIT s wait time\n",
        nullptr
    },
    {"Tool",
        (getter) staticCallback_getTool,
        (setter) staticCallback_setTool, 
        "Describe which tool frame to use for that point",
        nullptr
    },
    {"Base",
        (getter) staticCallback_getBase,
        (setter) staticCallback_setBase, 
        "Describe which Base frame to use for that point",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// Name() callback and implementer
// PyObject*  WaypointPy::Name(PyObject *args){};
// has to be implemented in WaypointPyImp.cpp
PyObject * WaypointPy::staticCallback_getName (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<WaypointPy*>(self)->getName());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Name' of object 'Waypoint'");
        return nullptr;
    }
}

int WaypointPy::staticCallback_setName (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<WaypointPy*>(self)->setName(Py::String(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Name' of object 'Waypoint'");
        return -1;
    }
}

// Type() callback and implementer
// PyObject*  WaypointPy::Type(PyObject *args){};
// has to be implemented in WaypointPyImp.cpp
PyObject * WaypointPy::staticCallback_getType (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<WaypointPy*>(self)->getType());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Type' of object 'Waypoint'");
        return nullptr;
    }
}

int WaypointPy::staticCallback_setType (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<WaypointPy*>(self)->setType(Py::String(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Type' of object 'Waypoint'");
        return -1;
    }
}

// Pos() callback and implementer
// PyObject*  WaypointPy::Pos(PyObject *args){};
// has to be implemented in WaypointPyImp.cpp
PyObject * WaypointPy::staticCallback_getPos (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<WaypointPy*>(self)->getPos());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Pos' of object 'Waypoint'");
        return nullptr;
    }
}

int WaypointPy::staticCallback_setPos (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<WaypointPy*>(self)->setPos(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Pos' of object 'Waypoint'");
        return -1;
    }
}

// Cont() callback and implementer
// PyObject*  WaypointPy::Cont(PyObject *args){};
// has to be implemented in WaypointPyImp.cpp
PyObject * WaypointPy::staticCallback_getCont (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<WaypointPy*>(self)->getCont());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Cont' of object 'Waypoint'");
        return nullptr;
    }
}

int WaypointPy::staticCallback_setCont (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<WaypointPy*>(self)->setCont(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Cont' of object 'Waypoint'");
        return -1;
    }
}

// Velocity() callback and implementer
// PyObject*  WaypointPy::Velocity(PyObject *args){};
// has to be implemented in WaypointPyImp.cpp
PyObject * WaypointPy::staticCallback_getVelocity (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<WaypointPy*>(self)->getVelocity());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Velocity' of object 'Waypoint'");
        return nullptr;
    }
}

int WaypointPy::staticCallback_setVelocity (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<WaypointPy*>(self)->setVelocity(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Velocity' of object 'Waypoint'");
        return -1;
    }
}

// Tool() callback and implementer
// PyObject*  WaypointPy::Tool(PyObject *args){};
// has to be implemented in WaypointPyImp.cpp
PyObject * WaypointPy::staticCallback_getTool (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<WaypointPy*>(self)->getTool());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Tool' of object 'Waypoint'");
        return nullptr;
    }
}

int WaypointPy::staticCallback_setTool (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<WaypointPy*>(self)->setTool(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Tool' of object 'Waypoint'");
        return -1;
    }
}

// Base() callback and implementer
// PyObject*  WaypointPy::Base(PyObject *args){};
// has to be implemented in WaypointPyImp.cpp
PyObject * WaypointPy::staticCallback_getBase (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<WaypointPy*>(self)->getBase());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Base' of object 'Waypoint'");
        return nullptr;
    }
}

int WaypointPy::staticCallback_setBase (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<WaypointPy*>(self)->setBase(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Base' of object 'Waypoint'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
WaypointPy::WaypointPy(Waypoint *pcObject, PyTypeObject *T)
    : PersistencePy(static_cast<PersistencePy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
WaypointPy::~WaypointPy()                                // Everything handled in parent
{
    // delete the handled object when the PyObject dies
    WaypointPy::PointerType ptr = static_cast<WaypointPy::PointerType>(_pcTwinPointer);
    delete ptr;
}

//--------------------------------------------------------------------------
// WaypointPy representation
//--------------------------------------------------------------------------
PyObject *WaypointPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// WaypointPy Attributes
//--------------------------------------------------------------------------
PyObject *WaypointPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
{
    try {
        // getter method for special Attributes (e.g. dynamic ones)
        PyObject *r = getCustomAttributes(attr);
        if(r) return r;
    } // Please sync the following catch implementation with PY_CATCH
    catch(Base::Exception &e)
    {
        auto pye = e.getPyExceptionType();
        if(!pye)
            pye = Base::PyExc_FC_GeneralError;
        PyErr_SetObject(pye, e.getPyObject());
        return nullptr;
    }
    catch(const std::exception &e)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, e.what());
        return nullptr;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return nullptr;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS
    catch(...)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError,"Unknown C++ exception");
        return nullptr;
    }
#endif

    PyMethodDef *ml = Methods;
    for (; ml->ml_name != nullptr; ml++) {
        if (attr[0] == ml->ml_name[0] &&
            strcmp(attr+1, ml->ml_name+1) == 0)
            return PyCFunction_New(ml, this);
    }

    PyErr_Clear();
    return PersistencePy::_getattr(attr);
}

int WaypointPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
{
    try {
        // setter for special Attributes (e.g. dynamic ones)
        int r = setCustomAttributes(attr, value);
        // r = 1: handled
        // r = -1: error
        // r = 0: ignore
        if (r == 1)
            return 0;
        else if (r == -1)
            return -1;
    } // Please sync the following catch implementation with PY_CATCH
    catch(Base::Exception &e)
    {
        auto pye = e.getPyExceptionType();
        if(!pye)
            pye = Base::PyExc_FC_GeneralError;
        PyErr_SetObject(pye, e.getPyObject());
        return -1;
    }
    catch(const std::exception &e)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, e.what());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS
    catch(...)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown C++ exception");
        return -1;
    }
#endif

    return PersistencePy::_setattr(attr, value);
}

Waypoint *WaypointPy::getWaypointPtr() const
{
    return static_cast<Waypoint *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in WaypointPyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */

PyObject *WaypointPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of WaypointPy and the Twin object 
    return new WaypointPy(new Waypoint);
}

// constructor method
int WaypointPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string WaypointPy::representation() const
{
    return std::string("<Waypoint object>");
}



Py::String WaypointPy::getName() const
{
    //return Py::String();
    throw Py::AttributeError("Not yet implemented");
}

void  WaypointPy::setName(Py::String arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::String WaypointPy::getType() const
{
    //return Py::String();
    throw Py::AttributeError("Not yet implemented");
}

void  WaypointPy::setType(Py::String arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object WaypointPy::getPos() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  WaypointPy::setPos(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean WaypointPy::getCont() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  WaypointPy::setCont(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float WaypointPy::getVelocity() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  WaypointPy::setVelocity(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Long WaypointPy::getTool() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  WaypointPy::setTool(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Long WaypointPy::getBase() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  WaypointPy::setBase(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *WaypointPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int WaypointPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



