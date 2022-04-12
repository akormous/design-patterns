#include "GenericDisplay.hpp"

GenericDisplay::GenericDisplay()
    : temp(0.0f), humidity(0.0f) {
}

void GenericDisplay::update(Subject* subject) {
    // cast subject to weather station
    auto weatherStation = dynamic_cast<WeatherStation*>(subject);
    if(weatherStation != nullptr) { // if it is valid
        this->temp = weatherStation->getTemperature();
        this->humidity = weatherStation->getHumidity();
    }
}

void GenericDisplay::display() {
    // display in whatever way you want
    std::cout << "\n---------------------------\n";
    std::cout << "Welcome to GenericDisplay";
    std::cout << "\n---------------------------\n";
    std::cout << "Temperature = \t" << temp;
    std::cout << "\nHumidity = \t" << humidity;
    std::cout << "\n---------------------------\n";
}