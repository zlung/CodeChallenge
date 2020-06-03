cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
set(PROJECT_NAME codechallenge)
project(${PROJECT_NAME})

message("project name:" ${PROJECT_NAME})
message("source dir:" ${PROJECT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

message("exe output dir: " ${EXECUTABLE_OUTPUT_PATH})
message("lib output dir: " ${LIBRARY_OUTPUT_PATH})

option(BUILD_TEST "Build the tests" ON)

include_directories(src)
add_subdirectory(src)

if(BUILD_TEST)
    enable_testing()
    include(GoogleTest)
    add_subdirectory(3rdparty/googletest)
    add_subdirectory(test)
endif()
