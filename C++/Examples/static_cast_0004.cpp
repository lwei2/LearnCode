/*************************************************************************
    > File Name: static_cast_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int number = 65;
	cout<<number<<endl;
	cout<<static_cast<char>(number)<<endl;
	return 0;
}
