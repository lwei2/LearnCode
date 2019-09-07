/*************************************************************************
    > File Name: constructor_0006.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class CExample
{
	private:
		int a;
	public:
		CExample(int b)
		{
			a = b;
			cout<<"constructor is called!"<<endl;
		}
		CExample(const CExample &c)
		{
			a = c.a;
			cout<<"copy constructor is called!"<<endl;
		}
		~CExample()
		{
			cout<<"destructor is called!"<<endl;
		}
		void Show()
		{
			cout<<a<<endl;
		}
};

CExample g_fun()
{
	CExample tmp(0);
	return tmp;
}
int main(void)
{
	g_fun();
	return 0;
}
