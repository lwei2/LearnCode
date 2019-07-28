/*************************************************************************
    > File Name: thread_0005.cpp
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
	cout<<"pause of "<<n<<" seconds ended\n";
}

int main(void)
{
	cout<<"Spawning and detaching 3 threads ...\n";
	std::thread (pause_thread, 1).detach();
	std::thread (pause_thread, 2).detach();
	std::thread (pause_thread, 3).detach();
	cout<<"Done spawning threads.\n";
	cout<<"(the main thread will now pause for 5 seconds)\n";
	pause_thread(5);
}
