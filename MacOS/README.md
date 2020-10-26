#use MacOS
##MacOS









#MacOS命令行
	1.查看某文件夹或文件的修改属性：
		#GetFileInfo filename/file

##MacOS配置VIM
	1.查看VIM安装的路径
		#which vim


###diskutil命令
	MacOS 系统自带一个图形化的磁盘管理工具（Disk Utility），同时还有一个命令行版本的 diskutil。通过该命令的使用，可以很快捷地对本地磁盘进行擦除数据、调整分区大小、格式化等操作。
	diskutil 命令的格式为：diskutil <verb> <options>		
	1.获取磁盘分区
		#diskutil list
	2.列出指定磁盘或分区的详细信息
		#diskutil info diskname
	3.擦除整个磁盘并重新格式化
		#diskutil eraseDisk <format> <name> [APM|MBR|GPT] MountPoint|DiskIdentifier|DeviceNode
		format 用于指定擦除数据后需要重新建立的文件系统类型。可以为 %noformat% 来跳过初始化文件系统的操作。其他支持的类型可以通过 listFilesystems 选项查看













##MacOS阅读书单（罗列所读过的书籍）
	1.OS X与IOS内核编程
	2.
##MacOS常用网址或论坛
	1.
	2.
	3.https://iosre.com/