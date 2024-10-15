cmake_minimum_required(VERSION 3.29)

project(testDraw)
# library(TermDrawC)

add_executable(testDraw "./src/testdraw.c")

add_subdirectory(TermDrawC)
target_link_libraries(testDraw PUBLIC TermDrawC")
target_include_directories(testDraw PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/lib/TermDrawC"
)

