/*************************************************************************
    > File Name: thread_0013.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void pause_thread(int n)
{
	std::this_thread::sleep_for(std::chrono::seconds(n));
	std::cout<<"pause of "<<n<<"seconds ended!\n";
}

int main(void)
{
	std::thread threads[5];
	cout<<"spawning 5 threads...\n";
	for(int i = 0; i< 5; i++)
	{
		threads[i] = std::thread(pause_thread,i+1);
	}
	cout<<"Done spaning threads.\n";
	for(auto i = 0; i < 5; i++)
		threads[i].join();
	cout<<"All threads joined!\n";
	return 0;



}
