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
    addItem("ĥ������", "�ϵȿ��ȶ�����", true, 0.85);
    addItem("������ŵ", "��ζ�ɿڣ���������", true, 0.95);
    addItem("�㴼�̲�", "��ζ�ҷ�", true, 1.85);
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
