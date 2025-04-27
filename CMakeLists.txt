cmake_minimum_required(VERSION 3.30)
project(test001 VERSION 0.1.0 LANGUAGES CXX)

# Set C++ standard (use the highest available in your compiler)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.84 REQUIRED COMPONENTS filesystem)

# Library with shared code
add_library(test001_lib
    src/example.cpp
)
target_include_directories(test001_lib PUBLIC include)

include(FetchContent)
FetchContent_Declare(
  spdlog
  GIT_REPOSITORY https://github.com/gabime/spdlog.git
  GIT_TAG v1.12.0
)
FetchContent_MakeAvailable(spdlog)

# App executable, links the library
add_executable(test001_app src/main.cpp)
target_link_libraries(test001_app PRIVATE test001_lib Boost::filesystem spdlog::spdlog)

# Download and make GoogleTest available
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Tests, in subdirectory
enable_testing()
add_subdirectory(tests)
