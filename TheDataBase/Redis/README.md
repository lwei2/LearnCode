#redis
##安装Redis
	Redis 官网:https://redis.io/
	sudo apt-get install redis-server
	ps -aux|grep redis命令可以看到服务器系统进程默认端口6379
	使用netstat -nlt|grep 6379命令可以看到redis服务器状态
	使用sudo /etc/init.d/redis-server status命令可以看到Redis服务器状态