/*************************************************************************
    > File Name: Pro2.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>
#include <utility>

using namespace std;

class scoped_thread
{
		std::thread t;
	public:
		explicit scoped_thread(std::thread t_):t(std::move(t_))
		{
			if(!t.joinable())
				throw std::logic_error("No thread");
		}
		~scoped_thread()
		{
			t.join();
		}
		scoped_thread(scoped_thread const &) = delete;
		scoped_thread &operator=(scoped_thread const &) = delete;
};

void do_something(int &i)
{
	++i;
}
struct func
{
	int &i;
	func(int &i_):i(i_){

	}
	void operator()()
	{
		for(unsigned int j = 0; j < 1000000; ++j)
			do_something(i);
	}
};

void do_something_in_current_thread()
{

}
void f()
{
	int some_local_state;
	scoped_thread t(std::thread(func(some_local_state)));
	do_something_in_current_thread();
}

int main(void)
{
	f();
	return 0;
}
