/*************************************************************************
    > File Name: ignore_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char array[8];
	cin.ignore(6,'a');
	cin.getline(array,8);
	cout<<array<<endl;
	return 0;
}
