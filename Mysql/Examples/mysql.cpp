/*************************************************************************
    > File Name: mysql.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<winsock.h>
#include<mysql.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(void)
{
  	MYSQL mysql;
	if(0==mysql_library_init(0,NULL,NULL))
	{
		cout<<"mysql_library_init succeed"<<endl;
	}
	else
	{
		cout<<"mysql_library_init failed"<<endl;
		return -1;
	}


	if(NULL!=mysql_init(&mysql))
	{
		cout<<"mysql init succeed"<<endl;	
	}
	else
	{
		cout<<"mysql init failed"<<endl;
		return -1;
	}
	if(0 == mysql_options(&mysql,MYSQL_SET_CHARSET_NAME,"gbk"))
	{
		cout<<"mysql option succeed"<<endl;
	}
	else
	{
		cout<<"mysql option failed"<<endl;
		return -1;
	}

	
	return 0;
}















