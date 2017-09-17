set (SERVER_LIB_SOURCES server.cpp)

add_library(server_lib SHARED ${SERVER_LIB_SOURCES})

target_link_libraries(server_lib boost_system server_interface)
target_include_directories(server_lib INTERFACE ${CMAKE_SOURCE_DIR})




set (SERVER_BIN_SOURCES server_main.cpp)

add_executable(server ${SERVER_BIN_SOURCES})
target_link_libraries(server boost_system server_lib)
