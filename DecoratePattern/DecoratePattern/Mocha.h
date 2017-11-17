#pragma once
#include "Condiment.h"

class Mocha:public CondimentDecorator{
public:
	Mocha(Beverage* b);
	double cost();
	string getDescription();
private:
	Beverage* beverage;
};