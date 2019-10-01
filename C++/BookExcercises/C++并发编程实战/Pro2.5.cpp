/*************************************************************************
    > File Name: Pro2.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;


void some_function()
{

}

void some_other_function(int)
{

}
std::thread f()
{
	void some_function();
	return std::thread(some_function);
}
std::thread g()
{
	void some_other_function(int);
	std::thread t(some_other_function, 42);
	return t;
}
int main(void)
{
	std::thread t1 = f();
	t1.join();
	std::thread t2 = g();
	t2.join();
	return 0;
}
