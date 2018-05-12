/*************************************************************************
    > File Name: variable.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/


#include<iostream>

using namespace std;

extern int a,b;
extern int c;
extern float f;

int main(void)
{
  	int a,b;
	int c;
	float f;
	a = 10;
	b = 20;
	c = a + b;
	cout<<"c:"<<c<<endl;
	f = 58.0 / 1.0;
	cout<<"f:"<<f<<endl;

	return 0;
}	

