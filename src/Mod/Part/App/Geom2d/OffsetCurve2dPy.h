
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_OFFSETCURVE2DPY_H
#define PART_OFFSETCURVE2DPY_H

#include <Mod/Part/App/Geom2d/Curve2dPy.h>
#include <Mod/Part/App/Geometry2d.h>
#include <string>


namespace Part
{

//===========================================================================
// OffsetCurve2dPy - Python wrapper
//===========================================================================

/** The python export class for Geom2dOffsetCurve
 */
class PartExport OffsetCurve2dPy : public Part::Curve2dPy
{
protected:
    ~OffsetCurve2dPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    OffsetCurve2dPy(Geom2dOffsetCurve *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Geom2dOffsetCurve*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the OffsetValue attribute
    static PyObject * staticCallback_getOffsetValue (PyObject *self, void *closure);
    /// getter for the OffsetValue attribute
    Py::Float getOffsetValue() const;
    /// setter callback for the OffsetValue attribute
    static int staticCallback_setOffsetValue (PyObject *self, PyObject *value, void *closure);
    /// setter for the OffsetValue attribute
    void setOffsetValue(Py::Float arg);
    ///getter callback for the BasisCurve attribute
    static PyObject * staticCallback_getBasisCurve (PyObject *self, void *closure);
    /// getter for the BasisCurve attribute
    Py::Object getBasisCurve() const;
    /// setter callback for the BasisCurve attribute
    static int staticCallback_setBasisCurve (PyObject *self, PyObject *value, void *closure);
    /// setter for the BasisCurve attribute
    void setBasisCurve(Py::Object arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Geom2dOffsetCurve *getGeom2dOffsetCurvePtr() const;

};

}  //namespace Part

#endif  // PART_OFFSETCURVE2DPY_H


