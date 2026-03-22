cmake_minimum_required(VERSION 3.16)

project(cpp_finance_utils)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
enable_testing()
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(benchmarks)