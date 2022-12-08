# Turkey and Duck

In this project, we will create an adapter that lets a turkey act like a duck.

## Class Diagram

### **Object Adapter**

```mermaid
classDiagram

class Duck {
    void fly();
    void quack();
}

class Turkey {
    void fly();
    void gobble();
}

class ClientGame {
    // main.cpp
    Duck ducks[];
}

class TurkeyObjectAdapter {
    Turkey turkey
    void fly();
    void quack();
}

ClientGame -->Duck
TurkeyObjectAdapter ..> Duck
TurkeyObjectAdapter --> Turkey

```

### **Class Adapter**

```mermaid
classDiagram

class Duck {
    void fly();
    void quack();
}

class Turkey {
    void fly();
    void gobble();
}

class ClientGame {
    // main.cpp
    Duck ducks[];
}

class TurkeyClassAdapter {
    Turkey turkey
    void fly();
    void quack();
}

ClientGame -->Duck
TurkeyClassAdapter "subclass" --|> Duck
TurkeyClassAdapter "subclass" --|> Turkey

```

- Class Adapter is quite complicated to create when there are methods with same names on both the Target and Adaptee interfaces
- Class Adapters are good when Target and Adaptee are completely different (For ex. Enumeration and Iterator interfaces in Java)