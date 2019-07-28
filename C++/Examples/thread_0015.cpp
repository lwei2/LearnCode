/*************************************************************************
    > File Name: thread_0015.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

void print(void)
{
	cout<<"hello c++"<<endl;
}


int main(void)
{
	thread t1(print);
	thread t2(print);
	thread t3(print);

	thread th[3]{
		thread(print),thread(print),thread(print)
	};
	thread *p1(new thread(print));
	thread *p2(new thread(print));
	thread *p3(new thread(print));

	thread *pth(new thread[3]{
		thread(print),thread(print),thread(print)
	});




	return 0;
}
