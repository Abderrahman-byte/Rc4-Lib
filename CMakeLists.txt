project (rc4-lib)

cmake_minimum_required (VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(./src)

# add_executable (rc4 ./main.cpp)

# target_link_libraries (rc4 rc4-lib::rc4)