/*************************************************************************
    > File Name: valplus.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int valplus(int &a);
int &valplus1(int &a);


int main(void)
{
  	int num1 = 10;
	int num2;
	num2 = valplus(num1);
	cout<<num1<<" "<<num2<<endl;

	int num3 = 10;
	int num4 ;
	num4 = valplus1(num3);
	cout<<num3<<" "<<num4<<endl;

	return 0;
}
int valplus(int &a)
{
	a = a + 5;
	return a;
}

int &valplus1(int &a)
{
	a = a + 5;
	return a;
}
