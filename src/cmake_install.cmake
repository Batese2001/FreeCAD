# Install script for directory: C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Build/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/3rdParty/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Base/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/App/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Main/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Mod/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Ext/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Doc/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Gui/cmake_install.cmake")

endif()

