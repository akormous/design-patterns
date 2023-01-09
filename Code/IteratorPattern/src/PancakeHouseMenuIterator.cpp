#include "PancakeHouseMenuIterator.hpp"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(std::vector<MenuItem> menuItems) {
    this->items = menuItems;
    this->it = this->items.begin();
}

PancakeHouseMenuIterator::~PancakeHouseMenuIterator() {

}

bool PancakeHouseMenuIterator::hasNext() {
    return it < this->items.end();
}

MenuItem PancakeHouseMenuIterator::next() {
    MenuItem temp = *it;
    it++;
    return temp;
}

void PancakeHouseMenuIterator::remove() {
    // nope
}