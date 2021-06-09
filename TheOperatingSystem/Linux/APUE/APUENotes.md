APUE笔记
============

	APUE主要讨论三部分:文件IO，并发，进程间通信

	文件IO分为标准IO、系统IO。其中标准IO的优点是可移植性高，缺点是性能比系统IO差，且功能没有系统IO丰富。

	大端:低地址存放高位数据，高地址存放低位数据。
	小端:低地址存放低位数据，高地址存放高位数据。



## 常用的函数

1.fork
	函数原型：pid_t fork(void)
	返回值: 在父进程中，fork返回新创建子进程的进程ID;
			在子进程中，fork返回0;
			若出错，fork返回负值(-1).
2.pid_t getpid(void);
    返回值:进程ID
3.pid_t getppid(void);
    返回值:父进程ID

4.int setuid(int uid);
5.getuid
	头文件： #include <unistd.h>
			#include <sys/types.h>
	函数原型：uid_t getuid(void);
	函数功能：返回当前执行进程的识别码。
	函数参数：