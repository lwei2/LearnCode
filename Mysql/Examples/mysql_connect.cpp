/*************************************************************************
    > File Name: mysql_connect.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<mysql.h>

using namespace std;

int main(void)
{
  	if(mysql_library_init(0,NULL,NULL))
	{
		cout<<"could not initialize MYSQL library"<<endl;
		getchar();
		exit(1);
	}
	MYSQL conn;
	mysql_init(&conn);
	MYSQL *ret = mysql_real_connect(&conn,"127.0.0.1","root","mysql","mysql",0,NULL,0);

	if(!ret)
	{
		cout<<"failed to connect to database:"<<mysql_error(&conn)<<endl;
		getchar();
		exit(1);
	}
	cout<<"successful database connection"<<endl;
	mysql_close(&conn);
	mysql_library_end();
	getchar();
	return 0;
}
