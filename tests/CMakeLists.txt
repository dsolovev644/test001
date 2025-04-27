add_executable(test_test001 test_main.cpp)
target_link_libraries(test_test001 PRIVATE test001_lib GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(test_test001)
