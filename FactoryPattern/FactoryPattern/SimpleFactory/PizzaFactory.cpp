#include "SimpleFactory/PizzaFactory.h"
#include "SimpleFactory/BaconPizza.h"
#include "SimpleFactory/FruitePizza.h"
#include "SimpleFactory/CheezePizza.h"

namespace SimpleFactory{

	Pizza* PizzaFactory::createPizza(PIZZATYPE type){
		Pizza *pizza = NULL;
		switch (type)
		{
		case BACON:
			pizza = new BaconPizza(type);
			break;
		case CHEEZE:
			pizza = new CheezePizza(type);
			break;
		case FRUITE:
			pizza = new FruitePizza(type);
			break;
		default:
			break;
		}
		return pizza;
	}
}