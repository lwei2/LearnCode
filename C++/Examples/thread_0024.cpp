/*************************************************************************
    > File Name: thread_0024.cpp
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
	cout<<"pause of "<< n<< "seconds ended!\n";
}
int main(void)
{
	std::thread threads[5];
	cout<<"Spawning 5 threads ...\n";
	for(int i = 0; i < 5; i++)
		threads[i] = std::thread(pause_thread, i+1);
	cout<<"Done spawning threads. Now waiting for them to join.\n";
	for(int i = 0; i < 5; i++)
		threads[i].join();
	cout<<"All threads joined.\n";
	return 0;
}
