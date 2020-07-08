
#include <windows.h>
#include <winioctl.h>
#include <stdio.h>

BOOL GetDriveGeometry(DISK_GEOMETRY *pdg)
{
	HANDLE hDevice;
	BOOL bResult;
	DWORD junk;


	hDevice = CreateFile("\\\\.\\PhysicalDrive3",
		0, FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL, OPEN_EXISTING, 0, NULL);
	if (INVALID_HANDLE_VALUE == hDevice)
		return FALSE;
	bResult = DeviceIoControl(hDevice,
		IOCTL_DISK_GET_DRIVE_GEOMETRY,
		NULL, 0, pdg, sizeof(*pdg), &junk, (LPOVERLAPPED)NULL);
	CloseHandle(hDevice);
}

int main(int argc, char **argv)
{
	DISK_GEOMETRY pdg;
	BOOL bResult;
	ULONGLONG DiskSize;
	bResult = GetDriveGeometry(&pdg);
	if (bResult)
	{
		printf("Cylinders = %I64d\n", pdg.Cylinders);
		printf("Tracks per cylinder=%ld\n", (ULONG)pdg.TracksPerCylinder);
		printf("Sectors per track=%ld\n", (ULONG)pdg.BytesPerSector);
		printf("Bytes per sector = %ld\n", (ULONG)pdg.BytesPerSector);

		DiskSize = pdg.Cylinders.QuadPart*(ULONG)pdg.TracksPerCylinder*(ULONG)pdg.SectorsPerTrack*(ULONG)pdg.BytesPerSector;
		printf("Disk size = %I64d(Bytes)=%I64d(Mb)=%I64d(GB)\n", DiskSize, DiskSize / (1024 * 1024),
		DiskSize/(1024*1024*1024));
	}
	else
	{
		printf("GetDriveGeometry failed. Error %ld\n", GetLastError());
	}
	return ((int)bResult);
}