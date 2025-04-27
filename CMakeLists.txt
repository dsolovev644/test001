cmake_minimum_required(VERSION 3.30)
project(test001 VERSION 0.1.0 LANGUAGES CXX)

# Set C++ standard (use the highest available in your compiler)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Library with shared code
add_library(test001_lib
    src/example.cpp
)
target_include_directories(test001_lib PUBLIC include)

# App executable, links the library
add_executable(test001_app src/main.cpp)
target_link_libraries(test001_app PRIVATE test001_lib)

# Tests, in subdirectory
enable_testing()
add_subdirectory(tests)
