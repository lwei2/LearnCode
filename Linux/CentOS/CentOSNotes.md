#CentOS
## CentOS安装

## CentOS常用软件安装
1.安装vim
	#yum search vim
	#rpm -qa|grep vim
	#yum -u install vim*
	#vim --version
2.设置vim
	#set nu  //设置显示行号
	#set showmode //设置在命令行界面最下面显示当前模式等
	#set ruler //设置在右下角显示光标所在的行数等信息
	#set autoindent //设置每次单机enter后，光标移动到
	#syntax on //设置语法检测，

## CentOS常用命令
1.常用的linux命令
	1.1 返回上一级目录
		#cd ..
	1.2 返回上次所在目录
		#cd ~
	1.3 拷贝文件
		#cp file1 file2
	1.4 拷贝一个目录
		#cp -a dir1 dir2
	1.5 拷贝一个目录到当前工作目录
		# cp -a /dir1 .
	1.6 查看目录中的文件
		# ls
	1.7 显示隐藏文件
		#ls -a
	1.8 显示文件详细信息
		#ls -l
	1.9 按时间显示文件
		#ls -lrt
	2.0 显示工作路径
		#pwd
	2.1 创建目录
		#mkdir dir
	2.2 创建一个目录树
		#mkdir -p /dir1/dir2
	2.3 移动/重命名一个目录
		#mv dir1 dir2
	2.4 删除文件
		#rm -f file1
	2.5 删除一个目录及其子目录内容
		#rm -rf dir1
	2.6 查看文件内容-从第一个字节开始正向查看
		#cat file
	2.7 查看一个文件前n行
		#head -n file
	2.8 查看一个长文件的内容
		#more file
	2.9 从最后一行开始反向查看一个文件内容
		#tac file
	3.0 查看一个文件的最后n行
		#tail -n file
	3.1 查看某个文件存在某个字符串
		#grep "字符串" 文件路径
		例如：grep str /tmp/test  //在/tmp/test中查找"str"
			  grep ^str /tmp/test //在/tmp/test中查找以"str"开始的行
			  grep [0-9] /tmp/test //查找/tmp/test文件中所有包含数字的行
			  grep str -r /tmp/*   //在目录/tmp及其子目录中查找"str"

	3.2 找出两个文件的不同
		#diff file1 file2
	3.3 以对比的方式显示两个文件的不同
		#sdiff file1 file2
	3.4 查找
		#file / -name file1  //从/开始进入根文件系统查找文件和目录
		#file / -user user1 //查找属于用户user1的文件和目录
		#file /home/user1 -name \*.bin // 在目录/home/user1 中查找以".bin"为结尾的文件
		#file /usr/bin -type f -atime +100 //查找在过去100天内未被使用过的文件
		#file /usr/bin -type f -mtime -10 //查找在10天内被创建或修改的文件
		#locate \*.ps //查找以".ps"为结尾的文件
		#find -name '*.[ch]' | xargs grep -E 'expr'
		#fine -type f -print0 | xargs -r0 grep -F 'expr' //在当前目录及其子目录所有.c和.h文件中查找'expr'
		#fine -maxdepth 1 -type f | xargs grep -F 'expr' //在当前目录中查找expr

## CentOS 常见问题
	1.进入单用户模式
		1.1 重启服务器，在选择内核界面使用上下箭头移动
		1.2 选择内核并按e
		1.3 找到 linux16 /boot/vmlinuz-xxxxxx ro xxx LANG=en_US.UTF-8
		1.4 删除rhgb quit 和改ro为rw
		1.5 按ctrl+x重启即可进入
		1.6 退出单用户命令:#exec /sbin/init
