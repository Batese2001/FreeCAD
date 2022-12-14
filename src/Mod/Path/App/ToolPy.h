
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PATH_TOOLPY_H
#define PATH_TOOLPY_H

#include <Base/PersistencePy.h>
#include <Mod/Path/App/Tool.h>
#include <string>


namespace Path
{

//===========================================================================
// ToolPy - Python wrapper
//===========================================================================

/** The python export class for Tool
 */
class PathExport ToolPy : public Base::PersistencePy
{
protected:
    ~ToolPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    ToolPy(Tool *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Tool*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    /// callback for the getToolTypes() method
    static PyObject * staticCallback_getToolTypes (PyObject *self, PyObject *args);
    /// implementer for the getToolTypes() method
    PyObject*  getToolTypes(PyObject *args);
    /// callback for the getToolMaterials() method
    static PyObject * staticCallback_getToolMaterials (PyObject *self, PyObject *args);
    /// implementer for the getToolMaterials() method
    PyObject*  getToolMaterials(PyObject *args);
    /// callback for the setFromTemplate() method
    static PyObject * staticCallback_setFromTemplate (PyObject *self, PyObject *args);
    /// implementer for the setFromTemplate() method
    PyObject*  setFromTemplate(PyObject *args);
    /// callback for the templateAttrs() method
    static PyObject * staticCallback_templateAttrs (PyObject *self, PyObject *args);
    /// implementer for the templateAttrs() method
    PyObject*  templateAttrs(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Name attribute
    static PyObject * staticCallback_getName (PyObject *self, void *closure);
    /// getter for the Name attribute
    Py::String getName() const;
    /// setter callback for the Name attribute
    static int staticCallback_setName (PyObject *self, PyObject *value, void *closure);
    /// setter for the Name attribute
    void setName(Py::String arg);
    ///getter callback for the ToolType attribute
    static PyObject * staticCallback_getToolType (PyObject *self, void *closure);
    /// getter for the ToolType attribute
    Py::String getToolType() const;
    /// setter callback for the ToolType attribute
    static int staticCallback_setToolType (PyObject *self, PyObject *value, void *closure);
    /// setter for the ToolType attribute
    void setToolType(Py::String arg);
    ///getter callback for the Material attribute
    static PyObject * staticCallback_getMaterial (PyObject *self, void *closure);
    /// getter for the Material attribute
    Py::String getMaterial() const;
    /// setter callback for the Material attribute
    static int staticCallback_setMaterial (PyObject *self, PyObject *value, void *closure);
    /// setter for the Material attribute
    void setMaterial(Py::String arg);
    ///getter callback for the Diameter attribute
    static PyObject * staticCallback_getDiameter (PyObject *self, void *closure);
    /// getter for the Diameter attribute
    Py::Float getDiameter() const;
    /// setter callback for the Diameter attribute
    static int staticCallback_setDiameter (PyObject *self, PyObject *value, void *closure);
    /// setter for the Diameter attribute
    void setDiameter(Py::Float arg);
    ///getter callback for the LengthOffset attribute
    static PyObject * staticCallback_getLengthOffset (PyObject *self, void *closure);
    /// getter for the LengthOffset attribute
    Py::Float getLengthOffset() const;
    /// setter callback for the LengthOffset attribute
    static int staticCallback_setLengthOffset (PyObject *self, PyObject *value, void *closure);
    /// setter for the LengthOffset attribute
    void setLengthOffset(Py::Float arg);
    ///getter callback for the FlatRadius attribute
    static PyObject * staticCallback_getFlatRadius (PyObject *self, void *closure);
    /// getter for the FlatRadius attribute
    Py::Float getFlatRadius() const;
    /// setter callback for the FlatRadius attribute
    static int staticCallback_setFlatRadius (PyObject *self, PyObject *value, void *closure);
    /// setter for the FlatRadius attribute
    void setFlatRadius(Py::Float arg);
    ///getter callback for the CornerRadius attribute
    static PyObject * staticCallback_getCornerRadius (PyObject *self, void *closure);
    /// getter for the CornerRadius attribute
    Py::Float getCornerRadius() const;
    /// setter callback for the CornerRadius attribute
    static int staticCallback_setCornerRadius (PyObject *self, PyObject *value, void *closure);
    /// setter for the CornerRadius attribute
    void setCornerRadius(Py::Float arg);
    ///getter callback for the CuttingEdgeAngle attribute
    static PyObject * staticCallback_getCuttingEdgeAngle (PyObject *self, void *closure);
    /// getter for the CuttingEdgeAngle attribute
    Py::Float getCuttingEdgeAngle() const;
    /// setter callback for the CuttingEdgeAngle attribute
    static int staticCallback_setCuttingEdgeAngle (PyObject *self, PyObject *value, void *closure);
    /// setter for the CuttingEdgeAngle attribute
    void setCuttingEdgeAngle(Py::Float arg);
    ///getter callback for the CuttingEdgeHeight attribute
    static PyObject * staticCallback_getCuttingEdgeHeight (PyObject *self, void *closure);
    /// getter for the CuttingEdgeHeight attribute
    Py::Float getCuttingEdgeHeight() const;
    /// setter callback for the CuttingEdgeHeight attribute
    static int staticCallback_setCuttingEdgeHeight (PyObject *self, PyObject *value, void *closure);
    /// setter for the CuttingEdgeHeight attribute
    void setCuttingEdgeHeight(Py::Float arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Tool *getToolPtr() const;

};

}  //namespace Path

#endif  // PATH_TOOLPY_H


