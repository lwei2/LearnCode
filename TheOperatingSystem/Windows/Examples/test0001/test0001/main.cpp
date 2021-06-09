/*read the HHD
*/


//#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <winioctl.h>
#define ULONG_PTR ULONG
#include <ntddscsi.h> //SDK里面的头文件
using namespace std;

int main(int argc, char* argv[])
{
	HANDLE hDevice;
	ATA_PASS_THROUGH_DIRECT aptd;
	BYTE DataBuffer[512] = { 0 };
	DWORD ByteReturned;
	//1.get the handler
	hDevice = CreateFile("\\\\.\\PHYSICALDRIVE4", GENERIC_ALL, NULL, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hDevice != INVALID_HANDLE_VALUE)
	{
		aptd.Length = sizeof(ATA_PASS_THROUGH_DIRECT);
		aptd.AtaFlags = ATA_FLAGS_DATA_IN;
		aptd.PathId = 0;
		aptd.TargetId = 0;
		aptd.Lun = 0;
		aptd.ReservedAsUchar = 0;
		aptd.DataTransferLength = sizeof(DataBuffer);
		aptd.TimeOutValue = 3;
		aptd.ReservedAsUlong = 0;
		aptd.DataBuffer = DataBuffer;
		ZeroMemory(aptd.PreviousTaskFile, sizeof(aptd.PreviousTaskFile));
		aptd.CurrentTaskFile[0] = 0;	//Features Register
		aptd.CurrentTaskFile[1] = 1;	//Sector Count Register
		aptd.CurrentTaskFile[2] = 0;	//Sector Number Register
		aptd.CurrentTaskFile[3] = 0;	//Cylinder Low Register
		aptd.CurrentTaskFile[4] = 0;	//Cylinder High Register
		aptd.CurrentTaskFile[5] = 0;	//Device/Head Register
		aptd.CurrentTaskFile[6] = 0x20;	//Command Register
		aptd.CurrentTaskFile[7] = 0;	//Reserved
		if (DeviceIoControl(hDevice, IOCTL_ATA_PASS_THROUGH_DIRECT, &aptd, sizeof(ATA_PASS_THROUGH_DIRECT), &aptd, sizeof(ATA_PASS_THROUGH_DIRECT), &ByteReturned, NULL))
		{
			for (int i = 0; i < 512; i++)
			{
				if (i % 16 == 0)
				{
					printf("\n");
				}
				printf("%02X ", DataBuffer[i]);
			}
			printf("\n读取磁盘完成!\n");
		}
		else
		{
			printf("Error:%d\n", GetLastError());
			printf("DeviceIoControl错误!");
		}
	}
	else
	{
		printf("打开设备失败!");
	}
	CloseHandle(hDevice);
	return 0;
}