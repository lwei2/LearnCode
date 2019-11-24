/*************************************************************************
    > File Name: 11-13.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(void)
{
	fstream file("a.txt", ios::in|ios::out);
	char str[] = "Good Morning!";
	char ch;
	file.write(str, strlen(str));
	file.seekg(5, ios::beg);
	while(!file.eof())
	{
		file.get(ch);
		cout<<ch;
	}
	cout<<endl;
	file.seekg(8);
	cout<<file.rdbuf()<<endl;
	file.close();
	return 0;
}
