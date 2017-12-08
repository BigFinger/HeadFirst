#pragma once
#include "AbstractFactory/Pizza.h"

namespace AbstractFactory{
	class FruitePizza:public Pizza{
	public:
		FruitePizza(PIZZATYPE type, MaterialFactory* factory):Pizza(type,factory){}
	};
}