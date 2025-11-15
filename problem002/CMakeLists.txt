cmake_minimum_required(VERSION 3.10)
project(problem002 LANGUAGES CXX)

add_executable(problem002 main.cpp)

set_target_properties(problem002 PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/problem002
)