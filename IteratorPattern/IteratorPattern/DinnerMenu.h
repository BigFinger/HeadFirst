#pragma once
#include "MenuItem.h"
#include "DinnerMenuIterator.h"

static int MAX_ITEMS = 6;

template<class T>
class DinnerMenu{
public:
    DinnerMenu();
    ~DinnerMenu();
public:
    void addItem(string name, string description, bool vegetarian, double price);
    Iterator<T>* createIterator();
private:
    int numberofItems;
    MenuItem** menuItems;
    Iterator<T>* menuIterator;
};

template<class T>
DinnerMenu<T>::DinnerMenu<T>(){
    numberofItems = 0;
    menuIterator = NULL;
    menuItems = new MenuItem*[MAX_ITEMS];
    addItem("十全大补汤", "由精致猪肉和冬虫夏草熬顿七七四十九个小时，绝对美味！", false, 299);
    addItem("清炒时蔬", "由最新鲜的蔬菜炼制，香甜可口~", false, 199);
    addItem("红烧东坡肉", "飘香四溢，本店招牌菜，入口即化...", false, 399);
}

template<class T>
DinnerMenu<T>::~DinnerMenu<T>(){
    if (menuIterator != NULL)
    {
        delete menuIterator;
        menuIterator = NULL;
    }
    if (menuItems != NULL)
    {
        for (int i = 0; i < numberofItems; i++)
        {
            delete menuItems[i];
            menuItems[i] = NULL;
        }
        delete[] menuItems;
        menuItems = NULL;
    }
}

template<class T>
void DinnerMenu<T>::addItem(string name, string description, bool vegetarian, double price){
    if (numberofItems < MAX_ITEMS)
        menuItems[numberofItems++] = new MenuItem(name, description, vegetarian, price);
    else
        printf("The Dinner Menu is Full...\n");
}

template<class T>
Iterator<T>* DinnerMenu<T>::createIterator(){
    if (menuIterator == NULL)
    {
        menuIterator = new DinnerMenuIterator<T>(menuItems, numberofItems);
    }
    return menuIterator;
}
