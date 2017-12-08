#pragma once
#include "AbstractFactory/Pizza.h"
#include "AbstractFactory/MaterialFactory.h"

namespace AbstractFactory{
	class PizzaStore{
	public:
		PizzaStore(MaterialFactory* factory):_factory(factory){}
		void orderPizza(PIZZATYPE type);
	protected:
		virtual Pizza* createPizza(PIZZATYPE type){return NULL;};
	protected:
		MaterialFactory* _factory;
	};
}