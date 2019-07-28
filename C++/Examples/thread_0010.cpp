/*************************************************************************
    > File Name: thread_0010.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <mutex>
#include <thread>
#include <time.h>

using namespace std;

int sum = 0;
int N = 1000000;
std::mutex m;
void C()
{
	for(int i = 0; i < N; i++)
	{
		m.lock();
		++sum;
		m.unlock();
	}
}
int main(void)
{
	auto start = clock();
	auto t1 = std::thread(C);
	auto t2 = std::thread(C);
	t1.join();
	t2.join();
	auto end = clock();
	cout<<"sum="<<sum<<",time:"<<end-start<<endl;
	return 0;
}
