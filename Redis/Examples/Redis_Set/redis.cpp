/*************************************************************************
    > File Name: redis.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include "redis.h"

int main(void)
{
	Redis *r = new Redis();
	if(!r->connect("127.0.0.1",6379))
	{
		cout<<"connect error"<<endl;
		return 0;
	}

	r->set("hello","world");
	cout<<"the value is "<<r->get("hello").c_str()<<endl;
	delete r;
	
	return 0;
}
