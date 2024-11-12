cmake_minimum_required(VERSION 3.28)
project(TestAction LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(TestAction main.cpp)

set_target_properties(TestAction PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set_target_properties(TestAction PROPERTIES RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin")
