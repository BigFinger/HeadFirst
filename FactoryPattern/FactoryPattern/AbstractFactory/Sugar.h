#pragma once
#include <string>
#include <iostream>

namespace AbstractFactory{
	class Sugar{
	public:
		Sugar();
		std::string getSugarName();
	protected:
		std::string sugarName;
	};
}
