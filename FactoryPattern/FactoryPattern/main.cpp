#include <iostream>
#include "AbstractFactory/XMMaterialFactory.h"
#include "AbstractFactory/XMPizzaStore.h"
using namespace AbstractFactory;
int main(){
	XMMaterialFactory factory("厦门原材料厂");
	XMPizzaStore store(&factory);
	store.orderPizza(CHEEZE);
	getchar();
	return 0;
}