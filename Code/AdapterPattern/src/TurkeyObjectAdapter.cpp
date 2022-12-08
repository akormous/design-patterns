#include "TurkeyObjectAdapter.hpp"

TurkeyObjectAdapter::TurkeyObjectAdapter(Turkey* turkey) {
    this->turkey = turkey;
}

void TurkeyObjectAdapter::fly() {
    this->turkey->fly();
}

void TurkeyObjectAdapter::quack() {
    this->turkey->gobble();
}