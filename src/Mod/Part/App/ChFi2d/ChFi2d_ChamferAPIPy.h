
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_CHFI2D_CHAMFERAPIPY_H
#define PART_CHFI2D_CHAMFERAPIPY_H

#include <Base/PyObjectBase.h>
#include <ChFi2d_ChamferAPI.hxx>
#include <string>


namespace Part
{

//===========================================================================
// ChFi2d_ChamferAPIPy - Python wrapper
//===========================================================================

/** The python export class for ChFi2d_ChamferAPI
 */
class PartExport ChFi2d_ChamferAPIPy : public Base::PyObjectBase
{
protected:
    ~ChFi2d_ChamferAPIPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    ChFi2d_ChamferAPIPy(ChFi2d_ChamferAPI *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = ChFi2d_ChamferAPI*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the init() method
    static PyObject * staticCallback_init (PyObject *self, PyObject *args);
    /// implementer for the init() method
    PyObject*  init(PyObject *args);
    /// callback for the perform() method
    static PyObject * staticCallback_perform (PyObject *self, PyObject *args);
    /// implementer for the perform() method
    PyObject*  perform(PyObject *args);
    /// callback for the result() method
    static PyObject * staticCallback_result (PyObject *self, PyObject *args);
    /// implementer for the result() method
    PyObject*  result(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    ChFi2d_ChamferAPI *getChFi2d_ChamferAPIPtr() const;

};

}  //namespace Part

#endif  // PART_CHFI2D_CHAMFERAPIPY_H


