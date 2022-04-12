cmake_minimum_required(VERSION 3.10)

project(StrategyPattern)

set(SOURCES
    include/Duck.hpp
    include/FlyBehavior.hpp
    include/FlyNoWay.hpp
    include/FlyWithWings.hpp
    include/QuackBehavior.hpp
    include/MuteQuack.hpp
    include/Quack.hpp
    include/Squeak.hpp
    include/RubberDuck.hpp
    include/MallardDuck.hpp
    src/Duck.cpp
    src/FlyNoWay.cpp
    src/FlyWithWings.cpp
    src/MuteQuack.cpp
    src/Quack.cpp
    src/Squeak.cpp
    src/RubberDuck.cpp
    src/MallardDuck.cpp
    src/main.cpp
)

add_executable(StrategyPattern ${SOURCES})

target_include_directories(StrategyPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)