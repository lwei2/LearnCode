/*************************************************************************
    > File Name: 8-15.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Demo
{
	public:
		Demo();
		static void func(Demo d);
	private:
		int i;
};
Demo::Demo()
{
	i = 10;
}
void Demo::func(Demo d)
{
	cout<<d.i;
}
int main(void)
{
	Demo a;
	Demo::func(a);
	return 0;
}
