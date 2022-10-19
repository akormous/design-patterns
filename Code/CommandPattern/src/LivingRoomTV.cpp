#include "Vendors/LivingRoomTV.hpp"
#include<iostream>
LivingRoomTV::LivingRoomTV() {

}

void LivingRoomTV::on() {
    std::cout << "TV is on." << std::endl;
}

void LivingRoomTV::off() {
    std::cout << "TV is off." << std::endl;
}

void LivingRoomTV::setInputChannel(int id) {
    std::cout << "TV channel set to - " << id << std::endl;
}

void LivingRoomTV::setVolume(int vol) {
    std::cout << "TV volume set to - " << vol << std::endl;
}

