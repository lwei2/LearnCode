#include<iostream>
#include<event.h>

using namespace std;

static char data[1024] = "Hello World";
static char data2[1024] = "libevent time";
struct event ev;
struct timeval tv;

struct event ev2;
struct timeval tv2;

void Fun2(int fd, short n,void *a)
{
	evtimer_add(&ev2,&tv2);
	cout<<(char*)a<<endl;	
}

void Fun(int fd,short n,void *a)
{
	evtimer_del(&ev);

	event_init();
	evtimer_set(&ev2,Fun2,data2);
	tv2.tv_sec=2;
	tv2.tv_usec=0;
	evtimer_add(&ev2,&tv2);
	event_dispatch();
	cout<<"---"<<endl;

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
