cmake_minimum_required(VERSION 3.18.3)
project(chr-core)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(chr-core src/chr-core)
set_target_properties(chr-core PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(chr-core PUBLIC src/)

add_subdirectory(src)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_link_options(chr-core PUBLIC "-fdeclspec")
endif()