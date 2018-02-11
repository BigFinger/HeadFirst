#include "MenuItem.h"

MenuItem::MenuItem(string name, string description, bool vegetarian, double price){
    this->name = name;
    this->description = description;
    this->vegetarian = vegetarian;
    this->price = price;
}

string MenuItem::getName(){
    return this->name;
}

string MenuItem::getDescription(){
    return this->description;
}

double MenuItem::getPrice(){
    return this->price;
}

bool MenuItem::isVegetarian(){
    return this->vegetarian;
}