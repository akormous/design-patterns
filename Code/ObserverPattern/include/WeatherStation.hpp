#ifndef WEATHER_STATION_HPP
#define WEATHER_STATION_HPP

#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.hpp"
#include "Observer.hpp"

/**
 * Concrete subject implementation
*/
class WeatherStation : public Subject {
public:
    WeatherStation();

    void registerObserver(Observer* observer) override;

    void removeObserver(Observer* observer) override;

    void notify() override;

    /**
     * set new measurements
     * @param itemp new recorded temperature 
     * @param ihumidity new recorded humidity
     * @param ipressure new recorded pressure
    */
    void setMeasurements(float itemp, float ihumidity, float ipressure);

    float getTemperature();
    float getHumidity();
    float getPressure();
private:
    std::vector<Observer*> observers;
    float temp;
    float humidity;
    float pressure;
};

#endif // WEATHER_STATION_HPP