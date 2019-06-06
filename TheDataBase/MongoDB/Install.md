# MongoDB
	1.安装
		# sudo apt-get install mongodb
	2.查看进程是否启动
		# pgrep mongo -l
	3.查看版本
		# mongo 
	4.查看安装路径
		# locate mongo
	/usr/bin/mongod --> 类似mongo数据库服务器
	/var/log/mongodb/mongodb.log -->日志文件
	5.关闭/启动
		# sudo service mongodb start/stop
	6.重启服务
		# mongod -auth
	7.创建和删除用户、密码
		# mongo
		> use admin
		switched to db admin
		>db.addUser("用户名", "密码")
		>db.removeUser('用户名')
	8.
