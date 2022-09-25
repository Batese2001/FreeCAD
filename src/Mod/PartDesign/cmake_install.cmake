# Install script for directory: C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Init.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/TestPartDesignApp.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/InitGui.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/TestPartDesignGui.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/InvoluteGearFeature.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/InvoluteGearFeature.ui"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/SprocketFeature.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/SprocketFeature.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/Scripts" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Scripts/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Scripts/DistanceBolt.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Scripts/Epitrochoid.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Scripts/FilletArc.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Scripts/Gear.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Scripts/Parallelepiped.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Scripts/RadialCopy.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Scripts/Spring.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/PartDesignTests" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestDatum.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestShapeBinder.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPad.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPocket.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestHole.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestRevolve.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestLoft.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPipe.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPrimitive.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestMirrored.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestLinearPattern.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPolarPattern.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestMultiTransform.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestBoolean.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestFillet.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestChamfer.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestDraft.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestThickness.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestInvoluteGear.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/fcgear" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcgear/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcgear/fcgear.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcgear/fcgeardialog.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcgear/involute.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcgear/svggear.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/fcsprocket" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcsprocket/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcsprocket/fcsprocket.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcsprocket/fcsprocketdialog.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/fcsprocket/sprocket.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/PartDesign/Resources/Hole" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/din7984.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso10642.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso10642-fine.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso12474-fine.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso14583.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso14583part.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso2009.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762_7089.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762-fine.json"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso7046.json"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/WizardShaft" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/WizardShaft/__init__.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaft.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaft.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaftTable.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/WizardShaft/Shaft.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/WizardShaft/ShaftFeature.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/WizardShaft/ShaftDiagram.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/PartDesign/WizardShaft/SegmentFunction.py"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Mod/PartDesign/App/cmake_install.cmake")
  include("C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadBinaries/src/Mod/PartDesign/Gui/cmake_install.cmake")

endif()

