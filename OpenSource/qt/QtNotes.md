#Qt
	第一章. Qt简介
	第二章.



# 第一章.Qt简介
>	Qt是一个跨平台应用程序和UI开发框架。使用Qt只需一次性开发应用程序，无须重新编写源代码，便可跨不同桌面和嵌入式操作系统部署这些应用程序。Qt Software 的前身为创始于1994年的Trolltech（奇趣科技），Trolltech于2008年6月被 Nokia 收购，加速了其跨平台开发战略，2011年3月Qt被芬兰的Digia公司收购。
>	Qt Creator是全新的跨平台 Qt IDE（集成开发环境），可单独使用，也可与 Qt 库和开发工具组成一套完整的SDK（软件开发工具包 ）。其中包括：高级 C++ 代码编辑器、项目和生成管理工具、集成的上下文相关的帮助系统、图形化调试器、代码管理和浏览工具。
>	

## Qt环境搭建	
	MinGW即Minimalist GNU For Windows，是将GNU开发工具移植到Win32平台下的产物，是一套Windows上的GNU工具集。用其开发的程序不需要额外的第三方DLL支持就可以直接在Windows下运行。更多内容请查看http://www.mingw.org 。
## Qt 安装

## Qt 编译
	1.显示版本信息:
		# qmake -v 
	2.生成makefile
		# qmake *.pro

## Qt源码编译
>	在默认情况下，用QtCreator编译程序时，使用的是动态编译。编译好的程序在运行时需要另外加上相应的Qt库文件，一大堆dll文件。如果想将生成的程序连同所需要的库一起完整地打包成一个可执行程序，那就需要使用静态编译。Qt官方不提供静态编译好的安装包，所以需要我们在自己的电脑上静态编译。而且exe文件会比动态编译的要小上很多。
	1.下载Qt源码
		#Qt最新版的源码下载地址：Index of /archive/qt/xxx/xxx.xx/
	2.根据Qt官方文档和编译平台下载相关的工具。
		关于Windows平台下编译源码，需下载如下工具：
		2.1 下载安装ActivePerl
			> perl.exe -v  //检查版本，判断是否已经安装成功
		2.2 下载安装Python
			> python.exe 	//同上
		2.3 下载安装Ruby				
			> ruby.exe
	3.选择编译环境,例如：VS xxx的开发人员命令提示符
	4.编译并安装
		4.1 进入Qt解压后的源码路径下
		4.2 修改源码配置文件qtbase\mkspecs\common\msvc-desktop.conf文件，即
			-MD修改为-MT,-MDd修改为-MTd。D是动态编译(dynamic)，T是静态编译（static）。
		4.3 配置编译环境：
			configure.bat 
				-static //指明是静态编译
				-prefix "D:\qt" //指明安装的目录
				-confirm-license -opensource  //指明是开源版本的qt
				-debug-and-release //指明需要debug版和release版，可以单独选择release版
				-platform win32-msvc  //指明使用msvc编译
				-nomake examples -nomake tests  //不编译样例
				-plugin-sql-sqlite -plugin-sql-odbc -qt-zlib -qt-libpng -qt-libjpeg //可选插件
				-opengl desktop 
				-mp //多核编译
			例如：configure.bat -static -prefix "D:\Qt\Src\qt-static-src-5.14.1" -confirm-license -opensource  -debug-and-release -platform win32-msvc  -nomake examples -nomake tests  -plugin-sql-sqlite -plugin-sql-odbc -qt-zlib -qt-libpng -qt-libjpeg -opengl desktop -mp
		4.4 编译，即 > nmake && nmake install 
		4.5 选择构建套件，Qt版本选择刚添加的静态版
## 应用程序设置图标
	1.创建.ico文件，将ico图标文件复制到工程文件夹。
	2.修改项目文件.pro文件，添加RC_ICONS = xxx.ico

## Qt控件
	QWidget类是所有用户界面对象的基类，被称为基础窗口部件。QWidget继承自QObject类和QPaintDevice类，其中QObject类是所有支持Qt对象模型（Qt Object Model）的Qt对象的的基类，QPaintDevice类是所有可以绘制的对象的基类。

## Qt多线程
	1.程序和进程的区别
		进程是动态的，程序是静态的；进程是暂时的，程序是永久的，进程是通过程序运行时得到的。
		进程是一个数据文件，进程是内存中动态运行的运行实体，用来存储数据段、代码段、指针等。
		一个程序可能对应多个进程。一个进程可能包含多个程序。
		进程是操作系统资源分配的基本单位，线程是操作系统调度执行的基本单位。每个进程包含一个或多个线程，并且每个线程都可以共享进行的资源。每个都可以共享进程的资源。线程是CPU调度和分派的基本单位，它是比进程更小的独立运行基本单位。线程不能脱离进程进行单独存在，只能依赖进程。
		在任意线程里都可以创建和撤销其他线程。一个线程死掉等于整个进程死掉。多进程的程序比多线程的程序简装，缺点在于进程切换时效率变差。
	2.Qt中的线程是以对象的形式，继承于QThread类存在的。		
		2.1 启动函数,将会执行run()函数,并且发射信号started().
			void start()[slot]
			void started() [signal]			//信号成员函数,表示该线程已启动
		2.2 线程体函数,需要用户自定义该函数执行的内容,内容里也可以使用exec()实现事件循环
			void run ();
		2.3 信号成员函数,表示该线程执行完成,已经在run()函数中return.			
			void finished () [signal]
		2.4 强制结束正在进行的线程(不推荐,因为不会考虑资源释放), 并且发射信号terminated () 
			void terminate() [slot]
			void QThread::terminated () [signal]		//信号成员函数,表示该线程已停止
		2.5 告诉线程事件循环退出，返回0表示成功，相当于调用了QThread::exit(0)。 		
			void quit();
		2.6 休眠当前线程秒,毫秒,微妙
			sleep ( unsigned long secs )、msleep()、usleep()、
		2.7 设置正在运行的线程优先级,必须在调用start()启动线程之后设置才有用
			void setPriority(Priority priority);
		2.8 线程是否结束 
			bool isFinished() const 
		2.9 线程是否正在运行 		
			bool isRunning() const 			
		2.10 阻塞等待线程执行结束,如果time(单位毫秒)时间结束,线程还未结束,则返回false,否则返回true,如果time= ULONG_MAX,则表示一直等待		 
			bool wait ( unsigned long time = ULONG_MAX );		
	3.在多线程里,一般都是自定义结束函数来结束进程.多个线程执行时,有可能某个线程会需要等到另一个线程的结果才能执行,可以通wait()成员函数实现,等待另一个线程完成.
	4.当一个全局的共有资源被多个线程同时调用时,则称该资源为临界资源,并且该资源需要使用QMutex互斥类,来保证线程间的互斥,避免同一时刻访问临界资源而出现意想不到的问题.如果多个不同的临界资源只对应一个线程锁的话,则会降低并发效率.
		3.1 获取锁,如果锁已经被其它线程获取,则将会阻塞并While等待锁释放
			void lock();
		3.2 尝试获取锁, 如果获得了锁，该函数返回true,如果另一个线程锁定了互斥锁，则该函数立即返回false。 
			bool tryLock ();		
		3.3 释放锁
		void unlock();
	5.信号量是特殊的线程锁,内部通过一个资源值,来使得N个线程可以同时访问临界资源		
		5.1 试图获取由信号量保护的n个资源。如果n是不可用的，这个调用将阻塞，直到有足够的资源可用为止。
			void acquire ( int n = 1 );
		5.2 尝试获取由信号量保护的n个资源，并在成功时返回true。如果不可用，这个调用立即返回false，并不需要获得任何资源。
			void tryAcquire ( int n = 1 );
		5.3 返回信号量当前可用的资源数量
			int available () ;
		5.4 释放由信号量保护的n个资源。
			void release ( int n = 1 );

##Qt文件说明
	在项目文件夹中生成的.pro.user文件，它包含了本地构建信息，包含Qt版本和构建目录等。


## 常见错误小结
	1. 提示:cannot find -lGL
		

