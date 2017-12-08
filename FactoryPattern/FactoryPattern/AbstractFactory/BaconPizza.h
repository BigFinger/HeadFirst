#pragma once
#include "AbstractFactory/Pizza.h"

namespace AbstractFactory{
	class BaconPizza:public Pizza{
	public:
		BaconPizza(PIZZATYPE type, MaterialFactory* factory):Pizza(type,factory){}
	};
}