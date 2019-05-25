/*************************************************************************
    > File Name: reinterpret_cast_0002.cpp
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
	binaryio.open("temp.dat", ios::in | ios::binary);
	int value;
	binaryio.read(reinterpret_cast<char*>(&value),sizeof(value));
	cout<< value;
	binaryio.close();
	return 0;
	
}
