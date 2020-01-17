/*************************************************************************
    > File Name: Pro5.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <atomic>
#include <chrono>
#include <thread>

using namespace std;

std::vector<int> data;
std::atomic_bool data_ready(false);

void reader_thread()
{
	while(!data_ready.load())
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	}
	std::cout<<"This answer="<<data[0]<<"\n";
}
void writer_thread()
{
	data.push_back(42);
	data_ready = true;
}

int main(void)
{
	return 0;
}

