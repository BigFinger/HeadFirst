#include "Waitress.h"

Waitress::Waitress(){
    pancakeHouseMenu = new PancakeHouseMenu<MenuItem>();
    dinnerMenu = new DinnerMenu<MenuItem>();
    cafeMenu = new CafeMenu<MenuItem>();
}

Waitress::~Waitress(){
    if (pancakeHouseMenu != NULL)
    {
        delete pancakeHouseMenu;
        pancakeHouseMenu = NULL;
    }
    if (dinnerMenu != NULL)
    {
        delete dinnerMenu;
        dinnerMenu = NULL;
    }
}

void Waitress::printMenu(){
    Iterator<MenuItem>* pancakeHouseIterator = this->pancakeHouseMenu->createIterator();
    Iterator<MenuItem>* dinnerIterator = this->dinnerMenu->createIterator();
    Iterator<MenuItem>* cafeIterator = this->cafeMenu->createIterator();
    printf("MENU\n----\nBREAKFAST");
    printMenu(pancakeHouseIterator);
    printf("MENU\n----\nLUNCH");
    printMenu(dinnerIterator);
    printf("MENU\n----\SUPPER");
    printMenu(cafeIterator);
}

void Waitress::printMenu(Iterator<MenuItem>* iterator){
    while(iterator->hasNext())
    {
        MenuItem& menuItem = iterator->next();
        printf("%s, ",menuItem.getName().c_str());
        printf("%0.2f --",menuItem.getPrice());
        printf("%s \n",menuItem.getDescription().c_str());
    }
}