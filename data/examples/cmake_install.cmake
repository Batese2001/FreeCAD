# Install script for directory: C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/examples" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/Schenkel.stp"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/draft_test_objects.FCStd"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/EngineBlock.FCStd"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/PartDesignExample.FCStd"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/RobotExample.FCStd"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/ArchDetail.FCStd"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/FemCalculixCantilever2D.FCStd"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/FemCalculixCantilever3D.FCStd"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/data/examples/FemCalculixCantilever3D_newSolver.FCStd"
    )
endif()

