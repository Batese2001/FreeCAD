
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_CURVE2DPY_H
#define PART_CURVE2DPY_H

#include <Mod/Part/App/Geom2d/Geometry2dPy.h>
#include <Mod/Part/App/Geometry2d.h>
#include <string>


namespace Part
{

//===========================================================================
// Curve2dPy - Python wrapper
//===========================================================================

/** The python export class for Geom2dCurve
 */
class PartExport Curve2dPy : public Part::Geometry2dPy
{
protected:
    ~Curve2dPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    Curve2dPy(Geom2dCurve *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Geom2dCurve*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the reverse() method
    static PyObject * staticCallback_reverse (PyObject *self, PyObject *args);
    /// implementer for the reverse() method
    PyObject*  reverse(PyObject *args);
    /// callback for the toShape() method
    static PyObject * staticCallback_toShape (PyObject *self, PyObject *args);
    /// implementer for the toShape() method
    PyObject*  toShape(PyObject *args);
    /// callback for the discretize() method
    static PyObject * staticCallback_discretize (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the discretize() method
    PyObject*  discretize(PyObject *args, PyObject *kwd);
    /// callback for the length() method
    static PyObject * staticCallback_length (PyObject *self, PyObject *args);
    /// implementer for the length() method
    PyObject*  length(PyObject *args);
    /// callback for the parameterAtDistance() method
    static PyObject * staticCallback_parameterAtDistance (PyObject *self, PyObject *args);
    /// implementer for the parameterAtDistance() method
    PyObject*  parameterAtDistance(PyObject *args);
    /// callback for the value() method
    static PyObject * staticCallback_value (PyObject *self, PyObject *args);
    /// implementer for the value() method
    PyObject*  value(PyObject *args);
    /// callback for the tangent() method
    static PyObject * staticCallback_tangent (PyObject *self, PyObject *args);
    /// implementer for the tangent() method
    PyObject*  tangent(PyObject *args);
    /// callback for the parameter() method
    static PyObject * staticCallback_parameter (PyObject *self, PyObject *args);
    /// implementer for the parameter() method
    PyObject*  parameter(PyObject *args);
    /// callback for the normal() method
    static PyObject * staticCallback_normal (PyObject *self, PyObject *args);
    /// implementer for the normal() method
    PyObject*  normal(PyObject *args);
    /// callback for the curvature() method
    static PyObject * staticCallback_curvature (PyObject *self, PyObject *args);
    /// implementer for the curvature() method
    PyObject*  curvature(PyObject *args);
    /// callback for the centerOfCurvature() method
    static PyObject * staticCallback_centerOfCurvature (PyObject *self, PyObject *args);
    /// implementer for the centerOfCurvature() method
    PyObject*  centerOfCurvature(PyObject *args);
    /// callback for the intersectCC() method
    static PyObject * staticCallback_intersectCC (PyObject *self, PyObject *args);
    /// implementer for the intersectCC() method
    PyObject*  intersectCC(PyObject *args);
    /// callback for the toBSpline() method
    static PyObject * staticCallback_toBSpline (PyObject *self, PyObject *args);
    /// implementer for the toBSpline() method
    PyObject*  toBSpline(PyObject *args);
    /// callback for the approximateBSpline() method
    static PyObject * staticCallback_approximateBSpline (PyObject *self, PyObject *args);
    /// implementer for the approximateBSpline() method
    PyObject*  approximateBSpline(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Continuity attribute
    static PyObject * staticCallback_getContinuity (PyObject *self, void *closure);
    /// getter for the Continuity attribute
    Py::String getContinuity() const;
    /// setter callback for the Continuity attribute
    static int staticCallback_setContinuity (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Continuity is read only!
    ///getter callback for the Closed attribute
    static PyObject * staticCallback_getClosed (PyObject *self, void *closure);
    /// getter for the Closed attribute
    Py::Boolean getClosed() const;
    /// setter callback for the Closed attribute
    static int staticCallback_setClosed (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Closed is read only!
    ///getter callback for the Periodic attribute
    static PyObject * staticCallback_getPeriodic (PyObject *self, void *closure);
    /// getter for the Periodic attribute
    Py::Boolean getPeriodic() const;
    /// setter callback for the Periodic attribute
    static int staticCallback_setPeriodic (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Periodic is read only!
    ///getter callback for the FirstParameter attribute
    static PyObject * staticCallback_getFirstParameter (PyObject *self, void *closure);
    /// getter for the FirstParameter attribute
    Py::Float getFirstParameter() const;
    /// setter callback for the FirstParameter attribute
    static int staticCallback_setFirstParameter (PyObject *self, PyObject *value, void *closure);
    // no setter method,  FirstParameter is read only!
    ///getter callback for the LastParameter attribute
    static PyObject * staticCallback_getLastParameter (PyObject *self, void *closure);
    /// getter for the LastParameter attribute
    Py::Float getLastParameter() const;
    /// setter callback for the LastParameter attribute
    static int staticCallback_setLastParameter (PyObject *self, PyObject *value, void *closure);
    // no setter method,  LastParameter is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Geom2dCurve *getGeom2dCurvePtr() const;

};

}  //namespace Part

#endif  // PART_CURVE2DPY_H


