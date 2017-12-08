#include "FactoryMethod/XMPizzaStore.h"
#include "FactoryMethod/BaconPizza.h"
#include "FactoryMethod/CheezePizza.h"
#include "FactoryMethod/FruitePizza.h"

namespace FactoryMethod{

	Pizza* XMPizzaStore::createPizza(PIZZATYPE type){
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