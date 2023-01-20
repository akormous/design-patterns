cmake_minimum_required(VERSION 3.10)

project(StatePattern)

set(SOURCES
    include/State.hpp
    include/GumballMachine.hpp
    include/NoCoinState.hpp
    include/HasCoinState.hpp
    include/SoldOutState.hpp
    include/SoldState.hpp
    include/WinnerState.hpp
    src/GumballMachine.cpp
    src/NoCoinState.cpp
    src/HasCoinState.cpp
    src/SoldOutState.cpp
    src/SoldState.cpp
    src/WinnerState.cpp
    src/main.cpp
)

add_executable(StatePattern ${SOURCES})

target_include_directories(StatePattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)