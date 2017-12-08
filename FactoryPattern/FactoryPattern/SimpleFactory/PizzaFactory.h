#pragma once
#include "SimpleFactory/Pizza.h"

namespace SimpleFactory{
	class PizzaFactory{
	public:
		Pizza* createPizza(PIZZATYPE type);
	};
}