#include "WeatherStation.hpp"

WeatherStation::WeatherStation() 
    : temp(0.0f), humidity(0.0f), pressure(0.0f) {
}

void WeatherStation::registerObserver(Observer* observer) {
    observers.push_back(observer);
}

void WeatherStation::removeObserver(Observer* observer) {
    // find the observer
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if(iterator != observers.end()) {   // if found
        observers.erase(iterator);  // delete it
    }
}

void WeatherStation::notify() {
    for(auto observer : observers) {    // update every observer
        observer->update(this);     // here we are allowing observers to pull data
    }
}

void WeatherStation::setMeasurements(float itemp, float ihumidity, float ipressure) {
    this->temp = itemp;
    this->humidity = ihumidity;
    this->pressure = ipressure;
    notify();   // notify all observers
}

float WeatherStation::getTemperature() {
    return this->temp;
}

float WeatherStation::getHumidity() {
    return this->humidity;
}

float WeatherStation::getPressure() {
    return this->pressure;
}