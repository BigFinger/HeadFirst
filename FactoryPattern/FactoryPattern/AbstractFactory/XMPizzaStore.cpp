#include "AbstractFactory/XMPizzaStore.h"
#include "AbstractFactory/BaconPizza.h"
#include "AbstractFactory/CheezePizza.h"
#include "AbstractFactory/FruitePizza.h"
namespace AbstractFactory{

	Pizza* XMPizzaStore::createPizza(PIZZATYPE type){
	Pizza *pizza = NULL;
	switch (type)
	{
	case BACON:
		pizza = new BaconPizza(type, _factory);
		break;
	case CHEEZE:
		pizza = new CheezePizza(type, _factory);
		break;
	case FRUITE:
		pizza = new FruitePizza(type, _factory);
		break;
	default:
		break;
	}
	return pizza;
}
}