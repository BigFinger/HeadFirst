#include "CholocateBolier.h"
#include <windows.h>
#include <process.h>

extern CRITICAL_SECTION g_SingletonSection;
HANDLE g_threadEvent;
const int threadNum = 100;

unsigned int __stdcall ThreadRun(void* number){
	volatile ChocolateBolier* singleBolier = ChocolateBolier::getInstance();
	int num = *(int*)number + 1;
	SetEvent(g_threadEvent);
	Sleep(100);
	printf("线程序号：%d, 获取到的单例指针:%d\n", num, singleBolier);
	return 0;
}

int main(){
	InitializeCriticalSection(&g_SingletonSection);
	g_threadEvent = CreateEvent(NULL, false, false, NULL);
	HANDLE *threadHandle = new HANDLE[threadNum];
	for (int i = 0; i < threadNum;)
	{
		threadHandle[i] = (HANDLE)_beginthreadex(NULL, 0, ThreadRun, &i, true, NULL);
		WaitForSingleObject(g_threadEvent, INFINITE);
		i++;
	}
	WaitForMultipleObjects(threadNum, threadHandle, true, INFINITE);
	ChocolateBolier::releaseInstance();
	DeleteCriticalSection(&g_SingletonSection);
	CloseHandle(g_threadEvent);
	delete[] threadHandle;
	threadHandle = NULL;
	getchar();
	return 0;
}