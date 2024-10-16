cmake_minimum_required(VERSION 3.28)

project(testDraw)
# library(TermDrawC)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(testDraw "./src/testdraw.c")

add_subdirectory(TermDrawC)
target_link_libraries(testDraw PUBLIC TermDrawC)
target_include_directories(testDraw PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/TermDrawC"
)

