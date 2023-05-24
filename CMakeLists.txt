cmake_minimum_required(VERSION 3.9.1)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAl_ERROR "Build in another folder")
endif()

project(LOGGER)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(SOURCES main.cpp Logger.cpp)
add_executable(LOGGER ${SOURCES})
