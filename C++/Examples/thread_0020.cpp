/*************************************************************************
    > File Name: thread_0020.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

std::thread::id main_thread_id = std::this_thread::get_id();

void is_main_thread()
{
	if(main_thread_id == std::this_thread::get_id())
		cout<<"this is the main thread!\n";
	else
		cout<<"this is not the main thread!\n";
}
int main(void)
{
	is_main_thread();
	std::thread th(is_main_thread);
	th.join();
	return 0;
}

