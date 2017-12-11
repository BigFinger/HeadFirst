#pragma once
#include <iostream>

class ChocolateBolier{
public:
	static volatile ChocolateBolier* getInstance();
	static void releaseInstance();
private:
	ChocolateBolier();
private:
	static volatile ChocolateBolier* _bolierInstance;
};