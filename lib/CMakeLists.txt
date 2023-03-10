cmake_minimum_required(VERSION 2.8)
project(Test)
 
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_subdirectory(sumso)
 
find_package(Threads REQUIRED)
add_executable(runTests test.cpp)
target_link_libraries(sumlib)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread sumlib)
