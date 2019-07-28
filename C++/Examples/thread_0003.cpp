/*************************************************************************
    > File Name: thread_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>
#include <atomic>
#include <vector>

using namespace std;

std::atomic<int> global_counter(0);

void increase_global(int n)
{
	for(int i = 0; i < n; ++i)
		++global_counter;
}

void increase_reference(std::atomic<int> & variable, int n)
{
	for(int i = 0; i < n; ++i)
		++variable;
}
struct C: std::atomic<int>
{
	C():std::atomic<int>(0)
	{

	}
	void increase_member(int n)
	{
		for(int i = 0; i < n; i++)
			fetch_add(1);
	}
};

int main(void)
{
	std::vector<std::thread> threads;
	cout<<"increase global countyer with 10 threads ...\n";
	for(int i = 0; i <= 10; ++i)
		threads.push_back(std::thread(increase_global,1000));

	cout<<"increase counter (foo) with 10 threads using references...\n";
	atomic<int> foo(0);
	for(int i =1; i <= 10; ++i)
		threads.push_back(std::thread(increase_reference, ref(foo),1000));

	std::cout<<"increase countyer (bar) with 10 threads using member...\n";
	C bar;
	for(int i = 1; i <= 10; ++i)
		threads.push_back(std::thread(&C::increase_member,std::ref(bar),1000));
	std::cout<<"synchroniring all threads...\n";
	for(auto &th : threads)
		th.join();
	cout<<"global_counter:"<<global_counter<<endl;
	cout<<"foo:"<<foo<<endl;
	cout<<"bar:"<<bar<<endl;

	return 0;
}
