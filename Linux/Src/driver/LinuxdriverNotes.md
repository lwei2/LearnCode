#Linux driver

编写驱动：
	1.函数入口形式：
		1.1 缺省
			int __init init_module(void);	//驱动模块入口函数，即加载模块时初始化函数。
			void __exit cleanup_module(void);	//卸载驱动函数
		1.2 不缺省
			static int __init 函数名_init(void);	//驱动模块入口函数，即加载模块时初始化函数。
			static void __exit 函数名_exit(void);	//卸载驱动函数
		综上所述，缺省情况下，函数名称是固定的，反之，可根据自己需要定义驱动入口和结束函数，即函数名_init
	2.驱动的编写要求：
		2.1 添加LICENSE声明
			 linux是开源的系统，那就要我们遵守一定的规范，我们一般用GPL规范，所以在驱动编写时都要声明一下
        			MODULE_LICENSE(“GPL”);
	3.驱动运行：
		3.1 加载驱动
			#insmod xxx.ko
		3.2 卸载驱动
			#rmmod xxx.ko
		3.3 查看内核中驱动信息
			#lsmod
		3.4 查看模块的描述信息
			#modinfo xxx.ko
		3.5 查看模块打印信息
			#dmesg
