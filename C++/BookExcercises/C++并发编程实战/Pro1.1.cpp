/*************************************************************************
    > File Name: Pro1.1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

void hello()
{
	cout<<"Hello Concurrent World!"<<endl;
}
int main(void)
{
	std::thread t(hello);
	t.join();
	return 0;
}
