#svn
## SVN 简介


Apache Subversion 通常被缩写成 SVN，是一个开放源代码的版本控制系统，Subversion 在 2000 年由 CollabNet Inc 开发，现在发展成为 Apache 软件基金会的一个项目，同样是一个丰富的开发者和用户社区的一部分。

SVN相对于的RCS、CVS，采用了分支管理系统，它的设计目标就是取代CVS。互联网上免费的版本控制服务多基于Subversion。

## SVN 
1.查看是否安装：
	#svn help
2.查看版本:
	#svn --version

3.导出项目:	svn checkout svn://Ip/路径及文件名   /导入本地的路径/导入本地的文件名  --username=xx --password=xx

repository（源代码库）:源代码统一存放的地方
Checkout（提取）:当你手上没有源代码的时候，你需要从repository checkout一份
Commit（提交）:当你已经修改了代码，你就需要Commit到repository
Update (更新):当你已经Checkout了一份源代码， Update一下你就可以和Repository上的源代码同步，你手上的代码就会有最新的变更

SVN 官网：https://subversion.apache.org/
Github SVN 源码：https://github.com/apache/subversion