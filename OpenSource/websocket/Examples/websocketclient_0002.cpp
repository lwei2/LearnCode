/*************************************************************************
    > File Name: websocketclient_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <cstdio>
#include <string>
#include <unistd.h>
#include <assert.h>
#include "easywsclient.hpp"

using easywsclient::WebSocket;

static WebSocket::pointer ws = NULL;

void handle_message(const std::string &message)
{
	printf(">>> %s\n", message.c_str());
	if(message == "world")
	{
		ws->close();
	}
}

int main(void)
{
	ws = WebSocket::from_url("ws://localhost:8126/foo");
	while(1)
	{
		if(NULL != ws)
		{
			ws->poll(0);
			ws->dispatch(handle_message);
			if(ws->getReadyState() == WebSocket::CLOSED)
			{
				delete ws;
				ws = NULL;
				ws = WebSocket::from_url("ws://localhost:8126/foo");				
			}
			else if(ws->getReadyState() == WebSocket::OPEN)
			{
				ws->send("hello");
				sleep(10);
			}
		}
		else
		{
			ws = WebSocket::from_url("ws://localhost:8126/foo");			
			sleep(10);
		}
		usleep(1000);
	}
	if(ws != NULL)
		delete ws;
	return 0;
}
