1.添加搜狗源并更新软件
	#sudo add-apt-repository ppa:fcitx-team/nightly //error delete
	
	#sudo apt-get update
2.安装fcitx
	#sudo apt-get install fcitx
	#sudo apt-get install fcitx-config-gtk
	#sudo apt-get install fcitx-table-all
3.安装im-switch切换工具
	#sudo apt-get install im-switch
4.官网下载对应版本的ubuntu sougou资源包
	官网:https://pinyin.sogou.com/linux/
5.安装搜狗软件包
	#sudo dpkg -i sougoupingyin_xxx.deb
6.语言设置,讲默认iBus设置为fcitx,并通过fcitx配置,将搜狗输入法设置为默认即可.
	关于搜狗配置:
		配置文件:~/.bashrc
		配置内容:export GTK_IM_MODULE=fcitx      
				 export QT_IM_MODULE=fcitx      
				 export XMODIFIERS="@im=fcitx" 

