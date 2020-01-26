
# MySQL简介
========

	MySQL是最流行的关系型数据库管理系统。由瑞典MYSQL AB公司开发，目前属于Oracle旗下产品。



数据库: 数据库是一些关联表的集合。
数据表: 表是数据的矩阵。在一个数据库中的表看起来像一个简单的电子表格。
列: 一列(数据元素) 包含了相同类型的数据, 例如邮政编码的数据。
行：一行（=元组，或记录）是一组相关的数据，例如一条用户订阅的数据。
冗余：存储两倍数据，冗余降低了性能，但提高了数据的安全性。
主键：主键是唯一的。一个数据表中只能包含一个主键。你可以使用主键来查询数据。
外键：外键用于关联两个表。
复合键：复合键（组合键）将多个列作为一个索引键，一般用于复合索引。
索引：使用索引可快速访问数据库表中的特定信息。索引是对数据库表中一列或多列的值进行排序的一种结构。类似于书籍的目录。
参照完整性: 参照的完整性要求关系中不允许引用不存在的实体。与实体完整性是关系模型必须满足的完整性约束条件，目的是保证数据的一致性。


表头(header): 每一列的名称;
列(col): 具有相同数据类型的数据的集合;
行(row): 每一行用来描述某条记录的具体信息;
值(value): 行的具体信息, 每个值必须与该列的数据类型相同;
键(key): 键的值在当前列中具有唯一性。


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


## Error 
1.SQLyog连接mysql时，提示ERROR 1698(28000):Access denied for user 'root'@'localhost'。
	1)进入mysql，查询权限
		> select user,plugin from mysql.user;
	2)修改权限，并刷新即可。
		修改1：
			> update mysql.user set authentication_string=PASSWORD('newPwd'), plugin='mysql_native_password' where user='root';
		修改2：
			> GRANT ALL PRIVILEGES ON *.* TO 'phpmyadmin'@'localhost' IDENTIFIED BY 'yourpasswd';
		> flush privileges;
