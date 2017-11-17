#include <iostream>
#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Milk.h"
#include "Whip.h"
#include "Mocha.h"
using namespace std;

int main(){
	Beverage* beverage1 = new Espresso("浓缩咖啡");
	cout << "咖啡是:" << beverage1->getDescription().c_str() << "   价格是:" << beverage1->cost()<<endl;

	Beverage* beverage = new HouseBlend("混合咖啡");
	beverage = new Mocha(beverage);
	beverage = new Whip(beverage);
	beverage = new Milk(beverage);
	cout << "咖啡是:" << beverage->getDescription().c_str() << "   价格是:" << beverage->cost()<<endl;
	getchar();
	return 0;
}