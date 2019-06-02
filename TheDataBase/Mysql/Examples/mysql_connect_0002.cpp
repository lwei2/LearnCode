/*************************************************************************
    > File Name: mysql_connect_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<mysql.h>

using namespace std;

int main(int argc,char *argv[])
{
  	MYSQL *mysql = mysql_init(0);
	if(!mysql_real_connect(mysql,"127.0.0.1","root","mysql","mysql",0,0,0))
	{
		cout<<"连接数据库失败:"<<mysql_error(mysql)<<endl;
		exit(-1);
	}
	else
	{
		cout<<"连接数据库成功"<<endl;
	}
	return 0;
}
