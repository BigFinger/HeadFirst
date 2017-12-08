#pragma once
#include "AbstractFactory/MaterialFactory.h"

namespace AbstractFactory{
	class XMMaterialFactory:public MaterialFactory{
	public:
		XMMaterialFactory(std::string name);
		Sugar* createSugar();
		Pepper* createPepper();
		std::string getName();
	};
}