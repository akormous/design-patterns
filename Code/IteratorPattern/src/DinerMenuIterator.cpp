#include "DinerMenuIterator.hpp"

DinerMenuIterator::DinerMenuIterator(MenuItem* menuItems, int n) {
    this->items = menuItems;
    this->n = n;
    position = 0;
}

DinerMenuIterator::~DinerMenuIterator() {
    delete this->items;
}

bool DinerMenuIterator::hasNext() {
    if(position >= n) {
        return false;
    }
    return true;
}

MenuItem DinerMenuIterator::next() {
    MenuItem tempItem = items[position];
    position++;
    return tempItem;
}

void DinerMenuIterator::remove() {
    // nope
}