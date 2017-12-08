#pragma once
#include "FactoryMethod/Pizza.h"

namespace FactoryMethod{
	class CheezePizza:public Pizza{
	public:
		CheezePizza(PIZZATYPE type):Pizza(type){}
	};
}