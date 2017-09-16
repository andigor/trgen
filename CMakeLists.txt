cmake_minimum_required(VERSION 2.8)

if (NOT DEFINED ENV{BOOST_INCLUDE_DIR})
  message( FATAL_ERROR "Please set BOOST_INCLUDE_DIR." )
endif() 
if (NOT EXISTS $ENV{BOOST_INCLUDE_DIR})
   message( FATAL_ERROR "BOOST_INCLUDE_DIR " $ENV{BOOST_INCLUDE_DIR} " doesn't exist" )
endif()

if (NOT DEFINED ENV{BOOST_LIBRARY_DIR})
  message( FATAL_ERROR "Please set BOOST_LIBRARY_DIR." )
endif() 
if (NOT EXISTS $ENV{BOOST_LIBRARY_DIR})
  message( FATAL_ERROR "BOOST_LIBRARY_DIR " $ENV{BOOST_LIBRARY_DIR} " doesn't exist" )
endif()

set(Boost_INCLUDE_DIR $ENV{BOOST_INCLUDE_DIR})
set(Boost_LIBRARY_DIR $ENV{BOOST_LIBRARY_DIR})

find_package(Boost COMPONENTS system filesystem REQUIRED)

include_directories(${Boost_INCLUDE_DIR})
set (SERVER_SOURCES server_main.cpp)
add_executable(server ${SERVER_SOURCES})
