/*************************************************************************
    > File Name: calling.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

void simple();


int main(void)
{
	cout<<"main will call the simple() function:\n";
	simple();
	cout<<"main is finished with the simple() function.\n";
	return 0;
}
void simple()
{
	cout<<"I'm a simple function\n";
}
