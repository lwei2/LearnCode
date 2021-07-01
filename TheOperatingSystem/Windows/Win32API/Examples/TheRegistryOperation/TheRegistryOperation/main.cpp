

//#include <afxwin.h>
#include <Windows.h>

#pragma comment(lib, "User32.lib")

/*

LONG RegOpenKeyEx(
	HKEY hKey,         // handle to open key主键
	LPCTSTR lpSubKey,  // subkey name子键
	DWORD ulOptions,   // reserved。必须是0
	REGSAM samDesired, // security access mask读写标识
	PHKEY phkResult    // handle to open key返回的HKEY类型的指针。以后，读写，关闭用这个指针
);
*/
int main(int argc, char **argv)
{

	HKEY hKEY;
	HKEY hKeyRoot = HKEY_LOCAL_MACHINE;
	long ret0 = (::RegOpenKeyEx(hKeyRoot, "SoftWare\\Knight Studio\\Knight", 0, KEY_READ, &hKEY));
	if (ret0 != ERROR_SUCCESS)
	{
		MessageBox(NULL, TEXT("错误：无法打开有关的hKey"), TEXT("提示"), MB_YESNOCANCEL);
	}
	return 0;
}