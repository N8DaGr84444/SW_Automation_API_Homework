<<<<<<< HEAD
# Install script for directory: C:/Users/ajdel/Dev/SoftArch/SW_Automation_API_Homework/packages/boost.1.78.0/lib/native/include/boost/safe_numerics/concept

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/ajdel/Dev/SoftArch/SW_Automation_API_Homework/packages/boost.1.78.0/lib/native/include/boost/safe_numerics/out/install/x64-Debug")
=======
# Install script for directory: D:/SchoolStuff/ClassApplication/packages/boost.1.78.0/lib/native/include/boost/safe_numerics/concept

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/SchoolStuff/ClassApplication/packages/boost.1.78.0/lib/native/include/boost/safe_numerics/out/install/x64-Debug")
>>>>>>> main
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

