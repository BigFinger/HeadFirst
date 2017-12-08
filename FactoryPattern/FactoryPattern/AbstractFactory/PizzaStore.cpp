#include "AbstractFactory/PizzaStore.h"

namespace AbstractFactory{
	void PizzaStore::orderPizza(PIZZATYPE type){
		Pizza* pizza = createPizza(type);
		pizza->prepare();
		pizza->show();
		pizza->bake();
		pizza->cut();
		pizza->box();
	}
}