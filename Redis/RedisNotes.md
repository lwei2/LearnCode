
安装Redis
==========
	安装步骤如下：
	1.#sudo apt-get install update
	2.#sudo apt-get install redis-server

	或者
	1.#wget https://download.redis.io/releases/redis-2.8.13.tar.gz
	2.#tar xzf redis-2.8.13.tar.gz
	3.#cd redis-2.8.13
	4.#make
	5.make-test
	6.sudo make install

安装hiredis:
	1.git clone https://github.com/redis/hiredis
	2.cd hiredis
	3.make && make install
	4.sudo ldconig /usr/local/lib

http://redis.io/:Redis官网
http://redis.cn/:Redis中文官网
http://try.redis.io/:在线体验Redis
https://github.com/antirez/redis:Redis开发版本源码
http://www.redisdoc.com/en/latest/:Redis命令参考
http://blog.nosqlfan.com/topics/redis:Redis系类文章
http://redisbook.readthedocs.org/en/latest/:Redis设计与实现
https://github.com/huangz1990/annotated_redis_source:注释版Redis源码



Redis常用命令
==========

1.redis键命令: >command key_name
2.	
 将键为key的值设置为value
	#set key value


















一个事务从开始到执行完成，经过三个阶段：开始事务，执行命令，提交事务。

