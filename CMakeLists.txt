project (rc4-lib)

cmake_minimum_required (VERSION 3.10)

set (CMAKE_CXX_STANDARD 11)

add_subdirectory (third-party/googletest)

add_subdirectory (./src)

add_subdirectory (./tests)