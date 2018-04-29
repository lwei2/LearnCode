/*************************************************************************
    > File Name: String_reserve.cpp
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
	std::string str;
	std::ifstream file("test.txt",std::ios::in|std::ios::ate);
	if(file)
  	{
		std::ifstream::streampos filesize = file.tellg();
		str.reserve(filesize);
		file.seekg(0);
		while(!file.eof())
		{
			str+=file.get();
		}
		std::cout<<str;
	}
	return 0;	
}	

