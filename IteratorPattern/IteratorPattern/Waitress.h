#pragma once
#include "Iterator.h"
#include "MenuItem.h"
#include "PancakeHouseMenu.h"
#include "DinnerMenu.h"

class Waitress{
public:
    Waitress();
    ~Waitress();
public:
    void printMenu();
    void printMenu(Iterator<MenuItem>* iterator);
private:
    PancakeHouseMenu<MenuItem>* pancakeHouseMenu;
    DinnerMenu<MenuItem>* dinnerMenu;
};

