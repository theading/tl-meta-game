cmake_minimum_required(VERSION 3.16)

project(meta-game VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

set(
    EXECUTABLE_NAME
    ${PROJECT_NAME}
)

file(
    GLOB_RECURSE
    EXECUTABLE_SOURCES
    CONFIGURE_DEPENDS
    ${CMAKE_SOURCE_DIR}/src
    *.cpp
)

qt_add_executable(
    ${EXECUTABLE_NAME}
    ${EXECUTABLE_SOURCES}
)

target_link_libraries(
    ${EXECUTABLE_NAME}
    PRIVATE
    Qt6::Widgets
)

set_target_properties(
    ${EXECUTABLE_NAME}
    PROPERTIES
    WIN32_EXECUTABLE ON
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

target_include_directories(
    ${EXECUTABLE_NAME}
    PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${Qt6Core_INCLUDE_DIRS}
    ${Qt6Widgets_INCLUDE_DIRS}
)