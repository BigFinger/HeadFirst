#include <iostream>
#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Milk.h"
#include "Whip.h"
#include "Mocha.h"
using namespace std;

int main(){
	Beverage* beverage1 = new Espresso("Ũ������");
	cout << "������:" << beverage1->getDescription().c_str() << "   �۸���:" << beverage1->cost()<<endl;

	Beverage* beverage = new HouseBlend("��Ͽ���");
	beverage = new Mocha(beverage);
	beverage = new Whip(beverage);
	beverage = new Milk(beverage);
	cout << "������:" << beverage->getDescription().c_str() << "   �۸���:" << beverage->cost()<<endl;
	getchar();
	return 0;
}