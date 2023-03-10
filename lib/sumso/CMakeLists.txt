cmake_minimum_required(VERSION 2.6)

project (TestSum)
set(CMAKE_BUILD_TYPE Release)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(sumlib
            SHARED
            sum.cpp sum.h)
