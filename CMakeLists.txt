cmake_minimum_required(VERSION 3.7)
project(cpp_workshop)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

################################################################################
# TEST EXTERNAL LIBRARIES
################################################################################
include(config-cmake/dep/googletest/googletest.cmake)

################################################################################
# TESTS
################################################################################
add_subdirectory(tst)

set(SOURCE_FILES
        src/main.cpp src/AustinFormat.cpp src/AustinFormat.hpp src/IAustinFormat.hpp src/IAustinFormatParser.hpp )
add_executable(cpp_workshop ${SOURCE_FILES})
