
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_DRAWVIEWPARTPY_H
#define TECHDRAW_DRAWVIEWPARTPY_H

#include <Mod/TechDraw/App/DrawViewPy.h>
#include <Mod/TechDraw/App/DrawViewPart.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// DrawViewPartPy - Python wrapper
//===========================================================================

/** The python export class for DrawViewPart
 */
class TechDrawExport DrawViewPartPy : public TechDraw::DrawViewPy
{
protected:
    ~DrawViewPartPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    DrawViewPartPy(DrawViewPart *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = DrawViewPart*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the getVisibleEdges() method
    static PyObject * staticCallback_getVisibleEdges (PyObject *self, PyObject *args);
    /// implementer for the getVisibleEdges() method
    PyObject*  getVisibleEdges(PyObject *args);
    /// callback for the getHiddenEdges() method
    static PyObject * staticCallback_getHiddenEdges (PyObject *self, PyObject *args);
    /// implementer for the getHiddenEdges() method
    PyObject*  getHiddenEdges(PyObject *args);
    /// callback for the makeCosmeticVertex() method
    static PyObject * staticCallback_makeCosmeticVertex (PyObject *self, PyObject *args);
    /// implementer for the makeCosmeticVertex() method
    PyObject*  makeCosmeticVertex(PyObject *args);
    /// callback for the makeCosmeticVertex3d() method
    static PyObject * staticCallback_makeCosmeticVertex3d (PyObject *self, PyObject *args);
    /// implementer for the makeCosmeticVertex3d() method
    PyObject*  makeCosmeticVertex3d(PyObject *args);
    /// callback for the getCosmeticVertex() method
    static PyObject * staticCallback_getCosmeticVertex (PyObject *self, PyObject *args);
    /// implementer for the getCosmeticVertex() method
    PyObject*  getCosmeticVertex(PyObject *args);
    /// callback for the getCosmeticVertexBySelection() method
    static PyObject * staticCallback_getCosmeticVertexBySelection (PyObject *self, PyObject *args);
    /// implementer for the getCosmeticVertexBySelection() method
    PyObject*  getCosmeticVertexBySelection(PyObject *args);
    /// callback for the removeCosmeticVertex() method
    static PyObject * staticCallback_removeCosmeticVertex (PyObject *self, PyObject *args);
    /// implementer for the removeCosmeticVertex() method
    PyObject*  removeCosmeticVertex(PyObject *args);
    /// callback for the clearCosmeticVertices() method
    static PyObject * staticCallback_clearCosmeticVertices (PyObject *self, PyObject *args);
    /// implementer for the clearCosmeticVertices() method
    PyObject*  clearCosmeticVertices(PyObject *args);
    /// callback for the makeCosmeticLine() method
    static PyObject * staticCallback_makeCosmeticLine (PyObject *self, PyObject *args);
    /// implementer for the makeCosmeticLine() method
    PyObject*  makeCosmeticLine(PyObject *args);
    /// callback for the makeCosmeticLine3D() method
    static PyObject * staticCallback_makeCosmeticLine3D (PyObject *self, PyObject *args);
    /// implementer for the makeCosmeticLine3D() method
    PyObject*  makeCosmeticLine3D(PyObject *args);
    /// callback for the makeCosmeticCircle() method
    static PyObject * staticCallback_makeCosmeticCircle (PyObject *self, PyObject *args);
    /// implementer for the makeCosmeticCircle() method
    PyObject*  makeCosmeticCircle(PyObject *args);
    /// callback for the makeCosmeticCircleArc() method
    static PyObject * staticCallback_makeCosmeticCircleArc (PyObject *self, PyObject *args);
    /// implementer for the makeCosmeticCircleArc() method
    PyObject*  makeCosmeticCircleArc(PyObject *args);
    /// callback for the getCosmeticEdge() method
    static PyObject * staticCallback_getCosmeticEdge (PyObject *self, PyObject *args);
    /// implementer for the getCosmeticEdge() method
    PyObject*  getCosmeticEdge(PyObject *args);
    /// callback for the getCosmeticEdgeBySelection() method
    static PyObject * staticCallback_getCosmeticEdgeBySelection (PyObject *self, PyObject *args);
    /// implementer for the getCosmeticEdgeBySelection() method
    PyObject*  getCosmeticEdgeBySelection(PyObject *args);
    /// callback for the removeCosmeticEdge() method
    static PyObject * staticCallback_removeCosmeticEdge (PyObject *self, PyObject *args);
    /// implementer for the removeCosmeticEdge() method
    PyObject*  removeCosmeticEdge(PyObject *args);
    /// callback for the makeCenterLine() method
    static PyObject * staticCallback_makeCenterLine (PyObject *self, PyObject *args);
    /// implementer for the makeCenterLine() method
    PyObject*  makeCenterLine(PyObject *args);
    /// callback for the getCenterLine() method
    static PyObject * staticCallback_getCenterLine (PyObject *self, PyObject *args);
    /// implementer for the getCenterLine() method
    PyObject*  getCenterLine(PyObject *args);
    /// callback for the getCenterLineBySelection() method
    static PyObject * staticCallback_getCenterLineBySelection (PyObject *self, PyObject *args);
    /// implementer for the getCenterLineBySelection() method
    PyObject*  getCenterLineBySelection(PyObject *args);
    /// callback for the removeCenterLine() method
    static PyObject * staticCallback_removeCenterLine (PyObject *self, PyObject *args);
    /// implementer for the removeCenterLine() method
    PyObject*  removeCenterLine(PyObject *args);
    /// callback for the clearCosmeticEdges() method
    static PyObject * staticCallback_clearCosmeticEdges (PyObject *self, PyObject *args);
    /// implementer for the clearCosmeticEdges() method
    PyObject*  clearCosmeticEdges(PyObject *args);
    /// callback for the clearCenterLines() method
    static PyObject * staticCallback_clearCenterLines (PyObject *self, PyObject *args);
    /// implementer for the clearCenterLines() method
    PyObject*  clearCenterLines(PyObject *args);
    /// callback for the clearGeomFormats() method
    static PyObject * staticCallback_clearGeomFormats (PyObject *self, PyObject *args);
    /// implementer for the clearGeomFormats() method
    PyObject*  clearGeomFormats(PyObject *args);
    /// callback for the formatGeometricEdge() method
    static PyObject * staticCallback_formatGeometricEdge (PyObject *self, PyObject *args);
    /// implementer for the formatGeometricEdge() method
    PyObject*  formatGeometricEdge(PyObject *args);
    /// callback for the getEdgeByIndex() method
    static PyObject * staticCallback_getEdgeByIndex (PyObject *self, PyObject *args);
    /// implementer for the getEdgeByIndex() method
    PyObject*  getEdgeByIndex(PyObject *args);
    /// callback for the getEdgeBySelection() method
    static PyObject * staticCallback_getEdgeBySelection (PyObject *self, PyObject *args);
    /// implementer for the getEdgeBySelection() method
    PyObject*  getEdgeBySelection(PyObject *args);
    /// callback for the getVertexByIndex() method
    static PyObject * staticCallback_getVertexByIndex (PyObject *self, PyObject *args);
    /// implementer for the getVertexByIndex() method
    PyObject*  getVertexByIndex(PyObject *args);
    /// callback for the getVertexBySelection() method
    static PyObject * staticCallback_getVertexBySelection (PyObject *self, PyObject *args);
    /// implementer for the getVertexBySelection() method
    PyObject*  getVertexBySelection(PyObject *args);
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
    DrawViewPart *getDrawViewPartPtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_DRAWVIEWPARTPY_H


