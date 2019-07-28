/*************************************************************************
    > File Name: thread_0007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

void Run1(int a)
{
	cout<<"Run1("<<a<<")"<<endl;
}
void Run2(int a, int b)
{
	cout<<"Run2("<<a<<","<<b<<")"<<endl;
}

int main(void)
{
	auto t1 = std::thread(Run1, 3);
	auto t2 = std::thread(Run2,5,7);
	t1.join();
	t2.join();
	return 0;
}

