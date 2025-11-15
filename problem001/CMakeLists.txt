cmake_minimum_required(VERSION 3.10)
project(problem001 LANGUAGES CXX)

add_executable(problem001 main.cpp)

set_target_properties(problem001 PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/problem001
)