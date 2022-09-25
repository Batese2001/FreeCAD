
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_SHAPEFIX_SHAPEPY_H
#define PART_SHAPEFIX_SHAPEPY_H

#include <Mod/Part/App/ShapeFix/ShapeFix_RootPy.h>
#include <ShapeFix_Shape.hxx>
#include <string>


namespace Part
{

//===========================================================================
// ShapeFix_ShapePy - Python wrapper
//===========================================================================

/** The python export class for ShapeFix_Shape
 */
class PartExport ShapeFix_ShapePy : public Part::ShapeFix_RootPy
{
protected:
    ~ShapeFix_ShapePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    ShapeFix_ShapePy(ShapeFix_Shape *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = ShapeFix_Shape*;

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
    /// callback for the fixSolidTool() method
    static PyObject * staticCallback_fixSolidTool (PyObject *self, PyObject *args);
    /// implementer for the fixSolidTool() method
    PyObject*  fixSolidTool(PyObject *args);
    /// callback for the fixShellTool() method
    static PyObject * staticCallback_fixShellTool (PyObject *self, PyObject *args);
    /// implementer for the fixShellTool() method
    PyObject*  fixShellTool(PyObject *args);
    /// callback for the fixFaceTool() method
    static PyObject * staticCallback_fixFaceTool (PyObject *self, PyObject *args);
    /// implementer for the fixFaceTool() method
    PyObject*  fixFaceTool(PyObject *args);
    /// callback for the fixWireTool() method
    static PyObject * staticCallback_fixWireTool (PyObject *self, PyObject *args);
    /// implementer for the fixWireTool() method
    PyObject*  fixWireTool(PyObject *args);
    /// callback for the fixEdgeTool() method
    static PyObject * staticCallback_fixEdgeTool (PyObject *self, PyObject *args);
    /// implementer for the fixEdgeTool() method
    PyObject*  fixEdgeTool(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the FixSolidMode attribute
    static PyObject * staticCallback_getFixSolidMode (PyObject *self, void *closure);
    /// getter for the FixSolidMode attribute
    Py::Boolean getFixSolidMode() const;
    /// setter callback for the FixSolidMode attribute
    static int staticCallback_setFixSolidMode (PyObject *self, PyObject *value, void *closure);
    /// setter for the FixSolidMode attribute
    void setFixSolidMode(Py::Boolean arg);
    ///getter callback for the FixFreeShellMode attribute
    static PyObject * staticCallback_getFixFreeShellMode (PyObject *self, void *closure);
    /// getter for the FixFreeShellMode attribute
    Py::Boolean getFixFreeShellMode() const;
    /// setter callback for the FixFreeShellMode attribute
    static int staticCallback_setFixFreeShellMode (PyObject *self, PyObject *value, void *closure);
    /// setter for the FixFreeShellMode attribute
    void setFixFreeShellMode(Py::Boolean arg);
    ///getter callback for the FixFreeFaceMode attribute
    static PyObject * staticCallback_getFixFreeFaceMode (PyObject *self, void *closure);
    /// getter for the FixFreeFaceMode attribute
    Py::Boolean getFixFreeFaceMode() const;
    /// setter callback for the FixFreeFaceMode attribute
    static int staticCallback_setFixFreeFaceMode (PyObject *self, PyObject *value, void *closure);
    /// setter for the FixFreeFaceMode attribute
    void setFixFreeFaceMode(Py::Boolean arg);
    ///getter callback for the FixFreeWireMode attribute
    static PyObject * staticCallback_getFixFreeWireMode (PyObject *self, void *closure);
    /// getter for the FixFreeWireMode attribute
    Py::Boolean getFixFreeWireMode() const;
    /// setter callback for the FixFreeWireMode attribute
    static int staticCallback_setFixFreeWireMode (PyObject *self, PyObject *value, void *closure);
    /// setter for the FixFreeWireMode attribute
    void setFixFreeWireMode(Py::Boolean arg);
    ///getter callback for the FixSameParameterMode attribute
    static PyObject * staticCallback_getFixSameParameterMode (PyObject *self, void *closure);
    /// getter for the FixSameParameterMode attribute
    Py::Boolean getFixSameParameterMode() const;
    /// setter callback for the FixSameParameterMode attribute
    static int staticCallback_setFixSameParameterMode (PyObject *self, PyObject *value, void *closure);
    /// setter for the FixSameParameterMode attribute
    void setFixSameParameterMode(Py::Boolean arg);
    ///getter callback for the FixVertexPositionMode attribute
    static PyObject * staticCallback_getFixVertexPositionMode (PyObject *self, void *closure);
    /// getter for the FixVertexPositionMode attribute
    Py::Boolean getFixVertexPositionMode() const;
    /// setter callback for the FixVertexPositionMode attribute
    static int staticCallback_setFixVertexPositionMode (PyObject *self, PyObject *value, void *closure);
    /// setter for the FixVertexPositionMode attribute
    void setFixVertexPositionMode(Py::Boolean arg);
    ///getter callback for the FixVertexTolMode attribute
    static PyObject * staticCallback_getFixVertexTolMode (PyObject *self, void *closure);
    /// getter for the FixVertexTolMode attribute
    Py::Boolean getFixVertexTolMode() const;
    /// setter callback for the FixVertexTolMode attribute
    static int staticCallback_setFixVertexTolMode (PyObject *self, PyObject *value, void *closure);
    /// setter for the FixVertexTolMode attribute
    void setFixVertexTolMode(Py::Boolean arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    ShapeFix_Shape *getShapeFix_ShapePtr() const;

};

}  //namespace Part

#endif  // PART_SHAPEFIX_SHAPEPY_H


