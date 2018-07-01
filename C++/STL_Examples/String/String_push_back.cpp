/*************************************************************************
    > File Name: String_push_back.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(void)
{
  	std:string str;
	std::ifstream file("test.txt",std::ios::in);
	if(file)
	{
		while(!file.eof())
		{
			str.push_back(file.get());
		}
	}
		cout<<str<<endl;
	return 0;
}
