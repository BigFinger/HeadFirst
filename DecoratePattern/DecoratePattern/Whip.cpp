#include "Whip.h"

Whip::Whip(Beverage *b){
	beverage = b;
}

double Whip::cost(){
	return beverage->cost() * 1.1;
}

string Whip::getDescription(){
	string ret = beverage->getDescription();
	ret += " Whip";
	return ret;
}