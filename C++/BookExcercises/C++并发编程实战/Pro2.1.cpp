/*************************************************************************
    > File Name: Pro2.1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;


void do_something(int &i)
{
	++i;
}
struct func
{
	int &i;
	func(int &i_):i(i_)
	{

	}
	void operator()()
	{
		for(unsigned j = 0; j < 1000000; ++j)
		{
			do_something(i);			
		}
	}
};

void oops()
{
	int some_local_state = 0;
	func my_func(some_local_state);
	std::thread my_thread(my_func);
	my_thread.detach();
}

int main(void)
{
	oops();
	return 0;
}
