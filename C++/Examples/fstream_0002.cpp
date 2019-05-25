/*************************************************************************
    > File Name: fstream_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;


int main(void)
{
	fstream file("test", ios::in | ios::out | ios::trunc);
	file.write("aoeuhtns", 8);
	cout<<"After write:"<<file.tellg()<<" "<<file.tellp()<<endl;
	file.seekg(2);
	cout<<"After seekg:"<<file.tellg()<<" "<<file.tellp()<<endl;
	file.seekp(4);
	cout<<"After seekp:"<<file.tellg()<<" "<<file.tellp()<<endl;
	return 0;
}
