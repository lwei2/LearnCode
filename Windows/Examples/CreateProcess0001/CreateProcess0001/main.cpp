
#include <stdio.h>
#include <Windows.h>

int main(void)
{
	char szCommandLine[] = "notepad";
	STARTUPINFO si = { sizeof(si) };
	PROCESS_INFORMATION pi;
	si.dwFlags = STARTF_USESHOWWINDOW;//ָ��wShowWindow��Ա��Ч
	si.wShowWindow = TRUE;//�˳�Ա��ΪTRUE�Ļ�����ʾ�½����̵�������
	BOOL bRet = CreateProcess(
		NULL,//���ڴ�ָ����ִ���ļ����ļ���
		szCommandLine,//�����в���
		NULL,//Ĭ�Ͻ��̰�ȫ��
		NULL,//Ĭ�Ͻ��̰�ȫ��
		FALSE,//ָ����ǰ�����ھ�������Ա��ӽ��̼̳�
		CREATE_NEW_CONSOLE,//Ϊ�½��̴���һ���µĿ���̨����
		NULL,//ʹ�ñ����̵Ļ�������
		NULL,//ʹ�ñ����̵���������Ŀ¼
		&si,
		&pi);
	if (bRet)
	{
		//��ʹ�õľ����ùص�
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
		printf("�½��̵�ID�ţ�%d\n", pi.dwProcessId);
		printf("�½��̵����߳�ID�ţ�%d\n", pi.dwThreadId);
	}
	return 0;
}