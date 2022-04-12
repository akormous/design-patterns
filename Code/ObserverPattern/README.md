# Weather Station - The Observer Pattern

This is an example project that implements the Observer Pattern of OO design in C++.

In this project, the observers are allowed to *pull* data from the subject/publisher.

## Class Diagram
```mermaid
classDiagram

class Subject {
    <<interface>>
    +registerObserver()
    +removeObserver()
    +notifyObserver()
}

class Observer {
    <<interface>>
    +update()
}

class Display {
    <<interface>>
    +display()
}

class WeatherObject {
    +observers[]
    +temp
    +humidity
    +pressure
    +registerObserver()
    +removeObserver()
    +notifyObserver()
    +setMeasurements()
    +getTemperature()
    +getHumidity()
    +getPressure()
}

Subject "1" --> "many" Observer
Subject <|.. "implements" WeatherObject


class GenericDisplay {
    +temp
    +humidity
    +update()
    +display()
}
Observer <|.. "implements" GenericDisplay
Display <|.. "implements" GenericDisplay
WeatherObject <|-- "subscribe" GenericDisplay

```
