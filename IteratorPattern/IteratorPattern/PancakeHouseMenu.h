#pragma once
#include <vector>
#include "MenuItem.h"

template<class T>
class PancakeHouseMenu{
public:
    PancakeHouseMenu();
    void addItem(string name, string description, bool vegetarian, double price);
    Iterator<T> createIterator();
private:
    vector<MenuItem> menuItems;
};