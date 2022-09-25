
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PATH_TOOLTABLEPY_H
#define PATH_TOOLTABLEPY_H

#include <Base/PersistencePy.h>
#include <Mod/Path/App/Tooltable.h>
#include <string>


namespace Path
{

//===========================================================================
// TooltablePy - Python wrapper
//===========================================================================

/** The python export class for Tooltable
 */
class PathExport TooltablePy : public Base::PersistencePy
{
protected:
    ~TooltablePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    TooltablePy(Tooltable *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Tooltable*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    /// callback for the addTools() method
    static PyObject * staticCallback_addTools (PyObject *self, PyObject *args);
    /// implementer for the addTools() method
    PyObject*  addTools(PyObject *args);
    /// callback for the getTool() method
    static PyObject * staticCallback_getTool (PyObject *self, PyObject *args);
    /// implementer for the getTool() method
    PyObject*  getTool(PyObject *args);
    /// callback for the setTool() method
    static PyObject * staticCallback_setTool (PyObject *self, PyObject *args);
    /// implementer for the setTool() method
    PyObject*  setTool(PyObject *args);
    /// callback for the deleteTool() method
    static PyObject * staticCallback_deleteTool (PyObject *self, PyObject *args);
    /// implementer for the deleteTool() method
    PyObject*  deleteTool(PyObject *args);
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
    ///getter callback for the Version attribute
    static PyObject * staticCallback_getVersion (PyObject *self, void *closure);
    /// getter for the Version attribute
    Py::Int getVersion() const;
    /// setter callback for the Version attribute
    static int staticCallback_setVersion (PyObject *self, PyObject *value, void *closure);
    /// setter for the Version attribute
    void setVersion(Py::Int arg);
    ///getter callback for the Tools attribute
    static PyObject * staticCallback_getTools (PyObject *self, void *closure);
    /// getter for the Tools attribute
    Py::Dict getTools() const;
    /// setter callback for the Tools attribute
    static int staticCallback_setTools (PyObject *self, PyObject *value, void *closure);
    /// setter for the Tools attribute
    void setTools(Py::Dict arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Tooltable *getTooltablePtr() const;

};

}  //namespace Path

#endif  // PATH_TOOLTABLEPY_H

