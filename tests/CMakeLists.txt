add_executable(test_test001 test_main.cpp)
target_link_libraries(test_test001 PRIVATE test001_lib gtest gtest_main)

add_test(NAME myproject_test COMMAND test_test001)
