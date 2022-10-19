cmake_minimum_required(VERSION 3.10)

# set project name
project(CommandPattern)

set(SOURCES
    include/Vendors/Light.hpp
    include/Vendors/LivingRoomTV.hpp
    include/Command.hpp
    include/ConcreteCommands/NoCommand.hpp
    include/ConcreteCommands/LightOffCommand.hpp
    include/ConcreteCommands/LightOnCommand.hpp
    include/ConcreteCommands/LivingRoomTVOnCommand.hpp
    include/ConcreteCommands/LivingRoomTVOffCommand.hpp
    include/Remote.hpp
    src/Light.cpp
    src/LivingRoomTV.cpp
    src/Remote.cpp
    src/main.cpp
)
add_executable(CommandPattern ${SOURCES})

target_include_directories(CommandPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

