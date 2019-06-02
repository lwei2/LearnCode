/*************************************************************************
    > File Name: mysql_query_0001.cpp
    > Author: lwei2
    > Mail: luweidreamlife@163.com 
    > Created Time: Thu 18 Oct 2018 12:07:36 AM PDT
 ************************************************************************/

#include<iostream>
#include<mysql/mysql.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(void)
{
	MYSQL *conn = mysql_init(NULL);
	MYSQL_RES *res;
	MYSQL_ROW row;
	if(!mysql_real_connect(conn,"localhost","root","mysql","mysql",0,NULL,0))
	{
		fprintf(stderr,"%s\n",mysql_error(conn));
		exit(1);
	}
	if(mysql_query(conn,"show tables"))
	{
		fprintf(stderr,"%s\n",mysql_error(conn));
		exit(1);
	}
	res = mysql_use_result(conn);
	printf("MYSQL Tables in mysql databases:\n");
	while((row = mysql_fetch_row(res))!=NULL)
	{
		printf("%s \n",row[0]);
	}
	mysql_free_result(res);
	mysql_close(conn);
	printf("finish\n");
	return 0;
}





