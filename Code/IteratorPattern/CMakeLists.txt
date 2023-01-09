cmake_minimum_required(VERSION 3.10)

# set project name
project(IteratorPattern)

set(SOURCES
    include/Iterator.hpp
    include/MenuItem.hpp
    include/Menu.hpp
    include/DinerMenuIterator.hpp
    include/DinerMenu.hpp
    include/PancakeHouseMenu.hpp
    include/PancakeHouseMenuIterator.hpp
    include/Waitress.hpp
    src/MenuItem.cpp
    src/DinerMenuIterator.cpp
    src/DinerMenu.cpp
    src/PancakeHouseMenu.cpp
    src/PancakeHouseMenuIterator.cpp
    src/Waitress.cpp
    src/main.cpp    
)

add_executable(IteratorPattern ${SOURCES})

target_include_directories(IteratorPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

