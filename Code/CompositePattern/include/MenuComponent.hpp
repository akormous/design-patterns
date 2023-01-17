#pragma once
#include<string>
#include<stdexcept>

class MenuComponent {
public:
    virtual ~MenuComponent() {}

    // methods that make sense for both maybe
    std::string getName() {
        throw std::runtime_error("Operation is not supported");
    }

    std::string getDescription() {
        throw std::runtime_error("Operation is not supported");
    }

    double getPrice() {
        throw std::runtime_error("Operation is not supported");
    }
    
    bool isVegetarian() {
        throw std::runtime_error("Operation is not supported");
    }

    virtual void print() {
        throw std::runtime_error("Operation is not supported");
    }

    // methods that make sense for Menu (composite)
    void add() {
        throw std::runtime_error("Operation is not supported");
    }

    void remove() {
        throw std::runtime_error("Operation is not supported");
    }

    MenuComponent getChild() {
        throw std::runtime_error("Operation is not supported");
    }
private:

};