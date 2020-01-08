/*************************************************************************
    > File Name: websocketclient_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <string>
#include <cstdio>
#include <assert.h>
#include "easywsclient.hpp"

using easywsclient::WebSocket;

static WebSocket::pointer ws = NULL;


void handle_message(const std::string &message)
{
//	cout<<">>>>"<<message.c_str()<<endl;
	printf(">>>%s\n",message.c_str());
	if(message == "world")
		ws->close();
}

int main(void)
{
	ws = WebSocket::from_url("ws://localhost:8126/foo");
	assert(ws);
	ws->send("goodbye");
	ws->send("hello");
	while(ws->getReadyState() != WebSocket::CLOSED)
	{
		ws->poll();
		ws->dispatch(handle_message);
	}
	delete ws;
	return 0;
}
