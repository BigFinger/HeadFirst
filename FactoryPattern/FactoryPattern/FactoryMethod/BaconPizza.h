#pragma once
#include "FactoryMethod/Pizza.h"

namespace FactoryMethod{
	class BaconPizza: public Pizza{
	public:
		BaconPizza(PIZZATYPE type):Pizza(type){}
	};
}