/*************************************************************************
    > File Name: fstream_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	fstream binaryio;
	binaryio.open("city.dat", ios::in | ios::binary);
	char s[10];
	binaryio.read(s,5);
	s[5] = '\0';
	cout<<s;
	binaryio.close();
	return 0;
}
