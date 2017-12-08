#pragma once
#include "AbstractFactory/Pepper.h"

namespace AbstractFactory{
	class RedPepper:public Pepper{
	public:
		RedPepper(){
			pepperName = "RedPepper";
		}
	};
}