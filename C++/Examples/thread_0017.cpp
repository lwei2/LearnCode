/*************************************************************************
    > File Name: thread_0017.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

int main(void)
{
	auto fun = [](const char *str) 
	{
		cout<<str<<endl;
	};
	thread t1(fun, "hello c++");
	t1.join();
	return 0;
}

