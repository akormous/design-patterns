cmake_minimum_required(VERSION 3.10)

# set project name
project(CompositePattern)

set(SOURCES
    include/MenuComponent.hpp
    include/MenuItem.hpp
    include/Menu.hpp
    src/MenuItem.cpp
    src/Menu.cpp
    src/main.cpp
)
add_executable(CompositePattern ${SOURCES})

target_include_directories(CompositePattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

