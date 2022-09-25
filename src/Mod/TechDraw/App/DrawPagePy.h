
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_DRAWPAGEPY_H
#define TECHDRAW_DRAWPAGEPY_H

#include <App/DocumentObjectPy.h>
#include <Mod/TechDraw/App/DrawPage.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// DrawPagePy - Python wrapper
//===========================================================================

/** The python export class for DrawPage
 */
class TechDrawExport DrawPagePy : public App::DocumentObjectPy
{
protected:
    ~DrawPagePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    DrawPagePy(DrawPage *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = DrawPage*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the addView() method
    static PyObject * staticCallback_addView (PyObject *self, PyObject *args);
    /// implementer for the addView() method
    PyObject*  addView(PyObject *args);
    /// callback for the removeView() method
    static PyObject * staticCallback_removeView (PyObject *self, PyObject *args);
    /// implementer for the removeView() method
    PyObject*  removeView(PyObject *args);
    /// callback for the getAllViews() method
    static PyObject * staticCallback_getAllViews (PyObject *self, PyObject *args);
    /// implementer for the getAllViews() method
    PyObject*  getAllViews(PyObject *args);
    /// callback for the getPageWidth() method
    static PyObject * staticCallback_getPageWidth (PyObject *self, PyObject *args);
    /// implementer for the getPageWidth() method
    PyObject*  getPageWidth(PyObject *args);
    /// callback for the getPageHeight() method
    static PyObject * staticCallback_getPageHeight (PyObject *self, PyObject *args);
    /// implementer for the getPageHeight() method
    PyObject*  getPageHeight(PyObject *args);
    /// callback for the getPageOrientation() method
    static PyObject * staticCallback_getPageOrientation (PyObject *self, PyObject *args);
    /// implementer for the getPageOrientation() method
    PyObject*  getPageOrientation(PyObject *args);
    /// callback for the requestPaint() method
    static PyObject * staticCallback_requestPaint (PyObject *self, PyObject *args);
    /// implementer for the requestPaint() method
    PyObject*  requestPaint(PyObject *args);
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
    DrawPage *getDrawPagePtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_DRAWPAGEPY_H


