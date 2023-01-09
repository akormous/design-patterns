# Pancake and Diner Menu

Two of the famous restaurants (Pancake House and Diner) of the city are getting merged into one. But they have different ways to represent their menu items.

* Pancake House - uses a vector to represent its menu
* Diner - uses an array to represent its menu

You need to implement an iterator for these so that the Waitress class that you are going to create, can consume these menu item collections in the easiest way (scalable and maintainable). The implementation of the collections should be hidden from the waitress.


## Pancake House and Diner Menu

```mermaid
classDiagram

class Menu {
    <<interface>>
    createIterator()
}
class PancakeHouseMenu {
    menuItems
    createIterator()
}

class DinerMenu {
    menuItems
    createIterator()
}

class Waitress {
    printMenu()
}

class Iterator {
    <<interface>>
    hasNext()
    next()
    remove()
}

class PancakeHouseMenuIterator {
    hasNext()
    next()
    remove()
}

class DinerMenuIterator {
    hasNext()
    next()
    remove()
}

Menu <.. PancakeHouseMenu
Menu <.. DinerMenu

Menu <-- Waitress
Waitress --> Iterator

Iterator <.. PancakeHouseMenuIterator
Iterator <.. DinerMenuIterator


```