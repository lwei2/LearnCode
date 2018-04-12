#include<iostream>
#include<event.h>

using namespace std;

static char data[1024] = "Hello World";
struct event ev;
struct timeval tv;
void Fun(int fd,short n,void *a)
{
	evtimer_del(&ev);
	evtimer_add(&ev,&tv);
	cout<<(char*)a<<endl;
}
int main(void)
{
	event_init();
	evtimer_set(&ev,Fun,data);
	tv.tv_sec =1;
	tv.tv_usec =0;
	evtimer_add(&ev,&tv);
	event_dispatch();
	return 0;
}
