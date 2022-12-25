cmake_minimum_required(VERSION 3.10)

project(TemplatePattern)

set(SOURCES
    include/CaffeineBeverage.hpp
    include/Tea.hpp
    include/Coffee.hpp
    src/Tea.cpp
    src/Coffee.cpp
    src/main.cpp
)

add_executable(TemplatePattern ${SOURCES})

target_include_directories(TemplatePattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)