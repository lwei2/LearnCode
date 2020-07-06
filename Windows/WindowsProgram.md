Windows程序
1.windows程序以WinMain()作为入口函数,控制台程序以main()作为入口函数，动态连接库以DllMain()作为入口函数。
Windows程序编译环境
	Windows环境下


CMD命令使用

查看磁盘序列号
	1.cmd
	2.diskpart
	3.list disk
	4.select disk 0/1/2
	5.detail disk


硬盘的分类
	1.接口类型：IDE硬盘、SATA硬盘、SCSI硬盘、其他接口盘

SSD固态硬盘常识
	1.	


#Windows API - https://docs.microsoft.com/zh-tw/windows/win32/api/ioapiset/nf-ioapiset-deviceiocontrol?redirectedfrom=MSDN
	D.DeviceIoControl		
		1.函数原型：BOOL WINAPI DeviceIoControl(
				  _In_        HANDLE       hDevice,
				  _In_        DWORD        dwIoControlCode,
				  _In_opt_    LPVOID       lpInBuffer,
				  _In_        DWORD        nInBufferSize,
				  _Out_opt_   LPVOID       lpOutBuffer,
				  _In_        DWORD        nOutBufferSize,
				  _Out_opt_   LPDWORD      lpBytesReturned,
				  _Inout_opt_ LPOVERLAPPED lpOverlapped
			);
		2.函数参数：
				hDevice [in] - 需要执行操作的设备句柄。该设备通常是卷，目录，文件或流，使用 CreateFile 函数打开获取设备句柄。具体的见备注


	1.GetLastError();
		返回值：
		〖0〗-操作成功完成。
		〖1〗-功能错误。
		〖2〗-系统找不到指定的文件。
		〖3〗-系统找不到指定的路径。
		〖4〗-系统无法打开文件。
		〖5〗-拒绝访问。
		〖6〗-句柄无效。
		〖7〗-存储控制块被损坏。
		〖8〗-存储空间不足，无法处理此命令。
		〖9〗-存储控制块地址无效。
		〖10〗-环境错误。



#include <stdio.h>
#define my_printf(fmt,...) printf(fmt,##__VA_ARGS__)
#define TRACE_CDH(fmt,...)\
                printf("%s-%s--->>%s:%s(%d):"fmt, __DATE__,__TIME__,__FILE__,__FUNCTION__, __LINE__,##__VA_ARGS__)
//...和__VA_ARGS__ 对应 为可变参数 ##的作用当可变参数的个数为0时去掉前面的逗号 宏__STDC__的作用为实现是为标准 如果是标准为1 非标准为非1
//fmt是固定的
int main(int argc, char**argv)
{
                int a = 1;
                TRACE_CDH();//##作用在这 可变参数没有时 会把之前的逗号去掉
                my_printf("a=%d\n",a);// 如果逗号前面是fmt,这个形式的如果没有参数会报错  所以##要不要无所谓
                return 0;
}


"QLabel{border-image:url(:/res/main/Icon.png);border-radius:0px;}"

常用网址：
	1.https://wenku.baidu.com/view/73f3148ba200a6c30c22590102020740bf1ecd63.html?rec_flag=default
	2.https://wenku.baidu.com/view/1f14d363974bcf84b9d528ea81c758f5f61f2985.html
	3.http://www.elecfans.com/yuanqijian/jiekou/20180326652414_a.html
	4.https://docs.microsoft.com/zh-cn/windows-hardware/drivers/kernel/state-transitions-for-pnp-devices
	5.http://bbs.mydigit.cn/read.php?tid=331754