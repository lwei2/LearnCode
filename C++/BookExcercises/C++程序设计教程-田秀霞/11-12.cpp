/*************************************************************************
    > File Name: 11-12.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;


int main(void)
{
	short i = 50;
	ofstream out("a.txt", ios::binary);
	if(!out)
	{
		cerr<<"open error!"<<endl;
		return 0;
	}
	out.write((char*)(&i),sizeof(i));
	out.close();
	cout<<i<<endl;
	ifstream inf;
	inf.open("a.txt", ios::binary);
	if(!inf)
	{
		cerr<<"open error!"<<endl;
		return 0;
	}
	short k;
	inf.read((char*)(&k), sizeof(k));
	inf.close();
	cout<<k<<endl;
	return 0;
}
