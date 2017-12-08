#pragma once
#include "SimpleFactory/Pizza.h"

namespace SimpleFactory{
	class CheezePizza:public Pizza{
	public:
		CheezePizza(PIZZATYPE type):Pizza(type){}
	};
}