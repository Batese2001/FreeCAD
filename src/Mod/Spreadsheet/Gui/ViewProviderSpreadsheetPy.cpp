
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ViewProviderSpreadsheetPyImp.cpp! It's not intended to be in a project!

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
using namespace SpreadsheetGui;

/// Type structure of ViewProviderSpreadsheetPy
PyTypeObject ViewProviderSpreadsheetPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "SpreadsheetGui.ViewProviderSheet",     /*tp_name*/
    sizeof(ViewProviderSpreadsheetPy),                       /*tp_basicsize*/
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
    "ViewProviderSheet class",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    SpreadsheetGui::ViewProviderSpreadsheetPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    SpreadsheetGui::ViewProviderSpreadsheetPy::GetterSetter,                     /*tp_getset */
    &Gui::ViewProviderDocumentObjectPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    SpreadsheetGui::ViewProviderSpreadsheetPy::PyMake,/*tp_new */
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

/// Methods structure of ViewProviderSpreadsheetPy
PyMethodDef ViewProviderSpreadsheetPy::Methods[] = {
    {"getView",
        reinterpret_cast<PyCFunction>( staticCallback_getView ),
        METH_VARARGS,
        "Get access to the sheet view"
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ViewProviderSpreadsheetPy
PyGetSetDef ViewProviderSpreadsheetPy::GetterSetter[] = {
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// getView() callback and implementer
// PyObject*  ViewProviderSpreadsheetPy::getView(PyObject *args){};
// has to be implemented in ViewProviderSpreadsheetPyImp.cpp
PyObject * ViewProviderSpreadsheetPy::staticCallback_getView (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'getView' of 'SpreadsheetGui.ViewProviderSheet' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return nullptr;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<ViewProviderSpreadsheetPy*>(self)->getView(args);
        if (ret != 0)
            static_cast<ViewProviderSpreadsheetPy*>(self)->startNotify();
        return ret;
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
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown C++ exception");
        return nullptr;
    }
#endif
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ViewProviderSpreadsheetPy::ViewProviderSpreadsheetPy(ViewProviderSheet *pcObject, PyTypeObject *T)
    : ViewProviderDocumentObjectPy(static_cast<ViewProviderDocumentObjectPy::PointerType>(pcObject), T)
{
}

PyObject *ViewProviderSpreadsheetPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // never create such objects with the constructor
    PyErr_SetString(PyExc_RuntimeError, "You cannot create directly an instance of 'ViewProviderSpreadsheetPy'.");
 
    return nullptr;
}

int ViewProviderSpreadsheetPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}

//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ViewProviderSpreadsheetPy::~ViewProviderSpreadsheetPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ViewProviderSpreadsheetPy representation
//--------------------------------------------------------------------------
PyObject *ViewProviderSpreadsheetPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ViewProviderSpreadsheetPy Attributes
//--------------------------------------------------------------------------
PyObject *ViewProviderSpreadsheetPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return ViewProviderDocumentObjectPy::_getattr(attr);
}

int ViewProviderSpreadsheetPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return ViewProviderDocumentObjectPy::_setattr(attr, value);
}

ViewProviderSheet *ViewProviderSpreadsheetPy::getViewProviderSheetPtr() const
{
    return static_cast<ViewProviderSheet *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ViewProviderSpreadsheetPyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */



// returns a string which represents the object e.g. when printed in python
std::string ViewProviderSpreadsheetPy::representation() const
{
    return std::string("<ViewProviderSheet object>");
}

PyObject* ViewProviderSpreadsheetPy::getView(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



PyObject *ViewProviderSpreadsheetPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ViewProviderSpreadsheetPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



