#include "ChocolateBoiler.h"

// constructor
ChocolateBoiler::ChocolateBoiler() {
    empty = true;
    boiled = false;
}

std::shared_ptr<ChocolateBoiler> ChocolateBoiler::instance;
std::mutex ChocolateBoiler::boilerMutex;

std::shared_ptr<ChocolateBoiler> ChocolateBoiler::getInstance() {
    if(instance == nullptr) {
        std::lock_guard<std::mutex> lock(boilerMutex);
        if(instance == nullptr) {
            instance.reset(new ChocolateBoiler());
        }
    }
    return instance;
}

bool ChocolateBoiler::isEmpty() {
    return empty;
}

bool ChocolateBoiler::isBoiled() {
    return boiled;
}

void ChocolateBoiler::fill() {
    if(isEmpty()) {
        empty = false;
        boiled = false;
        std::cout << "Boiler filled" << std::endl;
    }
    else {
        std::cout << "ERR: Boiler not empty" << std::endl;
    }
}

void ChocolateBoiler::boil() {
    if(!isEmpty() && !isBoiled()) {
        boiled = true;
        std::cout << "Mixture boiled" << std::endl;
    }
    else {
        std::cout << "ERR: Cannot boil" << std::endl;
    }
}

void ChocolateBoiler::drain() {
    if(!isEmpty() && isBoiled()) {
        empty = true;
        std::cout << "Boiler drained" << std::endl;
    }
    else {
        std::cout << "ERR: Cannot drain boiler" << std::endl;
    }
}