#pragma once
#include "SimpleFactory/PizzaFactory.h"
#include "SimpleFactory/Pizza.h"

namespace SimpleFactory{
	class PizzaStore{
	public:
		PizzaStore(PizzaFactory* factory);
	public:
		void orderPizza(PIZZATYPE type);
	private:
		PizzaFactory* _factory;
	};
}