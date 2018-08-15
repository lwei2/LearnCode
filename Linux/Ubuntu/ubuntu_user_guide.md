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
