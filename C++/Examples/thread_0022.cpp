/*************************************************************************
    > File Name: thread_0022.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdarg>
#include <thread>

using namespace std;

int print(const char *fun, ...)
{
	va_list ap;
	va_start(ap,fun);
	vprintf(fun,ap);
	va_end(ap);
	cout<<endl;
	return 0;
}
int main(void)
{
	thread t1(print, "%s %d %c %f","hello c++", 100, 'A',3.14159);
	t1.join();
	return 0;
}
