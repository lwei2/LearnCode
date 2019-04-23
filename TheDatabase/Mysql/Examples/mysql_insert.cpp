/*************************************************************************
    > File Name: mysql_insert.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<mysql.h>

using namespace std;

int main(void)
{
	if(0 == mysql_library_init(0,NULL,NULL))
	{
		cout<<" mysql library init succeed"<<endl;
	}
	else
	{
		cout<<" mysql library init failed"<<endl;
		exit(-1);
	}
  	
  	MYSQL *mysql = mysql_init(0);
	if(!mysql_real_connect(mysql,"127.0.0.1","root","mysql","test",0,0,0))
	{
		cout<<"can not connect database:"<<mysql_error(mysql)<<endl;
		exit(-1);
	}
	else
	{
		cout<<"connect successfully!"<<endl;
	}

	string sqlstr;

	sqlstr = "create table user_info";
	sqlstr +="(";
	sqlstr +="user_id int not null primary key,";
	sqlstr +="user_name varchar(30),";
	sqlstr +="user_sex varchar(2),";
	sqlstr +="user_age int,";
	sqlstr +="user_telephone varchar(11)";
	sqlstr +=");";

	if(0 == mysql_query(mysql,sqlstr.c_str()))
	{
		cout<<"mysql query create table succeed"<<endl;
	}
	else
	{
	  	cout<<"mysql query create table failed"<<endl;
		mysql_close(mysql);
		return -1;
	}

	mysql_close(mysql);
	mysql_library_end();
  	return 0;
}
