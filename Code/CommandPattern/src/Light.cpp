#include "Vendors/Light.hpp"
#include<iostream>

Light::Light() {

}

void Light::on() {
    std::cout << "Light is on." << std::endl;
}

void Light::off() {
    std::cout << "Light is off." << std::endl;
}