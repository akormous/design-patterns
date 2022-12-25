# Coffee and Tea

Creating a template method for making tea or coffee. The algorithm is quite similar for both, so lets give it a shot.

```mermaid
classDiagram

class CaffeineBeverage {
    CaffeineBeverage* prepareRecipe() // template method
    void boilWater() // primitive
    void pourInCup() // primitive
    void brew() // concrete
    void addCondiments() // concrete
    bool customerWantsCondiments() // hook; default true
}

class Tea {
    brew()
    addCondiments()
}

class Coffee {
    brew()
    addCondiments()
}

CaffeineBeverage <|-- Tea
CaffeineBeverage <|-- Coffee

```

```cpp

// template method defines the algorithm
CaffeineBeverage* prepareRecipe() {
    boilWater();
    pourInCup();
    brew();
    addCondiments();
}

CaffeineBeverage* cuttingChai = new Tea();
cuttingChai->prepareRecipe();
```