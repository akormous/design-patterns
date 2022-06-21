#pragma once

#include<memory>
#include<mutex>
#include<iostream>

class ChocolateBoiler {
private:
    ChocolateBoiler();
    /**
     * @brief shared ptr of boiler
     * 
     */
    static std::shared_ptr<ChocolateBoiler> instance;

    /**
     * @brief mutex to provide exclusive access to instance
     * 
     */
    static std::mutex boilerMutex;
    bool empty;
    bool boiled;
public:
    /**
     * @brief Get instance of the boiler
     * 
     * @return shared ptr of boiler
     */
    static std::shared_ptr<ChocolateBoiler> getInstance();

    void fill();
    void boil();
    void drain();
    bool isEmpty();
    bool isBoiled();

    ~ChocolateBoiler() = default;

};
