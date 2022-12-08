# The Adapter Pattern

## C++ Project Example
Link: [Turkey and Duck](../Code/AdapterPattern/)

## Theory

The Adapter Pattern converts the interface of a class into another interface the clients expect. Adapter lets clases work together that couldn't otherwise because of incompatible interfaces.


![Adapter Pattern](./public/AdapterPattern.png)

## Object and Class Adapters

1. **Object Adapters**: The Adapter class is composed with the object of Adaptee
2. **Class Adapters**: The Adapter class subclasses both the Target and Adaptee interfaces

## Class Diagram

```mermaid
classDiagram

class Target {
    void request()
}

class Adaptee {
    void specificRequest()
}

class ClientGame {
    // main.cpp
}

class Adapter {
    Adaptee adaptee
    void request()
}

ClientGame "interacts with" --> Target
Adapter "implements" ..> Target
Adapter "composition" --> Adaptee

```