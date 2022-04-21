cmake_minimum_required(VERSION 3.10)

# set project name
project(FactoryPattern)

set(SOURCES
    include/IngredientFactory/PizzaIngredientFactory.hpp
    include/IngredientFactory/ChicagoPizzaIngredientFactory.hpp
    include/IngredientFactory/NYPizzaIngredientFactory.hpp
    include/Store/PizzaStore.hpp
    include/Store/ChicagoPizzaStore.hpp
    include/Store/NYPizzaStore.hpp
    include/Ingredients/Cheese/Cheese.hpp
    include/Ingredients/Cheese/MozzarellaCheese.hpp
    include/Ingredients/Cheese/ReggianoCheese.hpp
    include/Ingredients/Cheese/MozzarellaCheese.cpp
    include/Ingredients/Cheese/ReggianoCheese.cpp
    include/Ingredients/Clams/Clams.hpp
    include/Ingredients/Clams/FrozenClams.hpp
    include/Ingredients/Clams/FreshClams.hpp
    include/Ingredients/Clams/FrozenClams.cpp
    include/Ingredients/Clams/FreshClams.cpp
    include/Ingredients/Dough/Dough.hpp
    include/Ingredients/Dough/ThickCrustDough.hpp
    include/Ingredients/Dough/ThinCrustDough.hpp
    include/Ingredients/Dough/ThickCrustDough.cpp
    include/Ingredients/Dough/ThinCrustDough.cpp
    include/Ingredients/Sauce/Sauce.hpp
    include/Ingredients/Sauce/MarinaraTomatoSauce.hpp
    include/Ingredients/Sauce/PlumTomatoSauce.hpp
    include/Ingredients/Sauce/MarinaraTomatoSauce.cpp
    include/Ingredients/Sauce/PlumTomatoSauce.cpp
    include/Pizza.hpp
    include/CheesePizza.hpp
    include/ClamsPizza.hpp
    src/IngredientFactory/ChicagoPizzaIngredientFactory.cpp
    src/IngredientFactory/NYPizzaIngredientFactory.cpp
    src/Store/PizzaStore.cpp
    src/Store/ChicagoPizzaStore.cpp
    src/Store/NYPizzaStore.cpp
    src/Pizza.cpp
    src/CheesePizza.cpp
    src/ClamsPizza.cpp
    src/main.cpp
)

add_executable(FactoryPattern ${SOURCES})

target_include_directories(FactoryPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

