cmake_minimum_required(VERSION 3.14)
project(base64)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(base64_lib)
add_executable(base64 main.cpp)
target_link_libraries(base64 base)
