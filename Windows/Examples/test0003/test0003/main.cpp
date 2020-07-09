
#include <stdio.h>
#include <process.h>
#include <windows.h>

volatile long g_nLoginCount;
unsigned int __stdcall Fun(void *pPM);

const int THREAD_NUM = 10;

unsigned int __stdcall ThreadFun(void *pPM)
{
	Sleep(100);
	g_nLoginCount++;
	Sleep(50);
	return 0;
}

int main(void)
{
	g_nLoginCount = 0;
	HANDLE handle[THREAD_NUM];
	for (int i = 0; i < THREAD_NUM; i++)
		handle[i] = (HANDLE)_beginthreadex(NULL, 0, ThreadFun, NULL, 0, NULL);
	WaitForMultipleObjects(THREAD_NUM, handle, TRUE, INFINITE);
	printf("有%d个用户登录后记录结果是%d\n", THREAD_NUM, g_nLoginCount);
	return 0;
}