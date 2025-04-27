cmake_minimum_required(VERSION 3.30)
project(test001 VERSION 0.1.0 LANGUAGES CXX)

# Set C++ standard (use the highest available in your compiler)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Organize output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Project sources
add_executable(test001 src/main.cpp src/example.cpp)
target_include_directories(test001 PUBLIC include)
