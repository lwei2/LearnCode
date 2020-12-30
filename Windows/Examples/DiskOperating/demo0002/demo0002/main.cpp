

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
		printf("���ô��̿ռ��С���ֽڣ��� %I64d\n", dwAvailableByte);
		printf("���̿ռ��ܴ�С���ֽڣ� �� %I64d\n", nTotalCapacity);
		printf("���д��̿ռ��ܴ�С���ֽڣ� �� %I64d\n", nFreeCapacity);
	}

	DWORD dwSectorsPerCluster, dwBytesPerSector, dwNumberOfFreeClusters, dwTotalNumberOfClusters;

	if (GetDiskFreeSpace(szDrive, &dwSectorsPerCluster, &dwBytesPerSector,&dwNumberOfFreeClusters, &dwTotalNumberOfClusters))
	{
		printf("GetSpace by GetDiskFreeSpace()\n");
		printf("ÿ�ص��������� %d\n", dwSectorsPerCluster);
		printf("ÿ���������ֽ��� �� %d\n", dwBytesPerSector);
		printf("���д��� �� %d\n", dwNumberOfFreeClusters);

		printf("�ܵĴ����� %d\n", dwTotalNumberOfClusters);
		printf("���̿ռ��ܴ�С���ֽڣ� �� %I64d\n", (DWORD64)dwTotalNumberOfClusters *(DWORD64)dwSectorsPerCluster * (DWORD64)dwBytesPerSector);
		printf("���д��̿ռ��ܴ�С���ֽڣ� �� %I64d\n", (DWORD64)dwNumberOfFreeClusters*(DWORD64)dwSectorsPerCluster * (DWORD64)dwBytesPerSector);
	}
}

int main(int argc, char *argv[])
{
	CHAR szDriverName[100] = "F:";
	GetDiskSpaceInformation(szDriverName);
	return 0;
}