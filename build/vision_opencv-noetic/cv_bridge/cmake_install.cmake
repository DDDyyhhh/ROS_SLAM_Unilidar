# Install script for directory: /home/orangepi/catkin_ws/src/vision_opencv-noetic/cv_bridge

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/orangepi/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/orangepi/catkin_ws/build/vision_opencv-noetic/cv_bridge/catkin_generated/installspace/cv_bridge.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cv_bridge/cmake" TYPE FILE FILES "/home/orangepi/catkin_ws/build/vision_opencv-noetic/cv_bridge/catkin_generated/installspace/cv_bridge-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cv_bridge/cmake" TYPE FILE FILES
    "/home/orangepi/catkin_ws/build/vision_opencv-noetic/cv_bridge/catkin_generated/installspace/cv_bridgeConfig.cmake"
    "/home/orangepi/catkin_ws/build/vision_opencv-noetic/cv_bridge/catkin_generated/installspace/cv_bridgeConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cv_bridge" TYPE FILE FILES "/home/orangepi/catkin_ws/src/vision_opencv-noetic/cv_bridge/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/orangepi/catkin_ws/build/vision_opencv-noetic/cv_bridge/catkin_generated/safe_execute_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cv_bridge" TYPE DIRECTORY FILES "/home/orangepi/catkin_ws/src/vision_opencv-noetic/cv_bridge/include/cv_bridge/")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/orangepi/catkin_ws/build/vision_opencv-noetic/cv_bridge/python/cmake_install.cmake")
  include("/home/orangepi/catkin_ws/build/vision_opencv-noetic/cv_bridge/src/cmake_install.cmake")
  include("/home/orangepi/catkin_ws/build/vision_opencv-noetic/cv_bridge/test/cmake_install.cmake")

endif()

