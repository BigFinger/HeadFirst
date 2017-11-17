#include "Beverage.h"

Beverage::Beverage(){
	description = "Unknown Coffee";
}

string Beverage::getDescription(){
	return description;
}



void Beverage::setDescription(string d){
	description = d;
}