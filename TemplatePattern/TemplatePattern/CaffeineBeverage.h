#pragma once
#include <iostream>
using namespace std;

class CaffeineBeverage{
public:
    void prepareRecipe();
private:
    void boilWater();
    void pourInCup();
    virtual bool customerWantsCondiments();
private:
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
};