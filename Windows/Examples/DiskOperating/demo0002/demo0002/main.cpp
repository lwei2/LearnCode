

#include <stdio.h>
#include <Windows.h>


void GetDiskSpaceInformation(LPSTR szDrive)
{
	printf("volume  %s \n", szDrive);

	DWORD64 dwAvailableByte, dwTotalNumberOfByte, dwFreeNumberOfByte;
	if (!GetDiskFreeSpaceEx(szDrive, (PULARGE_INTEGER)&dwAvailableByte,
		(PULARGE_INTEGER)&dwTotalNumberOfByte, (PULARGE_INTEGER)&dwFreeNumberOfByte))
	{
		printf("cannot get disk free space \n");
	}
	else
	{
		DWORD64 nTotalCapacity = (DWORD64)dwTotalNumberOfByte;
		DWORD64 nFreeCapacity = (DWORD64)dwFreeNumberOfByte;
		printf("GetSpace by GetDiskFreeSpaceEx()\n");
		printf("可用磁盘空间大小（字节）： %I64d\n", dwAvailableByte);
		printf("磁盘空间总大小（字节） ： %I64d\n", nTotalCapacity);
		printf("空闲磁盘空间总大小（字节） ： %I64d\n", nFreeCapacity);
	}

	DWORD dwSectorsPerCluster, dwBytesPerSector, dwNumberOfFreeClusters, dwTotalNumberOfClusters;

	if (GetDiskFreeSpace(szDrive, &dwSectorsPerCluster, &dwBytesPerSector,&dwNumberOfFreeClusters, &dwTotalNumberOfClusters))
	{
		printf("GetSpace by GetDiskFreeSpace()\n");
		printf("每簇的扇区数： %d\n", dwSectorsPerCluster);
		printf("每个扇区的字节数 ： %d\n", dwBytesPerSector);
		printf("空闲簇数 ： %d\n", dwNumberOfFreeClusters);

		printf("总的簇数： %d\n", dwTotalNumberOfClusters);
		printf("磁盘空间总大小（字节） ： %I64d\n", (DWORD64)dwTotalNumberOfClusters *(DWORD64)dwSectorsPerCluster * (DWORD64)dwBytesPerSector);
		printf("空闲磁盘空间总大小（字节） ： %I64d\n", (DWORD64)dwNumberOfFreeClusters*(DWORD64)dwSectorsPerCluster * (DWORD64)dwBytesPerSector);
	}
}

int main(int argc, char *argv[])
{
	CHAR szDriverName[100] = "F:";
	GetDiskSpaceInformation(szDriverName);
	return 0;
}