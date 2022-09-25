# Install script for directory: C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Gui/Stylesheets" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Behave-dark.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Dark-blue.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Dark-green.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Dark-orange.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Darker-blue.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Darker-green.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Darker-orange.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Light-blue.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Light-green.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Light-orange.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/Dark-contrast.qss"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/ProDark.qss"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Gui/Stylesheets/images_dark-light" TYPE FILE FILES
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/Hmovetoolbar_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/Hmovetoolbar_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/Hsepartoolbar_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/Hsepartoolbar_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/Vmovetoolbar_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/Vmovetoolbar_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/Vsepartoolbar_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/Vsepartoolbar_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/background_freecad.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/background_freecad_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/background_freecad_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_end_closed_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_end_closed_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_end_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_end_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_end_open_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_end_open_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_more_closed_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_more_closed_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_more_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_more_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_more_open_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_more_open_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_vline_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/branch_vline_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/checkbox_indeterminate_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/checkbox_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/close_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/close_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/down_arrow_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/down_arrow_darker.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/down_arrow_disabled_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/down_arrow_disabled_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/down_arrow_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/down_arrow_lighter.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/left_arrow_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/left_arrow_darker.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/left_arrow_disabled_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/left_arrow_disabled_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/left_arrow_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/left_arrow_lighter.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/more_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/more_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/radiobutton_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/radiobutton_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/right_arrow_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/right_arrow_darker.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/right_arrow_disabled_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/right_arrow_disabled_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/right_arrow_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/right_arrow_lighter.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/sizegrip_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/sizegrip_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/splitter_horizontal_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/splitter_horizontal_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/splitter_vertical_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/splitter_vertical_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/transparent.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/undock_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/undock_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up-down_arrow_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up-down_arrow_darker.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up-down_arrow_disabled_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up-down_arrow_disabled_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up-down_arrow_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up-down_arrow_lighter.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up_arrow_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up_arrow_darker.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up_arrow_disabled_dark.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up_arrow_disabled_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up_arrow_light.svg"
    "C:/Users/evanb/FreeCADStuff/FreeCadSource/FreeCadOriginal/FreeCAD/src/Gui/Stylesheets/images_dark-light/up_arrow_lighter.svg"
    )
endif()

