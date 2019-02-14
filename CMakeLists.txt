cmake_minimum_required(VERSION 3.12.0)
project(test-vscode VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(CTest)
enable_testing()

add_subdirectory(vendor/fmt)
add_executable(test-vscode main.cpp)
target_link_libraries(test-vscode fmt::fmt)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
