#Install for Git
1.git --version
2.apt-get install openssh-server openssh-client
3.sudo /ect/ini.d/ssh restart
4.sudo apt-get install git-core
5.git config --global user.name "user"
  git config --global user.email "xx@.com"
6.ssh-keygen -C 'user.email' -t rsa
7.copy id_rsa.pub key to the github Web for SSH KEY and save
8.ssh -T git@github.com
9.create new file to repositories,and init repositories 
	create repositories && git init
10.welcome to use git