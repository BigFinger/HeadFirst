#pragma once
#include "FactoryMethod/Pizza.h"

namespace FactoryMethod{
	class PizzaStore{
	public:
		void orderPizza(PIZZATYPE type);
	protected:
		virtual Pizza* createPizza(PIZZATYPE type){return NULL;};
	};
}