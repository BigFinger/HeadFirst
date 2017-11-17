#pragma once
#include "Condiment.h"

class Whip:public CondimentDecorator{
public:
	Whip(Beverage* b);
	double cost();
	string getDescription();
private:
	Beverage* beverage;
};