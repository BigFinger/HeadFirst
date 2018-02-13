#pragma once
#include <vector>
#include "MenuItem.h"
#include "PancakeHouseMenuIterator.h"

template<class T>
class PancakeHouseMenu{
public:
    PancakeHouseMenu();
    ~PancakeHouseMenu();
    void addItem(string name, string description, bool vegetarian, double price);
    Iterator<T>* createIterator();
private:
    vector<T*> menuItems;
    Iterator<T>* menuIterator;
};

template<class T>
PancakeHouseMenu<T>::PancakeHouseMenu<T>(){
    menuIterator = NULL;
    addItem("原味咖啡", "精选上等豆子烘制~", true, 0.99);
    addItem("芝士奶酪", "上等牛奶制作", false, 0.88);
    addItem("大块蛋糕", "生日party专用", false, 1.99);
}

template<class T>
PancakeHouseMenu<T>::~PancakeHouseMenu<T>(){
    for (vector<MenuItem*>::iterator iter = menuItems.begin(); iter != menuItems.end(); iter++)
    {
        delete (*iter);
        (*iter) = NULL;
    }
    this->menuItems.clear();
}

template<class T>
void PancakeHouseMenu<T>::addItem(string name, string description, bool vegetarian, double price){
    MenuItem* menuItem = new MenuItem(name, description, vegetarian, price);
    this->menuItems.push_back(menuItem);
}

template<class T>
Iterator<T>* PancakeHouseMenu<T>::createIterator(){
    if (menuIterator == NULL)
    {
        menuIterator = new PancakeHouseMenuIterator<T>(&(this->menuItems));
    }
    return menuIterator;
}