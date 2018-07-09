

1.更新系统动态库配置: 
	#sudo /sbin/ldconfig



2.解压
	.rar压缩包解压：1)安装解压工具:#sudo apt-get install unrar
					2)卸载解压工具:#sudo apt-get remove unrar
					3)常用命令: 
						rar -e xx.rar   将文件解压到当前目录
						rar x xx.rar	带路径解压文档中内容到当前目录
						rar a xx.rar xx.txt 若xx.rar文件不存在，则打印xx.txt成为xx.rar,a表示添加文件到操作文档。
						c表示对操作文档天津说明注释
						d表示从文档中删除文件
						k并表示锁定文档
						r表示修复文档
						s表示转换文档成自解压文档
						t表示检测文档.

	.zip压缩比解压: #unzip xxx.zip
	.zip压缩	  : #zip xxx.zip xxx


3.生成静态库
	ar -d|m[ab]|-p|q[f]|r[ab][f][u]|-s|-t|x[o]
	d			从归档文件中删除文件
	m[ab]		在归档文件中移动文件
	p			打印在归档文件中找到的文件
	q[f]		将文件快速追加到归档文件中
	r[ab][f][u]	替换归档文件中已有的文件或加入新文件
	s			作为 ranlib 工作
	t			显示归档文件的内容	
	x[o]		从归档文件中分解文件



关于进程的操作
1.查看某进程:ps aux| grep "xxx"
2.杀死某进程:sudo kill PID或者 killall [-s] -9 进程名
3.
		
