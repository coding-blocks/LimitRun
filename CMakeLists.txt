cmake_minimum_required(VERSION 3.5)
project(libLimitRun)

# Set Compiler and flags
set(CMAKE_CXX_COMPILER g++) #Make sure we do not use clang or gcc
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(LIB_RUNNER_SOURCE libLimitRun.cpp)
set(RUNNER_SOURCE LimitRun.cpp)

set(TEST_PROGS_INFWHILE "testprogs/infinitewhile.cpp")
set(TEST_PROGS_LARGEARR "testprogs/largearray.cpp")

add_executable(test_infinitewhile ${TEST_PROGS_INFWHILE})
add_executable(test_largearray ${TEST_PROGS_LARGEARR})

add_executable(limitrun ${RUNNER_SOURCE} ${LIB_RUNNER_SOURCE})
