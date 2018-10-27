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

