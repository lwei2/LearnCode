/*************************************************************************
    > File Name: thread_0021.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

void mythread()
{

}
int main(void)
{
	std::thread foo;
	std::thread bar(mythread);

	cout<<"Joinable after construction:\n"<<std::boolalpha;
	cout<<"foo:"<<foo.joinable()<<endl;
	cout<<"bar:"<<bar.joinable()<<endl;
	if(foo.joinable())
		foo.join();
	if(bar.joinable())
		bar.join();
	cout<<"Joinable after joining:\n"<<std::boolalpha;
	cout<<"foo:"<<foo.joinable()<<endl;
	cout<<"bar:"<<bar.joinable()<<endl;
	return 0;
}
