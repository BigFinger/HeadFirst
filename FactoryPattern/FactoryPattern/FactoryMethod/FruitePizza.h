#pragma once
#include "FactoryMethod/Pizza.h"

namespace FactoryMethod{
	class FruitePizza:public Pizza{
	public:
		FruitePizza(PIZZATYPE type):Pizza(type){}
	};
}