#pragma once
#include "MenuItem.h"
#include "Iterator.h"

template<class T>
int DinnerMenu::MAX_ITEMS = 6;

template<class T>
class DinnerMenu{
public:
    DinnerMenu();
    void addItem(string name, string description, bool vegetarian, double price);
    Iterator<T>* createIterator();
public:
    static int MAX_ITEMS;
private:
    int numberofItems;
    MenuItem* menuItems;
};

template<class T>
DinnerMenu::DinnerMenu(){
    menuItems = new MenuItem[DinnerMenu::MAX_ITEMS];
    addItem("ʮȫ����", "�ɾ�������Ͷ����Ĳݰ���������ʮ�Ÿ�Сʱ��������ζ��"�� false�� 299);

}