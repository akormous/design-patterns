#pragma once
#include "Iterator.hpp"
#include "MenuItem.hpp"
#include<vector>

class PancakeHouseMenuIterator : public Iterator<MenuItem> {
public:
    PancakeHouseMenuIterator(std::vector<MenuItem> menuItems);
    ~PancakeHouseMenuIterator() ;
    bool hasNext();
    MenuItem next();
    void remove(); 
private:
    std::vector<MenuItem> items;
    std::vector<MenuItem>::iterator it;
};