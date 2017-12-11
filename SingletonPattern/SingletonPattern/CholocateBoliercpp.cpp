#include "CholocateBolier.h"
#include <windows.h>

CRITICAL_SECTION g_SingletonSection;
volatile ChocolateBolier* ChocolateBolier::_bolierInstance = NULL;

ChocolateBolier::ChocolateBolier(){}

volatile ChocolateBolier* ChocolateBolier::getInstance(){
	if (_bolierInstance == NULL)
	{
		EnterCriticalSection(&g_SingletonSection);
		if (_bolierInstance == NULL)
		{
			_bolierInstance = new ChocolateBolier();
		}
		LeaveCriticalSection(&g_SingletonSection);
	}
	return _bolierInstance;
}

void ChocolateBolier::releaseInstance(){
	if (_bolierInstance != NULL)
	{
		EnterCriticalSection(&g_SingletonSection);
		if (_bolierInstance != NULL)
		{
			printf("µ¥ÀýÊÍ·Å\n");
			delete _bolierInstance;
			_bolierInstance = NULL;
		}
		LeaveCriticalSection(&g_SingletonSection);
	}
}