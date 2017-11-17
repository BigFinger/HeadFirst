#include "Mocha.h"

Mocha::Mocha(Beverage* b){
	this->beverage = b;
}

double Mocha::cost(){
	return beverage->cost() * 1.2;
}


string Mocha::getDescription(){
	string ret = beverage->getDescription();
	ret += " Mocha";
	return  ret;
}