/*************************************************************************
    > File Name: Pro2.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <thread>
#include <algorithm>
#include <functional>

using namespace std;

void do_work(unsigned id)
{

}
void f()
{
	std::vector<std::thread> threads;
	for(unsigned i = 0; i < 20; ++i)
	{
		threads.push_back(std::thread(do_work,i));
	}
	std::for_each(threads.begin(), threads.end(), std::mem_fn(&std::thread::join));
}


int main(void)
{
	f();
	return 0;
}
