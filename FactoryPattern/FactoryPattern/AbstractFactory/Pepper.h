#pragma once
#include <string>
#include <iostream>

namespace AbstractFactory{
	class Pepper{
	public:
		Pepper();
		std::string getPepperName();
	protected:
		std::string pepperName;
	};
}