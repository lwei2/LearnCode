/*************************************************************************
    > File Name: eof_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	char ch = 'x';
	ifstream fin("test.txt");
	if(fin.eof())
	{
		cout<<"file is empty."<<endl;
		return 0;
	}
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
	return 0;
}
