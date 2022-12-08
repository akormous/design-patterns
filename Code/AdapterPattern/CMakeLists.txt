cmake_minimum_required(VERSION 3.10)

# set project name
project(AdapterPattern)

set(SOURCES
    include/Duck.hpp
    include/MallardDuck.hpp
    include/Turkey.hpp
    include/WildTurkey.hpp
    include/TurkeyObjectAdapter.hpp
    src/MallardDuck.cpp
    src/WildTurkey.cpp
    src/TurkeyObjectAdapter.cpp
    src/main.cpp
)
add_executable(AdapterPattern ${SOURCES})

target_include_directories(AdapterPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

