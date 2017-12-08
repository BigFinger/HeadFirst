#pragma once
#include "AbstractFactory/Pepper.h"

namespace AbstractFactory{
	class GreenPepper:public Pepper{
	public:
		GreenPepper(){
			pepperName = "GreenPepper";
		}
	};
}