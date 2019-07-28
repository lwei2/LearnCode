/*************************************************************************
    > File Name: thread_0009.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>
#include <time.h>

using namespace std;


int sum = 0;
int N = 1000000;

void calcount(void)
{
	for(auto i = 0; i < N; ++i)
		++sum;
}
int main(void)
{
	auto start = clock();
	auto t1 = std::thread(calcount);
	auto t2 = std::thread(calcount);
	t1.join();
	t2.join();
	auto end = clock();
	cout<<"sum="<<sum<<":"<<end-start<<endl;
	return 0;
}
