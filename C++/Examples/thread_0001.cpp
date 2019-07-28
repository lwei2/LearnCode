/*************************************************************************
    > File Name: thread_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

void fun1(unsigned int counter)
{
	while(true)
	{
		++counter;
		if(counter<1000)
			cout<<"fun1 counter:"<<"#"<<counter<<endl;
		else
			break;
	}
}


void fun2(unsigned int counter)
{
	while(true)
	{
		++counter;
		if(counter<1000)
			cout<<"fun2 counter:"<<"#"<<counter<<endl;
		else
			break;
	}
}
int main(void)
{
	unsigned int counter = 0;
	std::thread th1(fun1, counter);
	std::thread th2(fun2, counter);
	th1.join();
	th2.join();
	return 0;
}
