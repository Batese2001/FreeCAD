
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_LINE2DSEGMENTPY_H
#define PART_LINE2DSEGMENTPY_H

#include <Mod/Part/App/Geom2d/Curve2dPy.h>
#include <Mod/Part/App/Geometry2d.h>
#include <string>


namespace Part
{

//===========================================================================
// Line2dSegmentPy - Python wrapper
//===========================================================================

/** The python export class for Geom2dLineSegment
 */
class PartExport Line2dSegmentPy : public Part::Curve2dPy
{
protected:
    ~Line2dSegmentPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    Line2dSegmentPy(Geom2dLineSegment *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Geom2dLineSegment*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the setParameterRange() method
    static PyObject * staticCallback_setParameterRange (PyObject *self, PyObject *args);
    /// implementer for the setParameterRange() method
    PyObject*  setParameterRange(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the StartPoint attribute
    static PyObject * staticCallback_getStartPoint (PyObject *self, void *closure);
    /// getter for the StartPoint attribute
    Py::Object getStartPoint() const;
    /// setter callback for the StartPoint attribute
    static int staticCallback_setStartPoint (PyObject *self, PyObject *value, void *closure);
    /// setter for the StartPoint attribute
    void setStartPoint(Py::Object arg);
    ///getter callback for the EndPoint attribute
    static PyObject * staticCallback_getEndPoint (PyObject *self, void *closure);
    /// getter for the EndPoint attribute
    Py::Object getEndPoint() const;
    /// setter callback for the EndPoint attribute
    static int staticCallback_setEndPoint (PyObject *self, PyObject *value, void *closure);
    /// setter for the EndPoint attribute
    void setEndPoint(Py::Object arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Geom2dLineSegment *getGeom2dLineSegmentPtr() const;

};

}  //namespace Part

#endif  // PART_LINE2DSEGMENTPY_H


