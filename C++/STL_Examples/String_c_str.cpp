/*************************************************************************
    > File Name: String_c_str.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description:String member function c_str 
 ************************************************************************/

#include<string>
#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string str("Please split this senence into tokens");
	char *cstr=new char[str.length()+1];
	strcpy(cstr,str.c_str());

	char *p = strtok(cstr," ");
	while(p!=0)
  	{
		cout<<p<<'\n';
		p = strtok(NULL," ");
	}	  
	delete []cstr;

	return 0;
}

