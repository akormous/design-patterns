#include<iostream>
#include "ChocolateBoiler.h"
using namespace std;

int main() {
    auto b1 = ChocolateBoiler::getInstance();

    b1->fill();
    b1->boil();

    auto b2 = ChocolateBoiler::getInstance();
    b2->fill();
    b2->boil();
    b2->drain();
    b1->drain();
    return 0;
}