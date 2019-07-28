/*************************************************************************
    > File Name: thread_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <mutex>
#include <thread>
#include <unistd.h>

using namespace std;

unsigned int counter = 0;
std::mutex mtx;

void fun1()
{
	while(true)
	{
		std::lock_guard<std::mutex> mtx_locker(mtx);
		++counter;
		if(counter < 1000)
			cout<<"fun1 counter:"<<counter<<endl;
		else
			break;
	}
}


void fun2()
{
	while(true)
	{
		std::lock_guard<std::mutex> mtx_locker(mtx);
		++counter;
		if(counter < 1000)
			cout<<"fun2 counter:"<<counter<<endl;
		else
			break;
	}
}


int main(void)
{
	std::thread th1(fun1);
	std::thread th2(fun2);
	th1.join();
	th2.join();
	sleep(1);
	return 0;
}
