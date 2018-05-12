/*************************************************************************
    > File Name: libevent_version.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<event.h>

using namespace std;

int main(void)
{
	cout<<event_get_version()<<endl;
	const char **methods = event_get_supported_methods();
	for(int i=0; methods[i]!=NULL;i++)
	{
		cout<<methods[i]<<endl;
	}
	return 0;
}
