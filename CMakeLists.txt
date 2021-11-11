cmake_minimum_required(VERSION 3.20)
project(Lab__4)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab__4 main.cpp Tasks/task1.h Tasks/task2.h Tasks/task2.cpp Tasks/task1.cpp)


# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run Tasks/task1.cpp Tasks/task2.cpp Tests/tests.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)