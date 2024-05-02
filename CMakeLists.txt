cmake_minimum_required(VERSION 3.5.0)
project(lab7 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(lab7 main.cpp)
add_library(rec rectangle.cpp)
add_library(recmove moving_rectangle.cpp)

target_link_libraries(lab7 recmove)
target_link_libraries(lab7 rec)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
