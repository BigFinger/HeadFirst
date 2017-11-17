#pragma once
#include "Beverage.h"

class HouseBlend:public Beverage{
public:
	HouseBlend(string d);
	double cost();
};