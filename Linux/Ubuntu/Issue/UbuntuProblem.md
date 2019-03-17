
1.ubuntu下解决“无法获得锁 /var/lib/dpkg/lock -open （11：资源暂时不可用）”
   a) sudo rm /var/lib/dpkg/lock 
   b)sudo kill PID
2.ubuntu突然无法连上wifi,输入如下命令即可:
	#sudo service network-manager stop
	#sudo rm /var/lib/Network-manager/Network-manager.state
	#sudo service Network-manager start
3.ubuntu root 忘记密码
	若具备root权限
	#sudo su root
	#passwd 
	//更改密码
	若具备root权限
	a)重启ubuntu，长按shift键直到进入grub引导模式，选择ubuntu高级选项
	b)按e进入recovery mode,编译kernel进行启动参数
	c)在倒数第四行，删除recovery nnomodeset
	d)然后在删除后天就quiet splash rw init=/bin/bash,并按F10，启动
	e)系统进入root mode，输入passwd直接重置密码

