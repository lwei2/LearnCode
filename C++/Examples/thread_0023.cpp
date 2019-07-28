/*************************************************************************
    > File Name: thread_0023.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

int main(void)
{
	thread t1([]
			{
			cout<<"thread1"<<endl;
			});

	thread t2([]
			{
			cout<<"thread2"<<endl;
			});
	cout<<"thread 1 #id is	"<<t1.get_id()<<endl;
	cout<<"thread 2 #id is	"<<t2.get_id()<<endl;
	cout<<"swap the thread"<<endl;
	swap(t1,t2);
	cout<<"thread 1 #id is	"<<t1.get_id()<<endl;
	cout<<"thread 2 #id is	"<<t2.get_id()<<endl;

	t1.join();
	t2.join();
	return 0;

}

