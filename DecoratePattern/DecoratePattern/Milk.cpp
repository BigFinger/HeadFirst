#include "Milk.h"

Milk::Milk(Beverage* b){
	this->beverage = b;
}

double Milk::cost(){
	return 1.1 * this->beverage->cost();
}

string Milk::getDescription(){
	string ret = beverage->getDescription();
	ret += " Milk";
	return  ret;
}