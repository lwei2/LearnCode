/*************************************************************************
    > File Name: MessageBox_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <windows.h>
#pragma comment (lib, "User32.lib")

int WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine,
		int nCmdShow)
{
	MessageBox(NULL, TEX("Learn to Windows"), TEXT("Message"), MB_OK);
	return 0;
}

