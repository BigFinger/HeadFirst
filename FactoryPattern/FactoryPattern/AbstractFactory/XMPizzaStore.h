#pragma once
#include "AbstractFactory/PizzaStore.h"

namespace AbstractFactory{
	class XMPizzaStore:public PizzaStore{
	public:
		XMPizzaStore(MaterialFactory* factory):PizzaStore(factory){}
	protected:
		Pizza* createPizza(PIZZATYPE type);
	};
}