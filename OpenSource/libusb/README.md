#libusb
##USB基本知识
	1.
	2.USB传输方式：	
		2.1 控制传输：是每个USB设备必须支持的，通常用来获取设备描述符、设置设备的状态等。一个USB设备从插入到拔出过程一定会产生控制传输。
		2.2 终端传输：支持终端传输典型设备有USB鼠标、键盘等。
		2.3 批量传输：支持批量传输最典型的设备是U盘，它进行大量的数据传输，能够保证数据的准确性，但时间不固定。
		2.4 实时传输：支持实时传输最典型的设备是USB摄像头，它同样进行大量的数据传输，数据的准确性无法保证，但对传输延时非常敏感，即要求实时性很高。


##libusb安装
Windows安装libusb

Linux(ubuntu)安装libusb
	1.在线安装
		#sudo apt-get install libusb-dev
		#sudo apt-get install libusb-1.0.0-dev
	2.下载安装包解压编译
		#tar -jxvf libusbxxx.bz2
		#cd libusbxxx
		#./configure
		#make && make install

