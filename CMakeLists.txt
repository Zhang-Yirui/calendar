cmake_minimum_required(VERSION 3.27)
project(calendar C)

set(CMAKE_C_STANDARD 23)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.c)
file(GLOB INCLUDES ${PROJECT_SOURCE_DIR}/inc/*.h)
include_directories("${PROJECT_SOURCE_DIR}/inc")

add_executable(calendar main.c main.h ${SOURCES} ${INCLUDES})