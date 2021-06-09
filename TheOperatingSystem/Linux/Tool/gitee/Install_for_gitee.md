
Install for Git
============

1.检查是否安装git

	#gitee --version

2.apt-get install openssh-server openssh-client

3.启动ssh服务

	#sudo /ect/init.d/ssh restart

4.安装git

	#sudo apt-get install git-core

5.设置git配置信息

	#git config --global user.name "user"
	#git config --global user.email "xxx@.com"
	
6.为git账号添加ssh keys

	#ssh-keygen -C 'user.email' -t rsa

7.copy /root/.ssh/id_rsa.pub key to the gitee Web for SSH KEY and save it.

8.测试是否连接成功

	#ssh -T git@gitee.com
	
9.create new file to repositories,and init repositories 
	
	#create repositories && git init

10.welcome to use git
