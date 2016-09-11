cmake_minimum_required(VERSION 3.5)
project(libLimitRun)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(LIB_RUNNER_SOURCE libLimitRun.cpp)
set(RUNNER_SOURCE LimitRun.cpp)

set(TEST_PROGS testprogs/infinitewhile.cpp)

add_executable(testprogs ${TEST_PROGS})

add_executable(limitrun ${RUNNER_SOURCE} ${LIB_RUNNER_SOURCE})
