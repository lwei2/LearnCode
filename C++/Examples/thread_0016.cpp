/*************************************************************************
    > File Name: thread_0016.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

int main(void)
{
	auto n = thread::hardware_concurrency();
	cout<<n<<endl;
	return 0;
}
