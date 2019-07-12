# Flutter
	Flutter是谷歌移动UI框架，可以快速在IOS和Android上构建高质量的原生用户界面。Flutter可以与现有的代码一起工作，且它是完全免费的、开源的。
	开源地址：https://github.com/flutter/flutter
	Flutter英文官网：https://flutter.dev/
	Flutter中文官网：https://flutterchina.club/
	Flutter入门应用：https://blog.csdn.net/kmyhy/article/details/80922736
# Flutter 安装

## Linux install
	1.下载并获取Flutter SDK
	2.解压并开始安装
		# cd ~/development
		# tar xf ~/Downloads/flutter_linux_v1.7.8+hotfix.3-stable.tar.xz
	3.将flutter工具添加到您的路径
	3.1  
		# export PATH="$PATH:`pwd`/flutter/bin"
	3.2 
		# vim $HOME/.bash_profile
		// add "export PATH="$[PATH_TO_FLUTTER_GIT_DIRECTORY]/flutter/bin" to .bash_profile
		# PATH="$[PATH_TO_FLUTTER_GIT_DIRECTORY]/flutter/bin

	4.该环境变量生效
		# source ~/.bash_profile
	5.通过运行flutter/bin命令验证目录是否在已经在PATH中
		# echo $PATH


