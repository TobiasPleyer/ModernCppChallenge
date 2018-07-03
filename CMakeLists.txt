cmake_minimum_required (VERSION 3.6)
project (TheModernCppChallenge)

# Compiler flags for g++
set(CMAKE_CXX_FLAGS "-Wall -std=c++17 -g -pedantic")

include_directories("extra/range-v3/include")
include_directories("chapter1_math_problems/include")

add_subdirectory(extra/range-v3)
add_subdirectory(chapter1_math_problems)

add_executable(problems main.cpp)

target_link_libraries(problems PUBLIC chapter1)
