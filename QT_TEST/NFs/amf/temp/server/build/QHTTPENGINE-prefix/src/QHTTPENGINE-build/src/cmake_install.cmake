# Install script for directory: /home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/external")
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
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so.1.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/libqhttpengine.so.1.0.1"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/libqhttpengine.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so.1.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/libqhttpengine.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqhttpengine.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qhttpengine" TYPE FILE FILES
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/basicauthmiddleware.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/filesystemhandler.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/handler.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/ibytearray.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/localauthmiddleware.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/localfile.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/middleware.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/parser.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/proxyhandler.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/qiodevicecopier.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/qobjecthandler.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/range.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/server.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE/src/include/qhttpengine/socket.h"
    "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/qhttpengine_export.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qhttpengine/qhttpengineConfig.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qhttpengine/qhttpengineConfig.cmake"
         "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/CMakeFiles/Export/lib/cmake/qhttpengine/qhttpengineConfig.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qhttpengine/qhttpengineConfig-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qhttpengine/qhttpengineConfig.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qhttpengine" TYPE FILE FILES "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/CMakeFiles/Export/lib/cmake/qhttpengine/qhttpengineConfig.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qhttpengine" TYPE FILE FILES "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/CMakeFiles/Export/lib/cmake/qhttpengine/qhttpengineConfig-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qhttpengine" TYPE FILE FILES "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/qhttpengineConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/etri/5G_OAI/QT_TEST/NFs/amf/temp/server/build/QHTTPENGINE-prefix/src/QHTTPENGINE-build/src/qhttpengine.pc")
endif()

