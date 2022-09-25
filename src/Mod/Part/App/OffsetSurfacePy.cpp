
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in OffsetSurfacePyImp.cpp! It's not intended to be in a project!

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
using namespace Part;

/// Type structure of OffsetSurfacePy
PyTypeObject OffsetSurfacePy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.OffsetSurface",     /*tp_name*/
    sizeof(OffsetSurfacePy),                       /*tp_basicsize*/
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
    "",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::OffsetSurfacePy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::OffsetSurfacePy::GetterSetter,                     /*tp_getset */
    &Part::GeometrySurfacePy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::OffsetSurfacePy::PyMake,/*tp_new */
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

/// Methods structure of OffsetSurfacePy
PyMethodDef OffsetSurfacePy::Methods[] = {
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of OffsetSurfacePy
PyGetSetDef OffsetSurfacePy::GetterSetter[] = {
    {"OffsetValue",
        (getter) staticCallback_getOffsetValue,
        (setter) staticCallback_setOffsetValue, 
        "\n					Sets or gets the offset value to offset the underlying surface.\n				",
        nullptr
    },
    {"BasisSurface",
        (getter) staticCallback_getBasisSurface,
        (setter) staticCallback_setBasisSurface, 
        "\n					Sets or gets the basic surface.\n				",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// OffsetValue() callback and implementer
// PyObject*  OffsetSurfacePy::OffsetValue(PyObject *args){};
// has to be implemented in OffsetSurfacePyImp.cpp
PyObject * OffsetSurfacePy::staticCallback_getOffsetValue (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<OffsetSurfacePy*>(self)->getOffsetValue());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'OffsetValue' of object 'GeomOffsetSurface'");
        return nullptr;
    }
}

int OffsetSurfacePy::staticCallback_setOffsetValue (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<OffsetSurfacePy*>(self)->setOffsetValue(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'OffsetValue' of object 'GeomOffsetSurface'");
        return -1;
    }
}

// BasisSurface() callback and implementer
// PyObject*  OffsetSurfacePy::BasisSurface(PyObject *args){};
// has to be implemented in OffsetSurfacePyImp.cpp
PyObject * OffsetSurfacePy::staticCallback_getBasisSurface (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<OffsetSurfacePy*>(self)->getBasisSurface());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'BasisSurface' of object 'GeomOffsetSurface'");
        return nullptr;
    }
}

int OffsetSurfacePy::staticCallback_setBasisSurface (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<OffsetSurfacePy*>(self)->setBasisSurface(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'BasisSurface' of object 'GeomOffsetSurface'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
OffsetSurfacePy::OffsetSurfacePy(GeomOffsetSurface *pcObject, PyTypeObject *T)
    : GeometrySurfacePy(static_cast<GeometrySurfacePy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
OffsetSurfacePy::~OffsetSurfacePy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// OffsetSurfacePy representation
//--------------------------------------------------------------------------
PyObject *OffsetSurfacePy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// OffsetSurfacePy Attributes
//--------------------------------------------------------------------------
PyObject *OffsetSurfacePy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return GeometrySurfacePy::_getattr(attr);
}

int OffsetSurfacePy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return GeometrySurfacePy::_setattr(attr, value);
}

GeomOffsetSurface *OffsetSurfacePy::getGeomOffsetSurfacePtr() const
{
    return static_cast<GeomOffsetSurface *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in OffsetSurfacePyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */

PyObject *OffsetSurfacePy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of OffsetSurfacePy and the Twin object 
    return new OffsetSurfacePy(new GeomOffsetSurface);
}

// constructor method
int OffsetSurfacePy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string OffsetSurfacePy::representation() const
{
    return std::string("<GeomOffsetSurface object>");
}



Py::Float OffsetSurfacePy::getOffsetValue() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  OffsetSurfacePy::setOffsetValue(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object OffsetSurfacePy::getBasisSurface() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  OffsetSurfacePy::setBasisSurface(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *OffsetSurfacePy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int OffsetSurfacePy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



