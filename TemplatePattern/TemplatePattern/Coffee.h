#pragma once
#include <iostream>
#include "CaffeineBeverage.h"
using namespace std;

class Coffee : public CaffeineBeverage{
public:
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};