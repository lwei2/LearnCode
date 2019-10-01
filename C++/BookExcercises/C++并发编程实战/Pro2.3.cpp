/*************************************************************************
    > File Name: Pro2.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

class thread_guard
{
		std::thread &t;
	public:
		explicit thread_guard(std::thread &t_):t(t_)
		{

		}
		~thread_guard()
		{
			if(t.joinable())
				t.join();
		}
		thread_guard(thread_guard const &) = delete;
		thread_guard &operator=(thread_guard const &)=delete;
};

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
		for(unsigned int j = 0; j < 1000000; ++j)
		{
			do_something(i);
		}
	}
};

void do_something_in_current_thread()
{

}
void f()
{
	int some_loca_state;
	func my_func(some_loca_state);
	std::thread t(my_func);
	do_something_in_current_thread();
}
int main(void)
{
	f();
	return 0;
}
