#pragma once
#include <iostream>
using namespace std;

class Beverage{
public:
	Beverage();
	virtual double cost() = 0;
	virtual string getDescription();
	void setDescription(string d);

private:
	string description;
};