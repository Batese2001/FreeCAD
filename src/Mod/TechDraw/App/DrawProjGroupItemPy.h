
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_DRAWPROJGROUPITEMPY_H
#define TECHDRAW_DRAWPROJGROUPITEMPY_H

#include <Mod/TechDraw/App/DrawViewPartPy.h>
#include <Mod/TechDraw/App/DrawProjGroupItem.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// DrawProjGroupItemPy - Python wrapper
//===========================================================================

/** The python export class for DrawProjGroupItem
 */
class TechDrawExport DrawProjGroupItemPy : public TechDraw::DrawViewPartPy
{
protected:
    ~DrawProjGroupItemPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    DrawProjGroupItemPy(DrawProjGroupItem *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = DrawProjGroupItem*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the autoPosition() method
    static PyObject * staticCallback_autoPosition (PyObject *self, PyObject *args);
    /// implementer for the autoPosition() method
    PyObject*  autoPosition(PyObject *args);
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
    DrawProjGroupItem *getDrawProjGroupItemPtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_DRAWPROJGROUPITEMPY_H

