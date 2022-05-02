cmake_minimum_required(VERSION 3.10)

project(SingletonPattern)

set(SOURCES
    include/ChocolateBoiler.h
    src/ChocolateBoiler.cpp
    src/main.cpp
)

add_executable(SingletonPattern ${SOURCES})

target_include_directories(SingletonPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)