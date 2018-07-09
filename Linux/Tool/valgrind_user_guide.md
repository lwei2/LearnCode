valgrind简介
	Valgrind是一套Linux下，开放源代码（GPL V2）的仿真调试工具的集合。Valgrind由内核（core）以及基于内核的其他调试工具组成。内核类似于一个框架（framework），它模拟了一个CPU环境，并提供服务给其他工具；而其他工具则类似于插件 (plug-in)，利用内核提供的服务完成各种特定的内存调试任务.

一个典型的Linux C程序内存空间由代码段（.text）、初始化化数据段（.data）、未初始化数据段（.bss）、堆（Heap）、栈（Stack）。
