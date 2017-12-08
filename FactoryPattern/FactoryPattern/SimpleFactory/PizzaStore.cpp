#include "SimpleFactory/PizzaStore.h"
namespace SimpleFactory{

	PizzaStore::PizzaStore(PizzaFactory* factory){
		_factory = factory;
	}

	void PizzaStore::orderPizza(PIZZATYPE type){
		if (_factory != NULL)
		{
			Pizza* pizza = _factory->createPizza(type);
			pizza->show();
			pizza->bake();
			pizza->cut();
			pizza->box();
		}
	}
}