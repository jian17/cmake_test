cmake_minimum_required(VERSION 3.16)

project(Tutorial VERSION 1.0)

add_subdirectory(MathFunctions)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
configure_file(TutorialConfig.h.in TutorialConfig.h)

add_executable(Tutorial tutorial.cpp)


target_link_libraries(Tutorial PUBLIC MathFunctions)

target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_BINARY_DIR}/MathFunctions")
