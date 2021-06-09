Android
===========================
Android初识和了解
---------------------------
	欢迎进入Android世界！

Android系统特性与平台架构
---------------------------
	系统特性：
	*应用程序框架支持组件的重用与替换（app发布时遵守了框架的约定，其他app也可以使用该模块）
	*Dalvik虚拟机:专门为移动设备优化 -集成的浏览器:开源的WebKit引擎
	*SQLite结构化的数据存储
	*优化的图形库,多媒体支持,GSM电话技术,蓝牙等
	*采用软件叠层方式构建
	
1.	Application(应用程序层) 我们一般说的应用层的开发就是在这个层次上进行的，当然包括了系统内置的一组应用程序，使用的是Java语言
2.	Application Framework(应用程序框架层):无论系统内置或者我们自己编写的App，都需要使用到这层，比如我们想弄来电黑名单，自动挂断电话，我们就需要用到电话管理(TelephonyManager) 通过该层我们就可以很轻松的实现挂断操作，而不需要关心底层实现
3.	Libraries(库) + Android Runtime(Android运行时) Android给我们提供了一组C/C++库，为平台的不同组件所使用，比如媒体框架；而Android Runtime则由Android核心库集 + Dalvik虚拟机构成，Dalvik虚拟机是针对移动设备的虚拟机，它的特点:不需要很快的CPU计算速度和大量的内存空间;而每个App都单	独地运行在单独的Dalvik虚拟机内每个app对于一条Dalvik进程）而他的简单运行流程如：
	通过DX工具->将App所有的class文件打包-编译->.dex文件->Dalvik则运行该文件
4.	Linux内核 这里就是涉及底层驱动的东西了，一些系统服务，比如安全性，内存管理以及进程管理等

Android相关网址
---------------------------
	Android官网： https://developer.android.google.cn/index.html
	Android官网： https://developer.android.com/index.html 
