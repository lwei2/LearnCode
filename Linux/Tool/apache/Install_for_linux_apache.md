# apache
## apache简介
		Apache 是一个知名的开源Web服务器。
		早期的Apache服务器由Apache Group来维护,直到1999年6月Apache Group在美国德拉瓦市成立了非盈利性组织的公司,即Apache软件基金会（Apache Software Foundation,ASF）。
		网站需要web服务器来架构,网页设计美工人员(flash,dreamweaver,firework,photoshop等),网页开发人员（php,.net,jsp等),网站建立好后,需要我们维护,优化,排错,架构延伸扩容等。
		简单点说就是我们如果要浏览一个网页的话,基本上所有的网站都使用的是http协议来进行数据传输的！至于怎么样传输,我们做为运维来说就没有必要去深究了,那是做html前端开发人员要去考虑的事情！
		Apache由内核、标准模块和第三方提供的模块三个层次组成。
		Apache在默认的CentOS仓库中可用，安装非常简单。 在CentOS和RHEL上，Apache软件包和服务称为httpd。
## apache安装(for centos)
		1.检查是否安装
			# rpm -qa|grep httpd
		或者
			# apt-get install apache2
		安装会提示:
			httpd-manual-2.4.6-67.el7.centos.6.noarch
			httpd-tools-2.4.6-67.el7.centos.6.x86_64
			httpd-2.4.6-67.el7.centos.6.x86_64
			httpd-devel-2.4.6-67.el7.centos.6.x86_64
		2.安装
			2.1 在线安装，即联网安装
				# yum -y install httpd
			2.2 非在线安装
				# 
