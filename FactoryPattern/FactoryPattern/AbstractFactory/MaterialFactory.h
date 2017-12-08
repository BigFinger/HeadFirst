#pragma once
#include "AbstractFactory/Sugar.h"
#include "AbstractFactory/Pepper.h"

namespace AbstractFactory{
	class MaterialFactory{
	public:
		virtual Sugar* createSugar() = 0;
		virtual Pepper* createPepper() = 0;
		virtual std::string getName() = 0;
	protected:
		std::string _factoryName;
	};
}