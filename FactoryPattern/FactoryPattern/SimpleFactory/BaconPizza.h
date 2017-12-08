#pragma once
#include "SimpleFactory/Pizza.h"

namespace SimpleFactory{
	class BaconPizza : public Pizza{
	public:
		BaconPizza(PIZZATYPE type):Pizza(type){}
	};
}