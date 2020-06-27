#Java
## Java初入门

Java的安装与环境配置
1.ubuntu安装jdk
	a.下载jdk
	b.解压
	c.环境配置
	d.检查是否已安装成功java -version
2.配置jdk
	1)修改全局配置文件，作用于所有用户，配置文件为/ect/profile
		export JAVA_HOME=/usr/lib/jdk/jdk1.8
　　　　export JRE_HOME=${JAVA_HOME}/jre
　　　　export CLASSPATH=.:${JAVA_HOME}/lib:${JRE_HOME}/lib
　　　　export PATH=.:${JAVA_HOME}/bin:$PATH
	2)修改当前用户配置文件，只作用于当前用户，配置文件为～/.bashrc，配置同上
	配置完成后，执行source /etc/profile 或者 source ~/.bashrc，使得配置文件立即生效。
3.Java编译:	#javac 源码
			#java xxx

Java以.java为后缀名的源码			

