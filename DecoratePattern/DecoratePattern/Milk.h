#pragma once
#include "Condiment.h"

class Milk:public CondimentDecorator{
public:
	Milk(Beverage* b);
	double cost();
	string getDescription();
private:
	Beverage* beverage;
};