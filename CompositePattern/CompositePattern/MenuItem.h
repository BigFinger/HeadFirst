#pragma once
#include <string>
using namespace std;

class MenuItem{
public:
    MenuItem(string name, string description, bool vegetarian, double price);
    string getName();
    string getDescription();
    double getPrice();
    bool isVegetarian();
    bool operator == (MenuItem& item);
private:
    string name;
    string description;
    bool vegetarian;
    double price;
};