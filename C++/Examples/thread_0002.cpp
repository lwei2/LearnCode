/*************************************************************************
    > File Name: thread_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

void fun(void)
{
	cout<<"A new thread!"<<endl;
}
int main(int argc, char *argv[])
{
	std::thread t(fun);
	t.join();
	cout<<"Main thread!"<<endl;
	return 0;
}
