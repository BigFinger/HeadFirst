#pragma once
#include "FactoryMethod/PizzaStore.h"

namespace FactoryMethod{
	class XMPizzaStore:public PizzaStore{
	protected:
		Pizza* createPizza(PIZZATYPE type);
	};
}