/*************************************************************************
    > File Name: Pro3.11.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <memory>
#include <mutex>

using namespace std;

struct some_resource
{
	void do_something()
	{

	}
};
std::shared_ptr<some_resource> resource_ptr;
std::mutex resource_mutex;

void foo()
{
	std::unique_lock<std::mutex> lk(resource_mutex);
	if(!resource_ptr)
	{
		resource_ptr.reset(new some_resource);
	}
	lk.unlock();
	resource_ptr->do_something();
}

int main(void)
{
	foo();
	return 0;
}
