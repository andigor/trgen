set (SERVER_TEST_SOURCES server_test.cpp)
add_executable(server_test ${SERVER_TEST_SOURCES})
target_link_libraries(server_test boost_system gtest)
