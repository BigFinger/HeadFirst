#pragma once
#include <iostream>
#include "CaffeineBeverage.h"
using namespace std;

class Tea : public CaffeineBeverage{
public:
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};