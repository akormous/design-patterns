cmake_minimum_required(VERSION 3.10)

# set project name
project(DecoratorPattern)

set(SOURCES
    include/Beverage.hpp
    include/CondimentDecorator.hpp
    include/DarkRoast.hpp
    include/Decaf.hpp
    include/Espresso.hpp
    include/HouseBlend.hpp
    include/Milk.hpp
    include/Soy.hpp
    include/Whip.hpp
    include/Mocha.hpp
    src/Beverage.cpp
    src/DarkRoast.cpp
    src/Decaf.cpp
    src/Espresso.cpp
    src/HouseBlend.cpp
    src/Milk.cpp
    src/Soy.cpp
    src/Whip.cpp
    src/Mocha.cpp
    src/main.cpp   
)
add_executable(DecoratorPattern ${SOURCES})

target_include_directories(DecoratorPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

