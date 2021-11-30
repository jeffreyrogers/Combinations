cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Combinations VERSION 0.1.0 LANGUAGES CXX C)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Combinations combinations.cpp)
