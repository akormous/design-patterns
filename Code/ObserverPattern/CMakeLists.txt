cmake_minimum_required(VERSION 3.10)

# set project name
project(ObserverPattern)

set(SOURCES
    include/Observer.hpp
    include/Subject.hpp
    include/Display.hpp
    include/WeatherStation.hpp
    src/WeatherStation.cpp
    include/GenericDisplay.hpp
    src/GenericDisplay.cpp
    src/main.cpp
)
add_executable(ObserverPattern ${SOURCES})

target_include_directories(ObserverPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

