#cmake 3.1 required for set_source_files_properties
cmake_minimum_required (VERSION 3.1)

#define variables and project name
set (YEAR_PREFIX 20xx)
set (NAMESPACE "Aoc${YEAR_PREFIX}")
set (PROJECT_NAME "${YEAR_PREFIX}_AoC_VM")
set (CMAKE_CXX_STANDARD 11)
set (MASTER_PROJECT TRUE)
project (${PROJECT_NAME})
# Add days
add_subdirectory("${PROJECT_SOURCE_DIR}/lib/gtest" ./gtest)
enable_testing()

add_subdirectory("${PROJECT_SOURCE_DIR}/Day01/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day02/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day04/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day05/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day06/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day07/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day08/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day09/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day11/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day15/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Day16/")
