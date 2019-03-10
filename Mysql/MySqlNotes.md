
MySQL简介
========

	MySQL是最流行的关系型数据库管理系统。由瑞典MYSQL AB公司开发，目前属于Oracle旗下产品。

MySQL常用命令
==========
1.登录：#mysql [-h hostname] -u root -p
2.退出：#mysql > quit;

MySQL常用操作
1.显示数据库:show databases;
2.创建数据库:create database 数据库名;
3.使用数据库:use 数据库名;
4.创建用户: create user '用户名'@'IP地址' identified by '密码';
5.删除用户: drop user '用户名'@'IP地址';
6.修改用户: rename user '用户名'@'IP地址'; to '新用户名'@'IP地址';;
7.修改密码: set password for '用户名'@'IP地址' = password('新密码');
8.查看用户权限:show grants for '用户'@'IP地址';
9.授权:grant 权限 on 数据库.表 to '用户'@'IP地址';
10.取消权限:revoke 权限 on 数据库.表 from '用户'@'IP地址';
11.显示数据表:show tables;
12.创建数据表:create table 表名(列名 类型 [null|not null] [auto_increment] [default value] [primary key],...)ENGINE=InnoDB DEFAULT CHARSET=utf8
13.删除表:drop table 表名;
14.清空表:delete from 表名;
15.表的增删查改:
	insert into 表(列名,...) values(值,...);
	delete from 表 where 条件表达式;
	update 表 set 列名 = 新值 where 条件表达式;
	select 列名 from 表 [where 条件表达式] [order by 列名 asc/desc];



设置mysql允许远程访问：
    1.编辑/etc/mysql/mysql.conf.d/mysqld.cnf,注释bind-address=127.0.0.1;
    2.退出，保存，进入mysql服务,执行授权命令
        #grant all on *.* to root@'%' identified by '你的密码' with grant option;

        #flush privileges;
    3.重启mysql服务:#service mysql restart



C++/C编译mysql
	g++/gcc source_code.cpp -o source_name -I/usr/include/mysql -lmysqlclient



MySQL for Linux/Ubuntu/CentOS
	1.查看mysql服务器是否启动
		#ps aux|grep mysql
	2.查看数据库端口
		mysql>show global variables like 'port';
0.show the version of mysql;
#select version();
1.show the databases;
#show databases;
2.use the databases;
#use [database_name];
3.show the tables;
#show tables;
4.create the tables;
#create table table_name(column1 value,...);
#show engines;
#select host,user from mysql.user;



