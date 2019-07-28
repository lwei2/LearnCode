/*************************************************************************
    > File Name: thread_0018.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>
#include <chrono>

using namespace std;


int main(void)
{
	thread th1([]{
			std::this_thread::sleep_for(chrono::seconds(3));
			std::this_thread::yield();
	cout<<this_thread::get_id()<<endl;
			});
	th1.join();

	return 0;
}
