
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_SHAPEFIX_SPLITCOMMONVERTEXPY_H
#define PART_SHAPEFIX_SPLITCOMMONVERTEXPY_H

#include <Mod/Part/App/ShapeFix/ShapeFix_RootPy.h>
#include <ShapeFix_SplitCommonVertex.hxx>
#include <string>


namespace Part
{

//===========================================================================
// ShapeFix_SplitCommonVertexPy - Python wrapper
//===========================================================================

/** The python export class for ShapeFix_SplitCommonVertex
 */
class PartExport ShapeFix_SplitCommonVertexPy : public Part::ShapeFix_RootPy
{
protected:
    ~ShapeFix_SplitCommonVertexPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    ShapeFix_SplitCommonVertexPy(ShapeFix_SplitCommonVertex *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = ShapeFix_SplitCommonVertex*;

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
    /// callback for the shape() method
    static PyObject * staticCallback_shape (PyObject *self, PyObject *args);
    /// implementer for the shape() method
    PyObject*  shape(PyObject *args);
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
    ShapeFix_SplitCommonVertex *getShapeFix_SplitCommonVertexPtr() const;

};

}  //namespace Part

#endif  // PART_SHAPEFIX_SPLITCOMMONVERTEXPY_H

