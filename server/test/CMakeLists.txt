set (SERVER_TEST_SOURCES server_test.cpp)
add_executable(server_test ${SERVER_TEST_SOURCES})
add_dependencies(server_test server_lib)
target_link_libraries(server_test boost_system gtest)
