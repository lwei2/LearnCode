/*************************************************************************
    > File Name: thread_0014.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void fun1(int n)
{
	cout<<"thread # "<<n<<endl;
	n += 10;
	this_thread::sleep_for(chrono::milliseconds(10));
}
void fun2(int &n)
{
	cout<<"thread # "<<n<<endl;
	n += 20;
	this_thread::sleep_for(chrono::milliseconds(10));
}

int main(void)
{
	int n = 0;
	thread t1;
	thread t2(fun1, n+1);
	t2.join();
	cout<<"n =" <<n <<endl;
	n = 10;
	thread t3(fun2, ref(n));
	thread t4(move(t3));
	t4.join();
	cout<<"n =" <<n <<endl;
	return 0;
}
