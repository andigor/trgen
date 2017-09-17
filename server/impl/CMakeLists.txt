set (SERVER_SOURCES server_main.cpp)
add_executable(server ${SERVER_SOURCES})
target_link_libraries(server boost_system)

