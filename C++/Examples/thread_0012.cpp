/*************************************************************************
    > File Name: thread_0012.cpp
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
	std::cout<<"pause of "<<n<<" seconds ended!\n";
}
int main(void)
{
	std::thread t1(pause_thread, 1);
	std::thread t2(pause_thread, 2);
	std::thread t3(pause_thread, 3);
	cout<<"Done spawning threads. Now waiting for threads to join:\n";
	t1.join();
	t2.join();
	t3.join();
	cout<<"All thread joined!\n";
	return 0;
}
