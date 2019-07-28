/*************************************************************************
    > File Name: thread_0006.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

int main(void)
{
	int n1 = 500;
	int n2 = 600;
	std::thread t([&](int addNum){
			n1 += addNum;
			n2 += addNum;
			},500);
	t.join();
	cout<<n1<<" "<<n2<<endl;
	return 0;
}

