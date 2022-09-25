# Install script for directory: C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Start/StartPage" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/StartPage.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/TranslationTexts.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/__init__.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Start/StartPage" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/LoadMRU.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/LoadExample.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/LoadNew.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/LoadCustom.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/StartPage.css"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/StartPage.js"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/StartPage.html"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/EnableDownload.py"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/OpenSettings.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Start/StartPage/images" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/images/userhub.png"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/images/poweruserhub.png"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/images/developerhub.png"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/images/manual.png"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/images/freecad.png"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/images/installed.png"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/images/new_file_thumbnail.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Mod/Start/StartPage/images/settings.png"
    )
endif()

