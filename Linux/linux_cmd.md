

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
