#pragma once
#include "SimpleFactory/Pizza.h"

namespace SimpleFactory{
	class FruitePizza:public Pizza{
	public:
		FruitePizza(PIZZATYPE type):Pizza(type){}
	};
}