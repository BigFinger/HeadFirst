#include <iostream>
#include "AbstractFactory/XMMaterialFactory.h"
#include "AbstractFactory/XMPizzaStore.h"
using namespace AbstractFactory;
int main(){
	XMMaterialFactory factory("����ԭ���ϳ�");
	XMPizzaStore store(&factory);
	store.orderPizza(CHEEZE);
	getchar();
	return 0;
}