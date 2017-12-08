#include "FactoryMethod/PizzaStore.h"

namespace FactoryMethod{
	void PizzaStore::orderPizza(PIZZATYPE type){
		Pizza* pizza = createPizza(type);
		pizza->show();
		pizza->bake();
		pizza->cut();
		pizza->box();
	}
}