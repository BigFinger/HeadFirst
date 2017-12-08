#pragma once
#include "AbstractFactory/Pizza.h"

namespace AbstractFactory{
	class CheezePizza:public Pizza{
	public:
		CheezePizza(PIZZATYPE type, MaterialFactory* factory):Pizza(type, factory){}
	};
}