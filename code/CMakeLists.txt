cmake_minimum_required(VERSION 3.20)
project(abi_compatibility)

add_library(libone SHARED)

target_sources(libone PRIVATE libone.cpp)

target_include_directories(libone PUBLIC ${CMAKE_CURRENT_LIST_DIR} ${CMAKE_CURRENT_BINARY_DIR})

target_compile_features(libone PRIVATE cxx_std_11)

include(GenerateExportHeader)
generate_export_header(libone)

target_compile_definitions(libone PRIVATE _ITERATOR_DEBUG_LEVEL=0)

#-------------------------------------------------#

add_executable(demo)

target_sources(demo PRIVATE main.cpp)

target_link_libraries(demo PRIVATE libone)

target_compile_features(demo PRIVATE cxx_std_20)