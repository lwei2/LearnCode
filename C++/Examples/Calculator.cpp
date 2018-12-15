/*************************************************************************
    > File Name: Calculator.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;


int add(int x, int y)
{
	cout<<"Running calculator ..."<<endl;
	return x+y;
}

int main(void)
{
	cout<<"What is 876+5309?"<<endl;
	cout<<"the sum is "<<add(876,5309)<<endl;
	cout<<"What is 777+9311?"<<endl;
	cout<<"the sum is "<<add(777,9311)<<endl;
	return 0;
}
