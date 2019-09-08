#Ubuntu

1.重置桌面到初始状态
      (1)打开终端,安装gnome-tweak-tool工具

	#sudo apt-get install gnome-tweak-tool

      (2)在终端中打开优化工具。

	#gnome-tweaks

      (3)顶部 优化 上右键 重置为默认值，禁用全部shell扩展。

      (4)接着重置桌面配置。

	#dconf   reset  -f   /org/gnome/

      (5)重新启动

	#reboot

	#sudo apt-get install gnome-tweak-tool   #安装tweak
	#sudo apt-get install gnome-shell-extensions -y  #安装shell扩展
	#sudo apt install chrome-gnome-shell     #为了能在浏览器内安装gnome插件，火狐和谷歌都能用
	#sudo apt-get install gtk2-engines-pixbuf    #防止GTK2错误
	#sudo apt install libxml2-utils

	download :https://www.gnome-look.org/ord/top
	mv the themes file to /usr/share/themes/or ~/.themes
	tweak choose the themes




	1.check the ubuntu bytes
		#getconf LONG_BIT
		#uname -a
		#dpkg --print-architecture


support 32bytes and 64bytes
1.
	#dpkg --print-architecture
2. 
	#dpkg --print-foreign-architectures
3.

	#sudo dpkg --add-architecture i386
	#sudo apt-get update
	#sudo apt-get dist-upgrade

4.
	#sudo apt-get install gcc-multilib g++-multilib



Ubuntu清理升级缓存以及无用包
	#sudo apt-get autoclean
	#sudo apt-get clean
	#sudo apt-get autoremove

Ubuntu忘记root密码
	1.若有root权限，即用passwd修改即可
	2.通过重启按shift选择Advanced options for Ubuntu，
	再选择recovery mode，按e，选择删除recovery nomodeset，
	并添加quiet splash rw init=/bin/bash，最后按F10，输入passwd进行修改即可。

Ubuntu18.04升级19.04
	# sudo apt-get update && sudo apt full-upgrade
	# update-manager -c


Ubuntu打开图形
	1.Gwenview
	2.gPicView
	3.Viwnior
	4.gThumb

