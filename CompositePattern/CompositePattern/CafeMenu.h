#pragma once
#include <map>
#include <string>
#include "CafeMenuIterator.h"
#include "Iterator.h"

template<class T>
class CafeMenu{
public:
    CafeMenu();
    ~CafeMenu();
public:
    void addItem(string name, string description, bool vegetarian, double price);
    Iterator<T>* createIterator();
private:
    map<int, T*> menuItems;
    Iterator<T>* menuIterator;
    int length;
};

template<class T>
CafeMenu<T>::CafeMenu(){
    length = 0;
    addItem("磨铁咖啡", "上等咖啡豆研制", true, 0.85);
    addItem("卡布奇诺", "美味可口，助于消化", true, 0.95);
    addItem("香醇奶茶", "美味芬芳", true, 1.85);
}

template<class T>
CafeMenu<T>::~CafeMenu(){
    if (menuItems.size() > 0)
    {
        for (map<int, T*>::iterator iter = menuItems.begin(); iter != menuItems.end(); iter++)
        {
            delete *(iter->second);
            *(iter->second) = NULL;
        }
    }
    menuItems.clear();
    if (menuIterator != NULL)
    {
        delete menuIterator;
        menuIterator = NULL;
    }
}

template<class T>
void CafeMenu<T>::addItem(string name, string description, bool vegetarian, double price){
    MenuItem* item = new MenuItem(name, description, vegetarian, price);
    menuItems.insert(pair<int, T*>(length++, item));
}

template<class T>
Iterator<T>* CafeMenu<T>::createIterator(){
    if (menuIterator == NULL)
    {
        menuIterator = new CafeMenuIterator<T>(&menuItems, this->length);
    }
    return menuIterator;
}
