/*************************************************************************
    > File Name: 11-22.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class MyAdd
{
	public:
		int operator()(int a, int b)
		{
			return a + b;
		}
};

class MyMinus
{
	public:
		int operator()(int a, int b)
		{
			return a - b;
		}
};

int main(void)
{
	int a = 1, b = 2;
	MyAdd addObj;
	MyMinus minusObj;
	cout<<"a+b="<<addObj(a,b)<<endl;
	cout<<"a-b="<<minusObj(a,b)<<endl;
}
