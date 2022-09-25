# Install script for directory: C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/FreeCAD")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/Init.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/InitGui.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/Draft.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/DraftTools.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/DraftGui.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/DraftVecUtils.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/DraftGeomUtils.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/DraftLayer.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/DraftFillet.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/WorkingPlane.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/TestDraft.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/TestDraftGui.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/importAirfoilDAT.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/importDXF.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/importDWG.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/importOCA.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/importSVG.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Mod/Draft/Draft_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/drafttests" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/auxiliary.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_import.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_import_gui.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_import_tools.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_pivy.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_creation.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_modification.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_svg.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_dxf.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_dwg.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_oca.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_airfoildat.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/test_draftgeomutils.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/draft_test_objects.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttests/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftgeoutils" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/general.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/edges.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/intersections.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/sort_edges.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/faces.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/geometry.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/geo_arrays.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/wires.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/arcs.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/fillets.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/offsets.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/linear_algebra.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/cuboids.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/circles.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/circles_apollonius.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/circle_inversion.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftgeoutils/circles_incomplete.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftutils" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/groups.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/init_tools.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/init_draft_statusbar.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/units.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/utils.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/gui_utils.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/todo.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/translate.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/messages.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftutils/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftfunctions" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/array.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/cut.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/downgrade.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/draftify.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/dxf.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/extrude.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/fuse.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/heal.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/join.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/mirror.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/move.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/offset.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/rotate.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/scale.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/split.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/svg.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/svgshapes.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/svgtext.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/upgrade.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftfunctions/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftmake" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_arc_3points.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_array.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_bezcurve.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_block.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_bspline.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_circle.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_circulararray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_clone.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_copy.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_dimension.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_drawingview.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_ellipse.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_facebinder.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_fillet.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_label.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_layer.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_line.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_orthoarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_patharray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_point.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_pointarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_polararray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_polygon.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_rectangle.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_shape2dview.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_shapestring.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_sketch.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_text.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_wire.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_wpproxy.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/make_hatch.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftmake/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftobjects" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/array.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/base.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/bezcurve.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/block.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/bspline.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/circle.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/clone.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/drawingview.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/ellipse.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/facebinder.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/draft_annotation.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/fillet.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/draftlink.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/label.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/layer.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/dimension.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/patharray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/pathtwistedarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/point.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/pointarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/polygon.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/rectangle.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/shapestring.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/shape2dview.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/text.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/wire.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/wpproxy.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/hatch.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftobjects/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftviewproviders" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_array.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_base.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_bezcurve.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_bspline.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_circulararray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_clone.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_facebinder.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_orthoarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_polararray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_draft_annotation.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_fillet.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_draftlink.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_label.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_layer.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_dimension.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_point.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_rectangle.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_text.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_wire.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_wpproxy.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_hatch.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/view_shapestring.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftviewproviders/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftguitools" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_annotationstyleeditor.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_base.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_base_original.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_tool_utils.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_planeproxy.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_selectplane.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_snaps.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_snapper.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_trackers.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_base_object.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_draft_objects.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_arch_objects.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_part_objects.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_sketcher_objects.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_edit.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_togglemodes.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_groups.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_grid.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_heal.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_dimension_ops.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_lineslope.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_layers.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_setstyle.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_lines.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_fillets.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_splines.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_beziers.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_rectangles.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_arcs.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_circles.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_polygons.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_ellipses.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_texts.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_dimensions.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_shapestrings.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_points.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_facebinders.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_labels.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_hatch.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_subelements.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_move.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_styles.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_rotate.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_offset.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_stretch.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_join.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_split.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_upgrade.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_downgrade.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_trimex.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_scale.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_drawing.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_wire2spline.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_shape2dview.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_draft2sketch.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_arrays.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_array_simple.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_circulararray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_orthoarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_patharray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_pathtwistedarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_pointarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_polararray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_clone.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/gui_mirror.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/draftguitools/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/drafttaskpanels" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttaskpanels/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttaskpanels/task_circulararray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttaskpanels/task_orthoarray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttaskpanels/task_polararray.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttaskpanels/task_scale.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttaskpanels/task_selectplane.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttaskpanels/task_shapestring.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/drafttaskpanels/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Draft/Resources/icons" TYPE FILE FILES "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Draft/Resources/icons/DraftWorkbench.svg")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Mod/Draft/App/cmake_install.cmake")

endif()

