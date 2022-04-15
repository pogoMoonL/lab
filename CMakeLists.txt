# cmake version
cmake_minimum_required(VERSION 3.10)
# project name
project(IndexProject)
#採用c++14 標準
set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)