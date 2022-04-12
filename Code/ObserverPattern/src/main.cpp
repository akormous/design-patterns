#include<bits/stdc++.h>
#include "WeatherStation.hpp"
#include "GenericDisplay.hpp"

using namespace std;
int main() {
    // create a new weather station
    WeatherStation* mySt = new WeatherStation();
    // create a new app of generic display
    GenericDisplay* myApp = new GenericDisplay();

    // myApp subscribes to mySt weather station
    mySt->registerObserver(myApp);

    // new weather data recorded
    mySt->setMeasurements(24.5, 33.3, 33.33);
    myApp->display();

    mySt->setMeasurements(76.5, 231, 0.04);
    myApp->display();

    mySt->setMeasurements(20.4, 312, 3);
    myApp->display();
    
    return 0;
}