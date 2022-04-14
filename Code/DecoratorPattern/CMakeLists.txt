cmake_minimum_required(VERSION 3.10)

# set project name
project(DecoratorPattern)

set(SOURCES
    
)
add_executable(DecoratorPattern ${SOURCES})

target_include_directories(DecoratorPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

